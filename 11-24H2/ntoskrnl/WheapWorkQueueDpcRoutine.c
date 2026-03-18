/*
 * XREFs of WheapWorkQueueDpcRoutine @ 0x14049C240
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall WheapWorkQueueDpcRoutine(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExQueueWorkItem(a2 + 3, DelayedWorkQueue);
}
