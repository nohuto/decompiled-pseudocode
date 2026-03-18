/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x140275CD0
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140204420 (NtSetInformationWorkerFactory.c)
 *     CcPurgeCacheSection @ 0x14023EF70 (CcPurgeCacheSection.c)
 *     CcFlushCacheOneRange @ 0x140240110 (CcFlushCacheOneRange.c)
 *     IopRecordIoAttribution @ 0x140244F60 (IopRecordIoAttribution.c)
 *     ExpWorkerFactoryCreateThread @ 0x1402462F8 (ExpWorkerFactoryCreateThread.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402744C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140274B00 (ExIsResourceAcquiredSharedLite.c)
 *     PfFileInfoNotify @ 0x140275220 (PfFileInfoNotify.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     CcPostWorkQueueRegular @ 0x1402A74B4 (CcPostWorkQueueRegular.c)
 *     CcCachemapUninitWorkerThread @ 0x1402A7660 (CcCachemapUninitWorkerThread.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402A7944 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehindPreProcess @ 0x1402A8434 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x1402A883C (CcWriteBehindPostProcess.c)
 *     CcAsyncLazywriteWorker @ 0x1402A8E24 (CcAsyncLazywriteWorker.c)
 *     CcRepostToSynchronousLazywriter @ 0x1402A93E4 (CcRepostToSynchronousLazywriter.c)
 *     CcAsyncCopyRead @ 0x1402A94F0 (CcAsyncCopyRead.c)
 *     CcGetDirtyPagesHelper @ 0x1402AA740 (CcGetDirtyPagesHelper.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402AACA0 (CcFlushCachePostProcessOneRange.c)
 *     CcUnpinFileDataEx @ 0x1402AB380 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1402AB6C0 (CcSetDirtyPinnedData.c)
 *     CcFlushCachePostProcess @ 0x1402ABF10 (CcFlushCachePostProcess.c)
 *     CcFlushCachePreProcess @ 0x1402AC290 (CcFlushCachePreProcess.c)
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402B2BA0 (ExpRemovePoolTrackerExpansion.c)
 *     ExAllocateContiguousHeapPool @ 0x1402C2E9C (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTracker @ 0x1402C4BA8 (ExpInsertPoolTracker.c)
 *     NtShutdownWorkerFactory @ 0x1402C6730 (NtShutdownWorkerFactory.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x1402C9E90 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1402CA5A8 (CcCreatePrivateVolumeCacheMap.c)
 *     CcFindPrivateVolumeCacheMap @ 0x1402CA6FC (CcFindPrivateVolumeCacheMap.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1402CAF10 (CcInsertPrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1402CB768 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x1402CC0E0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcPrepareMdlWrite @ 0x1402CC1E0 (CcPrepareMdlWrite.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402CC554 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x1402CC6C0 (CcGetFlushedValidData.c)
 *     CcScanLogHandleList @ 0x1402CCCB4 (CcScanLogHandleList.c)
 *     CcDeleteSharedCacheMap @ 0x1402CCE98 (CcDeleteSharedCacheMap.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402CD480 (CcDecrementVolumeUseCountWithDelete.c)
 *     CcDeleteMbcb @ 0x1402CD624 (CcDeleteMbcb.c)
 *     CcInitializeVolumeCacheMap @ 0x1402CDF18 (CcInitializeVolumeCacheMap.c)
 *     CcForceWriteThrough @ 0x1402CE010 (CcForceWriteThrough.c)
 *     CcDeleteBcbs @ 0x1402CE42C (CcDeleteBcbs.c)
 *     CcCanIWriteStreamEx @ 0x1402CE730 (CcCanIWriteStreamEx.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1402CE9E0 (CcForEachPrivateVolumeCacheMap.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402CEC30 (ExpSetResourceOwnerPointerEx.c)
 *     IoDiskIoAttributionQuery @ 0x14030A994 (IoDiskIoAttributionQuery.c)
 *     KeInsertSchedulingGroup @ 0x14030F2B8 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupCpuRates @ 0x140310954 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupWeights @ 0x140310E70 (KeSetSchedulingGroupWeights.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     SepQueueWorkItem @ 0x140349B84 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x14034A120 (SepRmCallLsa.c)
 *     ExDisableResourceBoostLite @ 0x140365480 (ExDisableResourceBoostLite.c)
 *     CcNotifyOfMappedWrite @ 0x14036BCAC (CcNotifyOfMappedWrite.c)
 *     PopDequeueQuerySetIrp @ 0x140375DBC (PopDequeueQuerySetIrp.c)
 *     PopFreeIrp @ 0x1403764AC (PopFreeIrp.c)
 *     PopQueueQuerySetIrp @ 0x140376E74 (PopQueueQuerySetIrp.c)
 *     PopAllocateIrp @ 0x1403775F8 (PopAllocateIrp.c)
 *     HalpDmaReturnToContiguousPool @ 0x14037CF3C (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x14038D194 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x14038D660 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolV3 @ 0x14038D84C (HalpDmaAllocateScatterPagesFromScatterPoolV3.c)
 *     IopMapTransfer @ 0x14038DCD0 (IopMapTransfer.c)
 *     KeInsertDeviceQueue @ 0x14038E850 (KeInsertDeviceQueue.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038E95C (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x14038ED80 (HalpAllocateAdapterCallbackV2.c)
 *     IoMapTransferInternal @ 0x140390384 (IoMapTransferInternal.c)
 *     HalpDmaFreeMapRegisters @ 0x1403908D4 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x140390B70 (KeRemoveDeviceQueue.c)
 *     HalpDmaDequeueAdapter @ 0x140390CA0 (HalpDmaDequeueAdapter.c)
 *     HalpDmaReturnPageToOwner @ 0x140390E84 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnToScatterPool @ 0x140390FF0 (HalpDmaReturnToScatterPool.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x140391440 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1403917D4 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140393600 (KeRemoveByKeyDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x140393850 (KeInsertByKeyDeviceQueue.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403A9DD0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1403BC880 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403BCF10 (AlpcpQueueIoCompletionPort.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403BEB10 (ExpWorkerFactoryCheckCreate.c)
 *     ExpShutdownWorkerFactory @ 0x1403BF0B0 (ExpShutdownWorkerFactory.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1403D79F8 (ExpConvertExclusiveToSharedLite.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1403D8F34 (PopCompleteNotifyTransitionCommon.c)
 *     PoHandleIrp @ 0x1403D99EC (PoHandleIrp.c)
 *     WmipWriteWnodeToObject @ 0x1403DC55C (WmipWriteWnodeToObject.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403E8C80 (ExAcquireSharedWaitForExclusive.c)
 *     ExpExpandResourceOwnerTable @ 0x1403E912C (ExpExpandResourceOwnerTable.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 *     IopDeleteIoCompletionInternal @ 0x14041B6F8 (IopDeleteIoCompletionInternal.c)
 *     PopWakeDeviceList @ 0x140427ABC (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140427CE4 (PopSleepDeviceList.c)
 *     CcLazyWriteScan @ 0x14043BAE8 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x14043C240 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcCoalescingCallBackHelper @ 0x14043C800 (CcCoalescingCallBackHelper.c)
 *     PoQueryWatchdogTime @ 0x140440D30 (PoQueryWatchdogTime.c)
 *     CcSetParallelFlushFile @ 0x1404450F0 (CcSetParallelFlushFile.c)
 *     CcSetLogHandleForFileEx @ 0x140446A80 (CcSetLogHandleForFileEx.c)
 *     CcChangeBackingFileObject @ 0x140450FA0 (CcChangeBackingFileObject.c)
 *     CcIsThereDirtyLoggedPages @ 0x140455490 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x14045A120 (CcWaitForUninitializeCacheMap.c)
 *     CcMapDataForOverwrite @ 0x14045C1D0 (CcMapDataForOverwrite.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x1404610E0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     CcMdlWriteComplete2 @ 0x140461194 (CcMdlWriteComplete2.c)
 *     CcSetDirtyInMask @ 0x1404614E0 (CcSetDirtyInMask.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140461D64 (CcUpdateSharedCacheMapFlag.c)
 *     CcUpdateReadHistory @ 0x140462070 (CcUpdateReadHistory.c)
 *     NtWorkerFactoryWorkerReady @ 0x14046AFC0 (NtWorkerFactoryWorkerReady.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14046BB18 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceRelease @ 0x14046BD60 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14046BE70 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14046BFAC (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestHandleClose @ 0x14046C044 (PopPowerRequestHandleClose.c)
 *     PopPowerRequestCallbackWorker @ 0x14046C280 (PopPowerRequestCallbackWorker.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x140470198 (AlpcpFreeCompletionPacketLookaside.c)
 *     WmipReceiveNotifications @ 0x14047A844 (WmipReceiveNotifications.c)
 *     ExpDeleteWorkerFactory @ 0x14047C610 (ExpDeleteWorkerFactory.c)
 *     KeQuerySchedulingGroupHistory @ 0x1404807C4 (KeQuerySchedulingGroupHistory.c)
 *     CcIsThereDirtyDataHelper @ 0x140480A40 (CcIsThereDirtyDataHelper.c)
 *     WmipCompleteGuidIrpWithError @ 0x1404893F0 (WmipCompleteGuidIrpWithError.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x14048F648 (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaGetTranslationEntries @ 0x14048F7B4 (HalpDmaGetTranslationEntries.c)
 *     CcScheduleReadAheadNuma @ 0x1404992C0 (CcScheduleReadAheadNuma.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1404A08EC (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     PopUpdateWakeSource @ 0x1404A0ACC (PopUpdateWakeSource.c)
 *     KeRemoveSchedulingGroup @ 0x1404A45D8 (KeRemoveSchedulingGroup.c)
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 *     CcGetFileObjectFromSectionPtrs @ 0x1404A6FE0 (CcGetFileObjectFromSectionPtrs.c)
 *     PopGetMostRecentWakeInfo @ 0x1404B409C (PopGetMostRecentWakeInfo.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404B4CB0 (PopPowerRequestUnrevokeRequests.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1404B4F00 (CcAddDirtyPagesToExternalCache.c)
 *     CcQuickLazyWriteScanForVolume @ 0x1404B54A0 (CcQuickLazyWriteScanForVolume.c)
 *     CcLazyWriteScanVolume @ 0x1404B5560 (CcLazyWriteScanVolume.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B659C (PopPowerRequestRevokeRequests.c)
 *     CcPostWorkQueueSpecial @ 0x1404B6678 (CcPostWorkQueueSpecial.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1404B8134 (CcPostPVCMForDeleteToPartition.c)
 *     CcPostPVCMDelayedDelete @ 0x1404B825C (CcPostPVCMDelayedDelete.c)
 *     PopGetCurrentWakeInfos @ 0x1404BCFE4 (PopGetCurrentWakeInfos.c)
 *     CcSetLoggedDataThreshold @ 0x1404BD260 (CcSetLoggedDataThreshold.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1404C229C (PopRecordPoIrpBlackboxInformation.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C768C (CcAsyncLazywriteWorkerMulti.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1404CA254 (PopReleaseWakeSourceSpinLock.c)
 *     NtQueryInformationWorkerFactory @ 0x1404CCDB0 (NtQueryInformationWorkerFactory.c)
 *     CcLogExtraWBThreadAction @ 0x1404CD4DC (CcLogExtraWBThreadAction.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404CE494 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     IoPerfInit @ 0x1404D2A28 (IoPerfInit.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404D9218 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaQueueAdapter @ 0x1404D9E04 (HalpDmaQueueAdapter.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404DB3D0 (CcWorkerThread.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DC470 (CcAcquireByteRangeForWrite.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     CcPerformReadAhead @ 0x1404DDEB0 (CcPerformReadAhead.c)
 *     CcSetAdditionalCacheAttributes @ 0x1404DE880 (CcSetAdditionalCacheAttributes.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x1404DE940 (CcSetAdditionalCacheAttributesEx.c)
 *     CcGetPartitionWithCreate @ 0x1404DEB40 (CcGetPartitionWithCreate.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404DEF40 (CcAsyncLazywriteWorkerThread.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404DF0A0 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcCompleteAsyncRead @ 0x1404DF87C (CcCompleteAsyncRead.c)
 *     IopCloseWaitCompletionPacket @ 0x1404E5B40 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x1404E5EF0 (NtCancelWaitCompletionPacket.c)
 *     PopIrpWorker @ 0x1404EBF10 (PopIrpWorker.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x14053C26C (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x14053C744 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalReadDmaCounterV2 @ 0x14053DF50 (HalReadDmaCounterV2.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14054F1B4 (HalpDmaCommitContiguousMapBuffers.c)
 *     CcGetFileObjectFromSectionPtrsRef @ 0x140579E90 (CcGetFileObjectFromSectionPtrsRef.c)
 *     CcQueueLazyWriteScanThread @ 0x14057A5C0 (CcQueueLazyWriteScanThread.c)
 *     CcRegisterExternalCacheEx @ 0x14057A990 (CcRegisterExternalCacheEx.c)
 *     CcUpdateExternalCacheInfoEx @ 0x14057AD00 (CcUpdateExternalCacheInfoEx.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x14057AEF8 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcDeferWrite @ 0x14057B140 (CcDeferWrite.c)
 *     CcErrorCallbackRoutine @ 0x14057B2B0 (CcErrorCallbackRoutine.c)
 *     CcIsThereDirtyDataEx @ 0x14057C090 (CcIsThereDirtyDataEx.c)
 *     CcSetLogHandleForFile @ 0x14057C170 (CcSetLogHandleForFile.c)
 *     CcMdlWriteAbort @ 0x14057C350 (CcMdlWriteAbort.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x14057C3FC (CcDrainDelayDeleteForPartitionExit.c)
 *     CcProcessDelayedDeletePVCM @ 0x14057C520 (CcProcessDelayedDeletePVCM.c)
 *     CcDeletePartition @ 0x14057C6EC (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x14057C948 (CcDeleteSectionsForPartition.c)
 *     CcExitPartition @ 0x14057CB90 (CcExitPartition.c)
 *     CcGetDeviceGuidAsync @ 0x14057D5C0 (CcGetDeviceGuidAsync.c)
 *     CcCompleteAsyncLazywriteWorker @ 0x14057DEFC (CcCompleteAsyncLazywriteWorker.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x14057DFC0 (CcCompleteAsyncLazywriteWorkerThread.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057E074 (CcCompleteAsyncWriteBehind.c)
 *     IopIrpExtensionControl @ 0x140596548 (IopIrpExtensionControl.c)
 *     IopUpdateFunctionPointers @ 0x14059661C (IopUpdateFunctionPointers.c)
 *     IoCancelMiniCompletionPacket @ 0x140597100 (IoCancelMiniCompletionPacket.c)
 *     IoPerfReset @ 0x1405975FC (IoPerfReset.c)
 *     KeRemoveEntryDeviceQueue @ 0x1405BD060 (KeRemoveEntryDeviceQueue.c)
 *     ?KiEnableGroupScheduling@@YAXXZ @ 0x1405C7400 (-KiEnableGroupScheduling@@YAXXZ.c)
 *     KeTraceSchedulingGroupRundown @ 0x1405C7810 (KeTraceSchedulingGroupRundown.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405C7904 (KeUpdateGroupSchedulingConstants.c)
 *     PfpPartitionInsertToGlobals @ 0x1405CC9C0 (PfpPartitionInsertToGlobals.c)
 *     PfpPartitionRemoveFromGlobals @ 0x1405CCA9C (PfpPartitionRemoveFromGlobals.c)
 *     PopDereferenceWakeInfos @ 0x1405D32CC (PopDereferenceWakeInfos.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x14060816C (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     DifKeReleaseInStackQueuedSpinLockWrapper @ 0x14062F660 (DifKeReleaseInStackQueuedSpinLockWrapper.c)
 *     ExPoolQueryLimits @ 0x140654308 (ExPoolQueryLimits.c)
 *     ExpPlGrowTableIfNeeded @ 0x140654F74 (ExpPlGrowTableIfNeeded.c)
 *     ExpTrackTableInsertLimit @ 0x140655330 (ExpTrackTableInsertLimit.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x140656F90 (ExpTryConvertSharedToExclusiveLite.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x14065704C (ExpTryToAcquireResourceExclusiveLite.c)
 *     ExpWorkerFactoryManagerThread @ 0x14065AA40 (ExpWorkerFactoryManagerThread.c)
 *     PnprMarkOrMirrorPages @ 0x140B54268 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140B5AD94 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     PopBroadcastBlameBugcheckCallback @ 0x140B5F640 (PopBroadcastBlameBugcheckCallback.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v1; // rdx
  unsigned __int64 OldIrql; // rbx
  __int64 Next; // rax
  unsigned __int64 *volatile Lock; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // si
  __int64 v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(LockHandle, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(LockHandle);
  Next = (__int64)LockHandle->LockQueue.Next;
  if ( !LockHandle->LockQueue.Next )
  {
    if ( LockHandle == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                              0LL,
                                              (signed __int64)LockHandle) )
      goto LABEL_4;
    Next = KxWaitForLockChainValid(LockHandle);
  }
  LockHandle->LockQueue.Next = 0LL;
  Lock = LockHandle->LockQueue.Lock;
  if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(Next + 8), (__int64)Lock)) & 4) != 0 )
  {
    _InterlockedOr(v14, 0);
    v8 = KeDisableInterrupts(Lock, v1, ((unsigned __int64)(Next + 8) >> 5) & 0x7F);
    KiHaltOnAddressWakeEntireList(v9, _InterlockedExchange64((volatile __int64 *)(v7 + 8 * v6), 0LL));
    if ( v8 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v12 = *SchedulerAssist;
        do
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
        }
        while ( v13 != v12 );
        if ( (v12 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
LABEL_4:
  OldIrql = LockHandle->OldIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)OldIrql);
  __writecr8(OldIrql);
}
