/*
 * XREFs of KeAbPostReleaseEx @ 0x14025CCE0
 * Callers:
 *     KiWaitForAllObjects @ 0x140205C00 (KiWaitForAllObjects.c)
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     ExReleaseFastResource @ 0x14025BE50 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14025C680 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14025D6D0 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     RtlpHpTryAcquireQueuedLockExclusive @ 0x1402B6C98 (RtlpHpTryAcquireQueuedLockExclusive.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14033E6B0 (ExTryAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14033F730 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140341510 (ExpAcquireFastResourceSharedSlow.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14038A1E8 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     ExAcquireFastResourceExclusive @ 0x1403DD040 (ExAcquireFastResourceExclusive.c)
 *     MiTryLockVad @ 0x1403FD34C (MiTryLockVad.c)
 *     MiLockAddressSpaceToo @ 0x140405808 (MiLockAddressSpaceToo.c)
 *     MiLockControlAreaSectionExtend @ 0x140414FF0 (MiLockControlAreaSectionExtend.c)
 *     MiReferenceControlArea @ 0x140415208 (MiReferenceControlArea.c)
 *     ExTryToAcquireFastMutex @ 0x140445730 (ExTryToAcquireFastMutex.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140473480 (ExTryAcquireAutoExpandPushLockShared.c)
 *     PfLockSharedTryAcquire @ 0x140473650 (PfLockSharedTryAcquire.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1404A0300 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x140597680 (IopProcessIoTracking.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140655F80 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140656050 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquireFastResourceWithFlags @ 0x140656180 (ExAcquireFastResourceWithFlags.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x140656A90 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     MiTryAcquirePushLockUnordered @ 0x1406755CC (MiTryAcquirePushLockUnordered.c)
 *     MiChangingSubsectionProtos @ 0x14067A42C (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x14067BE30 (MiWaitForExtentDeletions.c)
 *     ExTryAcquireTimeRefreshLockExclusive @ 0x1407B6080 (ExTryAcquireTimeRefreshLockExclusive.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1407E4EE8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1408962B0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     ObpDeleteNameCheck @ 0x14089B690 (ObpDeleteNameCheck.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     MmPrefetchPagesEx @ 0x140955430 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x1409572D4 (MiPrefetchControlArea.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpTryToLockKcbExclusive @ 0x1409E1B30 (CmpTryToLockKcbExclusive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140A50F24 (CmpTryToLockHashEntryExclusive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A882DC (CmpWaitOnHiveWriteQueue.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140AA8610 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140AA9460 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140AAD350 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     KiForceSymbolReferences @ 0x140C27FB4 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
