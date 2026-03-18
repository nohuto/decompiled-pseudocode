/*
 * XREFs of PopPowerAggregatorDozeTimerCallback @ 0x1405D2E10
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void __fastcall PopPowerAggregatorDozeTimerCallback(__int64 a1, int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)&unk_140F083B8 + 200 * a2), DelayedWorkQueue);
}
