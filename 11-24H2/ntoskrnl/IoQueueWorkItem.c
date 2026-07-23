/*
 * XREFs of IoQueueWorkItem @ 0x1403AA020
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemFromIo @ 0x1402CC8A0 (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x1403AA050 (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  _QWORD *v5; // rax

  IoWorkItem->Type = 0;
  v5 = (_QWORD *)IopQueueWorkItemProlog(IoWorkItem, WorkerRoutine, Context);
  ExQueueWorkItemFromIo(v5, QueueType);
}
