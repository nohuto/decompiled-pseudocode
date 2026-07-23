/*
 * XREFs of KeAbPostReleaseEx @ 0x14028D2F0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     MiLockControlAreaSectionExtend @ 0x140270E50 (MiLockControlAreaSectionExtend.c)
 *     MiReferenceControlArea @ 0x140271068 (MiReferenceControlArea.c)
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14028CC90 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14028DCE0 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14031DB90 (ExTryAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14031EC10 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1403209F0 (ExpAcquireFastResourceSharedSlow.c)
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     RtlpHpTryAcquireQueuedLockExclusive @ 0x14036810C (RtlpHpTryAcquireQueuedLockExclusive.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x140383B28 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     ExAcquireFastResourceExclusive @ 0x1403BCD30 (ExAcquireFastResourceExclusive.c)
 *     MiLockAddressSpaceToo @ 0x1403C7D64 (MiLockAddressSpaceToo.c)
 *     MiTryLockVad @ 0x1403DAC68 (MiTryLockVad.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     ExTryToAcquireFastMutex @ 0x14043D8E0 (ExTryToAcquireFastMutex.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140470270 (ExTryAcquireAutoExpandPushLockShared.c)
 *     PfLockSharedTryAcquire @ 0x140470440 (PfLockSharedTryAcquire.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14049A980 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x140594600 (IopProcessIoTracking.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140654680 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140654750 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquireFastResourceWithFlags @ 0x140654880 (ExAcquireFastResourceWithFlags.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x140655190 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     MiTryAcquirePushLockUnordered @ 0x14067679C (MiTryAcquirePushLockUnordered.c)
 *     MiChangingSubsectionProtos @ 0x14067B60C (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x14067D010 (MiWaitForExtentDeletions.c)
 *     ExTryAcquireTimeRefreshLockExclusive @ 0x1407B64D0 (ExTryAcquireTimeRefreshLockExclusive.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1407E54B8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14088F9F0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x14089E750 (AlpcpTryLockForCachedReferenceBlob.c)
 *     ObpDeleteNameCheck @ 0x1408A3D30 (ObpDeleteNameCheck.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x14093AC84 (MiPrefetchControlArea.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpTryToLockKcbExclusive @ 0x1409DB8E0 (CmpTryToLockKcbExclusive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140A482D4 (CmpTryToLockHashEntryExclusive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A847CC (CmpWaitOnHiveWriteQueue.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140AA3710 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140AA4510 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140AA83D0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     KiForceSymbolReferences @ 0x140C2A010 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v2; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // r8

  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = (ULONG_PTR)&CurrentThread->KernelAbEntries->Entries[(unsigned __int8)(a2 >> 1)];
    v5 = *(_QWORD *)v2 & 0x7FFFFFFFFFFFFFFCLL;
    if ( v5 && *(char *)(v2 + 8) >= 0 )
      v5 |= 0x8000000000000000uLL;
    if ( v5 != BugCheckParameter2 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, v2, 0LL);
  }
  else
  {
    CurrentThread = *(struct _KTHREAD **)(a2 - 88LL * (*(_BYTE *)(a2 + 8) & 0x3F) - 16);
  }
  _disable();
  *(_BYTE *)(v2 + 10) = 0;
  return KiAbEntryFreeAndEnableInterrupts(v2, CurrentThread, BugCheckParameter2, 1LL, 0LL);
}
