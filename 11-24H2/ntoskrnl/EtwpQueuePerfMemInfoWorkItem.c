/*
 * XREFs of EtwpQueuePerfMemInfoWorkItem @ 0x1403D41C4
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1403D3DF0 (EtwpLogMemInfoTimerCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void __fastcall EtwpQueuePerfMemInfoWorkItem(struct _LIST_ENTRY *a1)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))EtwpPerfMemInfoWork;
    Pool2[1].List.Flink = a1;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, CriticalWorkQueue);
  }
}
