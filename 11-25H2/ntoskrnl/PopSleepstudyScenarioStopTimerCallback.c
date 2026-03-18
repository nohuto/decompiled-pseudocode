/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x1404C2DF0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140F09968, DelayedWorkQueue);
}
