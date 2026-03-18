/*
 * XREFs of PiProfileUpdateDeviceTree @ 0x14072D2A8
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x14072D670 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14072D71C (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PiProfileUpdateDeviceTree()
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->List.Flink = 0LL;
  Pool2->WorkerRoutine = (void (__fastcall *)(void *))PiProfileUpdateDeviceTreeWorker;
  Pool2->Parameter = Pool2;
  ExQueueWorkItem(Pool2, CriticalWorkQueue);
  return 0LL;
}
