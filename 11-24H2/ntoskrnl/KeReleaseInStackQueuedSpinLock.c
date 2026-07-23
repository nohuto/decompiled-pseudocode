/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x14022B260
 * Callers:
 *     CcPurgeCacheSection @ 0x1402070C0 (CcPurgeCacheSection.c)
 *     CcFlushCacheOneRange @ 0x140208260 (CcFlushCacheOneRange.c)
 *     IopRecordIoAttribution @ 0x14020D740 (IopRecordIoAttribution.c)
 *     ExpWorkerFactoryCreateThread @ 0x14020F0C8 (ExpWorkerFactoryCreateThread.c)
 *     ExpInsertPoolTracker @ 0x14021BE10 (ExpInsertPoolTracker.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140229A50 (ExpAcquireSharedStarveExclusive.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14022A090 (ExIsResourceAcquiredSharedLite.c)
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x140263914 (CcForEachPrivateVolumeCacheMap.c)
 *     CcCoalescingCallBackHelper @ 0x140264D90 (CcCoalescingCallBackHelper.c)
 *     CcLazyWriteScan @ 0x1402654C8 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140265C20 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcAsyncCopyRead @ 0x140273E20 (CcAsyncCopyRead.c)
 *     CcGetDirtyPagesHelper @ 0x140274DD0 (CcGetDirtyPagesHelper.c)
 *     CcFlushCachePostProcessOneRange @ 0x140275FC0 (CcFlushCachePostProcessOneRange.c)
 *     CcUnpinFileDataEx @ 0x1402766A0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1402769E0 (CcSetDirtyPinnedData.c)
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcess @ 0x1402791F0 (CcFlushCachePostProcess.c)
 *     CcPostWorkQueueCachemapUninit @ 0x14027973C (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehindPreProcess @ 0x14027A224 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     CcCachemapUninitWorkerThread @ 0x14027AAB0 (CcCachemapUninitWorkerThread.c)
 *     CcPostWorkQueueRegular @ 0x14027AE98 (CcPostWorkQueueRegular.c)
 *     CcAsyncLazywriteWorker @ 0x14027B0C8 (CcAsyncLazywriteWorker.c)
 *     CcRepostToSynchronousLazywriter @ 0x14027B688 (CcRepostToSynchronousLazywriter.c)
 *     PopDequeueQuerySetIrp @ 0x1402BA5A0 (PopDequeueQuerySetIrp.c)
 *     NtShutdownWorkerFactory @ 0x1402BB2B0 (NtShutdownWorkerFactory.c)
 *     AlpcpSignal @ 0x1402C46F0 (AlpcpSignal.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     CcDeleteMbcb @ 0x1402E5278 (CcDeleteMbcb.c)
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402E6180 (CcDecrementVolumeUseCountWithDelete.c)
 *     HalpDmaReturnToContiguousPool @ 0x1402EA454 (HalpDmaReturnToContiguousPool.c)
 *     CcNotifyOfMappedWrite @ 0x1402EDA4C (CcNotifyOfMappedWrite.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1402F14D8 (ExpConvertExclusiveToSharedLite.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1402F2208 (PopCompleteNotifyTransitionCommon.c)
 *     IoDiskIoAttributionQuery @ 0x140314874 (IoDiskIoAttributionQuery.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     NtSetInformationWorkerFactory @ 0x14032BA00 (NtSetInformationWorkerFactory.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     ExpRemovePoolTrackerExpansion @ 0x14035B760 (ExpRemovePoolTrackerExpansion.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x140386AD4 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x140386FA0 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolV3 @ 0x14038718C (HalpDmaAllocateScatterPagesFromScatterPoolV3.c)
 *     IopMapTransfer @ 0x140387610 (IopMapTransfer.c)
 *     KeInsertDeviceQueue @ 0x140388190 (KeInsertDeviceQueue.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403886C0 (HalpAllocateAdapterCallbackV2.c)
 *     IoMapTransferInternal @ 0x140389CC4 (IoMapTransferInternal.c)
 *     HalpDmaFreeMapRegisters @ 0x14038A214 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x14038A4B0 (KeRemoveDeviceQueue.c)
 *     HalpDmaDequeueAdapter @ 0x14038A5E0 (HalpDmaDequeueAdapter.c)
 *     HalpDmaReturnPageToOwner @ 0x14038A7B4 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnToScatterPool @ 0x14038A920 (HalpDmaReturnToScatterPool.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x14038AD70 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14038B104 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     KeRemoveByKeyDeviceQueue @ 0x14038CF30 (KeRemoveByKeyDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x14038D180 (KeInsertByKeyDeviceQueue.c)
 *     ExAllocateContiguousHeapPool @ 0x140396AFC (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140396EF0 (ExpInsertPoolTrackerExpansion.c)
 *     PopFreeIrp @ 0x1403A7BB8 (PopFreeIrp.c)
 *     PopAllocateIrp @ 0x1403A8268 (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x1403A96B4 (PopQueueQuerySetIrp.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403AD210 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403AD7A0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpShutdownWorkerFactory @ 0x1403ADC94 (ExpShutdownWorkerFactory.c)
 *     SepRmCallLsa @ 0x1403C17F0 (SepRmCallLsa.c)
 *     SepQueueWorkItem @ 0x1403C35C4 (SepQueueWorkItem.c)
 *     WmipWriteWnodeToObject @ 0x1403CBB50 (WmipWriteWnodeToObject.c)
 *     PoHandleIrp @ 0x1403CBD64 (PoHandleIrp.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403D6820 (ExAcquireSharedWaitForExclusive.c)
 *     ExpExpandResourceOwnerTable @ 0x1403D6CCC (ExpExpandResourceOwnerTable.c)
 *     ExDisableResourceBoostLite @ 0x1403EAB30 (ExDisableResourceBoostLite.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1403FE770 (ExpSetResourceOwnerPointerEx.c)
 *     CcPrepareMdlWrite @ 0x14040B2B0 (CcPrepareMdlWrite.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14040B624 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x14040B790 (CcGetFlushedValidData.c)
 *     CcScanLogHandleList @ 0x14040BD34 (CcScanLogHandleList.c)
 *     CcInitializeVolumeCacheMap @ 0x14040BF18 (CcInitializeVolumeCacheMap.c)
 *     CcForceWriteThrough @ 0x14040C010 (CcForceWriteThrough.c)
 *     CcCanIWriteStreamEx @ 0x14040C5C0 (CcCanIWriteStreamEx.c)
 *     IopDeleteIoCompletionInternal @ 0x14040F238 (IopDeleteIoCompletionInternal.c)
 *     IopCloseWaitCompletionPacket @ 0x14041B150 (IopCloseWaitCompletionPacket.c)
 *     PopWakeDeviceList @ 0x14041BC4C (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14041BE74 (PopSleepDeviceList.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14042AA30 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x14042FBD0 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x14042FE00 (CcCreatePrivateVolumeCacheMap.c)
 *     CcFindPrivateVolumeCacheMap @ 0x14042FF54 (CcFindPrivateVolumeCacheMap.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x140430768 (CcInsertPrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1404309A4 (CcDeletePrivateVolumeCacheMap.c)
 *     PoQueryWatchdogTime @ 0x140437AB0 (PoQueryWatchdogTime.c)
 *     CcSetParallelFlushFile @ 0x14043D2A0 (CcSetParallelFlushFile.c)
 *     CcSetLogHandleForFileEx @ 0x14043EE30 (CcSetLogHandleForFileEx.c)
 *     CcChangeBackingFileObject @ 0x140446404 (CcChangeBackingFileObject.c)
 *     CcIsThereDirtyLoggedPages @ 0x14044A240 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x14044F570 (CcWaitForUninitializeCacheMap.c)
 *     CcMapDataForOverwrite @ 0x140451570 (CcMapDataForOverwrite.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x1404566F0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     CcMdlWriteComplete2 @ 0x1404567A4 (CcMdlWriteComplete2.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140457374 (CcUpdateSharedCacheMapFlag.c)
 *     CcUpdateReadHistory @ 0x140457680 (CcUpdateReadHistory.c)
 *     KeSetSchedulingGroupWeights @ 0x14045C2E8 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x14045C5E8 (KeSetSchedulingGroupCpuRates.c)
 *     KeInsertSchedulingGroup @ 0x14045CB04 (KeInsertSchedulingGroup.c)
 *     NtWorkerFactoryWorkerReady @ 0x140463A40 (NtWorkerFactoryWorkerReady.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x140464798 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceRelease @ 0x1404649E0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x140464AF0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x140464C2C (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestHandleClose @ 0x140464CC4 (PopPowerRequestHandleClose.c)
 *     PopPowerRequestCallbackWorker @ 0x140464F00 (PopPowerRequestCallbackWorker.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x14046A5C0 (AlpcpFreeCompletionPacketLookaside.c)
 *     WmipReceiveNotifications @ 0x140475EC4 (WmipReceiveNotifications.c)
 *     ExpDeleteWorkerFactory @ 0x140477820 (ExpDeleteWorkerFactory.c)
 *     KeQuerySchedulingGroupHistory @ 0x14047B298 (KeQuerySchedulingGroupHistory.c)
 *     CcIsThereDirtyDataHelper @ 0x14047B510 (CcIsThereDirtyDataHelper.c)
 *     WmipCompleteGuidIrpWithError @ 0x140484410 (WmipCompleteGuidIrpWithError.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x140489858 (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaGetTranslationEntries @ 0x1404899C4 (HalpDmaGetTranslationEntries.c)
 *     CcScheduleReadAheadNuma @ 0x140493C50 (CcScheduleReadAheadNuma.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x140496AE0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14049AF6C (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     PopUpdateWakeSource @ 0x14049B14C (PopUpdateWakeSource.c)
 *     KeRemoveSchedulingGroup @ 0x14049F368 (KeRemoveSchedulingGroup.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 *     CcGetFileObjectFromSectionPtrs @ 0x1404A1940 (CcGetFileObjectFromSectionPtrs.c)
 *     PopGetMostRecentWakeInfo @ 0x1404AE8BC (PopGetMostRecentWakeInfo.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404AF4B0 (PopPowerRequestUnrevokeRequests.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1404AF700 (CcAddDirtyPagesToExternalCache.c)
 *     CcQuickLazyWriteScanForVolume @ 0x1404AFD40 (CcQuickLazyWriteScanForVolume.c)
 *     CcLazyWriteScanVolume @ 0x1404AFE00 (CcLazyWriteScanVolume.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B0D7C (PopPowerRequestRevokeRequests.c)
 *     CcPostWorkQueueSpecial @ 0x1404B0E58 (CcPostWorkQueueSpecial.c)
 *     CcDeleteBcbs @ 0x1404B21D4 (CcDeleteBcbs.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1404B2A84 (CcPostPVCMForDeleteToPartition.c)
 *     CcPostPVCMDelayedDelete @ 0x1404B2BAC (CcPostPVCMDelayedDelete.c)
 *     PopGetCurrentWakeInfos @ 0x1404B8154 (PopGetCurrentWakeInfos.c)
 *     CcSetLoggedDataThreshold @ 0x1404B83D0 (CcSetLoggedDataThreshold.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1404BD7D4 (PopRecordPoIrpBlackboxInformation.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C0AEC (CcAsyncLazywriteWorkerMulti.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1404C35A4 (PopReleaseWakeSourceSpinLock.c)
 *     NtQueryInformationWorkerFactory @ 0x1404C6180 (NtQueryInformationWorkerFactory.c)
 *     CcLogExtraWBThreadAction @ 0x1404C68AC (CcLogExtraWBThreadAction.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404C7760 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     IoPerfInit @ 0x1404CBBE8 (IoPerfInit.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404D2668 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaQueueAdapter @ 0x1404D3844 (HalpDmaQueueAdapter.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404D4DF0 (CcWorkerThread.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     CcAcquireByteRangeForWrite @ 0x1404D5E90 (CcAcquireByteRangeForWrite.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 *     CcPerformReadAhead @ 0x1404D78D0 (CcPerformReadAhead.c)
 *     CcSetAdditionalCacheAttributes @ 0x1404D82A0 (CcSetAdditionalCacheAttributes.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x1404D8360 (CcSetAdditionalCacheAttributesEx.c)
 *     CcGetPartitionWithCreate @ 0x1404D8560 (CcGetPartitionWithCreate.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404D8960 (CcAsyncLazywriteWorkerThread.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404D8AC0 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcCompleteAsyncRead @ 0x1404D929C (CcCompleteAsyncRead.c)
 *     NtCancelWaitCompletionPacket @ 0x1404DC5F0 (NtCancelWaitCompletionPacket.c)
 *     PopIrpWorker @ 0x1404E3650 (PopIrpWorker.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140539AF8 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x140539FD0 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalReadDmaCounterV2 @ 0x14053B850 (HalReadDmaCounterV2.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14054CAF4 (HalpDmaCommitContiguousMapBuffers.c)
 *     CcGetFileObjectFromSectionPtrsRef @ 0x140577320 (CcGetFileObjectFromSectionPtrsRef.c)
 *     CcQueueLazyWriteScanThread @ 0x140577A50 (CcQueueLazyWriteScanThread.c)
 *     CcRegisterExternalCacheEx @ 0x140577E20 (CcRegisterExternalCacheEx.c)
 *     CcUpdateExternalCacheInfoEx @ 0x140578190 (CcUpdateExternalCacheInfoEx.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140578388 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcDeferWrite @ 0x1405785D0 (CcDeferWrite.c)
 *     CcErrorCallbackRoutine @ 0x140578740 (CcErrorCallbackRoutine.c)
 *     CcIsThereDirtyDataEx @ 0x140579520 (CcIsThereDirtyDataEx.c)
 *     CcSetLogHandleForFile @ 0x140579600 (CcSetLogHandleForFile.c)
 *     CcMdlWriteAbort @ 0x1405797E0 (CcMdlWriteAbort.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x14057988C (CcDrainDelayDeleteForPartitionExit.c)
 *     CcProcessDelayedDeletePVCM @ 0x1405799B0 (CcProcessDelayedDeletePVCM.c)
 *     CcDeletePartition @ 0x140579B7C (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140579DD8 (CcDeleteSectionsForPartition.c)
 *     CcExitPartition @ 0x14057A020 (CcExitPartition.c)
 *     CcGetDeviceGuidAsync @ 0x14057AA50 (CcGetDeviceGuidAsync.c)
 *     CcCompleteAsyncLazywriteWorker @ 0x14057B38C (CcCompleteAsyncLazywriteWorker.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x14057B450 (CcCompleteAsyncLazywriteWorkerThread.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057B504 (CcCompleteAsyncWriteBehind.c)
 *     IopIrpExtensionControl @ 0x140593578 (IopIrpExtensionControl.c)
 *     IopUpdateFunctionPointers @ 0x14059364C (IopUpdateFunctionPointers.c)
 *     IoCancelMiniCompletionPacket @ 0x140594080 (IoCancelMiniCompletionPacket.c)
 *     IoPerfReset @ 0x14059457C (IoPerfReset.c)
 *     KeRemoveEntryDeviceQueue @ 0x1405BA690 (KeRemoveEntryDeviceQueue.c)
 *     ?KiEnableGroupScheduling@@YAXXZ @ 0x1405C4B30 (-KiEnableGroupScheduling@@YAXXZ.c)
 *     KeTraceSchedulingGroupRundown @ 0x1405C4F40 (KeTraceSchedulingGroupRundown.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405C5034 (KeUpdateGroupSchedulingConstants.c)
 *     PfpPartitionInsertToGlobals @ 0x1405CA130 (PfpPartitionInsertToGlobals.c)
 *     PfpPartitionRemoveFromGlobals @ 0x1405CA20C (PfpPartitionRemoveFromGlobals.c)
 *     PopDereferenceWakeInfos @ 0x1405D09EC (PopDereferenceWakeInfos.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x140605870 (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     DifKeReleaseInStackQueuedSpinLockWrapper @ 0x14062DC20 (DifKeReleaseInStackQueuedSpinLockWrapper.c)
 *     ExPoolQueryLimits @ 0x140652A00 (ExPoolQueryLimits.c)
 *     ExpPlGrowTableIfNeeded @ 0x140653674 (ExpPlGrowTableIfNeeded.c)
 *     ExpTrackTableInsertLimit @ 0x140653A30 (ExpTrackTableInsertLimit.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x140655690 (ExpTryConvertSharedToExclusiveLite.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x14065574C (ExpTryToAcquireResourceExclusiveLite.c)
 *     ExpWorkerFactoryManagerThread @ 0x140659160 (ExpWorkerFactoryManagerThread.c)
 *     PnprMarkOrMirrorPages @ 0x140B562B8 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140B5CE04 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     PopBroadcastBlameBugcheckCallback @ 0x140B616C0 (PopBroadcastBlameBugcheckCallback.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF
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
    _InterlockedOr(v13, 0);
    v8 = KeDisableInterrupts(Lock, v1, ((unsigned __int64)(Next + 8) >> 5) & 0x7F, &KiHaltOnAddressHashTable);
    KiHaltOnAddressWakeEntireList(v9, _InterlockedExchange64((volatile __int64 *)(v7 + 8 * v6), 0LL));
    if ( v8 )
    {
      SchedulerAssist = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v11 = *SchedulerAssist;
        do
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
        }
        while ( v12 != v11 );
        if ( (v11 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick();
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
