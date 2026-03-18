/*
 * XREFs of PopFxDispatchPluginWorkOnce @ 0x14034CB24
 * Callers:
 *     PopFxProcessWorkPool @ 0x14034D940 (PopFxProcessWorkPool.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x14034CDA4 (PopFxDisableWorkOrderWatchdog.c)
 *     PopPepWork @ 0x14034D020 (PopPepWork.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall PopFxDispatchPluginWorkOnce(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int128 v10; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2a[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct _KTIMER Timer; // [rsp+58h] [rbp-B0h] BYREF
  struct _KDPC Dpc; // [rsp+98h] [rbp-70h] BYREF
  _OWORD *v14; // [rsp+D8h] [rbp-30h]
  unsigned int *v15; // [rsp+E0h] [rbp-28h]
  __int64 v16; // [rsp+E8h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-18h]
  _OWORD v18[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v19; // [rsp+118h] [rbp+10h]
  ULONG_PTR v20; // [rsp+120h] [rbp+18h]
  ULONG_PTR *v21; // [rsp+128h] [rbp+20h]
  unsigned int v22[16]; // [rsp+138h] [rbp+30h] BYREF
  __int64 retaddr; // [rsp+180h] [rbp+78h]

  v22[1] = 0;
  memset_0(BugCheckParameter2a, 0, 0xB0uLL);
  v21 = BugCheckParameter2a;
  *(_QWORD *)&Timer.Header.Lock = 8LL;
  v14 = v18;
  Timer.Header.WaitListHead.Blink = &Timer.Header.WaitListHead;
  Timer.Header.WaitListHead.Flink = &Timer.Header.WaitListHead;
  Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopFxWorkOrderWatchdog;
  Dpc.DeferredContext = BugCheckParameter2a;
  Timer.DueTime.QuadPart = 0LL;
  Timer.Period = 0;
  Timer.Processor = 0;
  Dpc.TargetInfoAsUlong = 275;
  Dpc.DpcData = 0LL;
  Dpc.ProcessorHistory = 0LL;
  v19 = 0LL;
  v20 = BugCheckParameter2;
  memset(v18, 0, sizeof(v18));
  CurrentThread = KeGetCurrentThread();
  if ( PopFxWatchdogWorkOrderTimeout )
  {
    KeSetCoalescableTimer(
      &Timer,
      (LARGE_INTEGER)(-10000LL * (unsigned int)PopFxWatchdogWorkOrderTimeout),
      0,
      PopFxWatchdogWorkOrderTimeout / 0xAu,
      &Dpc);
    v16 = MEMORY[0xFFFFF78000000008];
    v15 = 0LL;
    v4 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
    if ( *(__int64 **)qword_140F0CE68 != &PopWorkOrderList )
      __fastfail(3u);
    BugCheckParameter2a[0] = (ULONG_PTR)&PopWorkOrderList;
    BugCheckParameter2a[1] = qword_140F0CE68;
    *(_QWORD *)qword_140F0CE68 = BugCheckParameter2a;
    qword_140F0CE68 = (__int64)BugCheckParameter2a;
    KxReleaseSpinLock((volatile signed __int64 *)&PopWorkOrderLock);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = v4;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    }
    __writecr8(v4);
  }
  v10 = 0LL;
  memset_0(v22, 0, sizeof(v22));
  BYTE8(v10) = 0;
  *(_QWORD *)&v10 = v22;
  if ( !BugCheckParameter2 )
  {
    v6 = (unsigned __int8)PopPepWork(a2, v22) == 0;
    goto LABEL_9;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 96) && (unsigned __int8)guard_dispatch_icall_no_overrides(13LL, &v10) )
  {
    v6 = BYTE8(v10) == 0;
LABEL_9:
    if ( v6 )
      return PopFxDisableWorkOrderWatchdog((ULONG_PTR)BugCheckParameter2a);
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(BugCheckParameter2 + 112) || !(unsigned __int8)guard_dispatch_icall_no_overrides(10LL, &v10) )
    PopFxBugCheck(0x605uLL, 0xDuLL, BugCheckParameter2, 0LL);
  if ( BYTE8(v10) )
  {
    if ( v22[0] - 7 > 1 )
      PopFxBugCheck(0x612uLL, BugCheckParameter2, 0LL, 0LL);
LABEL_11:
    v9 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
    v15 = v22;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (v8 = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
      _InterlockedAnd64((volatile signed __int64 *)&PopWorkOrderLock, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&PopWorkOrderLock, retaddr);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = v9;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    }
    __writecr8(v9);
    PopFxProcessWork(BugCheckParameter2, v22);
  }
  return PopFxDisableWorkOrderWatchdog((ULONG_PTR)BugCheckParameter2a);
}
