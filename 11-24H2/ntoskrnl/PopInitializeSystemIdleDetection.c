/*
 * XREFs of PopInitializeSystemIdleDetection @ 0x140C304CC
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPulseSystemIdleEvent @ 0x140A2778C (PopPulseSystemIdleEvent.c)
 */

__int64 PopInitializeSystemIdleDetection()
{
  PopAcquireRwLockExclusive(&PopSystemIdleLock);
  PopPulseSystemIdleEvent(1u);
  PopIdleScanDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopCheckForIdleness;
  *(_QWORD *)&PopIdleScanTimer.Header.Lock = 8LL;
  PopIdleScanTimer.Header.WaitListHead.Blink = &PopIdleScanTimer.Header.WaitListHead;
  PopIdleScanTimer.Header.WaitListHead.Flink = &PopIdleScanTimer.Header.WaitListHead;
  PopIdleScanDpc.TargetInfoAsUlong = 275;
  PopIdleScanDpc.DeferredContext = 0LL;
  PopIdleScanDpc.DpcData = 0LL;
  PopIdleScanDpc.ProcessorHistory = 0LL;
  PopIdleScanTimer.DueTime.QuadPart = 0LL;
  PopIdleScanTimer.Period = 0;
  PopIdleScanTimer.Processor = 0;
  if ( PopIdleScanInterval )
    KeSetCoalescableTimer(
      &PopIdleScanTimer,
      (LARGE_INTEGER)(-10000000LL * (unsigned int)PopIdleScanInterval),
      1000 * PopIdleScanInterval,
      0x3E8u,
      &PopIdleScanDpc);
  dword_140E0B664 = 5;
  PopSystemIdleContext = 1;
  return PopReleaseRwLock((signed __int64 *)&PopSystemIdleLock);
}
