/*
 * XREFs of PopPowerAggregatorDozeTimerCallback @ 0x1405D4E50
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall PopPowerAggregatorDozeTimerCallback(__int64 a1, int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)&unk_140F08D98 + 200 * a2), DelayedWorkQueue);
}
