/*
 * XREFs of KeSetEvent @ 0x140250100
 * Callers:
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     KiProcessDisconnectList @ 0x1402066B8 (KiProcessDisconnectList.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140206C50 (KiInvokeInterruptServiceRoutine.c)
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFaultIo @ 0x1402096C0 (MiIssueHardFaultIo.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14020BC20 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     MmReleaseResourceCharge @ 0x14020C540 (MmReleaseResourceCharge.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x14020C8C4 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14020CC0C (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperSendCommand @ 0x14020CD34 (SmKmStoreHelperSendCommand.c)
 *     SmKmUnlockMdl @ 0x14020D154 (SmKmUnlockMdl.c)
 *     SmKmStoreHelperCommandProcess @ 0x14020D8E4 (SmKmStoreHelperCommandProcess.c)
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiInsertSecondaryListStandbyPage @ 0x140216890 (MiInsertSecondaryListStandbyPage.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x14021C78C (MiGetSlabRepurposedStandbyListWorker.c)
 *     KiDecrementProcessStackCount @ 0x140228DE0 (KiDecrementProcessStackCount.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionCharges @ 0x14022F804 (MiReturnCrossPartitionCharges.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140233E80 (MiHandleTransitionFault.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140235C40 (MiRemoveLockedPageCharge.c)
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14024E260 (ExpPartitionCreateThreadIfNecessary.c)
 *     MiUnlinkStandbyPage @ 0x14024E2D0 (MiUnlinkStandbyPage.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     MiUpdateLargePageCandidateValue @ 0x14024FD70 (MiUpdateLargePageCandidateValue.c)
 *     CcDecrementVacbActiveCount @ 0x1402500B0 (CcDecrementVacbActiveCount.c)
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     PopFxReferenceDevice @ 0x140281350 (PopFxReferenceDevice.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     IopCompleteIoRingEntry @ 0x1402A2AE0 (IopCompleteIoRingEntry.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402A3F10 (MiDecrementVadsBeingDeleted.c)
 *     CcFlushCacheOneRange @ 0x1402C13D0 (CcFlushCacheOneRange.c)
 *     MmFlushSection @ 0x1402C1F80 (MmFlushSection.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     IopCopyCompleteReadRequest @ 0x1402D3570 (IopCopyCompleteReadRequest.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     CcUnpinFileDataEx @ 0x1402D8ED0 (CcUnpinFileDataEx.c)
 *     ExQueueWorkItemFromIo @ 0x1402E59A0 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x1402E6800 (ExpQueueWorkItem.c)
 *     ExNotifyCallback @ 0x1402EACD0 (ExNotifyCallback.c)
 *     KiReadyOutSwappedThreads @ 0x1402F06E0 (KiReadyOutSwappedThreads.c)
 *     KiRequestProcessInSwap @ 0x1402F0FC0 (KiRequestProcessInSwap.c)
 *     KiInswapAndReadyThread @ 0x1402F1104 (KiInswapAndReadyThread.c)
 *     KiInSwapSingleProcess @ 0x1402F28E4 (KiInSwapSingleProcess.c)
 *     PfpPartitionIterate @ 0x140301540 (PfpPartitionIterate.c)
 *     PfFileInfoNotify @ 0x140301AC0 (PfFileInfoNotify.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140302690 (ExReleaseRundownProtectionCacheAware.c)
 *     PfSnReferenceProcessTrace @ 0x140304310 (PfSnReferenceProcessTrace.c)
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 *     IoReleaseRemoveLockEx @ 0x140306440 (IoReleaseRemoveLockEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     MiInsertUnusedSubsection @ 0x140322E10 (MiInsertUnusedSubsection.c)
 *     MiQueuePageAccessLog @ 0x14032382C (MiQueuePageAccessLog.c)
 *     PfpEventHandleFullBuffer @ 0x1403240C0 (PfpEventHandleFullBuffer.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     MmStoreEvictComplete @ 0x140326BF4 (MmStoreEvictComplete.c)
 *     SmFpFree @ 0x140327F20 (SmFpFree.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14032801C (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1403280A0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiSignalCommitSignals @ 0x140329790 (MiSignalCommitSignals.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14032B938 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     PopFxActivateComponentWorker @ 0x140349BD0 (PopFxActivateComponentWorker.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140349F10 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14034AF20 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14034B1F0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     PopFxCompleteComponentActivation @ 0x14034C328 (PopFxCompleteComponentActivation.c)
 *     MiRecordLargePageCandidate @ 0x14034FA14 (MiRecordLargePageCandidate.c)
 *     PopIrpWorker @ 0x140356760 (PopIrpWorker.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403576E0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepUpdateConstraints @ 0x140357F10 (PopPepUpdateConstraints.c)
 *     PopFxReleasePowerIrp @ 0x1403588E0 (PopFxReleasePowerIrp.c)
 *     PopFxDereferenceDevice @ 0x1403589F8 (PopFxDereferenceDevice.c)
 *     PopFxTryReferenceDevice @ 0x1403596E8 (PopFxTryReferenceDevice.c)
 *     MiFlushComplete @ 0x14035A670 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x14035A7F0 (MiFreeOverlappedFlushEntry.c)
 *     FsFilterCtrlFree @ 0x14035B19C (FsFilterCtrlFree.c)
 *     MiStoreContractVirtualPagefileApc @ 0x14036C630 (MiStoreContractVirtualPagefileApc.c)
 *     ExpReleaseRundownProtection @ 0x14036D760 (ExpReleaseRundownProtection.c)
 *     ExpUnblockPushLock @ 0x14036EB2C (ExpUnblockPushLock.c)
 *     MiStoreEvictThread @ 0x14036EC70 (MiStoreEvictThread.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403717F0 (NtSignalAndWaitForSingleObject.c)
 *     MiPfCompleteCoalescedIo @ 0x140378964 (MiPfCompleteCoalescedIo.c)
 *     MiObtainDynamicVa @ 0x14038EB7C (MiObtainDynamicVa.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140393600 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140396200 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403A0C80 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1403A549C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcDeleteBcbs @ 0x1403A5A90 (CcDeleteBcbs.c)
 *     CcPostDeferredWrites @ 0x1403A5FC4 (CcPostDeferredWrites.c)
 *     CcPrepareMdlWrite @ 0x1403A6EA0 (CcPrepareMdlWrite.c)
 *     CcNotifyWriteBehindInternal @ 0x1403A724C (CcNotifyWriteBehindInternal.c)
 *     MiFlushAllPagesWorker @ 0x1403A75B4 (MiFlushAllPagesWorker.c)
 *     CcNotifyWriteBehindVolume @ 0x1403A7B2C (CcNotifyWriteBehindVolume.c)
 *     CcReapPrivateVolumeCachemap @ 0x1403A7DF4 (CcReapPrivateVolumeCachemap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403A8B18 (CcDeletePrivateVolumeCacheMap.c)
 *     CcPostWorkQueueAsyncRead @ 0x1403AA564 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncLazywriteWorker @ 0x1403AB228 (CcAsyncLazywriteWorker.c)
 *     CcDereferencePartition @ 0x1403AC770 (CcDereferencePartition.c)
 *     CcWriteBehindPreProcess @ 0x1403ACA84 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
 *     PopQueueTargetDpc @ 0x1403B2FA4 (PopQueueTargetDpc.c)
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 *     MiScheduleZeroPageThreads @ 0x1403B582C (MiScheduleZeroPageThreads.c)
 *     MiFreePageToSlabEntry @ 0x1403B7798 (MiFreePageToSlabEntry.c)
 *     MiIncreaseAvailablePages @ 0x1403BCD40 (MiIncreaseAvailablePages.c)
 *     MiFreeExcessSegments @ 0x1403BE140 (MiFreeExcessSegments.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403BEBFC (MiUpdateAvailableEventsAtDpc.c)
 *     MiDecreaseAvailablePages @ 0x1403BF2D0 (MiDecreaseAvailablePages.c)
 *     MiObtainFreePages @ 0x1403BF484 (MiObtainFreePages.c)
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 *     MiFlushAllStoreSwapPages @ 0x1403C1088 (MiFlushAllStoreSwapPages.c)
 *     MiWakeModifiedPageWriter @ 0x1403C1310 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403C1B60 (MiStoreUpdateMemoryConditions.c)
 *     MiProcessWorkingSets @ 0x1403C24F0 (MiProcessWorkingSets.c)
 *     KeUnstackDetachProcess @ 0x1403C41A0 (KeUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SepRmCallLsa @ 0x1403D8550 (SepRmCallLsa.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1403DB600 (MiTrimUnusedPageFileRegionsApc.c)
 *     EtwpLoggerDpc @ 0x1403E4510 (EtwpLoggerDpc.c)
 *     EtwpSwitchBuffer @ 0x1403E45C0 (EtwpSwitchBuffer.c)
 *     ExpWakePushLock @ 0x140406240 (ExpWakePushLock.c)
 *     MiAllocateMappedWriterMdls @ 0x14040AA5C (MiAllocateMappedWriterMdls.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     MiCheckForControlAreaDeletion @ 0x140419AE0 (MiCheckForControlAreaDeletion.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14041A5E8 (KiSynchronizePassiveInterruptExecution.c)
 *     IoAcquireRemoveLockEx @ 0x140430FA0 (IoAcquireRemoveLockEx.c)
 *     PopPropogateCoolingChange @ 0x1404313FC (PopPropogateCoolingChange.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1404323B0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     MiIncrementZeroEngineThread @ 0x1404378CC (MiIncrementZeroEngineThread.c)
 *     MiUpdateCommitCounts @ 0x140438D34 (MiUpdateCommitCounts.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiDeleteControlArea @ 0x14043A3F8 (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x14043A5EC (MiQueueControlAreaDelete.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x14043E6CC (EtwpCovSampCaptureBufferQueue.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140442170 (LZNT1DecompressChunkWorkItem.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x140443A1C (KiReleaseSecondaryPassiveConnectLock.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x140443CE0 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x140445728 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     IopSessionChangeWorker @ 0x14044BFC0 (IopSessionChangeWorker.c)
 *     ExNotifyWithProcessing @ 0x14044C104 (ExNotifyWithProcessing.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140456650 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14045831C (PopUpdateWatchdogNoWorkersEvent.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140458B30 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140458C20 (EtwpCovSampCaptureQueueDpc.c)
 *     MiSegmentDereferenceWorker @ 0x140459230 (MiSegmentDereferenceWorker.c)
 *     MiMarkPendingCommitRequests @ 0x140459440 (MiMarkPendingCommitRequests.c)
 *     MiWakeCommitRequest @ 0x140459864 (MiWakeCommitRequest.c)
 *     MiHandlePageFileSizeChanges @ 0x140459C18 (MiHandlePageFileSizeChanges.c)
 *     MiProcessingPageExtendComplete @ 0x140459DB8 (MiProcessingPageExtendComplete.c)
 *     MiAttemptPageFileReductionApc @ 0x14045A0D0 (MiAttemptPageFileReductionApc.c)
 *     MiQueuePageFileExtension @ 0x14045A3AC (MiQueuePageFileExtension.c)
 *     PopFxComponentWork @ 0x14045A530 (PopFxComponentWork.c)
 *     MiUpdateSlabTypeAvailablePages @ 0x14045C9B8 (MiUpdateSlabTypeAvailablePages.c)
 *     SmKmStoreHelperWorker @ 0x14045E110 (SmKmStoreHelperWorker.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     MiDecrementControlAreaCount @ 0x14045EF08 (MiDecrementControlAreaCount.c)
 *     CcPurgeAndClearCacheSection @ 0x140462560 (CcPurgeAndClearCacheSection.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14046D734 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x14046D8F0 (PopPowerRequestCallbackWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x14046DDC8 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14046E540 (PnpDeviceActionWorker.c)
 *     PopQueueDirectedDripsWork @ 0x14046EF04 (PopQueueDirectedDripsWork.c)
 *     WmipUnreferenceRegEntry @ 0x140471A4C (WmipUnreferenceRegEntry.c)
 *     MiFinishResume @ 0x1404743C0 (MiFinishResume.c)
 *     PopUserPresentSet @ 0x140476860 (PopUserPresentSet.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140477380 (PopCompleteNotifyTransitionCommon.c)
 *     WheapProcessWorkQueueItem @ 0x1404781D0 (WheapProcessWorkQueueItem.c)
 *     MiSyncCommitSignals @ 0x1404786C0 (MiSyncCommitSignals.c)
 *     MiPfIssueCoalescedSupport @ 0x14047DB58 (MiPfIssueCoalescedSupport.c)
 *     PfpReturnAccessBuffer @ 0x14047DF70 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14047E0C0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     SmKmGenericCompletion @ 0x14047F4B0 (SmKmGenericCompletion.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404838B0 (MiStoreDecrementOutstandingWrites.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140489960 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpEnumerateCallback @ 0x14048BED0 (ExpEnumerateCallback.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x14048C5E0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     PopUserPresentSetWorker @ 0x140492FE0 (PopUserPresentSetWorker.c)
 *     MiMarkMdlComplete @ 0x1404947B0 (MiMarkMdlComplete.c)
 *     KeRetryOutswapProcess @ 0x1404983B0 (KeRetryOutswapProcess.c)
 *     PnpUnlockDeviceActionQueue @ 0x140499000 (PnpUnlockDeviceActionQueue.c)
 *     ?SmCompressCtxQueueEntries@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_QUEUE@@@Z @ 0x14049998C (-SmCompressCtxQueueEntries@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_.c)
 *     MiReplenishSlabAllocatorWorker @ 0x14049E140 (MiReplenishSlabAllocatorWorker.c)
 *     CmpLazyFlushDpcRoutine @ 0x14049F750 (CmpLazyFlushDpcRoutine.c)
 *     PopBatteryIrpComplete @ 0x1404A3FF0 (PopBatteryIrpComplete.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1404A8C8C (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404ABBC4 (MmStoreFlushOutstandingEvictions.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404ABCAC (PopUnregisterPowerSettingCallback.c)
 *     PopFxCompleteComponentPerfState @ 0x1404B73E8 (PopFxCompleteComponentPerfState.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x1404B81C0 (ExpWorkQueueManagerReaperTimer.c)
 *     VfPoolDelayFreeIfPossible @ 0x1404BBAD0 (VfPoolDelayFreeIfPossible.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1404BC990 (EtwpCovSampCaptureCleanupLookasides.c)
 *     PnpUnlockMountableDevice @ 0x1404C3480 (PnpUnlockMountableDevice.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C8A30 (CcAsyncLazywriteWorkerMulti.c)
 *     MiFinishPageFileExtension @ 0x1404CB93C (MiFinishPageFileExtension.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1404CD69C (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     MiReadFromMemoryPagefile @ 0x1404D1FD4 (MiReadFromMemoryPagefile.c)
 *     IopFreeReserveIrp @ 0x1404D4334 (IopFreeReserveIrp.c)
 *     MiFlushAllFilesystemPages @ 0x1404D7D5C (MiFlushAllFilesystemPages.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404DBCE0 (CcWorkerThread.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404DF9B0 (CcPostWorkQueueAsyncLazywrite.c)
 *     MiDecrementCloneHeaderCount @ 0x1404F2AD4 (MiDecrementCloneHeaderCount.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1404F2F88 (PopFxAcpiForwardPepWorkRequest.c)
 *     MiQueueWorkingSetRequest @ 0x1404F3A78 (MiQueueWorkingSetRequest.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F3D60 (MiStoreExtendVirtualPagefile.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404F608C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     MiDeleteCloneDescriptor @ 0x1404F63B8 (MiDeleteCloneDescriptor.c)
 *     HalpDeleteSecondaryIcEntry @ 0x140553118 (HalpDeleteSecondaryIcEntry.c)
 *     HalpProcessSecondarySignalList @ 0x140553420 (HalpProcessSecondarySignalList.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x1405790EC (CcDrainDelayDeleteForPartitionExit.c)
 *     CcProcessDelayedDeletePVCM @ 0x140579210 (CcProcessDelayedDeletePVCM.c)
 *     CcDeletePartition @ 0x1405793DC (CcDeletePartition.c)
 *     FsRtlStackOverflowRead @ 0x14057E8E0 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x140592CC8 (IopFreeBackpocketIrp.c)
 *     IopMcDereferenceMdl @ 0x14059F4A8 (IopMcDereferenceMdl.c)
 *     PnpCompleteSystemStartProcess @ 0x1405A260C (PnpCompleteSystemStartProcess.c)
 *     PnprQuiesce @ 0x1405A4478 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405A5BB0 (PnpDiagnosticCompletionRoutine.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1405B2890 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x1405BE020 (KiPassiveIsrWatchdog.c)
 *     KiSignalWaitDisconnectLock @ 0x1405BE05C (KiSignalWaitDisconnectLock.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x1405BFF50 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KeBalanceSetManager @ 0x1405C0270 (KeBalanceSetManager.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C1C60 (KiDeferredBugcheckRecoveryWorker.c)
 *     ?KiFlushScbReferencesDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405C3240 (-KiFlushScbReferencesDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     PfpScenCtxWaiterTimedOut @ 0x1405C7F30 (PfpScenCtxWaiterTimedOut.c)
 *     PopDeviceIdleCompletion @ 0x1405CB630 (PopDeviceIdleCompletion.c)
 *     PopBatteryWakeDpc @ 0x1405D33F0 (PopBatteryWakeDpc.c)
 *     PopPowerAdapterIrpComplete @ 0x1405D3460 (PopPowerAdapterIrpComplete.c)
 *     PopIdleWakeDelayedWakeSourceReferencer @ 0x1405D60A0 (PopIdleWakeDelayedWakeSourceReferencer.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1405D6E00 (PopPepStartDeviceUnregisterActivity.c)
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1405FDC00 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140602CF0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140602DC0 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     SmHwAcceleratorPartitionMgrWakeDescriptorWaiters @ 0x140603A78 (SmHwAcceleratorPartitionMgrWakeDescriptorWaiters.c)
 *     DifKeSetEventWrapper @ 0x140624950 (DifKeSetEventWrapper.c)
 *     EtwSendTraceBuffer @ 0x1406430F0 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140644A20 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x140645D60 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x140649CA0 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x140649CF0 (ExRegisterBootDevice.c)
 *     WheapAddErrorSource @ 0x14064FCA8 (WheapAddErrorSource.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x14065CE20 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     CmSiSetEvent @ 0x14065D0DC (CmSiSetEvent.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14065E768 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReadPagefilePage @ 0x14065E95C (MiReadPagefilePage.c)
 *     MiReleaseCommitForResetPages @ 0x14065ED04 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x140660380 (MiZeroPageFile.c)
 *     MiDistributeSystemCacheVaReductions @ 0x140666770 (MiDistributeSystemCacheVaReductions.c)
 *     MiPageNotZero @ 0x14066844C (MiPageNotZero.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14066B270 (MiSignalNonPagedPoolWatchers.c)
 *     MiIrpCompletionApcRoutine @ 0x14066E9A0 (MiIrpCompletionApcRoutine.c)
 *     MiFinishHoldingDirtyFaults @ 0x1406718EC (MiFinishHoldingDirtyFaults.c)
 *     MiIncreaseCommitLimits @ 0x14067A97C (MiIncreaseCommitLimits.c)
 *     MmManagePartitionSetMemoryThresholds @ 0x14068033C (MmManagePartitionSetMemoryThresholds.c)
 *     MiStoreDeletePartition @ 0x140680594 (MiStoreDeletePartition.c)
 *     MiStoreRundownWritesApc @ 0x140680F40 (MiStoreRundownWritesApc.c)
 *     MiSignalZeroingPassComplete @ 0x140684A20 (MiSignalZeroingPassComplete.c)
 *     MiWakeAllZeroConductors @ 0x140684AB4 (MiWakeAllZeroConductors.c)
 *     MiZeroEngineSetOptimalCount @ 0x140684BBC (MiZeroEngineSetOptimalCount.c)
 *     MiZeroPageThread @ 0x140685110 (MiZeroPageThread.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x140685874 (MiSignalNewAcceleratorsAvailable.c)
 *     PspGetSetContextSpecialApc @ 0x1406A84B0 (PspGetSetContextSpecialApc.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x1406E9AD0 (PopPowerAggregatorDozeTimerDisarm.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1406F2EA0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalGetAdapterV3 @ 0x1406F42C8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406F4868 (HalGetAdapterV2.c)
 *     ArbBuildAssignmentOrdering @ 0x1406F8E5C (ArbBuildAssignmentOrdering.c)
 *     DbgkpLkmdSnapThreadApc @ 0x1406FC4E0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x1407007F0 (FsRtlpOplockWaitCompleteRoutine.c)
 *     HvlQuerySetBootPagesInfo @ 0x140702C1C (HvlQuerySetBootPagesInfo.c)
 *     IopConnectLinkTrackingPort @ 0x140705C30 (IopConnectLinkTrackingPort.c)
 *     PnpShutdownDevices @ 0x14070E9A0 (PnpShutdownDevices.c)
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14072A10C (IopWarmEjectDevice.c)
 *     PfGenerateTrace @ 0x14073A35C (PfGenerateTrace.c)
 *     PfTCleanup @ 0x14073A548 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14073BBF0 (PfSnTracingStateExWorkerRoutine.c)
 *     PfpParametersWatcher @ 0x14073C490 (PfpParametersWatcher.c)
 *     PopPowerLimitUpdatePendingEvents @ 0x14073F9B4 (PopPowerLimitUpdatePendingEvents.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x14074CF60 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x14074D990 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140757944 (SshpSessionManagerFlushControlEventBuffer.c)
 *     TtmiWriteEventToAllQueues @ 0x14075A98C (TtmiWriteEventToAllQueues.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407611E4 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x140762F30 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x14076302C (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x140767660 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x14076B964 (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x14076BA94 (PsTerminateVsmEnclave.c)
 *     PspDereferenceSessionFinal @ 0x14076BEE0 (PspDereferenceSessionFinal.c)
 *     RtlpCtSelfSubscribe @ 0x140777FE4 (RtlpCtSelfSubscribe.c)
 *     Pdcv2pActivationClientCallback @ 0x14077EA30 (Pdcv2pActivationClientCallback.c)
 *     SmcCacheAdd @ 0x14078DAE0 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x14078DCBC (SmcCacheDelete.c)
 *     EtwInitialize @ 0x140797090 (EtwInitialize.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407A30E0 (EtwpCovSampCaptureWorkerThread.c)
 *     ExpPartitionDestroy @ 0x1407B04DC (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1407B42D0 (CMFSystemThreadRoutine.c)
 *     MUIRegistrySystemRoutine @ 0x1407B49D0 (MUIRegistrySystemRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1407B8370 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WheapProcessWaitingETWEvents @ 0x1407B8EC0 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x1407B9290 (WheaRegChangeNotifyCallback.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpInitializeSystemHivesLoad @ 0x1407BB498 (CmpInitializeSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpPostApcRunDown @ 0x1407C2870 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x1407C8E40 (CmThawRegistry.c)
 *     MiHotAddBootDeferredDescriptors @ 0x1407D8680 (MiHotAddBootDeferredDescriptors.c)
 *     MiInsertPageFileInList @ 0x1407DF450 (MiInsertPageFileInList.c)
 *     MiDeletePartitionResources @ 0x1407EBEB4 (MiDeletePartitionResources.c)
 *     MmStoreRegister @ 0x1407ED518 (MmStoreRegister.c)
 *     MiStartZeroEngineThreads @ 0x1407EFB0C (MiStartZeroEngineThreads.c)
 *     WdtpBarkWorkerThread @ 0x140814730 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x14081A980 (SbpVmbusNotificationHandler.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     NtAlpcSendWaitReceivePort @ 0x14084E310 (NtAlpcSendWaitReceivePort.c)
 *     CmpSignalDeferredPosts @ 0x14086CBD0 (CmpSignalDeferredPosts.c)
 *     CmpReportNotifyHelper @ 0x14086F9E0 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x140870084 (CmpPostNotify.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1408854D4 (CmpSignalUnloadEventArrayForHive.c)
 *     EtwpSynchronizeWithLogger @ 0x1408942B8 (EtwpSynchronizeWithLogger.c)
 *     EtwpQueueNotification @ 0x14089AC70 (EtwpQueueNotification.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408A9370 (AlpcpCompleteDispatchMessage.c)
 *     IopWriteFile @ 0x1408C3790 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1408DFF78 (PspEvaluateAndNotifyEmptyJob.c)
 *     DbgkpCloseObject @ 0x1408E0060 (DbgkpCloseObject.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408E5D40 (ExpWnfNotifyNameSubscribers.c)
 *     CmNotifyRunDown @ 0x1408F53C0 (CmNotifyRunDown.c)
 *     EtwpCovSampContextAddSamples @ 0x14090CD30 (EtwpCovSampContextAddSamples.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     DbgkpQueueMessage @ 0x14091F880 (DbgkpQueueMessage.c)
 *     PfTLoggingWorker @ 0x140922920 (PfTLoggingWorker.c)
 *     PfTReplaceCurrentBuffer @ 0x1409242F4 (PfTReplaceCurrentBuffer.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     PfGetCompletedTrace @ 0x14093A5D4 (PfGetCompletedTrace.c)
 *     PiUEventDereferenceEventEntry @ 0x1409673BC (PiUEventDereferenceEventEntry.c)
 *     PnpCompleteDeviceEvent @ 0x14096DC54 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x14096E070 (PnpDeviceEventWorker.c)
 *     NtCopyFileChunk @ 0x140970910 (NtCopyFileChunk.c)
 *     SPCallServerHandleQueryPolicy @ 0x14097D124 (SPCallServerHandleQueryPolicy.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 *     PfSnEndTrace @ 0x140989508 (PfSnEndTrace.c)
 *     EtwpShutdownConsumers @ 0x14098F160 (EtwpShutdownConsumers.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x14098F2B0 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 *     EtwpStopLoggerInstance @ 0x1409902C0 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1409906AC (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140990F70 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpDisassociateConsumer @ 0x140991268 (EtwpDisassociateConsumer.c)
 *     NtSetEventEx @ 0x140995350 (NtSetEventEx.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A05FC (IopInvalidateVolumesForDevice.c)
 *     IoDisconnectInterrupt @ 0x1409A2700 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1409A29B0 (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x1409A2E58 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x1409A2FA8 (IopInitializeActiveConnectBlock.c)
 *     NtDebugContinue @ 0x1409BAC30 (NtDebugContinue.c)
 *     DbgkpSetProcessDebugObject @ 0x1409BAE18 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x1409BB05C (DbgkpWakeTarget.c)
 *     MiPfExecuteReadList @ 0x1409CA528 (MiPfExecuteReadList.c)
 *     RtlDecompressBufferLZNT1 @ 0x1409F0620 (RtlDecompressBufferLZNT1.c)
 *     ExpWnfNotifySubscription @ 0x1409F4E98 (ExpWnfNotifySubscription.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140A14B30 (RtlDecompressFragmentLZNT1.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140A15DBC (IopAcquireReleaseDispatcherLock.c)
 *     PopSystemIdleWorker @ 0x140A1E6C0 (PopSystemIdleWorker.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 *     IopTrackLink @ 0x140A23294 (IopTrackLink.c)
 *     CmpPostApc @ 0x140A29490 (CmpPostApc.c)
 *     PopThermalWorker @ 0x140A3C300 (PopThermalWorker.c)
 *     PfTTraceListAdd @ 0x140A49470 (PfTTraceListAdd.c)
 *     MiInSwapStoreWorker @ 0x140A4A910 (MiInSwapStoreWorker.c)
 *     SmProcessDeleteNotification @ 0x140A4DE0C (SmProcessDeleteNotification.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140A4E780 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     CmpWakeWriteQueueWaiters @ 0x140A4F73C (CmpWakeWriteQueueWaiters.c)
 *     WmipQueueNotification @ 0x140A513C8 (WmipQueueNotification.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x140A56760 (CmpGetVolumeClusterSizeCompletion.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A5D6D0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     PspReleaseEnclaveThread @ 0x140A5F9C0 (PspReleaseEnclaveThread.c)
 *     NtNotifyChangeSession @ 0x140A64890 (NtNotifyChangeSession.c)
 *     PopBsdFlush @ 0x140A68FE4 (PopBsdFlush.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x140A6F6A0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140A726D0 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140A72854 (PopFxUnregisterDevice.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A776C0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     HalpGetDynamicDevicePointer @ 0x140A7DEF0 (HalpGetDynamicDevicePointer.c)
 *     PopFanWorker @ 0x140A7F6A0 (PopFanWorker.c)
 *     DbgkRegisterErrorPort @ 0x140A80BEC (DbgkRegisterErrorPort.c)
 *     SmpFlushStorePages @ 0x140A82120 (SmpFlushStorePages.c)
 *     PopCompleteAction @ 0x140A835E8 (PopCompleteAction.c)
 *     PiUEventHandleVetoEvent @ 0x140A8679C (PiUEventHandleVetoEvent.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A966B0 (PopFxUpdateVetoMaskWork.c)
 *     PopReleaseTransitionLock @ 0x140AA0354 (PopReleaseTransitionLock.c)
 *     IopSendMessageToTrackService @ 0x140AA324C (IopSendMessageToTrackService.c)
 *     PsSetSessionObjectIoEvent @ 0x140AA6AC8 (PsSetSessionObjectIoEvent.c)
 *     PopBatteryReadTag @ 0x140AA89F8 (PopBatteryReadTag.c)
 *     CmpWaitForHiveMount @ 0x140AAE5C4 (CmpWaitForHiveMount.c)
 *     ArbArbiterHandler @ 0x140AAF7B0 (ArbArbiterHandler.c)
 *     WmipProcessSynchronousEtw @ 0x140AB1760 (WmipProcessSynchronousEtw.c)
 *     IoVerifyVolume @ 0x140AB22D0 (IoVerifyVolume.c)
 *     ExpPartitionCreatePool @ 0x140AB5BB0 (ExpPartitionCreatePool.c)
 *     WmipReleaseCollectionEnabled @ 0x140AB8E14 (WmipReleaseCollectionEnabled.c)
 *     IopLoadUnloadDriver @ 0x140ABFF10 (IopLoadUnloadDriver.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140ACFB30 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     PnprInitiateReplaceOperation @ 0x140B43BF4 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140B450A0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140B4B0F8 (PfpScenCtxPrefetchStateSet.c)
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140B4BE20 (PopHandleWakeSources.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B4F470 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140B4F650 (PopBuildDeviceNotifyListWatchdog.c)
 *     MiShutdownSystem @ 0x140B52044 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140B5223C (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140B54550 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140B55320 (PopTransitionToSleep.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     EmpReleasePagingReference @ 0x140B587B4 (EmpReleasePagingReference.c)
 *     ExpSetSwappingKernelApc @ 0x140B5AA20 (ExpSetSwappingKernelApc.c)
 *     HalpPiix4Detect @ 0x140B5AF1C (HalpPiix4Detect.c)
 *     PopFlushVolumeWorker @ 0x140B5CB30 (PopFlushVolumeWorker.c)
 *     PfpScenCtxScenarioSet @ 0x140B5E460 (PfpScenCtxScenarioSet.c)
 *     KdpTimeSlipWork @ 0x140B68650 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140B7E2F0 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140B82010 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140B8D530 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140BA2F50 (AnFwpFadeAnimationTimer.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     MiInitializePagedPoolEvents @ 0x140C42C94 (MiInitializePagedPoolEvents.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiEnterDeferredReadyState @ 0x1402F0680 (KiEnterDeferredReadyState.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  LONG *p_SignalState; // r14
  BOOLEAN v4; // r12
  int v6; // esi
  unsigned __int8 CurrentIrql; // al
  __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v10; // ebx
  LONG v11; // r13d
  struct _LIST_ENTRY *Flink; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *v15; // r15
  struct _LIST_ENTRY *Blink; // rcx
  bool v17; // zf
  struct _LIST_ENTRY *v19; // r15
  struct _LIST_ENTRY *v20; // rcx
  char v21; // al
  struct _LIST_ENTRY *v22; // r12
  unsigned int v23; // ebx
  struct _LIST_ENTRY *v24; // rsi
  __int64 v25; // rcx
  int v26; // eax
  struct _LIST_ENTRY *v27; // rdx
  struct _LIST_ENTRY *v28; // rbx
  unsigned int v29; // ebp
  struct _LIST_ENTRY *v30; // rdx
  struct _LIST_ENTRY *v31; // rcx
  char v32; // al
  char v33; // bp
  struct _LIST_ENTRY *v34; // rbx
  unsigned int v35; // esi
  __int64 Flink_low; // rcx
  int v37; // eax
  struct _LIST_ENTRY *v38; // rdx
  struct _LIST_ENTRY *v39; // rsi
  unsigned int v40; // ebp
  struct _LIST_ENTRY *v41; // rdx
  struct _LIST_ENTRY *v42; // rcx
  __int64 Blink_high; // rax
  __int64 v44; // rax
  struct _LIST_ENTRY *v45; // [rsp+30h] [rbp-68h]
  struct _LIST_ENTRY *v46; // [rsp+30h] [rbp-68h]
  struct _LIST_ENTRY *v47; // [rsp+38h] [rbp-60h]
  char v48; // [rsp+40h] [rbp-58h]
  struct _KPRCB *v51; // [rsp+B8h] [rbp+20h]

  p_SignalState = &Event->Header.SignalState;
  v4 = Wait;
  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v6 = 0;
LABEL_4:
    CurrentIrql = KeGetCurrentIrql();
    v48 = CurrentIrql;
    v8 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = 0;
    v51 = CurrentPrcb;
    if ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Event->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Event->Header.Lock, 7u) );
      CurrentPrcb = v51;
      p_SignalState = &Event->Header.SignalState;
    }
    v11 = *p_SignalState;
    *p_SignalState = 1;
    if ( v11 )
    {
LABEL_15:
      _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)CurrentPrcb, v4 != 0 ? 3 : 0, 1, Increment, v48);
      return v11;
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
            goto LABEL_15;
          v14 = Flink->Flink;
          v15 = Flink;
          Blink = Flink->Blink;
          v45 = v14;
          if ( v14->Blink != v15 || Blink->Flink != v15 )
            goto LABEL_12;
          Blink->Flink = v14;
          v14->Blink = Blink;
          v32 = (char)v15[1].Flink;
          if ( v32 == 1 )
            break;
          if ( v32 == 2 )
          {
            BYTE1(v15[1].Flink) = 5;
            KiInsertQueueInternal(v15[1].Blink, v15);
            v17 = (*p_SignalState)-- == 1;
            CurrentPrcb = v51;
            if ( v17 )
              goto LABEL_15;
            Flink = v45;
            p_WaitListHead = &Event->Header.WaitListHead;
          }
          else
          {
            if ( v32 == 4 )
            {
              BYTE1(v15[1].Flink) = 5;
              *p_SignalState = 0;
              KeInsertQueueDpc((PRKDPC)v15[1].Blink, Event, v15);
            }
            else
            {
              KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
            }
            Flink = v45;
            p_WaitListHead = &Event->Header.WaitListHead;
            CurrentPrcb = v51;
          }
        }
        v33 = 0;
        v34 = v15[1].Blink;
        v35 = 0;
        v47 = (struct _LIST_ENTRY *)WORD1(v15[1].Flink);
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v34[4], 0LL) )
        {
          do
          {
            if ( (++v35 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Blink) )
            {
              HvlNotifyLongSpinWait(v35);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v34[4].Flink );
        }
        if ( BYTE4(v34[24].Flink) != 5 )
          goto LABEL_80;
        Flink_low = LOBYTE(v34[7].Flink);
        v37 = (__int64)v34[7].Flink & 7;
        if ( v37 != 1 && v37 != 4 )
          break;
        v38 = v34[14].Blink;
        if ( v38 )
        {
          if ( ((__int64)v38->Flink & 0x7F) == 0x15 )
          {
            Blink_high = (unsigned __int8)HIDWORD(v34[33].Blink);
            HIDWORD(v34[33].Blink) = Blink_high;
            _InterlockedIncrement((volatile signed __int32 *)&v38[33].Blink + Blink_high);
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)&v38[2].Blink);
          }
        }
        v39 = v34[44].Blink;
        if ( v39 )
        {
          v40 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v39[2109], 0LL) )
          {
            do
            {
              if ( (++v40 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Flink_low) )
              {
                HvlNotifyLongSpinWait(v40);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( v39[2109].Flink );
          }
          if ( v34[44].Blink )
          {
            v41 = v34[13].Blink;
            v42 = v34[14].Flink;
            if ( v41->Blink != (struct _LIST_ENTRY *)&v34[13].Blink
              || v42->Flink != (struct _LIST_ENTRY *)&v34[13].Blink )
            {
              goto LABEL_12;
            }
            v42->Flink = v41;
            v41->Blink = v42;
            v34[44].Blink = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)&v39[2109], 0LL);
        }
        KiEnterDeferredReadyState(v34);
        CurrentPrcb = v51;
        v33 = 1;
        v34[13].Blink = (struct _LIST_ENTRY *)v51->DeferredReadyListHead.Next;
        v51->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)&v34[13].Blink;
        v34[12].Blink = v47;
        v34[61].Flink = 0LL;
LABEL_75:
        Flink = v45;
        v34[4].Flink = 0LL;
        ++BYTE1(v15[1].Flink);
        p_WaitListHead = &Event->Header.WaitListHead;
        if ( v33 )
        {
          v17 = (*p_SignalState)-- == 1;
          if ( v17 )
            goto LABEL_15;
          p_WaitListHead = &Event->Header.WaitListHead;
        }
      }
      if ( ((__int64)v34[7].Flink & 7) != 0 )
      {
        if ( v37 == 5 )
        {
          CurrentPrcb = v51;
          LOBYTE(v34[7].Flink) = Flink_low & 0xF8 | 6;
        }
        else
        {
          CurrentPrcb = v51;
          if ( v37 == 3 )
            BYTE1(v15[1].Flink) = 2;
        }
        goto LABEL_75;
      }
      v33 = 1;
      LOBYTE(v34[7].Flink) = Flink_low & 0xF8 | 2;
      v34[12].Blink = v47;
      v34[61].Flink = 0LL;
      BYTE1(v15[1].Flink) = 0;
LABEL_80:
      CurrentPrcb = v51;
      goto LABEL_75;
    }
    while ( 1 )
    {
      if ( Flink == p_WaitListHead )
      {
        v4 = Wait;
        Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
        Event->Header.WaitListHead.Flink = &Event->Header.WaitListHead;
        goto LABEL_15;
      }
      v19 = Flink;
      v20 = Flink->Flink;
      v46 = v20;
      v21 = (char)v19[1].Flink;
      if ( v21 == 1 )
        break;
      if ( v21 == 2 )
      {
        BYTE1(v19[1].Flink) = 5;
        KiInsertQueueInternal(v19[1].Blink, v19);
        CurrentPrcb = v51;
      }
      else
      {
        if ( v21 == 4 )
        {
          BYTE1(v19[1].Flink) = 5;
          *p_SignalState = 0;
          KeInsertQueueDpc((PRKDPC)v19[1].Blink, Event, v19);
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v19, 256LL, 0LL);
        }
        CurrentPrcb = v51;
      }
LABEL_23:
      Flink = v46;
      p_WaitListHead = &Event->Header.WaitListHead;
    }
    v22 = (struct _LIST_ENTRY *)WORD1(v19[1].Flink);
    v23 = 0;
    v24 = v19[1].Blink;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v24[4], 0LL) )
    {
      do
      {
        if ( (++v23 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20) )
        {
          HvlNotifyLongSpinWait(v23);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( v24[4].Flink );
    }
    if ( BYTE4(v24[24].Flink) == 5 )
    {
      v25 = LOBYTE(v24[7].Flink);
      v26 = (__int64)v24[7].Flink & 7;
      if ( v26 == 1 || v26 == 4 )
      {
        v27 = v24[14].Blink;
        if ( v27 )
        {
          if ( ((__int64)v27->Flink & 0x7F) == 0x15 )
          {
            v44 = (unsigned __int8)HIDWORD(v24[33].Blink);
            HIDWORD(v24[33].Blink) = v44;
            _InterlockedIncrement((volatile signed __int32 *)&v27[33].Blink + v44);
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)&v27[2].Blink);
          }
        }
        v28 = v24[44].Blink;
        if ( v28 )
        {
          v29 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v28[2109], 0LL) )
          {
            do
            {
              if ( (++v29 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v25) )
              {
                HvlNotifyLongSpinWait(v29);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( v28[2109].Flink );
          }
          if ( v24[44].Blink )
          {
            v30 = v24[13].Blink;
            v31 = v24[14].Flink;
            if ( v30->Blink != (struct _LIST_ENTRY *)&v24[13].Blink
              || v31->Flink != (struct _LIST_ENTRY *)&v24[13].Blink )
            {
LABEL_12:
              __fastfail(3u);
            }
            v31->Flink = v30;
            v30->Blink = v31;
            v24[44].Blink = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)&v28[2109], 0LL);
        }
        KiEnterDeferredReadyState(v24);
        CurrentPrcb = v51;
        v24[13].Blink = (struct _LIST_ENTRY *)v51->DeferredReadyListHead.Next;
        v51->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)&v24[13].Blink;
        v24[12].Blink = v22;
        v24[61].Flink = 0LL;
        goto LABEL_22;
      }
      if ( ((__int64)v24[7].Flink & 7) != 0 )
      {
        if ( v26 == 5 )
        {
          LOBYTE(v24[7].Flink) = v25 & 0xF8 | 6;
        }
        else if ( v26 == 3 )
        {
          BYTE1(v19[1].Flink) = 2;
        }
      }
      else
      {
        LOBYTE(v24[7].Flink) = v25 & 0xF8 | 2;
        v24[12].Blink = v22;
        v24[61].Flink = 0LL;
        BYTE1(v19[1].Flink) = 0;
      }
    }
    CurrentPrcb = v51;
LABEL_22:
    v24[4].Flink = 0LL;
    ++BYTE1(v19[1].Flink);
    goto LABEL_23;
  }
  if ( *p_SignalState != 1 || Wait )
  {
    v6 = 1;
    goto LABEL_4;
  }
  return 1;
}
