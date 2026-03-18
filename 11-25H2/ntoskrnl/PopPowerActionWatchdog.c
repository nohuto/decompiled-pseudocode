/*
 * XREFs of PopPowerActionWatchdog @ 0x1405CEF30
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x1404BDE2C (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PopInternalAddToDumpFile @ 0x1405C8990 (PopInternalAddToDumpFile.c)
 */

void PopPowerActionWatchdog()
{
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  PopStateTransitionTimeoutWorker.Parameter = 0LL;
  PopStateTransitionTimeoutWorker.List.Flink = 0LL;
  PopStateTransitionTimeoutWorker.WorkerRoutine = (void (__fastcall *)(void *))PopStateTransitionTimeoutDispatch;
  ExQueueWorkItem(&PopStateTransitionTimeoutWorker, HyperCriticalWorkQueue);
}
