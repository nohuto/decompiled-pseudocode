/*
 * XREFs of CmpDiskFullWarning @ 0x1407D5A00
 * Callers:
 *     CmpLazyWriteWorker @ 0x140668210 (CmpLazyWriteWorker.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void CmpDiskFullWarning()
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  if ( !CmpDiskFullWorkerPopupDisplayed && CmpCannotWriteConfiguration && ExReadyForErrors && CmpProfileLoaded )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      Pool2->List.Flink = 0LL;
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpDiskFullWarningWorker;
      CmpDiskFullWorkerPopupDisplayed = 1;
      Pool2->Parameter = Pool2;
      ExQueueWorkItem(Pool2, DelayedWorkQueue);
    }
  }
}
