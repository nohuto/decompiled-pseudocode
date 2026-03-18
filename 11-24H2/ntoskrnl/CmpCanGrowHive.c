/*
 * XREFs of CmpCanGrowHive @ 0x140980D70
 * Callers:
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     MmGetNumberOfPhysicalPages @ 0x14045F260 (MmGetNumberOfPhysicalPages.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

char __fastcall CmpCanGrowHive(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rax
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  if ( a2 <= 0x7FFFE000 )
  {
    if ( a1 != qword_140E09A70 )
      return 1;
    v2 = a2 + 4096;
    if ( a2 + 4096 <= CmSystemHiveLimitSize )
    {
      if ( (MmGetNumberOfPhysicalPages(0) & 0xFFFFFFFFFFFFFFFEuLL) >= 0xC0000 )
        LODWORD(v3) = 393216;
      else
        v3 = (unsigned __int64)MmGetNumberOfPhysicalPages(0) >> 1;
      if ( v2 > 36864 * (int)v3 / 0xAu && !CmpSystemQuotaWarningPopupDisplayed && ExReadyForErrors )
      {
        Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
        if ( Pool2 )
        {
          CmpSystemQuotaWarningPopupDisplayed = 1;
          Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
          Pool2->Parameter = Pool2;
          Pool2->List.Flink = 0LL;
          ExQueueWorkItem(Pool2, DelayedWorkQueue);
        }
      }
      return 1;
    }
  }
  return 0;
}
