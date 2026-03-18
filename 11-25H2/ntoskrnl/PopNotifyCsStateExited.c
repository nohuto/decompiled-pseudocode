/*
 * XREFs of PopNotifyCsStateExited @ 0x140A3D360
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140A3D584 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140A3D5E8 (PopPowerAggregatorScheduleWorker.c)
 */

__int64 PopNotifyCsStateExited()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_PDC_PHASES_EXITED, 0, 0LL);
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
