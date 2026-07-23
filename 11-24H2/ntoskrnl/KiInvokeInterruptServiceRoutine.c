/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x1403AE8E8
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1403AE3B8 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PerfInfoLogInterrupt @ 0x1403AEB10 (PerfInfoLogInterrupt.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(struct _KINTERRUPT *a1, unsigned __int8 CurrentIrql, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 SynchronizeIrql; // rsi
  char v10; // r13
  bool v11; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  unsigned __int8 v15; // r14
  char v17; // [rsp+30h] [rbp-D0h]
  __int128 Object; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+48h] [rbp-B8h]
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+64h] [rbp-9Ch]
  int v22; // [rsp+6Ch] [rbp-94h]
  __int64 v23; // [rsp+70h] [rbp-90h]
  void *v24; // [rsp+78h] [rbp-88h]
  __int128 *p_Object; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  struct _KTIMER v29; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v30[2]; // [rsp+E0h] [rbp-20h] BYREF

  v21 = 0LL;
  v22 = 0;
  v26 = 0LL;
  v27 = 0LL;
  memset(v30, 0, sizeof(v30));
  Object = 0LL;
  v19 = 0LL;
  memset_0(&v29, 0, sizeof(v29));
  SynchronizeIrql = a1->SynchronizeIrql;
  v10 = 1;
  v17 = 0;
  v11 = 0;
  if ( (_BYTE)SynchronizeIrql )
  {
    if ( CurrentIrql != (_BYTE)SynchronizeIrql )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(SynchronizeIrql);
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = SynchronizeIrql;
        LOBYTE(v7) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v7, v6);
      }
    }
    if ( (((unsigned __int64)a1->ActualLock + 3) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
      v10 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(a1->PassiveEvent, Executive, 0, 0, 0LL);
    v11 = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
    if ( (_BYTE)KdDebuggerEnabled && KiPassiveWatchdogTimeout )
    {
      DWORD1(Object) = 0;
      *(_QWORD *)&v19 = (char *)&Object + 8;
      v29.Header.SignalState = 0;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      v29.DueTime.QuadPart = 0LL;
      v29.Header.WaitListHead.Blink = &v29.Header.WaitListHead;
      v29.Header.WaitListHead.Flink = &v29.Header.WaitListHead;
      v24 = &KiPassiveIsrWatchdog;
      v29.Period = 0;
      v29.Processor = 0;
      v28 = 0LL;
      v23 = 0LL;
      p_Object = &Object;
      *((_QWORD *)&v19 + 1) = a1;
      LOWORD(Object) = 1;
      BYTE2(Object) = 6;
      v29.Header.Type = 8;
      v20 = 275;
      KiSetTimerEx((__int64)&v29, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)&v20);
      v17 = 1;
    }
  }
  a1->ServiceThread = KeGetCurrentThread();
  if ( v11 )
    EtwGetKernelTraceTimestamp(v30, 536887296LL);
  v13 = KiCallInterruptServiceRoutine(a1, v10, v8);
  v15 = v13;
  if ( v11 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | (unsigned int)v13, v30);
  if ( v17 && !KeCancelTimer(&v29) )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  a1->ServiceThread = 0LL;
  if ( (_BYTE)SynchronizeIrql )
  {
    if ( CurrentIrql != (_BYTE)SynchronizeIrql )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    KeSetEvent(a1->PassiveEvent, 0, 0);
    KeLeaveCriticalRegion();
  }
  return v15 == 1;
}
