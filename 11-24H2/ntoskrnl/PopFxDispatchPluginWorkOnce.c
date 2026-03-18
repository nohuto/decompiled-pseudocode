/*
 * XREFs of PopFxDispatchPluginWorkOnce @ 0x140315E30
 * Callers:
 *     PopFxProcessWorkPool @ 0x1404EB530 (PopFxProcessWorkPool.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1403160B0 (PopFxDisableWorkOrderWatchdog.c)
 *     PopPepWork @ 0x140316330 (PopPepWork.c)
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PopFxDispatchPluginWorkOnce(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // zf
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int128 v12; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct _KTIMER Timer; // [rsp+58h] [rbp-B0h] BYREF
  struct _KDPC Dpc; // [rsp+98h] [rbp-70h] BYREF
  _OWORD *v16; // [rsp+D8h] [rbp-30h]
  _DWORD *v17; // [rsp+E0h] [rbp-28h]
  __int64 v18; // [rsp+E8h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-18h]
  _OWORD v20[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v21; // [rsp+118h] [rbp+10h]
  ULONG_PTR v22; // [rsp+120h] [rbp+18h]
  ULONG_PTR *v23; // [rsp+128h] [rbp+20h]
  _DWORD v24[16]; // [rsp+138h] [rbp+30h] BYREF
  __int64 retaddr; // [rsp+180h] [rbp+78h]

  v24[1] = 0;
  memset_0(BugCheckParameter2, 0, 0xB0uLL);
  v23 = BugCheckParameter2;
  *(_QWORD *)&Timer.Header.Lock = 8LL;
  v16 = v20;
  Timer.Header.WaitListHead.Blink = &Timer.Header.WaitListHead;
  Timer.Header.WaitListHead.Flink = &Timer.Header.WaitListHead;
  Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopFxWorkOrderWatchdog;
  Dpc.DeferredContext = BugCheckParameter2;
  Timer.DueTime.QuadPart = 0LL;
  Timer.Period = 0;
  Timer.Processor = 0;
  Dpc.TargetInfoAsUlong = 275;
  Dpc.DpcData = 0LL;
  Dpc.ProcessorHistory = 0LL;
  v21 = 0LL;
  v22 = BugCheckParameter3;
  memset(v20, 0, sizeof(v20));
  CurrentThread = KeGetCurrentThread();
  if ( PopFxWatchdogWorkOrderTimeout )
  {
    KeSetCoalescableTimer(
      &Timer,
      (LARGE_INTEGER)(-10000LL * (unsigned int)PopFxWatchdogWorkOrderTimeout),
      0,
      PopFxWatchdogWorkOrderTimeout / 0xAu,
      &Dpc);
    v18 = MEMORY[0xFFFFF78000000008];
    v17 = 0LL;
    v4 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
    if ( *(__int64 **)qword_140F0D988 != &PopWorkOrderList )
      __fastfail(3u);
    BugCheckParameter2[0] = (ULONG_PTR)&PopWorkOrderList;
    BugCheckParameter2[1] = qword_140F0D988;
    *(_QWORD *)qword_140F0D988 = BugCheckParameter2;
    qword_140F0D988 = (__int64)BugCheckParameter2;
    KxReleaseSpinLock((volatile signed __int64 *)&PopWorkOrderLock);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = v4;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    }
    __writecr8(v4);
  }
  v12 = 0LL;
  memset_0(v24, 0, sizeof(v24));
  BYTE8(v12) = 0;
  *(_QWORD *)&v12 = v24;
  if ( !BugCheckParameter3 )
  {
    v8 = (unsigned __int8)PopPepWork(a2, v24) == 0;
    goto LABEL_9;
  }
  if ( *(_QWORD *)(BugCheckParameter3 + 96) && (unsigned __int8)guard_dispatch_icall_no_overrides(13LL, &v12, v6, v7) )
  {
    v8 = BYTE8(v12) == 0;
LABEL_9:
    if ( v8 )
      return PopFxDisableWorkOrderWatchdog((ULONG_PTR)BugCheckParameter2);
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(BugCheckParameter3 + 112) || !(unsigned __int8)guard_dispatch_icall_no_overrides(10LL, &v12, v6, v7) )
    PopFxBugCheck(0x605uLL, 0xDuLL, BugCheckParameter3, 0LL);
  if ( BYTE8(v12) )
  {
    if ( (unsigned int)(v24[0] - 7) > 1 )
      PopFxBugCheck(0x612uLL, BugCheckParameter3, 0LL, 0LL);
LABEL_11:
    v11 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
    v17 = v24;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (v10 = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
      _InterlockedAnd64((volatile signed __int64 *)&PopWorkOrderLock, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&PopWorkOrderLock, retaddr);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = v11;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    __writecr8(v11);
    PopFxProcessWork(BugCheckParameter3, v24);
  }
  return PopFxDisableWorkOrderWatchdog((ULONG_PTR)BugCheckParameter2);
}
