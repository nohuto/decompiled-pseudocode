/*
 * XREFs of PopPowerActionWatchdog @ 0x1405D3990
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x1404BCE5C (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PopInternalAddToDumpFile @ 0x1405CCEA0 (PopInternalAddToDumpFile.c)
 */

void PopPowerActionWatchdog()
{
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  PopStateTransitionTimeoutWorker.Parameter = 0LL;
  PopStateTransitionTimeoutWorker.List.Flink = 0LL;
  PopStateTransitionTimeoutWorker.WorkerRoutine = (void (__fastcall *)(void *))PopStateTransitionTimeoutDispatch;
  ExQueueWorkItem(&PopStateTransitionTimeoutWorker, HyperCriticalWorkQueue);
}
