/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x1404BCBD0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140F0A348, DelayedWorkQueue);
}
