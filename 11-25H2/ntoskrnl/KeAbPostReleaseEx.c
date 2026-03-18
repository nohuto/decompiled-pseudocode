/*
 * XREFs of KeAbPostReleaseEx @ 0x14027D430
 * Callers:
 *     MiReferenceControlArea @ 0x140219CEC (MiReferenceControlArea.c)
 *     ExpReleaseFastResourceExclusive @ 0x14027C150 (ExpReleaseFastResourceExclusive.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     ExpReleaseFastResourceShared @ 0x14027CE20 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiWaitForAllObjects @ 0x14027DDF0 (KiWaitForAllObjects.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastResourceExclusive @ 0x1402934E0 (ExAcquireFastResourceExclusive.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140294850 (ExpAcquireFastResourceSharedSlow.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x140299140 (ExTryAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     MiTryLockVad @ 0x1402A30DC (MiTryLockVad.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x1403A2DC4 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     MiLockAddressSpaceToo @ 0x1403D7EA4 (MiLockAddressSpaceToo.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1403F5880 (ExTryAcquireAutoExpandPushLockShared.c)
 *     PfLockSharedTryAcquire @ 0x1403F5A50 (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1403F5AE0 (ExTryAcquirePushLockSharedEx.c)
 *     MiLockControlAreaSectionExtend @ 0x140417E10 (MiLockControlAreaSectionExtend.c)
 *     ExTryToAcquireFastMutex @ 0x140447D40 (ExTryToAcquireFastMutex.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1404A0BC0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     RtlpHpTryAcquireQueuedLockExclusive @ 0x1404F0F38 (RtlpHpTryAcquireQueuedLockExclusive.c)
 *     IopProcessIoTracking @ 0x140593F70 (IopProcessIoTracking.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14064A080 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14064A150 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquireFastResourceWithFlags @ 0x14064A280 (ExAcquireFastResourceWithFlags.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14064AB90 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     MiTryAcquirePushLockUnordered @ 0x140669B6C (MiTryAcquirePushLockUnordered.c)
 *     MiChangingSubsectionProtos @ 0x14066EB8C (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x140670670 (MiWaitForExtentDeletions.c)
 *     ExTryAcquireTimeRefreshLockExclusive @ 0x1407A6BE0 (ExTryAcquireTimeRefreshLockExclusive.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1407D5078 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x14085AF80 (ObpDeleteNameCheck.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     CmpCreateKeyControlBlock @ 0x140875390 (CmpCreateKeyControlBlock.c)
 *     AlpcpReceiveMessagePort @ 0x1408A6F40 (AlpcpReceiveMessagePort.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14094B784 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x14098B0C0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     MmPrefetchPagesEx @ 0x1409C8D00 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x1409CABB4 (MiPrefetchControlArea.c)
 *     CmpTryToLockKcbExclusive @ 0x1409E2C50 (CmpTryToLockKcbExclusive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140A4DB84 (CmpTryToLockHashEntryExclusive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A837E0 (CmpWaitOnHiveWriteQueue.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140AA3530 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140AA4400 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     KiForceSymbolReferences @ 0x140C16F24 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
