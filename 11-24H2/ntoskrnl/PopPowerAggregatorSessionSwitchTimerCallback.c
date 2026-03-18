/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x1405D7A80
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140F08960, DelayedWorkQueue);
}
