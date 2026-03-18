/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x140302580
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140206060 (ExpWorkerFactoryCreateThread.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1402800E8 (ExpConvertExclusiveToSharedLite.c)
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     CcFlushCacheOneRange @ 0x1402C13D0 (CcFlushCacheOneRange.c)
 *     CcPurgeCacheSection @ 0x1402C4260 (CcPurgeCacheSection.c)
 *     CcGetDirtyPagesHelper @ 0x1402C56E0 (CcGetDirtyPagesHelper.c)
 *     CcMdlWriteComplete2 @ 0x1402D2A60 (CcMdlWriteComplete2.c)
 *     CcSetDirtyInMask @ 0x1402D5CB0 (CcSetDirtyInMask.c)
 *     ExDisableResourceBoostLite @ 0x1402D6770 (ExDisableResourceBoostLite.c)
 *     CcSetDirtyPinnedData @ 0x1402D6A70 (CcSetDirtyPinnedData.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402D8890 (ExpAcquireSharedStarveExclusive.c)
 *     CcUnpinFileDataEx @ 0x1402D8ED0 (CcUnpinFileDataEx.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402D9210 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCachePostProcess @ 0x1402D9BE0 (CcFlushCachePostProcess.c)
 *     CcFlushCachePreProcess @ 0x1402D9F6C (CcFlushCachePreProcess.c)
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402E0260 (ExpRemovePoolTrackerExpansion.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1402F5B44 (KeSetSchedulingGroupCpuRates.c)
 *     KeInsertSchedulingGroup @ 0x1402F5D80 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupWeights @ 0x1402F68E8 (KeSetSchedulingGroupWeights.c)
 *     ExAllocateContiguousHeapPool @ 0x1402F7F74 (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTracker @ 0x1402FD7BC (ExpInsertPoolTracker.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1402FE0E0 (ExpInsertPoolTrackerExpansion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140301360 (ExIsResourceAcquiredSharedLite.c)
 *     PfFileInfoNotify @ 0x140301AC0 (PfFileInfoNotify.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140303210 (ExpSetResourceOwnerPointerEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140303CE0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140304090 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x140333444 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x140333910 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolV3 @ 0x140333AF0 (HalpDmaAllocateScatterPagesFromScatterPoolV3.c)
 *     IoMapTransferInternal @ 0x140333E20 (IoMapTransferInternal.c)
 *     IopMapTransfer @ 0x140334310 (IopMapTransfer.c)
 *     KeInsertDeviceQueue @ 0x140334EB0 (KeInsertDeviceQueue.c)
 *     HalpDmaAllocateMapRegisters @ 0x140334FBC (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403353E0 (HalpAllocateAdapterCallbackV2.c)
 *     HalpDmaFreeMapRegisters @ 0x140336C24 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x140336ED0 (KeRemoveDeviceQueue.c)
 *     HalpDmaDequeueAdapter @ 0x140337000 (HalpDmaDequeueAdapter.c)
 *     HalpDmaReturnPageToOwner @ 0x140337190 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnToScatterPool @ 0x1403372FC (HalpDmaReturnToScatterPool.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x1403378A0 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaReturnToContiguousPool @ 0x140337CE4 (HalpDmaReturnToContiguousPool.c)
 *     PopQueueQuerySetIrp @ 0x14034DCB8 (PopQueueQuerySetIrp.c)
 *     IopRecordIoAttribution @ 0x14034E818 (IopRecordIoAttribution.c)
 *     IoDiskIoAttributionQuery @ 0x14034F130 (IoDiskIoAttributionQuery.c)
 *     PopIrpWorker @ 0x140356760 (PopIrpWorker.c)
 *     PoHandleIrp @ 0x140356C48 (PoHandleIrp.c)
 *     PopDequeueQuerySetIrp @ 0x14035836C (PopDequeueQuerySetIrp.c)
 *     PopFreeIrp @ 0x14035860C (PopFreeIrp.c)
 *     PopAllocateIrp @ 0x140359E20 (PopAllocateIrp.c)
 *     NtShutdownWorkerFactory @ 0x14036D940 (NtShutdownWorkerFactory.c)
 *     ExpShutdownWorkerFactory @ 0x14036EF50 (ExpShutdownWorkerFactory.c)
 *     CcDeleteMbcb @ 0x1403A3FF8 (CcDeleteMbcb.c)
 *     CcScanLogHandleList @ 0x1403A4C00 (CcScanLogHandleList.c)
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1403A53D0 (CcDecrementVolumeUseCountWithDelete.c)
 *     CcInitializeVolumeCacheMap @ 0x1403A5574 (CcInitializeVolumeCacheMap.c)
 *     CcForceWriteThrough @ 0x1403A5660 (CcForceWriteThrough.c)
 *     CcDeleteBcbs @ 0x1403A5A90 (CcDeleteBcbs.c)
 *     CcCanIWriteStreamEx @ 0x1403A62E0 (CcCanIWriteStreamEx.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403A6590 (CcForEachPrivateVolumeCacheMap.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1403A6780 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x1403A68F0 (CcGetFlushedValidData.c)
 *     CcPrepareMdlWrite @ 0x1403A6EA0 (CcPrepareMdlWrite.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x1403A72C0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcCoalescingCallBackHelper @ 0x1403A7800 (CcCoalescingCallBackHelper.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1403A81B8 (CcCreatePrivateVolumeCacheMap.c)
 *     CcFindPrivateVolumeCacheMap @ 0x1403A830C (CcFindPrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403A8B18 (CcDeletePrivateVolumeCacheMap.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403A92B4 (CcInsertPrivateVolumeCacheMap.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x1403A9EE0 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403AA230 (CcWaitForUninitializeCacheMap.c)
 *     CcAsyncCopyRead @ 0x1403AAC00 (CcAsyncCopyRead.c)
 *     CcRepostToSynchronousLazywriter @ 0x1403AAF90 (CcRepostToSynchronousLazywriter.c)
 *     CcAsyncLazywriteWorker @ 0x1403AB228 (CcAsyncLazywriteWorker.c)
 *     CcPostWorkQueueRegular @ 0x1403ABCE4 (CcPostWorkQueueRegular.c)
 *     CcCachemapUninitWorkerThread @ 0x1403ABE90 (CcCachemapUninitWorkerThread.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1403AC174 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehindPreProcess @ 0x1403ACA84 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     SepQueueWorkItem @ 0x1403D74A8 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x1403D8550 (SepRmCallLsa.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403DF600 (ExAcquireSharedWaitForExclusive.c)
 *     ExpExpandResourceOwnerTable @ 0x1403DFACC (ExpExpandResourceOwnerTable.c)
 *     CcNotifyOfMappedWrite @ 0x14040ECD8 (CcNotifyOfMappedWrite.c)
 *     IopDeleteIoCompletionInternal @ 0x14041E268 (IopDeleteIoCompletionInternal.c)
 *     IopCloseWaitCompletionPacket @ 0x14042E9D0 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x14042EAC0 (NtCancelWaitCompletionPacket.c)
 *     PopWakeDeviceList @ 0x14043154C (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140431774 (PopSleepDeviceList.c)
 *     NtSetInformationWorkerFactory @ 0x14043ED50 (NtSetInformationWorkerFactory.c)
 *     PoQueryWatchdogTime @ 0x140441400 (PoQueryWatchdogTime.c)
 *     CcSetParallelFlushFile @ 0x1404438A0 (CcSetParallelFlushFile.c)
 *     CcSetLogHandleForFileEx @ 0x140448570 (CcSetLogHandleForFileEx.c)
 *     CcChangeBackingFileObject @ 0x14044F7A0 (CcChangeBackingFileObject.c)
 *     CcIsThereDirtyLoggedPages @ 0x140454E50 (CcIsThereDirtyLoggedPages.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1404570C0 (KeRemoveByKeyDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x140457310 (KeInsertByKeyDeviceQueue.c)
 *     CcMapDataForOverwrite @ 0x14045D4D0 (CcMapDataForOverwrite.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x1404623E0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140462750 (CcUpdateSharedCacheMapFlag.c)
 *     CcUpdateReadHistory @ 0x140462A00 (CcUpdateReadHistory.c)
 *     NtWorkerFactoryWorkerReady @ 0x14046C830 (NtWorkerFactoryWorkerReady.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14046D188 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceRelease @ 0x14046D3D0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14046D4E0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14046D61C (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestHandleClose @ 0x14046D6B4 (PopPowerRequestHandleClose.c)
 *     PopPowerRequestCallbackWorker @ 0x14046D8F0 (PopPowerRequestCallbackWorker.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x140472AF4 (AlpcpFreeCompletionPacketLookaside.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140477380 (PopCompleteNotifyTransitionCommon.c)
 *     WmipReceiveNotifications @ 0x1404797A0 (WmipReceiveNotifications.c)
 *     ExpDeleteWorkerFactory @ 0x14047B6F0 (ExpDeleteWorkerFactory.c)
 *     CcIsThereDirtyDataHelper @ 0x14047FC20 (CcIsThereDirtyDataHelper.c)
 *     KeQuerySchedulingGroupHistory @ 0x140482A3C (KeQuerySchedulingGroupHistory.c)
 *     WmipWriteWnodeToObject @ 0x14048564C (WmipWriteWnodeToObject.c)
 *     WmipCompleteGuidIrpWithError @ 0x140489C54 (WmipCompleteGuidIrpWithError.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x14048FCBC (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaGetTranslationEntries @ 0x14048FE28 (HalpDmaGetTranslationEntries.c)
 *     CcScheduleReadAheadNuma @ 0x140499150 (CcScheduleReadAheadNuma.c)
 *     HalpDmaQueueAdapter @ 0x14049DCFC (HalpDmaQueueAdapter.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1404A10F8 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     PopUpdateWakeSource @ 0x1404A11DC (PopUpdateWakeSource.c)
 *     CcSetFileSizesEx @ 0x1404A5BD0 (CcSetFileSizesEx.c)
 *     CcGetFileObjectFromSectionPtrs @ 0x1404A6630 (CcGetFileObjectFromSectionPtrs.c)
 *     KeRemoveSchedulingGroup @ 0x1404AC2B4 (KeRemoveSchedulingGroup.c)
 *     PopGetMostRecentWakeInfo @ 0x1404B478C (PopGetMostRecentWakeInfo.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404B5204 (PopPowerRequestUnrevokeRequests.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1404B5460 (CcAddDirtyPagesToExternalCache.c)
 *     CcQuickLazyWriteScanForVolume @ 0x1404B5A00 (CcQuickLazyWriteScanForVolume.c)
 *     CcLazyWriteScanVolume @ 0x1404B5AC0 (CcLazyWriteScanVolume.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B6AAC (PopPowerRequestRevokeRequests.c)
 *     CcPostWorkQueueSpecial @ 0x1404B6B88 (CcPostWorkQueueSpecial.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1404B88A4 (CcPostPVCMForDeleteToPartition.c)
 *     CcPostPVCMDelayedDelete @ 0x1404B89CC (CcPostPVCMDelayedDelete.c)
 *     PopGetCurrentWakeInfos @ 0x1404BDFB4 (PopGetCurrentWakeInfos.c)
 *     CcSetLoggedDataThreshold @ 0x1404BE1B0 (CcSetLoggedDataThreshold.c)
 *     CcLazyWriteScan @ 0x1404BE770 (CcLazyWriteScan.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1404C38F0 (PopRecordPoIrpBlackboxInformation.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x1404C5860 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C8A30 (CcAsyncLazywriteWorkerMulti.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1404C9F84 (PopReleaseWakeSourceSpinLock.c)
 *     NtQueryInformationWorkerFactory @ 0x1404CD1F0 (NtQueryInformationWorkerFactory.c)
 *     CcLogExtraWBThreadAction @ 0x1404CD8C8 (CcLogExtraWBThreadAction.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404CE6B4 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     IoPerfInit @ 0x1404D2B58 (IoPerfInit.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404D4CFC (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404DA268 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404DBCE0 (CcWorkerThread.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DCD80 (CcAcquireByteRangeForWrite.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 *     CcPerformReadAhead @ 0x1404DE7C0 (CcPerformReadAhead.c)
 *     CcSetAdditionalCacheAttributes @ 0x1404DF190 (CcSetAdditionalCacheAttributes.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x1404DF250 (CcSetAdditionalCacheAttributesEx.c)
 *     CcGetPartitionWithCreate @ 0x1404DF450 (CcGetPartitionWithCreate.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404DF850 (CcAsyncLazywriteWorkerThread.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404DF9B0 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcCompleteAsyncRead @ 0x1404E018C (CcCompleteAsyncRead.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140539A68 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x140539F40 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalReadDmaCounterV2 @ 0x14053B720 (HalReadDmaCounterV2.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14054C850 (HalpDmaCommitContiguousMapBuffers.c)
 *     CcGetFileObjectFromSectionPtrsRef @ 0x140576B90 (CcGetFileObjectFromSectionPtrsRef.c)
 *     CcQueueLazyWriteScanThread @ 0x1405772C0 (CcQueueLazyWriteScanThread.c)
 *     CcRegisterExternalCacheEx @ 0x140577690 (CcRegisterExternalCacheEx.c)
 *     CcUpdateExternalCacheInfoEx @ 0x1405779F0 (CcUpdateExternalCacheInfoEx.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140577BE8 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcDeferWrite @ 0x140577E30 (CcDeferWrite.c)
 *     CcErrorCallbackRoutine @ 0x140577FA0 (CcErrorCallbackRoutine.c)
 *     CcIsThereDirtyDataEx @ 0x140578D80 (CcIsThereDirtyDataEx.c)
 *     CcSetLogHandleForFile @ 0x140578E60 (CcSetLogHandleForFile.c)
 *     CcMdlWriteAbort @ 0x140579040 (CcMdlWriteAbort.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x1405790EC (CcDrainDelayDeleteForPartitionExit.c)
 *     CcProcessDelayedDeletePVCM @ 0x140579210 (CcProcessDelayedDeletePVCM.c)
 *     CcDeletePartition @ 0x1405793DC (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140579638 (CcDeleteSectionsForPartition.c)
 *     CcExitPartition @ 0x140579880 (CcExitPartition.c)
 *     CcGetDeviceGuidAsync @ 0x14057A2A0 (CcGetDeviceGuidAsync.c)
 *     CcCompleteAsyncLazywriteWorker @ 0x14057ABDC (CcCompleteAsyncLazywriteWorker.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x14057ACA0 (CcCompleteAsyncLazywriteWorkerThread.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057AD54 (CcCompleteAsyncWriteBehind.c)
 *     IopIrpExtensionControl @ 0x140592EE8 (IopIrpExtensionControl.c)
 *     IopUpdateFunctionPointers @ 0x140592FBC (IopUpdateFunctionPointers.c)
 *     IoCancelMiniCompletionPacket @ 0x1405939F0 (IoCancelMiniCompletionPacket.c)
 *     IoPerfReset @ 0x140593EEC (IoPerfReset.c)
 *     KeRemoveEntryDeviceQueue @ 0x1405B91C0 (KeRemoveEntryDeviceQueue.c)
 *     ?KiEnableGroupScheduling@@YAXXZ @ 0x1405C3060 (-KiEnableGroupScheduling@@YAXXZ.c)
 *     KeTraceSchedulingGroupRundown @ 0x1405C3470 (KeTraceSchedulingGroupRundown.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405C3564 (KeUpdateGroupSchedulingConstants.c)
 *     PfpPartitionInsertToGlobals @ 0x1405C83F0 (PfpPartitionInsertToGlobals.c)
 *     PfpPartitionRemoveFromGlobals @ 0x1405C84CC (PfpPartitionRemoveFromGlobals.c)
 *     PopDereferenceWakeInfos @ 0x1405CE874 (PopDereferenceWakeInfos.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x1405FBEB8 (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     DifKeReleaseInStackQueuedSpinLockWrapper @ 0x1406236A0 (DifKeReleaseInStackQueuedSpinLockWrapper.c)
 *     ExPoolQueryLimits @ 0x140648408 (ExPoolQueryLimits.c)
 *     ExpPlGrowTableIfNeeded @ 0x140649074 (ExpPlGrowTableIfNeeded.c)
 *     ExpTrackTableInsertLimit @ 0x140649430 (ExpTrackTableInsertLimit.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14064B090 (ExpTryConvertSharedToExclusiveLite.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x14064B158 (ExpTryToAcquireResourceExclusiveLite.c)
 *     ExpWorkerFactoryManagerThread @ 0x14064E8B0 (ExpWorkerFactoryManagerThread.c)
 *     PnprMarkOrMirrorPages @ 0x140B44268 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140B4AE24 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     PopBroadcastBlameBugcheckCallback @ 0x140B4F500 (PopBroadcastBlameBugcheckCallback.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 Next; // rax
  unsigned __int64 *volatile Lock; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  bool v6; // si
  __int64 v7; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 OldIrql; // rbx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(LockHandle);
    Next = (__int64)LockHandle->LockQueue.Next;
    if ( !LockHandle->LockQueue.Next )
    {
      if ( LockHandle == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                                (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                                0LL,
                                                (signed __int64)LockHandle) )
        goto LABEL_9;
      Next = KxWaitForLockChainValid((__int64 *)LockHandle);
    }
    LockHandle->LockQueue.Next = 0LL;
    Lock = LockHandle->LockQueue.Lock;
    if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64(
                                                      (volatile __int64 *)(Next + 8),
                                                      (__int64)Lock)) & 4) != 0 )
    {
      _InterlockedOr(v13, 0);
      v6 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v7, _InterlockedExchange64((volatile __int64 *)(v5 + 8 * v4), 0LL));
      if ( v6 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
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
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)LockHandle, retaddr);
  }
LABEL_9:
  OldIrql = LockHandle->OldIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)OldIrql);
  __writecr8(OldIrql);
}
