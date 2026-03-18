/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140204420 (NtSetInformationWorkerFactory.c)
 *     KiAbProcessPostContextSwitch @ 0x14020FA80 (KiAbProcessPostContextSwitch.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x1402193F0 (MiReacquireWalkLocks.c)
 *     CcPurgeCacheSection @ 0x14023EF70 (CcPurgeCacheSection.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     IopRecordIoAttribution @ 0x140244F60 (IopRecordIoAttribution.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140250050 (KiAbEntryGetLockedHeadEntry.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14025BE50 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14025C680 (ExpReleaseFastResourceShared.c)
 *     KiAbEntryRemoveFromTree @ 0x14025CEE0 (KiAbEntryRemoveFromTree.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402744C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140274B00 (ExIsResourceAcquiredSharedLite.c)
 *     PfpPartitionIterate @ 0x140274CF0 (PfpPartitionIterate.c)
 *     PfpPartitionGetFirst @ 0x140275EC0 (PfpPartitionGetFirst.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140278960 (ExpBoostIoAfterAcquire.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     KeTerminateThread @ 0x1402A6488 (KeTerminateThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402A7660 (CcCachemapUninitWorkerThread.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402A7944 (CcPostWorkQueueCachemapUninit.c)
 *     CcGetDirtyPagesHelper @ 0x1402AA740 (CcGetDirtyPagesHelper.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402AACA0 (CcFlushCachePostProcessOneRange.c)
 *     CcSetDirtyPinnedData @ 0x1402AB6C0 (CcSetDirtyPinnedData.c)
 *     CcFlushCachePostProcess @ 0x1402ABF10 (CcFlushCachePostProcess.c)
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402B2BA0 (ExpRemovePoolTrackerExpansion.c)
 *     CcFindPrivateVolumeCacheMap @ 0x1402CA6FC (CcFindPrivateVolumeCacheMap.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402CEC30 (ExpSetResourceOwnerPointerEx.c)
 *     IopDecrementVpbRefCount @ 0x1402D48F0 (IopDecrementVpbRefCount.c)
 *     IopCheckDeviceAndDriver @ 0x1402D4BF0 (IopCheckDeviceAndDriver.c)
 *     MiLockPageTableInternal @ 0x1402D4E40 (MiLockPageTableInternal.c)
 *     CcGetVacbMiss @ 0x1402D5510 (CcGetVacbMiss.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D6B90 (KxAcquireQueuedSpinLock.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402D6BE0 (ExpReleaseResourceForThreadLite.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     MiResolvePageTablePage @ 0x1402D86D0 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140341510 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x14038D660 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     KeInsertDeviceQueue @ 0x14038E850 (KeInsertDeviceQueue.c)
 *     HalpDmaFreeMapRegisters @ 0x1403908D4 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x140390B70 (KeRemoveDeviceQueue.c)
 *     HalpDmaReturnPageToOwner @ 0x140390E84 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnToScatterPool @ 0x140390FF0 (HalpDmaReturnToScatterPool.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140393920 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403A9DD0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1403BC880 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1403BC9C0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403BCF10 (AlpcpQueueIoCompletionPort.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403BEB10 (ExpWorkerFactoryCheckCreate.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1403D79F8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403DD330 (ExpAcquireFastResourceExclusiveSlow.c)
 *     IopInterlockedDecrementUlong @ 0x1403F1990 (IopInterlockedDecrementUlong.c)
 *     IopCheckVpbMounted @ 0x1403F1EF0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1403F2340 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041A700 (IopIncrementDeviceObjectRefCount.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14041A8E0 (IopVerifyDeviceObjectOnStack.c)
 *     IoGetAttachedDeviceReference @ 0x14041D070 (IoGetAttachedDeviceReference.c)
 *     IoAcquireCancelSpinLock @ 0x14041E750 (IoAcquireCancelSpinLock.c)
 *     PoQueryWatchdogTime @ 0x140440D30 (PoQueryWatchdogTime.c)
 *     CcSetParallelFlushFile @ 0x1404450F0 (CcSetParallelFlushFile.c)
 *     HsaIommuSendCommand @ 0x14044639C (HsaIommuSendCommand.c)
 *     CcSetLogHandleForFileEx @ 0x140446A80 (CcSetLogHandleForFileEx.c)
 *     CcIsThereDirtyLoggedPages @ 0x140455490 (CcIsThereDirtyLoggedPages.c)
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 *     CcLazyWriteScanVolume @ 0x1404B5560 (CcLazyWriteScanVolume.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x14040D57C (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x14040D6FC (PerfLogSpinLockAcquire.c)
 */

void __fastcall KiAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int InterruptCount; // esi
  int v4; // ebp
  int v5; // r14d
  int v6; // r9d
  char v7; // bl
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v4 = (int)a2;
  v5 = 0;
  v6 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    InterruptCount = CurrentPrcb->InterruptCount;
    v5 = __rdtsc();
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v8 = _InterlockedExchange64(a2, a1);
  if ( v8 )
  {
    v9 = KxWaitForLockOwnerShipWithIrql(a1, v8, 0LL, 0LL);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v6 = v9;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v9;
  }
  if ( v7 )
  {
    v10 = __rdtsc();
    PerfLogSpinLockAcquire(v4, v10, v10 - v5, v6, InterruptCount, 1);
  }
}
