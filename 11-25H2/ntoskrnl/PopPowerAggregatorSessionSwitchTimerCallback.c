/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x1405D2F60
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140F082E0, DelayedWorkQueue);
}
