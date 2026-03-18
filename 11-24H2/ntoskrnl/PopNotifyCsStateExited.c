/*
 * XREFs of PopNotifyCsStateExited @ 0x1409B9F00
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1409BA124 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1409BA5AC (PopPowerAggregatorScheduleWorker.c)
 */

__int64 PopNotifyCsStateExited()
{
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_PDC_PHASES_EXITED, 0, 0LL);
  return PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
}
