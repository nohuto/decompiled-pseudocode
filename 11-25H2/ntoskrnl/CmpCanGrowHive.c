/*
 * XREFs of CmpCanGrowHive @ 0x1409F8148
 * Callers:
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

char __fastcall CmpCanGrowHive(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  if ( a2 <= 0x7FFFE000 )
  {
    if ( a1 != qword_140E09990 )
      return 1;
    if ( a2 + 4096 <= CmSystemHiveLimitSize )
    {
      LODWORD(v2) = 393216;
      if ( *(_QWORD *)(*(_QWORD *)qword_140E2FD48 + 18512LL) >> 1 < 0x60000uLL )
        v2 = *(_QWORD *)(*(_QWORD *)qword_140E2FD48 + 18512LL) >> 1;
      if ( a2 + 4096 > 36864 * (int)v2 / 0xAu && !CmpSystemQuotaWarningPopupDisplayed && ExReadyForErrors )
      {
        Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
        if ( Pool2 )
        {
          Pool2->List.Flink = 0LL;
          Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
          CmpSystemQuotaWarningPopupDisplayed = 1;
          Pool2->Parameter = Pool2;
          ExQueueWorkItem(Pool2, DelayedWorkQueue);
        }
      }
      return 1;
    }
  }
  return 0;
}
