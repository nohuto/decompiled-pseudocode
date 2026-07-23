/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x1405D4FA0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140F08CC0, DelayedWorkQueue);
}
