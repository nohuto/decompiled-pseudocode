/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x1404C15E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140F0A008, DelayedWorkQueue);
}
