/*
 * XREFs of PopPowerAggregatorDozeTimerCallback @ 0x1405D7930
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall PopPowerAggregatorDozeTimerCallback(__int64 a1, int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)&unk_140F08A38 + 200 * a2), DelayedWorkQueue);
}
