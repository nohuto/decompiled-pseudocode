/*
 * XREFs of CmpClaimGlobalQuota @ 0x14087F12C
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x1404CF960 (CmpAllocateForNonPagedHive.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E37DC (HvpBuildMapForMemoryBackedHive.c)
 *     CmpAllocate @ 0x14087F0C0 (CmpAllocate.c)
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvpMapHiveImageFromViewMap @ 0x1409829FC (HvpMapHiveImageFromViewMap.c)
 *     HvpAllocateNonPagedBin @ 0x140A60388 (HvpAllocateNonPagedBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x14087F180 (CmpUpdateGlobalQuotaAllowed.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

char __fastcall CmpClaimGlobalQuota(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  CmpUpdateGlobalQuotaAllowed(a1, a2, (unsigned int)a1);
  if ( !(_DWORD)v2 || v2 >= CmpGlobalQuotaAllowed - CmpGlobalQuotaUsed )
    return 0;
  _InterlockedAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, v2);
  if ( CmpGlobalQuotaUsed > (unsigned __int64)CmpGlobalQuotaWarning
    && !CmpQuotaWarningPopupDisplayed
    && ExReadyForErrors )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      Pool2->List.Flink = 0LL;
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
      CmpQuotaWarningPopupDisplayed = 1;
      Pool2->Parameter = Pool2;
      ExQueueWorkItem(Pool2, DelayedWorkQueue);
    }
  }
  return 1;
}
