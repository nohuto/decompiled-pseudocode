/*
 * XREFs of KeSetEvent @ 0x140227B30
 * Callers:
 *     CcFlushCacheOneRange @ 0x140208260 (CcFlushCacheOneRange.c)
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     MiQueuePageAccessLog @ 0x14020D250 (MiQueuePageAccessLog.c)
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     PfpEventHandleFullBuffer @ 0x14020E610 (PfpEventHandleFullBuffer.c)
 *     KiDecrementProcessStackCount @ 0x14021EF60 (KiDecrementProcessStackCount.c)
 *     MiInsertSecondaryListStandbyPage @ 0x140224720 (MiInsertSecondaryListStandbyPage.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x140225B30 (ExpPartitionCreateThreadIfNecessary.c)
 *     IoReleaseRemoveLockEx @ 0x140225BA0 (IoReleaseRemoveLockEx.c)
 *     MiUnlinkStandbyPage @ 0x140225CF0 (MiUnlinkStandbyPage.c)
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     CcDecrementVacbActiveCount @ 0x140227AE0 (CcDecrementVacbActiveCount.c)
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     MiDecrementVadsBeingDeleted @ 0x140229A10 (MiDecrementVadsBeingDeleted.c)
 *     PfpPartitionIterate @ 0x14022A280 (PfpPartitionIterate.c)
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x14022B370 (ExReleaseRundownProtectionCacheAware.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14022FA80 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14022FD60 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiFlushComplete @ 0x140259230 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x14025943C (MiFreeOverlappedFlushEntry.c)
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     FsFilterCtrlFree @ 0x14025D404 (FsFilterCtrlFree.c)
 *     IopCopyCompleteReadRequest @ 0x14025FD20 (IopCopyCompleteReadRequest.c)
 *     MiFlushAllStoreSwapPages @ 0x1402611E0 (MiFlushAllStoreSwapPages.c)
 *     MiWakeModifiedPageWriter @ 0x140261468 (MiWakeModifiedPageWriter.c)
 *     MiDecreaseAvailablePages @ 0x140261500 (MiDecreaseAvailablePages.c)
 *     MiObtainFreePages @ 0x1402616B4 (MiObtainFreePages.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x140261834 (MiUpdateAvailableEventsAtDpc.c)
 *     MiIncreaseAvailablePages @ 0x140263490 (MiIncreaseAvailablePages.c)
 *     CcNotifyWriteBehindInternal @ 0x1402638AC (CcNotifyWriteBehindInternal.c)
 *     MiFlushAllPagesWorker @ 0x140263A34 (MiFlushAllPagesWorker.c)
 *     CcNotifyWriteBehindVolume @ 0x1402650BC (CcNotifyWriteBehindVolume.c)
 *     MiMarkMdlComplete @ 0x140267140 (MiMarkMdlComplete.c)
 *     MiObtainDynamicVa @ 0x14026CBCC (MiObtainDynamicVa.c)
 *     CcPostWorkQueueAsyncRead @ 0x14027372C (CcPostWorkQueueAsyncRead.c)
 *     CcUnpinFileDataEx @ 0x1402766A0 (CcUnpinFileDataEx.c)
 *     CcPostDeferredWrites @ 0x1402795B0 (CcPostDeferredWrites.c)
 *     CcDereferencePartition @ 0x140279D10 (CcDereferencePartition.c)
 *     CcWriteBehindPreProcess @ 0x14027A224 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     CcAsyncLazywriteWorker @ 0x14027B0C8 (CcAsyncLazywriteWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14027CA30 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     EtwpSwitchBuffer @ 0x14027D3B0 (EtwpSwitchBuffer.c)
 *     ExNotifyCallback @ 0x14027DB30 (ExNotifyCallback.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14029D0B0 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiSignalCommitSignals @ 0x14029EE00 (MiSignalCommitSignals.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1402A1234 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x1402B54A0 (KiReleaseSecondaryPassiveConnectLock.c)
 *     ExpReleaseRundownProtection @ 0x1402BA900 (ExpReleaseRundownProtection.c)
 *     ExpUnblockPushLock @ 0x1402BC2BC (ExpUnblockPushLock.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1402BC7E4 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1402BFAA0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopFxCompleteComponentActivation @ 0x1402BFDF0 (PopFxCompleteComponentActivation.c)
 *     AlpcpSignal @ 0x1402C46F0 (AlpcpSignal.c)
 *     KiDetachProcess @ 0x1402C9FD0 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402CB2C0 (KeUnstackDetachProcess.c)
 *     ExQueueWorkItemFromIo @ 0x1402CC8A0 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x1402CD0A0 (ExpQueueWorkItem.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     KiInSwapSingleProcess @ 0x1402D5EF4 (KiInSwapSingleProcess.c)
 *     KiInswapAndReadyThread @ 0x1402DE624 (KiInswapAndReadyThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402DF08C (KiReadyOutSwappedThreads.c)
 *     KiRequestProcessInSwap @ 0x1402DFA90 (KiRequestProcessInSwap.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1402E21C4 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     SmKmStoreHelperCommandProcess @ 0x1402E7B10 (SmKmStoreHelperCommandProcess.c)
 *     MmStoreEvictComplete @ 0x1402E9818 (MmStoreEvictComplete.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1402F2208 (PopCompleteNotifyTransitionCommon.c)
 *     MiProcessWorkingSets @ 0x1402F2D10 (MiProcessWorkingSets.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402F4DDC (MiStoreUpdateMemoryConditions.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402F85D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     MmReleaseResourceCharge @ 0x1402F8EFC (MmReleaseResourceCharge.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1402F9274 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402F95BC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperSendCommand @ 0x1402F96E4 (SmKmStoreHelperSendCommand.c)
 *     SmKmUnlockMdl @ 0x1402F9B04 (SmKmUnlockMdl.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiRecordLargePageCandidate @ 0x1403135A4 (MiRecordLargePageCandidate.c)
 *     ExpWorkerThread @ 0x14032F2A0 (ExpWorkerThread.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionCharges @ 0x140338944 (MiReturnCrossPartitionCharges.c)
 *     MiCheckForControlAreaDeletion @ 0x140339580 (MiCheckForControlAreaDeletion.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiFreeExcessSegments @ 0x14034B7B0 (MiFreeExcessSegments.c)
 *     PfSnReferenceProcessTrace @ 0x14034E6D0 (PfSnReferenceProcessTrace.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiIssueHardFaultIo @ 0x140351514 (MiIssueHardFaultIo.c)
 *     MiPfCompleteCoalescedIo @ 0x140351964 (MiPfCompleteCoalescedIo.c)
 *     MiScheduleZeroPageThreads @ 0x140354918 (MiScheduleZeroPageThreads.c)
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 *     PopQueueTargetDpc @ 0x1403702F0 (PopQueueTargetDpc.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14037229C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1403754EC (HalpReleaseSecondaryIcEntryShared.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403763F0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140377D20 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403830C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopFxTryReferenceDevice @ 0x1403A6408 (PopFxTryReferenceDevice.c)
 *     PopPepUpdateConstraints @ 0x1403A750C (PopPepUpdateConstraints.c)
 *     PopFxReleasePowerIrp @ 0x1403A7E40 (PopFxReleasePowerIrp.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopFxComponentWork @ 0x1403A8FA0 (PopFxComponentWork.c)
 *     PopFxReferenceDevice @ 0x1403AA248 (PopFxReferenceDevice.c)
 *     KiProcessDisconnectList @ 0x1403AE80C (KiProcessDisconnectList.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403AE8E8 (KiInvokeInterruptServiceRoutine.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403B1560 (NtSignalAndWaitForSingleObject.c)
 *     IopCompleteIoRingEntry @ 0x1403B4AE0 (IopCompleteIoRingEntry.c)
 *     SepRmCallLsa @ 0x1403C17F0 (SepRmCallLsa.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1403C3E30 (MiTrimUnusedPageFileRegionsApc.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     MiPfIssueCoalescedSupport @ 0x1403DAF90 (MiPfIssueCoalescedSupport.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1403E2544 (MiGetSlabRepurposedStandbyListWorker.c)
 *     PopUserPresentSet @ 0x1403E6990 (PopUserPresentSet.c)
 *     MiSegmentDereferenceWorker @ 0x1403EDB20 (MiSegmentDereferenceWorker.c)
 *     MiMarkPendingCommitRequests @ 0x1403EDD2C (MiMarkPendingCommitRequests.c)
 *     MiWakeCommitRequest @ 0x1403EE13C (MiWakeCommitRequest.c)
 *     MiHandlePageFileSizeChanges @ 0x1403EE2E4 (MiHandlePageFileSizeChanges.c)
 *     MiProcessingPageExtendComplete @ 0x1403EE778 (MiProcessingPageExtendComplete.c)
 *     MiAttemptPageFileReductionApc @ 0x1403EF420 (MiAttemptPageFileReductionApc.c)
 *     MiQueuePageFileExtension @ 0x1403EF6FC (MiQueuePageFileExtension.c)
 *     MiCopyDataPageToImagePage @ 0x1403F1624 (MiCopyDataPageToImagePage.c)
 *     ExpWakePushLock @ 0x1404060A0 (ExpWakePushLock.c)
 *     CcPrepareMdlWrite @ 0x14040B2B0 (CcPrepareMdlWrite.c)
 *     MiIncrementZeroEngineThread @ 0x1404137CC (MiIncrementZeroEngineThread.c)
 *     PopPropogateCoolingChange @ 0x14041BAFC (PopPropogateCoolingChange.c)
 *     IoAcquireRemoveLockEx @ 0x14041D6D0 (IoAcquireRemoveLockEx.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14041E1D0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmFpFree @ 0x140421480 (SmFpFree.c)
 *     MiUpdateCommitCounts @ 0x140427C9C (MiUpdateCommitCounts.c)
 *     CcReapPrivateVolumeCachemap @ 0x14042FCA4 (CcReapPrivateVolumeCachemap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1404309A4 (CcDeletePrivateVolumeCacheMap.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140432EDC (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1404347FC (EtwpCovSampCaptureBufferQueue.c)
 *     MiFreePageToSlabEntry @ 0x140435E88 (MiFreePageToSlabEntry.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140439050 (LZNT1DecompressChunkWorkItem.c)
 *     MiUpdateSlabTypeAvailablePages @ 0x14043C38C (MiUpdateSlabTypeAvailablePages.c)
 *     MiDeleteControlArea @ 0x14043F354 (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x14043F548 (MiQueueControlAreaDelete.c)
 *     IopSessionChangeWorker @ 0x1404426C0 (IopSessionChangeWorker.c)
 *     ExNotifyWithProcessing @ 0x140442804 (ExNotifyWithProcessing.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x14044E3F8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x14044E5D0 (EtwpCovSampCaptureQueueDpc.c)
 *     SmKmStoreHelperWorker @ 0x140452510 (SmKmStoreHelperWorker.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     MiDecrementControlAreaCount @ 0x140453308 (MiDecrementControlAreaCount.c)
 *     CcPurgeAndClearCacheSection @ 0x1404568F4 (CcPurgeAndClearCacheSection.c)
 *     MiAllocateMappedWriterMdls @ 0x140462D3C (MiAllocateMappedWriterMdls.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x140464D44 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x140464F00 (PopPowerRequestCallbackWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x1404671A0 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 *     PopQueueDirectedDripsWork @ 0x1404682D4 (PopQueueDirectedDripsWork.c)
 *     WmipUnreferenceRegEntry @ 0x14046A188 (WmipUnreferenceRegEntry.c)
 *     MiSyncCommitSignals @ 0x14046B194 (MiSyncCommitSignals.c)
 *     MiModifiedPageWriter @ 0x14046F7B0 (MiModifiedPageWriter.c)
 *     WheapProcessWorkQueueItem @ 0x140474590 (WheapProcessWorkQueueItem.c)
 *     MiStoreContractVirtualPagefileApc @ 0x140476BB0 (MiStoreContractVirtualPagefileApc.c)
 *     MiStoreEvictThread @ 0x140476E20 (MiStoreEvictThread.c)
 *     PfpReturnAccessBuffer @ 0x140479740 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140479890 (MiAllocatePfnRepurposeLogDispatch.c)
 *     SmKmGenericCompletion @ 0x14047A860 (SmKmGenericCompletion.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047AADC (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiStoreDecrementOutstandingWrites @ 0x14047F648 (MiStoreDecrementOutstandingWrites.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1404840A0 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpEnumerateCallback @ 0x1404866D0 (ExpEnumerateCallback.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140487180 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     PopUserPresentSetWorker @ 0x14048D0E0 (PopUserPresentSetWorker.c)
 *     ?SmCompressCtxQueueEntries@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_QUEUE@@@Z @ 0x1404918B0 (-SmCompressCtxQueueEntries@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_.c)
 *     KeRetryOutswapProcess @ 0x1404928E0 (KeRetryOutswapProcess.c)
 *     PnpUnlockDeviceActionQueue @ 0x140493744 (PnpUnlockDeviceActionQueue.c)
 *     EtwpLoggerDpc @ 0x140495190 (EtwpLoggerDpc.c)
 *     MiReplenishSlabAllocatorWorker @ 0x140498060 (MiReplenishSlabAllocatorWorker.c)
 *     CmpLazyFlushDpcRoutine @ 0x140499810 (CmpLazyFlushDpcRoutine.c)
 *     PopBatteryIrpComplete @ 0x14049F000 (PopBatteryIrpComplete.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404A7624 (MmStoreFlushOutstandingEvictions.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404A770C (PopUnregisterPowerSettingCallback.c)
 *     MiFinishResume @ 0x1404ADDD0 (MiFinishResume.c)
 *     PopFxCompleteComponentPerfState @ 0x1404B149C (PopFxCompleteComponentPerfState.c)
 *     CcDeleteBcbs @ 0x1404B21D4 (CcDeleteBcbs.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x1404B23A0 (ExpWorkQueueManagerReaperTimer.c)
 *     VfPoolDelayFreeIfPossible @ 0x1404B5DC0 (VfPoolDelayFreeIfPossible.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1404B6A00 (EtwpCovSampCaptureCleanupLookasides.c)
 *     PnpUnlockMountableDevice @ 0x1404BD46C (PnpUnlockMountableDevice.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C0AEC (CcAsyncLazywriteWorkerMulti.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1404C1BD4 (KiSynchronizePassiveInterruptExecution.c)
 *     MiFinishPageFileExtension @ 0x1404C4B98 (MiFinishPageFileExtension.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1404C6680 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     MiReadFromMemoryPagefile @ 0x1404CAF64 (MiReadFromMemoryPagefile.c)
 *     IopFreeReserveIrp @ 0x1404CD41C (IopFreeReserveIrp.c)
 *     MiFlushAllFilesystemPages @ 0x1404CFFDC (MiFlushAllFilesystemPages.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404D4DF0 (CcWorkerThread.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404D8AC0 (CcPostWorkQueueAsyncLazywrite.c)
 *     PopIrpWorker @ 0x1404E3650 (PopIrpWorker.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     MiDecrementCloneHeaderCount @ 0x1404F2BD0 (MiDecrementCloneHeaderCount.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1404F318C (PopFxAcpiForwardPepWorkRequest.c)
 *     MiQueueWorkingSetRequest @ 0x1404F3BCC (MiQueueWorkingSetRequest.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F3E10 (MiStoreExtendVirtualPagefile.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404F612C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     MiDeleteCloneDescriptor @ 0x1404F6498 (MiDeleteCloneDescriptor.c)
 *     HalpDeleteSecondaryIcEntry @ 0x140553358 (HalpDeleteSecondaryIcEntry.c)
 *     HalpProcessSecondarySignalList @ 0x140553660 (HalpProcessSecondarySignalList.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x14057988C (CcDrainDelayDeleteForPartitionExit.c)
 *     CcProcessDelayedDeletePVCM @ 0x1405799B0 (CcProcessDelayedDeletePVCM.c)
 *     CcDeletePartition @ 0x140579B7C (CcDeletePartition.c)
 *     FsRtlStackOverflowRead @ 0x14057F410 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x140593358 (IopFreeBackpocketIrp.c)
 *     IopMcDereferenceMdl @ 0x14059FB58 (IopMcDereferenceMdl.c)
 *     PnpCompleteSystemStartProcess @ 0x1405A2DCC (PnpCompleteSystemStartProcess.c)
 *     PnprQuiesce @ 0x1405A4C78 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405A64B0 (PnpDiagnosticCompletionRoutine.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1405B3A20 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x1405BF630 (KiPassiveIsrWatchdog.c)
 *     KiSignalWaitDisconnectLock @ 0x1405BF66C (KiSignalWaitDisconnectLock.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x1405C1600 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KeBalanceSetManager @ 0x1405C1BE0 (KeBalanceSetManager.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C3730 (KiDeferredBugcheckRecoveryWorker.c)
 *     ?KiFlushScbReferencesDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405C4D10 (-KiFlushScbReferencesDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     PfpScenCtxWaiterTimedOut @ 0x1405C9C70 (PfpScenCtxWaiterTimedOut.c)
 *     PopDeviceIdleCompletion @ 0x1405CD4A0 (PopDeviceIdleCompletion.c)
 *     PopBatteryWakeDpc @ 0x1405D52D0 (PopBatteryWakeDpc.c)
 *     PopPowerAdapterIrpComplete @ 0x1405D5340 (PopPowerAdapterIrpComplete.c)
 *     PopIdleWakeDelayedWakeSourceReferencer @ 0x1405D7E40 (PopIdleWakeDelayedWakeSourceReferencer.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1405D8EB0 (PopPepStartDeviceUnregisterActivity.c)
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1406086B0 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14060D270 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14060D340 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     SmHwAcceleratorPartitionMgrWakeDescriptorWaiters @ 0x14060DFF8 (SmHwAcceleratorPartitionMgrWakeDescriptorWaiters.c)
 *     DifKeSetEventWrapper @ 0x14062EED0 (DifKeSetEventWrapper.c)
 *     EtwSendTraceBuffer @ 0x14064D790 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x14064F010 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x140650410 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1406542A0 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1406542F0 (ExRegisterBootDevice.c)
 *     WheapAddErrorSource @ 0x14065A358 (WheapAddErrorSource.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x1406671E0 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     CmSiSetEvent @ 0x140669D84 (CmSiSetEvent.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066B458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReadPagefilePage @ 0x14066B64C (MiReadPagefilePage.c)
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x14066D090 (MiZeroPageFile.c)
 *     MiDistributeSystemCacheVaReductions @ 0x1406733F0 (MiDistributeSystemCacheVaReductions.c)
 *     MiPageNotZero @ 0x14067507C (MiPageNotZero.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140677D88 (MiSignalNonPagedPoolWatchers.c)
 *     MiIrpCompletionApcRoutine @ 0x14067B420 (MiIrpCompletionApcRoutine.c)
 *     MiFinishHoldingDirtyFaults @ 0x14067E28C (MiFinishHoldingDirtyFaults.c)
 *     MiIncreaseCommitLimits @ 0x14068733C (MiIncreaseCommitLimits.c)
 *     MmManagePartitionSetMemoryThresholds @ 0x14068CCFC (MmManagePartitionSetMemoryThresholds.c)
 *     MiStoreDeletePartition @ 0x14068CF54 (MiStoreDeletePartition.c)
 *     MiStoreRundownWritesApc @ 0x14068D900 (MiStoreRundownWritesApc.c)
 *     MiSignalZeroingPassComplete @ 0x140690F50 (MiSignalZeroingPassComplete.c)
 *     MiWakeAllZeroConductors @ 0x140690FE4 (MiWakeAllZeroConductors.c)
 *     MiZeroEngineSetOptimalCount @ 0x1406910EC (MiZeroEngineSetOptimalCount.c)
 *     MiZeroPageThread @ 0x140691640 (MiZeroPageThread.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x140691DA4 (MiSignalNewAcceleratorsAvailable.c)
 *     PspGetSetContextSpecialApc @ 0x1406B4720 (PspGetSetContextSpecialApc.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x1406F34C4 (PopPowerAggregatorDozeTimerDisarm.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1406FC8D0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalGetAdapterV3 @ 0x1406FDCF8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406FE298 (HalGetAdapterV2.c)
 *     ArbBuildAssignmentOrdering @ 0x1407028FC (ArbBuildAssignmentOrdering.c)
 *     DbgkpLkmdSnapThreadApc @ 0x140705F80 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14070A270 (FsRtlpOplockWaitCompleteRoutine.c)
 *     HvlQuerySetBootPagesInfo @ 0x14070C68C (HvlQuerySetBootPagesInfo.c)
 *     IopConnectLinkTrackingPort @ 0x14070F8C0 (IopConnectLinkTrackingPort.c)
 *     PnpShutdownDevices @ 0x140718630 (PnpShutdownDevices.c)
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x1407342CC (IopWarmEjectDevice.c)
 *     PfGenerateTrace @ 0x14074466C (PfGenerateTrace.c)
 *     PfTCleanup @ 0x140744858 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140745F00 (PfSnTracingStateExWorkerRoutine.c)
 *     PfpParametersWatcher @ 0x140746790 (PfpParametersWatcher.c)
 *     PopPowerLimitUpdatePendingEvents @ 0x140749DB4 (PopPowerLimitUpdatePendingEvents.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x140757680 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140758230 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140766D64 (SshpSessionManagerFlushControlEventBuffer.c)
 *     TtmiWriteEventToAllQueues @ 0x14076A56C (TtmiWriteEventToAllQueues.c)
 *     TtmiWriteEventToSingleQueue @ 0x140770DC4 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x140772B10 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x140772C14 (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x140777250 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x14077B3B4 (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x14077B4E4 (PsTerminateVsmEnclave.c)
 *     PspDereferenceSessionFinal @ 0x14077B930 (PspDereferenceSessionFinal.c)
 *     RtlpCtSelfSubscribe @ 0x140787164 (RtlpCtSelfSubscribe.c)
 *     Pdcv2pActivationClientCallback @ 0x14078DC20 (Pdcv2pActivationClientCallback.c)
 *     SmcCacheAdd @ 0x14079CFB0 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x14079D18C (SmcCacheDelete.c)
 *     EtwInitialize @ 0x1407A65A0 (EtwInitialize.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B2900 (EtwpCovSampCaptureWorkerThread.c)
 *     ExpPartitionDestroy @ 0x1407C00FC (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1407C3A10 (CMFSystemThreadRoutine.c)
 *     MUIRegistrySystemRoutine @ 0x1407C4110 (MUIRegistrySystemRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1407C7FE0 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WheapProcessWaitingETWEvents @ 0x1407C8B80 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x1407C8F50 (WheaRegChangeNotifyCallback.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpInitializeSystemHivesLoad @ 0x1407CB18C (CmpInitializeSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpPostApcRunDown @ 0x1407D24A0 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x1407D8B30 (CmThawRegistry.c)
 *     MiHotAddBootDeferredDescriptors @ 0x1407E8B10 (MiHotAddBootDeferredDescriptors.c)
 *     MiInsertPageFileInList @ 0x1407EF8C0 (MiInsertPageFileInList.c)
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 *     MmStoreRegister @ 0x1407FDB18 (MmStoreRegister.c)
 *     MiStartZeroEngineThreads @ 0x14080010C (MiStartZeroEngineThreads.c)
 *     WdtpBarkWorkerThread @ 0x140824CB0 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x14082AEF0 (SbpVmbusNotificationHandler.c)
 *     EtwpQueueNotification @ 0x140834C40 (EtwpQueueNotification.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     NtAlpcSendWaitReceivePort @ 0x140846380 (NtAlpcSendWaitReceivePort.c)
 *     PiUEventDereferenceEventEntry @ 0x14085796C (PiUEventDereferenceEventEntry.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140860B78 (PspEvaluateAndNotifyEmptyJob.c)
 *     DbgkpCloseObject @ 0x140860C60 (DbgkpCloseObject.c)
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x14086D048 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x14086E9C0 (CmpSignalDeferredPosts.c)
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 *     IopInvalidateVolumesForDevice @ 0x1408AEAB4 (IopInvalidateVolumesForDevice.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopWriteFile @ 0x1408BEFF0 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     DbgkpQueueMessage @ 0x1408F3750 (DbgkpQueueMessage.c)
 *     PfGetCompletedTrace @ 0x1408F64A0 (PfGetCompletedTrace.c)
 *     CmNotifyRunDown @ 0x1408FEA30 (CmNotifyRunDown.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140904190 (ExpWnfNotifyNameSubscribers.c)
 *     EtwpCovSampContextAddSamples @ 0x140923570 (EtwpCovSampContextAddSamples.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     MiPfExecuteReadList @ 0x14093A5EC (MiPfExecuteReadList.c)
 *     PfSnEndTrace @ 0x14095A268 (PfSnEndTrace.c)
 *     SPCallServerHandleQueryPolicy @ 0x14095F70C (SPCallServerHandleQueryPolicy.c)
 *     CmpWakeWriteQueueWaiters @ 0x140964900 (CmpWakeWriteQueueWaiters.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x140965600 (CmpSignalUnloadEventArrayForHive.c)
 *     PfTLoggingWorker @ 0x140970EA0 (PfTLoggingWorker.c)
 *     PfTReplaceCurrentBuffer @ 0x140972854 (PfTReplaceCurrentBuffer.c)
 *     PfTTraceListAdd @ 0x140972A00 (PfTTraceListAdd.c)
 *     NtSetEventEx @ 0x140973E70 (NtSetEventEx.c)
 *     IoDisconnectInterrupt @ 0x1409C05D0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x1409C0D28 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x1409C0E78 (IopInitializeActiveConnectBlock.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 *     EtwpSynchronizeWithLogger @ 0x1409D2650 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x1409D33F0 (EtwpLogger.c)
 *     EtwpStopLoggerInstance @ 0x1409D3C74 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1409D4060 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1409D4930 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpDisassociateConsumer @ 0x1409D4F10 (EtwpDisassociateConsumer.c)
 *     NtDebugContinue @ 0x1409E3960 (NtDebugContinue.c)
 *     DbgkpSetProcessDebugObject @ 0x1409E3B48 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x1409E3D8C (DbgkpWakeTarget.c)
 *     RtlDecompressBufferLZNT1 @ 0x1409E59D0 (RtlDecompressBufferLZNT1.c)
 *     ExpWnfNotifySubscription @ 0x1409E8AE0 (ExpWnfNotifySubscription.c)
 *     PnpCompleteDeviceEvent @ 0x1409ED2C0 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x1409ED430 (PnpDeviceEventWorker.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140A138F0 (RtlDecompressFragmentLZNT1.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140A15D10 (IopAcquireReleaseDispatcherLock.c)
 *     PopSystemIdleWorker @ 0x140A1C0E0 (PopSystemIdleWorker.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 *     IopTrackLink @ 0x140A21314 (IopTrackLink.c)
 *     CmpPostApc @ 0x140A23B30 (CmpPostApc.c)
 *     PopThermalWorker @ 0x140A36310 (PopThermalWorker.c)
 *     MiInSwapStoreWorker @ 0x140A43A40 (MiInSwapStoreWorker.c)
 *     SmProcessDeleteNotification @ 0x140A4863C (SmProcessDeleteNotification.c)
 *     EtwpShutdownConsumers @ 0x140A49484 (EtwpShutdownConsumers.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140A495D4 (EtwpRealtimeDisconnectAllConsumers.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140A49730 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     WmipQueueNotification @ 0x140A4DAF4 (WmipQueueNotification.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x140A51400 (CmpGetVolumeClusterSizeCompletion.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A579F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     PspReleaseEnclaveThread @ 0x140A59C64 (PspReleaseEnclaveThread.c)
 *     NtNotifyChangeSession @ 0x140A5FDF0 (NtNotifyChangeSession.c)
 *     PopBsdFlush @ 0x140A64EE4 (PopBsdFlush.c)
 *     IopLoadUnloadDriver @ 0x140A66EE0 (IopLoadUnloadDriver.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x140A6AAA0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140A6ED50 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140A6EED4 (PopFxUnregisterDevice.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A73830 (PiDrvDbLoadNodeWorkerCallback.c)
 *     HalpGetDynamicDevicePointer @ 0x140A7BFD0 (HalpGetDynamicDevicePointer.c)
 *     PopFanWorker @ 0x140A7E230 (PopFanWorker.c)
 *     DbgkRegisterErrorPort @ 0x140A7FE04 (DbgkRegisterErrorPort.c)
 *     SmpFlushStorePages @ 0x140A813F0 (SmpFlushStorePages.c)
 *     PopCompleteAction @ 0x140A84608 (PopCompleteAction.c)
 *     PiUEventHandleVetoEvent @ 0x140A8758C (PiUEventHandleVetoEvent.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A97B30 (PopFxUpdateVetoMaskWork.c)
 *     PopReleaseTransitionLock @ 0x140AA0760 (PopReleaseTransitionLock.c)
 *     IopSendMessageToTrackService @ 0x140AA335C (IopSendMessageToTrackService.c)
 *     PsSetSessionObjectIoEvent @ 0x140AA7058 (PsSetSessionObjectIoEvent.c)
 *     PopBatteryReadTag @ 0x140AA8E2C (PopBatteryReadTag.c)
 *     CmpWaitForHiveMount @ 0x140AAE520 (CmpWaitForHiveMount.c)
 *     ArbArbiterHandler @ 0x140AAF710 (ArbArbiterHandler.c)
 *     WmipProcessSynchronousEtw @ 0x140AB07F0 (WmipProcessSynchronousEtw.c)
 *     IoVerifyVolume @ 0x140AB1440 (IoVerifyVolume.c)
 *     ExpPartitionCreatePool @ 0x140AB4F0C (ExpPartitionCreatePool.c)
 *     WmipReleaseCollectionEnabled @ 0x140AB7F64 (WmipReleaseCollectionEnabled.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140ADBF60 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     PnprInitiateReplaceOperation @ 0x140B55C44 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140B570F0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140B5D0D8 (PfpScenCtxPrefetchStateSet.c)
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140B5DE94 (PopHandleWakeSources.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B61630 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140B61810 (PopBuildDeviceNotifyListWatchdog.c)
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140B6443C (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140B66770 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140B67570 (PopTransitionToSleep.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     EmpReleasePagingReference @ 0x140B6A724 (EmpReleasePagingReference.c)
 *     ExpSetSwappingKernelApc @ 0x140B6BC30 (ExpSetSwappingKernelApc.c)
 *     HalpPiix4Detect @ 0x140B6C308 (HalpPiix4Detect.c)
 *     PopFlushVolumeWorker @ 0x140B6D040 (PopFlushVolumeWorker.c)
 *     PfpScenCtxScenarioSet @ 0x140B6EDB0 (PfpScenCtxScenarioSet.c)
 *     KdpTimeSlipWork @ 0x140B7A650 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140B902D0 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140B93FF0 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140B9F510 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140BB4F50 (AnFwpFadeAnimationTimer.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     MiInitializePagedPoolEvents @ 0x140C56054 (MiInitializePagedPoolEvents.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiEnterDeferredReadyState @ 0x1402DFA30 (KiEnterDeferredReadyState.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  __int64 v3; // r9
  LONG *p_SignalState; // r15
  int v6; // esi
  unsigned __int8 CurrentIrql; // al
  __int64 p_Blink; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v10; // ebx
  struct _LIST_ENTRY *Flink; // r12
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v13; // rax
  struct _LIST_ENTRY *v14; // rsi
  struct _LIST_ENTRY *Blink; // rcx
  bool v16; // zf
  struct _LIST_ENTRY *v18; // r14
  char v19; // al
  struct _LIST_ENTRY *v20; // r13
  unsigned int v21; // esi
  struct _LIST_ENTRY *v22; // rbx
  int v23; // eax
  struct _LIST_ENTRY *v24; // rdx
  struct _LIST_ENTRY *v25; // rsi
  unsigned int v26; // ebp
  struct _LIST_ENTRY *v27; // rdx
  struct _LIST_ENTRY *v28; // rcx
  char v29; // al
  struct _LIST_ENTRY *v30; // r13
  char v31; // r14
  struct _LIST_ENTRY *v32; // rbx
  unsigned int v33; // ebp
  __int64 Flink_low; // rcx
  int v35; // eax
  struct _LIST_ENTRY *v36; // rbp
  unsigned int v37; // r14d
  struct _LIST_ENTRY *v38; // rcx
  char v39; // al
  __int64 v40; // rcx
  __int64 Blink_high; // rax
  __int64 v42; // rax
  struct _KPRCB *v43; // [rsp+30h] [rbp-58h]
  char v44; // [rsp+38h] [rbp-50h]
  LONG v45; // [rsp+90h] [rbp+8h]

  p_SignalState = &Event->Header.SignalState;
  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v6 = 0;
LABEL_4:
    CurrentIrql = KeGetCurrentIrql();
    v44 = CurrentIrql;
    p_Blink = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = 0;
    v43 = CurrentPrcb;
    if ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(p_Blink, *(_QWORD *)&Increment, Wait, v3) )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Event->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Event->Header.Lock, 7u) );
      CurrentPrcb = v43;
      p_SignalState = &Event->Header.SignalState;
    }
    v45 = *p_SignalState;
    *p_SignalState = 1;
    if ( v45 )
    {
LABEL_14:
      _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
      KiExitDispatcher(CurrentPrcb, v44);
      return v45;
    }
    Flink = Event->Header.WaitListHead.Flink;
    p_WaitListHead = &Event->Header.WaitListHead;
    if ( !v6 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( Flink == p_WaitListHead )
            goto LABEL_14;
          v13 = Flink->Flink;
          v14 = Flink;
          Flink = v13;
          Blink = v14->Blink;
          if ( v13->Blink != v14 || Blink->Flink != v14 )
            goto LABEL_12;
          Blink->Flink = v13;
          v13->Blink = Blink;
          v29 = (char)v14[1].Flink;
          if ( v29 == 1 )
            break;
          if ( v29 == 2 )
          {
            BYTE1(v14[1].Flink) = 5;
            KiInsertQueueInternal(v14[1].Blink, v14);
            v16 = (*p_SignalState)-- == 1;
            CurrentPrcb = v43;
            if ( v16 )
              goto LABEL_14;
            p_WaitListHead = &Event->Header.WaitListHead;
          }
          else
          {
            if ( v29 == 4 )
            {
              BYTE1(v14[1].Flink) = 5;
              *p_SignalState = 0;
              KeInsertQueueDpc((PRKDPC)v14[1].Blink, Event, v14);
            }
            else
            {
              KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
            }
            CurrentPrcb = v43;
            p_WaitListHead = &Event->Header.WaitListHead;
          }
        }
        v30 = (struct _LIST_ENTRY *)WORD1(v14[1].Flink);
        v31 = 0;
        v32 = v14[1].Blink;
        v33 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v32[4], 0LL) )
        {
          do
          {
            if ( (++v33 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Blink, *(_QWORD *)&Increment, Wait, v3) )
            {
              HvlNotifyLongSpinWait(v33);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v32[4].Flink );
        }
        if ( BYTE4(v32[24].Flink) != 5 )
          goto LABEL_84;
        Flink_low = LOBYTE(v32[7].Flink);
        v35 = (__int64)v32[7].Flink & 7;
        if ( v35 != 1 && v35 != 4 )
          break;
        *(_QWORD *)&Increment = v32[14].Blink;
        if ( *(_QWORD *)&Increment )
        {
          if ( (**(_BYTE **)&Increment & 0x7F) == 0x15 )
          {
            Blink_high = (unsigned __int8)HIDWORD(v32[33].Blink);
            HIDWORD(v32[33].Blink) = Blink_high;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&Increment + 4 * Blink_high + 536));
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&Increment + 40LL));
          }
        }
        v36 = v32[44].Blink;
        if ( v36 )
        {
          v37 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v36[2109], 0LL) )
          {
            do
            {
              if ( (++v37 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Flink_low, *(_QWORD *)&Increment, Wait, v3) )
              {
                HvlNotifyLongSpinWait(v37);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( v36[2109].Flink );
          }
          if ( v32[44].Blink )
          {
            *(_QWORD *)&Increment = v32[13].Blink;
            v38 = v32[14].Flink;
            if ( *(struct _LIST_ENTRY **)(*(_QWORD *)&Increment + 8LL) != (struct _LIST_ENTRY *)&v32[13].Blink
              || v38->Flink != (struct _LIST_ENTRY *)&v32[13].Blink )
            {
              goto LABEL_12;
            }
            v38->Flink = *(struct _LIST_ENTRY **)&Increment;
            *(_QWORD *)(*(_QWORD *)&Increment + 8LL) = v38;
            v32[44].Blink = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)&v36[2109], 0LL);
        }
        v39 = BYTE4(v32[24].Flink);
        if ( v39 == 1 )
        {
          HIDWORD(v32[7].Flink) |= 2u;
        }
        else if ( v39 == 5 )
        {
          v40 = (unsigned int)(MEMORY[0xFFFFF78000000320] - HIDWORD(v32[27].Flink));
          if ( HIBYTE(v32[24].Flink) )
            v32[62].Blink = (struct _LIST_ENTRY *)((char *)v32[62].Blink + v40);
          else
            v32[62].Flink = (struct _LIST_ENTRY *)((char *)v32[62].Flink + v40);
        }
        CurrentPrcb = v43;
        BYTE4(v32[24].Flink) = 7;
        v31 = 1;
        v32[13].Blink = (struct _LIST_ENTRY *)v43->DeferredReadyListHead.Next;
        v43->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)&v32[13].Blink;
        v32[12].Blink = v30;
        v32[61].Flink = 0LL;
LABEL_79:
        v32[4].Flink = 0LL;
        ++BYTE1(v14[1].Flink);
        p_WaitListHead = &Event->Header.WaitListHead;
        if ( v31 )
        {
          v16 = (*p_SignalState)-- == 1;
          if ( v16 )
            goto LABEL_14;
          p_WaitListHead = &Event->Header.WaitListHead;
        }
      }
      if ( ((__int64)v32[7].Flink & 7) != 0 )
      {
        if ( v35 == 5 )
        {
          CurrentPrcb = v43;
          LOBYTE(v32[7].Flink) = Flink_low & 0xF8 | 6;
        }
        else
        {
          CurrentPrcb = v43;
          if ( v35 == 3 )
            BYTE1(v14[1].Flink) = 2;
        }
        goto LABEL_79;
      }
      v31 = 1;
      LOBYTE(v32[7].Flink) = Flink_low & 0xF8 | 2;
      v32[12].Blink = v30;
      v32[61].Flink = 0LL;
      BYTE1(v14[1].Flink) = 0;
LABEL_84:
      CurrentPrcb = v43;
      goto LABEL_79;
    }
    while ( 1 )
    {
      if ( Flink == p_WaitListHead )
      {
        Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
        Event->Header.WaitListHead.Flink = &Event->Header.WaitListHead;
        goto LABEL_14;
      }
      v18 = Flink;
      Flink = Flink->Flink;
      v19 = (char)v18[1].Flink;
      if ( v19 == 1 )
        break;
      if ( v19 == 2 )
      {
        BYTE1(v18[1].Flink) = 5;
        KiInsertQueueInternal(v18[1].Blink, v18);
        CurrentPrcb = v43;
      }
      else
      {
        if ( v19 == 4 )
        {
          BYTE1(v18[1].Flink) = 5;
          *p_SignalState = 0;
          KeInsertQueueDpc((PRKDPC)v18[1].Blink, Event, v18);
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v18, 256LL, 0LL);
        }
        CurrentPrcb = v43;
      }
LABEL_23:
      p_WaitListHead = &Event->Header.WaitListHead;
    }
    v20 = (struct _LIST_ENTRY *)WORD1(v18[1].Flink);
    v21 = 0;
    v22 = v18[1].Blink;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v22[4], 0LL) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(p_Blink, *(_QWORD *)&Increment, Wait, v3) )
        {
          HvlNotifyLongSpinWait(v21);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( v22[4].Flink );
    }
    if ( BYTE4(v22[24].Flink) == 5 )
    {
      p_Blink = LOBYTE(v22[7].Flink);
      v23 = (__int64)v22[7].Flink & 7;
      if ( v23 == 1 || v23 == 4 )
      {
        v24 = v22[14].Blink;
        if ( v24 )
        {
          if ( ((__int64)v24->Flink & 0x7F) == 0x15 )
          {
            v42 = (unsigned __int8)HIDWORD(v22[33].Blink);
            HIDWORD(v22[33].Blink) = v42;
            _InterlockedIncrement((volatile signed __int32 *)&v24[33].Blink + v42);
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)&v24[2].Blink);
          }
        }
        v25 = v22[44].Blink;
        if ( v25 )
        {
          v26 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v25[2109], 0LL) )
          {
            do
            {
              if ( (++v26 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(p_Blink, v24, Wait, v3) )
              {
                HvlNotifyLongSpinWait(v26);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( v25[2109].Flink );
          }
          if ( v22[44].Blink )
          {
            v27 = v22[13].Blink;
            v28 = v22[14].Flink;
            if ( v27->Blink != (struct _LIST_ENTRY *)&v22[13].Blink
              || v28->Flink != (struct _LIST_ENTRY *)&v22[13].Blink )
            {
LABEL_12:
              __fastfail(3u);
            }
            v28->Flink = v27;
            v27->Blink = v28;
            v22[44].Blink = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)&v25[2109], 0LL);
        }
        KiEnterDeferredReadyState(v22);
        CurrentPrcb = v43;
        p_Blink = (__int64)&v22[13].Blink;
        v22[13].Blink = (struct _LIST_ENTRY *)v43->DeferredReadyListHead.Next;
        v43->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)&v22[13].Blink;
        v22[12].Blink = v20;
        v22[61].Flink = 0LL;
        goto LABEL_22;
      }
      if ( ((__int64)v22[7].Flink & 7) != 0 )
      {
        if ( v23 == 5 )
        {
          LOBYTE(p_Blink) = p_Blink & 0xF8 | 6;
          LOBYTE(v22[7].Flink) = p_Blink;
        }
        else if ( v23 == 3 )
        {
          BYTE1(v18[1].Flink) = 2;
        }
      }
      else
      {
        LOBYTE(p_Blink) = p_Blink & 0xF8 | 2;
        LOBYTE(v22[7].Flink) = p_Blink;
        v22[12].Blink = v20;
        v22[61].Flink = 0LL;
        BYTE1(v18[1].Flink) = 0;
      }
    }
    CurrentPrcb = v43;
LABEL_22:
    v22[4].Flink = 0LL;
    ++BYTE1(v18[1].Flink);
    goto LABEL_23;
  }
  if ( *p_SignalState != 1 || Wait )
  {
    v6 = 1;
    goto LABEL_4;
  }
  return 1;
}
