/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x1403BFD28
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1403BF7F8 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PerfInfoLogInterrupt @ 0x1403BFF50 (PerfInfoLogInterrupt.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(struct _KINTERRUPT *a1, unsigned __int8 CurrentIrql, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  signed __int32 *v8; // r8
  __int64 v9; // r9
  unsigned __int64 SynchronizeIrql; // rsi
  char v11; // r13
  bool v12; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v14; // al
  __int64 v15; // rdx
  unsigned __int8 v16; // r14
  char v18; // [rsp+30h] [rbp-D0h]
  __int128 Object; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+64h] [rbp-9Ch]
  int v23; // [rsp+6Ch] [rbp-94h]
  __int64 v24; // [rsp+70h] [rbp-90h]
  void *v25; // [rsp+78h] [rbp-88h]
  __int128 *p_Object; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  struct _KTIMER v30; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v31[2]; // [rsp+E0h] [rbp-20h] BYREF

  v22 = 0LL;
  v23 = 0;
  v27 = 0LL;
  v28 = 0LL;
  memset(v31, 0, sizeof(v31));
  Object = 0LL;
  v20 = 0LL;
  memset_0(&v30, 0, sizeof(v30));
  SynchronizeIrql = a1->SynchronizeIrql;
  v11 = 1;
  v18 = 0;
  v12 = 0;
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
      v11 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(a1->PassiveEvent, Executive, 0, 0, 0LL);
    v12 = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
    if ( (_BYTE)KdDebuggerEnabled && KiPassiveWatchdogTimeout )
    {
      DWORD1(Object) = 0;
      *(_QWORD *)&v20 = (char *)&Object + 8;
      v30.Header.SignalState = 0;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      v30.DueTime.QuadPart = 0LL;
      v30.Header.WaitListHead.Blink = &v30.Header.WaitListHead;
      v30.Header.WaitListHead.Flink = &v30.Header.WaitListHead;
      v25 = &KiPassiveIsrWatchdog;
      v30.Period = 0;
      v30.Processor = 0;
      v29 = 0LL;
      v24 = 0LL;
      p_Object = &Object;
      *((_QWORD *)&v20 + 1) = a1;
      LOWORD(Object) = 1;
      BYTE2(Object) = 6;
      v30.Header.Type = 8;
      v21 = 275;
      KiSetTimerEx((__int64)&v30, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)&v21);
      v18 = 1;
    }
  }
  a1->ServiceThread = KeGetCurrentThread();
  if ( v12 )
    EtwGetKernelTraceTimestamp(v31, 536887296LL);
  v14 = KiCallInterruptServiceRoutine(a1, v11, v8, v9);
  v16 = v14;
  if ( v12 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | (unsigned int)v14, v31);
  if ( v18 && !KeCancelTimer(&v30) )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  a1->ServiceThread = 0LL;
  if ( (_BYTE)SynchronizeIrql )
  {
    if ( CurrentIrql != (_BYTE)SynchronizeIrql )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v15) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    KeSetEvent(a1->PassiveEvent, 0, 0);
    KeLeaveCriticalRegion();
  }
  return v16 == 1;
}
