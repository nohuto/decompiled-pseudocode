/*
 * XREFs of RtlpCtQueueWorkItem @ 0x140787218
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EFEF0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
