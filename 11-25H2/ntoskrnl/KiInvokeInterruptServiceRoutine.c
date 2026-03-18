/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x140206C50
 * Callers:
 *     KiInterruptDispatchCommon @ 0x140206264 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PerfInfoLogInterrupt @ 0x140257560 (PerfInfoLogInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(struct _KINTERRUPT *a1, unsigned __int8 CurrentIrql, int a3)
{
  __int64 v6; // rcx
  unsigned __int64 SynchronizeIrql; // rsi
  bool v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  unsigned __int8 v12; // r14
  char v14; // [rsp+30h] [rbp-D0h]
  __int128 Object; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+48h] [rbp-B8h]
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+64h] [rbp-9Ch]
  int v19; // [rsp+6Ch] [rbp-94h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  void *v21; // [rsp+78h] [rbp-88h]
  __int128 *p_Object; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  struct _KTIMER v26; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v27[2]; // [rsp+E0h] [rbp-20h] BYREF

  v18 = 0LL;
  v19 = 0;
  v23 = 0LL;
  v24 = 0LL;
  memset(v27, 0, sizeof(v27));
  Object = 0LL;
  v16 = 0LL;
  memset_0(&v26, 0, sizeof(v26));
  SynchronizeIrql = a1->SynchronizeIrql;
  v14 = 0;
  v8 = 0;
  if ( (_BYTE)SynchronizeIrql )
  {
    if ( CurrentIrql != (_BYTE)SynchronizeIrql )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(SynchronizeIrql);
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v6);
      }
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(a1->PassiveEvent, Executive, 0, 0, 0LL);
    v8 = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
    if ( (_BYTE)KdDebuggerEnabled && KiPassiveWatchdogTimeout )
    {
      DWORD1(Object) = 0;
      *(_QWORD *)&v16 = (char *)&Object + 8;
      v26.Header.SignalState = 0;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      v26.DueTime.QuadPart = 0LL;
      v26.Header.WaitListHead.Blink = &v26.Header.WaitListHead;
      v26.Header.WaitListHead.Flink = &v26.Header.WaitListHead;
      v21 = &KiPassiveIsrWatchdog;
      v26.Period = 0;
      v26.Processor = 0;
      v25 = 0LL;
      v20 = 0LL;
      p_Object = &Object;
      *((_QWORD *)&v16 + 1) = a1;
      LOWORD(Object) = 1;
      BYTE2(Object) = 6;
      v26.Header.Type = 8;
      v17 = 275;
      KiSetTimerEx((unsigned int)&v26, -10000000 * KiPassiveWatchdogTimeout, 0, 0, (__int64)&v17);
      v14 = 1;
    }
  }
  a1->ServiceThread = KeGetCurrentThread();
  if ( v8 )
    EtwGetKernelTraceTimestamp(v27, 536887296LL);
  v10 = KiCallInterruptServiceRoutine(a1);
  v12 = v10;
  if ( v8 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | (unsigned int)v10, v27);
  if ( v14 && !KeCancelTimer(&v26) )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  a1->ServiceThread = 0LL;
  if ( (_BYTE)SynchronizeIrql )
  {
    if ( CurrentIrql != (_BYTE)SynchronizeIrql )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    KeSetEvent(a1->PassiveEvent, 0, 0);
    KeLeaveCriticalRegion();
  }
  return v12 == 1;
}
