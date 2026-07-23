/*
 * XREFs of CmpClaimGlobalQuota @ 0x140882FDC
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x1404C8A10 (CmpAllocateForNonPagedHive.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E3D2C (HvpBuildMapForMemoryBackedHive.c)
 *     CmpAllocate @ 0x140882F70 (CmpAllocate.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpMapHiveImageFromViewMap @ 0x14096B20C (HvpMapHiveImageFromViewMap.c)
 *     HvpAllocateNonPagedBin @ 0x140A588D8 (HvpAllocateNonPagedBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x140883030 (CmpUpdateGlobalQuotaAllowed.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x20204D43u);
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
