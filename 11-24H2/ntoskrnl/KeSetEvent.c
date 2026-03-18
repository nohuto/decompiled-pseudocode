/*
 * XREFs of KeSetEvent @ 0x1402725A0
 * Callers:
 *     ExpWorkerThread @ 0x140207CC0 (ExpWorkerThread.c)
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionCharges @ 0x14020F5E4 (MiReturnCrossPartitionCharges.c)
 *     MiCheckForControlAreaDeletion @ 0x140210220 (MiCheckForControlAreaDeletion.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x14021B1A0 (MiHandleTransitionFault.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     CcFlushCacheOneRange @ 0x140240110 (CcFlushCacheOneRange.c)
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     MiQueuePageAccessLog @ 0x140244A68 (MiQueuePageAccessLog.c)
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     PfpEventHandleFullBuffer @ 0x140245E30 (PfpEventHandleFullBuffer.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140247F78 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024C420 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     EtwpSwitchBuffer @ 0x14024CDA0 (EtwpSwitchBuffer.c)
 *     ExNotifyCallback @ 0x14024D520 (ExNotifyCallback.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     IopCopyCompleteReadRequest @ 0x140268870 (IopCopyCompleteReadRequest.c)
 *     KiDecrementProcessStackCount @ 0x1402699D0 (KiDecrementProcessStackCount.c)
 *     MiInsertSecondaryListStandbyPage @ 0x14026F190 (MiInsertSecondaryListStandbyPage.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402705A0 (ExpPartitionCreateThreadIfNecessary.c)
 *     IoReleaseRemoveLockEx @ 0x140270610 (IoReleaseRemoveLockEx.c)
 *     MiUnlinkStandbyPage @ 0x140270760 (MiUnlinkStandbyPage.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MiUpdateLargePageCandidateValue @ 0x140272210 (MiUpdateLargePageCandidateValue.c)
 *     CcDecrementVacbActiveCount @ 0x140272550 (CcDecrementVacbActiveCount.c)
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     MiDecrementVadsBeingDeleted @ 0x140274480 (MiDecrementVadsBeingDeleted.c)
 *     PfpPartitionIterate @ 0x140274CF0 (PfpPartitionIterate.c)
 *     PfFileInfoNotify @ 0x140275220 (PfFileInfoNotify.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140275DE0 (ExReleaseRundownProtectionCacheAware.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402794F0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14027A4F0 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14027A7D0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14028D4B0 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiSignalCommitSignals @ 0x14028F200 (MiSignalCommitSignals.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14028F470 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140291634 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     PopFxReferenceDevice @ 0x14029F788 (PopFxReferenceDevice.c)
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     KiInSwapSingleProcess @ 0x1402A67C4 (KiInSwapSingleProcess.c)
 *     CcDereferencePartition @ 0x1402A7F20 (CcDereferencePartition.c)
 *     CcWriteBehindPreProcess @ 0x1402A8434 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x1402A883C (CcWriteBehindPostProcess.c)
 *     CcAsyncLazywriteWorker @ 0x1402A8E24 (CcAsyncLazywriteWorker.c)
 *     CcPostDeferredWrites @ 0x1402AAB14 (CcPostDeferredWrites.c)
 *     CcUnpinFileDataEx @ 0x1402AB380 (CcUnpinFileDataEx.c)
 *     ExpUnblockPushLock @ 0x1402C793C (ExpUnblockPushLock.c)
 *     ExpReleaseRundownProtection @ 0x1402C8140 (ExpReleaseRundownProtection.c)
 *     CcReapPrivateVolumeCachemap @ 0x1402CA344 (CcReapPrivateVolumeCachemap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1402CB768 (CcDeletePrivateVolumeCacheMap.c)
 *     CcPrepareMdlWrite @ 0x1402CC1E0 (CcPrepareMdlWrite.c)
 *     CcDeleteSharedCacheMap @ 0x1402CCE98 (CcDeleteSharedCacheMap.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402CD54C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcDeleteBcbs @ 0x1402CE42C (CcDeleteBcbs.c)
 *     CcNotifyWriteBehindInternal @ 0x1402CF16C (CcNotifyWriteBehindInternal.c)
 *     MiFlushAllPagesWorker @ 0x1402CF240 (MiFlushAllPagesWorker.c)
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 *     MiFlushAllStoreSwapPages @ 0x1402D01D8 (MiFlushAllStoreSwapPages.c)
 *     MiWakeModifiedPageWriter @ 0x1402D0460 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402D10D4 (MiStoreUpdateMemoryConditions.c)
 *     MiDecreaseAvailablePages @ 0x1402D1620 (MiDecreaseAvailablePages.c)
 *     MiObtainFreePages @ 0x1402D17D4 (MiObtainFreePages.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1402D19B0 (MiUpdateAvailableEventsAtDpc.c)
 *     MiScheduleZeroPageThreads @ 0x1402D36A0 (MiScheduleZeroPageThreads.c)
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 *     MiFreeExcessSegments @ 0x1402EA170 (MiFreeExcessSegments.c)
 *     PfSnReferenceProcessTrace @ 0x1402ED090 (PfSnReferenceProcessTrace.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiRecordLargePageCandidate @ 0x1403096C4 (MiRecordLargePageCandidate.c)
 *     PopPepUpdateConstraints @ 0x1403128A0 (PopPepUpdateConstraints.c)
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140316EF0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopFxCompleteComponentActivation @ 0x140317240 (PopFxCompleteComponentActivation.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     KiDetachProcess @ 0x140321440 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140322730 (KeUnstackDetachProcess.c)
 *     ExQueueWorkItemFromIo @ 0x140323D10 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x140324510 (ExpQueueWorkItem.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     KiReadyOutSwappedThreads @ 0x140336F68 (KiReadyOutSwappedThreads.c)
 *     KiRequestProcessInSwap @ 0x140338230 (KiRequestProcessInSwap.c)
 *     KiInswapAndReadyThread @ 0x140338374 (KiInswapAndReadyThread.c)
 *     SepRmCallLsa @ 0x14034A120 (SepRmCallLsa.c)
 *     PopQueueTargetDpc @ 0x140352A60 (PopQueueTargetDpc.c)
 *     MiStoreContractVirtualPagefileApc @ 0x1403659B0 (MiStoreContractVirtualPagefileApc.c)
 *     MiStoreEvictThread @ 0x140365C20 (MiStoreEvictThread.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140366180 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiQueueControlAreaDelete @ 0x14036F638 (MiQueueControlAreaDelete.c)
 *     MiDeleteControlArea @ 0x14036F6E8 (MiDeleteControlArea.c)
 *     MiFlushComplete @ 0x140370EF0 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x140371070 (MiFreeOverlappedFlushEntry.c)
 *     MiInsertUnusedSubsection @ 0x140371BB0 (MiInsertUnusedSubsection.c)
 *     FsFilterCtrlFree @ 0x140374B44 (FsFilterCtrlFree.c)
 *     PopFxReleasePowerIrp @ 0x140376768 (PopFxReleasePowerIrp.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PopFxTryReferenceDevice @ 0x140377BF0 (PopFxTryReferenceDevice.c)
 *     MiProcessWorkingSets @ 0x140378690 (MiProcessWorkingSets.c)
 *     SmKmStoreHelperCommandProcess @ 0x14037AA90 (SmKmStoreHelperCommandProcess.c)
 *     MmStoreEvictComplete @ 0x14037C798 (MmStoreEvictComplete.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E000 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140389780 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiPfCompleteCoalescedIo @ 0x140397438 (MiPfCompleteCoalescedIo.c)
 *     MiIssueHardFaultIo @ 0x140398DC4 (MiIssueHardFaultIo.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14039B2D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     MmReleaseResourceCharge @ 0x14039BBFC (MmReleaseResourceCharge.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x14039BF74 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14039C2BC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperSendCommand @ 0x14039C3E4 (SmKmStoreHelperSendCommand.c)
 *     SmKmUnlockMdl @ 0x14039C804 (SmKmUnlockMdl.c)
 *     MiObtainDynamicVa @ 0x1403A58DC (MiObtainDynamicVa.c)
 *     PopFxComponentWork @ 0x1403B4AD0 (PopFxComponentWork.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1403B98CC (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     KiProcessDisconnectList @ 0x1403BFC4C (KiProcessDisconnectList.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403BFD28 (KiInvokeInterruptServiceRoutine.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403C29A0 (NtSignalAndWaitForSingleObject.c)
 *     IopCompleteIoRingEntry @ 0x1403C5F20 (IopCompleteIoRingEntry.c)
 *     MiIncrementZeroEngineThread @ 0x1403C7B8C (MiIncrementZeroEngineThread.c)
 *     MiMarkMdlComplete @ 0x1403CD75C (MiMarkMdlComplete.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1403D8F34 (PopCompleteNotifyTransitionCommon.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1403EF5C0 (MiGetSlabRepurposedStandbyListWorker.c)
 *     PopUserPresentSet @ 0x1403F2C70 (PopUserPresentSet.c)
 *     MiIncreaseAvailablePages @ 0x1403F66D0 (MiIncreaseAvailablePages.c)
 *     MiWakeCommitRequest @ 0x1403F7558 (MiWakeCommitRequest.c)
 *     MiSegmentDereferenceWorker @ 0x1403F7BB0 (MiSegmentDereferenceWorker.c)
 *     MiMarkPendingCommitRequests @ 0x1403F7DBC (MiMarkPendingCommitRequests.c)
 *     MiHandlePageFileSizeChanges @ 0x1403F81CC (MiHandlePageFileSizeChanges.c)
 *     MiProcessingPageExtendComplete @ 0x1403F8668 (MiProcessingPageExtendComplete.c)
 *     MiAttemptPageFileReductionApc @ 0x1403F9310 (MiAttemptPageFileReductionApc.c)
 *     MiQueuePageFileExtension @ 0x1403F95EC (MiQueuePageFileExtension.c)
 *     ExpWakePushLock @ 0x14040DE50 (ExpWakePushLock.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14040F1F0 (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     MiUpdateSlabTypeAvailablePages @ 0x140413F84 (MiUpdateSlabTypeAvailablePages.c)
 *     MiReplenishSlabAllocatorWorker @ 0x140414340 (MiReplenishSlabAllocatorWorker.c)
 *     PopPropogateCoolingChange @ 0x14042796C (PopPropogateCoolingChange.c)
 *     IoAcquireRemoveLockEx @ 0x140429580 (IoAcquireRemoveLockEx.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14042B640 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmFpFree @ 0x14042F2B0 (SmFpFree.c)
 *     MiUpdateCommitCounts @ 0x140434D3C (MiUpdateCommitCounts.c)
 *     CcNotifyWriteBehindVolume @ 0x14043CB2C (CcNotifyWriteBehindVolume.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x14043EC48 (EtwpCovSampCaptureBufferQueue.c)
 *     MiFreePageToSlabEntry @ 0x14043FBC8 (MiFreePageToSlabEntry.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140442480 (LZNT1DecompressChunkWorkItem.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140449540 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IopSessionChangeWorker @ 0x14044B580 (IopSessionChangeWorker.c)
 *     ExNotifyWithProcessing @ 0x14044B6C4 (ExNotifyWithProcessing.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140458FA8 (PopUpdateWatchdogNoWorkersEvent.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1404596C0 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1404598A0 (EtwpCovSampCaptureQueueDpc.c)
 *     SmKmStoreHelperWorker @ 0x14045D450 (SmKmStoreHelperWorker.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     MiDecrementControlAreaCount @ 0x14045E248 (MiDecrementControlAreaCount.c)
 *     CcPurgeAndClearCacheSection @ 0x1404612E4 (CcPurgeAndClearCacheSection.c)
 *     MiAllocateMappedWriterMdls @ 0x140469E0C (MiAllocateMappedWriterMdls.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14046C0C4 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x14046C280 (PopPowerRequestCallbackWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x14046C600 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14046CD70 (PnpDeviceActionWorker.c)
 *     PopQueueDirectedDripsWork @ 0x14046D734 (PopQueueDirectedDripsWork.c)
 *     WmipUnreferenceRegEntry @ 0x14046FC2C (WmipUnreferenceRegEntry.c)
 *     MiSyncCommitSignals @ 0x140470AE4 (MiSyncCommitSignals.c)
 *     WheapProcessWorkQueueItem @ 0x140477F90 (WheapProcessWorkQueueItem.c)
 *     MiPfIssueCoalescedSupport @ 0x14047E5A4 (MiPfIssueCoalescedSupport.c)
 *     PfpReturnAccessBuffer @ 0x14047E840 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14047E990 (MiAllocatePfnRepurposeLogDispatch.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x14047ECEC (HalpReleaseSecondaryIcEntryShared.c)
 *     SmKmGenericCompletion @ 0x14047FC20 (SmKmGenericCompletion.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047FE9C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404840B0 (MiStoreDecrementOutstandingWrites.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1404890E0 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpEnumerateCallback @ 0x14048B900 (ExpEnumerateCallback.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x14048C460 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     PopUserPresentSetWorker @ 0x140492270 (PopUserPresentSetWorker.c)
 *     ?SmCompressCtxQueueEntries@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_QUEUE@@@Z @ 0x140496F20 (-SmCompressCtxQueueEntries@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_.c)
 *     KeRetryOutswapProcess @ 0x140497DD0 (KeRetryOutswapProcess.c)
 *     PnpUnlockDeviceActionQueue @ 0x140498E64 (PnpUnlockDeviceActionQueue.c)
 *     EtwpLoggerDpc @ 0x14049A770 (EtwpLoggerDpc.c)
 *     CmpLazyFlushDpcRoutine @ 0x14049EA10 (CmpLazyFlushDpcRoutine.c)
 *     PopBatteryIrpComplete @ 0x1404A4270 (PopBatteryIrpComplete.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404ACF40 (MmStoreFlushOutstandingEvictions.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404AD028 (PopUnregisterPowerSettingCallback.c)
 *     MiFinishResume @ 0x1404B3560 (MiFinishResume.c)
 *     PopFxCompleteComponentPerfState @ 0x1404B6CBC (PopFxCompleteComponentPerfState.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x1404B7A50 (ExpWorkQueueManagerReaperTimer.c)
 *     VfPoolDelayFreeIfPossible @ 0x1404BAF20 (VfPoolDelayFreeIfPossible.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1404BBAF0 (EtwpCovSampCaptureCleanupLookasides.c)
 *     PnpUnlockMountableDevice @ 0x1404C1E7C (PnpUnlockMountableDevice.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C768C (CcAsyncLazywriteWorkerMulti.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1404C8588 (KiSynchronizePassiveInterruptExecution.c)
 *     MiFinishPageFileExtension @ 0x1404CB678 (MiFinishPageFileExtension.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1404CD2B0 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x1404D0B20 (KiReleaseSecondaryPassiveConnectLock.c)
 *     MiReadFromMemoryPagefile @ 0x1404D1F24 (MiReadFromMemoryPagefile.c)
 *     IopFreeReserveIrp @ 0x1404D420C (IopFreeReserveIrp.c)
 *     MiFlushAllFilesystemPages @ 0x1404D6B8C (MiFlushAllFilesystemPages.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404DB3D0 (CcWorkerThread.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404DF0A0 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcPostWorkQueueAsyncRead @ 0x1404DFCEC (CcPostWorkQueueAsyncRead.c)
 *     PopIrpWorker @ 0x1404EBF10 (PopIrpWorker.c)
 *     MiDecrementCloneHeaderCount @ 0x1404F52D0 (MiDecrementCloneHeaderCount.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1404F588C (PopFxAcpiForwardPepWorkRequest.c)
 *     MiQueueWorkingSetRequest @ 0x1404F62CC (MiQueueWorkingSetRequest.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F6510 (MiStoreExtendVirtualPagefile.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404F884C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     MiDeleteCloneDescriptor @ 0x1404F8BB8 (MiDeleteCloneDescriptor.c)
 *     HalpDeleteSecondaryIcEntry @ 0x140555A18 (HalpDeleteSecondaryIcEntry.c)
 *     HalpProcessSecondarySignalList @ 0x140555D20 (HalpProcessSecondarySignalList.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x14057C3FC (CcDrainDelayDeleteForPartitionExit.c)
 *     CcProcessDelayedDeletePVCM @ 0x14057C520 (CcProcessDelayedDeletePVCM.c)
 *     CcDeletePartition @ 0x14057C6EC (CcDeletePartition.c)
 *     FsRtlStackOverflowRead @ 0x140582090 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x140596328 (IopFreeBackpocketIrp.c)
 *     IopMcDereferenceMdl @ 0x1405A2C18 (IopMcDereferenceMdl.c)
 *     PnpCompleteSystemStartProcess @ 0x1405A5EEC (PnpCompleteSystemStartProcess.c)
 *     PnprQuiesce @ 0x1405A7C88 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405A9540 (PnpDiagnosticCompletionRoutine.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1405B6760 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x1405C2060 (KiPassiveIsrWatchdog.c)
 *     KiSignalWaitDisconnectLock @ 0x1405C209C (KiSignalWaitDisconnectLock.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x1405C4030 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KeBalanceSetManager @ 0x1405C45C0 (KeBalanceSetManager.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C6000 (KiDeferredBugcheckRecoveryWorker.c)
 *     ?KiFlushScbReferencesDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405C75E0 (-KiFlushScbReferencesDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     PfpScenCtxWaiterTimedOut @ 0x1405CC500 (PfpScenCtxWaiterTimedOut.c)
 *     PopDeviceIdleCompletion @ 0x1405CFD30 (PopDeviceIdleCompletion.c)
 *     PopBatteryWakeDpc @ 0x1405D7D50 (PopBatteryWakeDpc.c)
 *     PopPowerAdapterIrpComplete @ 0x1405D7DC0 (PopPowerAdapterIrpComplete.c)
 *     PopIdleWakeDelayedWakeSourceReferencer @ 0x1405DAB20 (PopIdleWakeDelayedWakeSourceReferencer.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1405DBFE0 (PopPepStartDeviceUnregisterActivity.c)
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14060A0F0 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14060ECB0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14060ED80 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     SmHwAcceleratorPartitionMgrWakeDescriptorWaiters @ 0x14060FA38 (SmHwAcceleratorPartitionMgrWakeDescriptorWaiters.c)
 *     DifKeSetEventWrapper @ 0x140630910 (DifKeSetEventWrapper.c)
 *     EtwSendTraceBuffer @ 0x14064F090 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140650A30 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x140651D10 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x140655BA0 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x140655BF0 (ExRegisterBootDevice.c)
 *     WheapAddErrorSource @ 0x14065BC38 (WheapAddErrorSource.c)
 *     WheaLogInternalEvent @ 0x14065E070 (WheaLogInternalEvent.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x1406688F0 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     CmSiSetEvent @ 0x140668BAC (CmSiSetEvent.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066A288 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReadPagefilePage @ 0x14066A47C (MiReadPagefilePage.c)
 *     MiReleaseCommitForResetPages @ 0x14066A7E8 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x14066BEC0 (MiZeroPageFile.c)
 *     MiDistributeSystemCacheVaReductions @ 0x140672220 (MiDistributeSystemCacheVaReductions.c)
 *     MiPageNotZero @ 0x140673EAC (MiPageNotZero.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140676BB8 (MiSignalNonPagedPoolWatchers.c)
 *     MiIrpCompletionApcRoutine @ 0x14067A240 (MiIrpCompletionApcRoutine.c)
 *     MiFinishHoldingDirtyFaults @ 0x14067D100 (MiFinishHoldingDirtyFaults.c)
 *     MiIncreaseCommitLimits @ 0x14068620C (MiIncreaseCommitLimits.c)
 *     MmManagePartitionSetMemoryThresholds @ 0x14068BBCC (MmManagePartitionSetMemoryThresholds.c)
 *     MiStoreDeletePartition @ 0x14068BE24 (MiStoreDeletePartition.c)
 *     MiStoreRundownWritesApc @ 0x14068C7D0 (MiStoreRundownWritesApc.c)
 *     MiSignalZeroingPassComplete @ 0x14068FE80 (MiSignalZeroingPassComplete.c)
 *     MiWakeAllZeroConductors @ 0x14068FF14 (MiWakeAllZeroConductors.c)
 *     MiZeroEngineSetOptimalCount @ 0x14069001C (MiZeroEngineSetOptimalCount.c)
 *     MiZeroPageThread @ 0x140690570 (MiZeroPageThread.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x140690CD4 (MiSignalNewAcceleratorsAvailable.c)
 *     PspGetSetContextSpecialApc @ 0x1406B3780 (PspGetSetContextSpecialApc.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x1406F54C4 (PopPowerAggregatorDozeTimerDisarm.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1406FEC90 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalGetAdapterV3 @ 0x1407000B8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140700658 (HalGetAdapterV2.c)
 *     ArbBuildAssignmentOrdering @ 0x140704D3C (ArbBuildAssignmentOrdering.c)
 *     DbgkpLkmdSnapThreadApc @ 0x1407083C0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14070C6D0 (FsRtlpOplockWaitCompleteRoutine.c)
 *     HvlQuerySetBootPagesInfo @ 0x14070EAFC (HvlQuerySetBootPagesInfo.c)
 *     IopConnectLinkTrackingPort @ 0x140711D30 (IopConnectLinkTrackingPort.c)
 *     PnpShutdownDevices @ 0x14071AAA0 (PnpShutdownDevices.c)
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14073639C (IopWarmEjectDevice.c)
 *     PfGenerateTrace @ 0x14074637C (PfGenerateTrace.c)
 *     PfTCleanup @ 0x140746568 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140747C10 (PfSnTracingStateExWorkerRoutine.c)
 *     PfpParametersWatcher @ 0x1407484A0 (PfpParametersWatcher.c)
 *     PopPowerLimitUpdatePendingEvents @ 0x14074BA84 (PopPowerLimitUpdatePendingEvents.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x140759220 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140759DE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140767304 (SshpSessionManagerFlushControlEventBuffer.c)
 *     TtmiWriteEventToAllQueues @ 0x14076A34C (TtmiWriteEventToAllQueues.c)
 *     TtmiWriteEventToSingleQueue @ 0x140770BA4 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1407728F0 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1407729F4 (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x140777030 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x14077B504 (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x14077B634 (PsTerminateVsmEnclave.c)
 *     PspDereferenceSessionFinal @ 0x14077BA80 (PspDereferenceSessionFinal.c)
 *     RtlpCtSelfSubscribe @ 0x140787234 (RtlpCtSelfSubscribe.c)
 *     Pdcv2pActivationClientCallback @ 0x14078DCF0 (Pdcv2pActivationClientCallback.c)
 *     SmcCacheAdd @ 0x14079CEA0 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x14079D07C (SmcCacheDelete.c)
 *     EtwInitialize @ 0x1407A6460 (EtwInitialize.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B24B0 (EtwpCovSampCaptureWorkerThread.c)
 *     ExpPartitionDestroy @ 0x1407BFCAC (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1407C27E0 (CMFSystemThreadRoutine.c)
 *     MUIRegistrySystemRoutine @ 0x1407C2EE0 (MUIRegistrySystemRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1407C7B40 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WheapProcessWaitingETWEvents @ 0x1407C8690 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x1407C8A60 (WheaRegChangeNotifyCallback.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpInitializeSystemHivesLoad @ 0x1407CAC9C (CmpInitializeSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpPostApcRunDown @ 0x1407D1FB0 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x1407D85E0 (CmThawRegistry.c)
 *     MiHotAddBootDeferredDescriptors @ 0x1407E8540 (MiHotAddBootDeferredDescriptors.c)
 *     MiInsertPageFileInList @ 0x1407EF2F0 (MiInsertPageFileInList.c)
 *     MiDeletePartitionResources @ 0x1407FBD44 (MiDeletePartitionResources.c)
 *     MmStoreRegister @ 0x1407FD3A8 (MmStoreRegister.c)
 *     MiStartZeroEngineThreads @ 0x1407FF9CC (MiStartZeroEngineThreads.c)
 *     WdtpBarkWorkerThread @ 0x140824550 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x14082A6C0 (SbpVmbusNotificationHandler.c)
 *     EtwpSynchronizeWithLogger @ 0x14083381C (EtwpSynchronizeWithLogger.c)
 *     EtwpQueueNotification @ 0x14083A16C (EtwpQueueNotification.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     NtAlpcSendWaitReceivePort @ 0x14084A0C0 (NtAlpcSendWaitReceivePort.c)
 *     PiUEventDereferenceEventEntry @ 0x14085BBFC (PiUEventDereferenceEventEntry.c)
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x140868D58 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x14086A690 (CmpSignalDeferredPosts.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408912A0 (AlpcpCompleteDispatchMessage.c)
 *     CmNotifyRunDown @ 0x1408A87D0 (CmNotifyRunDown.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408ADF30 (ExpWnfNotifyNameSubscribers.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopWriteFile @ 0x1408C1630 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1408EF378 (PspEvaluateAndNotifyEmptyJob.c)
 *     DbgkpCloseObject @ 0x1408EF460 (DbgkpCloseObject.c)
 *     EtwpCovSampContextAddSamples @ 0x140900C90 (EtwpCovSampContextAddSamples.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     PfGetCompletedTrace @ 0x140933980 (PfGetCompletedTrace.c)
 *     DbgkpQueueMessage @ 0x140939080 (DbgkpQueueMessage.c)
 *     PfTLoggingWorker @ 0x14094E990 (PfTLoggingWorker.c)
 *     PfTReplaceCurrentBuffer @ 0x140950344 (PfTReplaceCurrentBuffer.c)
 *     PfTTraceListAdd @ 0x1409506E0 (PfTTraceListAdd.c)
 *     MiPfExecuteReadList @ 0x140956C3C (MiPfExecuteReadList.c)
 *     PfSnEndTrace @ 0x140971A58 (PfSnEndTrace.c)
 *     SPCallServerHandleQueryPolicy @ 0x140976EFC (SPCallServerHandleQueryPolicy.c)
 *     CmpWakeWriteQueueWaiters @ 0x14097C0F0 (CmpWakeWriteQueueWaiters.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x14097CDF0 (CmpSignalUnloadEventArrayForHive.c)
 *     NtCopyFileChunk @ 0x1409886C0 (NtCopyFileChunk.c)
 *     NtSetEventEx @ 0x14098A780 (NtSetEventEx.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A4954 (IopInvalidateVolumesForDevice.c)
 *     IopLoadUnloadDriver @ 0x1409C7700 (IopLoadUnloadDriver.c)
 *     NtLockFile @ 0x1409D2BE0 (NtLockFile.c)
 *     EtwpShutdownConsumers @ 0x1409D7DD4 (EtwpShutdownConsumers.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1409D7F24 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 *     EtwpStopLoggerInstance @ 0x1409D9164 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1409D9550 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1409D9E20 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpDisassociateConsumer @ 0x1409DA400 (EtwpDisassociateConsumer.c)
 *     NtDebugContinue @ 0x1409E89A0 (NtDebugContinue.c)
 *     DbgkpSetProcessDebugObject @ 0x1409E8B88 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x1409E8DCC (DbgkpWakeTarget.c)
 *     RtlDecompressBufferLZNT1 @ 0x1409EC6A0 (RtlDecompressBufferLZNT1.c)
 *     PnpCompleteDeviceEvent @ 0x1409EF9F0 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x1409EFB60 (PnpDeviceEventWorker.c)
 *     ExpWnfNotifySubscription @ 0x1409F4780 (ExpWnfNotifySubscription.c)
 *     IoDisconnectInterrupt @ 0x140A121C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A12470 (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140A12918 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140A12A68 (IopInitializeActiveConnectBlock.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140A1B0B0 (RtlDecompressFragmentLZNT1.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140A20A90 (IopAcquireReleaseDispatcherLock.c)
 *     PopSystemIdleWorker @ 0x140A27660 (PopSystemIdleWorker.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 *     IopTrackLink @ 0x140A2C8D4 (IopTrackLink.c)
 *     CmpPostApc @ 0x140A2F0F0 (CmpPostApc.c)
 *     PopThermalWorker @ 0x140A40A30 (PopThermalWorker.c)
 *     MiInSwapStoreWorker @ 0x140A4CEB0 (MiInSwapStoreWorker.c)
 *     SmProcessDeleteNotification @ 0x140A51570 (SmProcessDeleteNotification.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140A51EA0 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     WmipQueueNotification @ 0x140A55BA4 (WmipQueueNotification.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x140A59B40 (CmpGetVolumeClusterSizeCompletion.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A5F4A0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     PspReleaseEnclaveThread @ 0x140A61484 (PspReleaseEnclaveThread.c)
 *     NtNotifyChangeSession @ 0x140A67010 (NtNotifyChangeSession.c)
 *     PopBsdFlush @ 0x140A6B984 (PopBsdFlush.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x140A716C0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140A74A30 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140A74BB4 (PopFxUnregisterDevice.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A79530 (PiDrvDbLoadNodeWorkerCallback.c)
 *     HalpGetDynamicDevicePointer @ 0x140A81570 (HalpGetDynamicDevicePointer.c)
 *     PopFanWorker @ 0x140A83710 (PopFanWorker.c)
 *     DbgkRegisterErrorPort @ 0x140A852C4 (DbgkRegisterErrorPort.c)
 *     SmpFlushStorePages @ 0x140A868B0 (SmpFlushStorePages.c)
 *     PopCompleteAction @ 0x140A88118 (PopCompleteAction.c)
 *     PiUEventHandleVetoEvent @ 0x140A8B24C (PiUEventHandleVetoEvent.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A9C5C0 (PopFxUpdateVetoMaskWork.c)
 *     PopReleaseTransitionLock @ 0x140AA56F0 (PopReleaseTransitionLock.c)
 *     IopSendMessageToTrackService @ 0x140AA825C (IopSendMessageToTrackService.c)
 *     PsSetSessionObjectIoEvent @ 0x140AAC088 (PsSetSessionObjectIoEvent.c)
 *     PopBatteryReadTag @ 0x140AADDAC (PopBatteryReadTag.c)
 *     CmpWaitForHiveMount @ 0x140AB35B0 (CmpWaitForHiveMount.c)
 *     ArbArbiterHandler @ 0x140AB47A0 (ArbArbiterHandler.c)
 *     WmipProcessSynchronousEtw @ 0x140AB676C (WmipProcessSynchronousEtw.c)
 *     IoVerifyVolume @ 0x140AB7170 (IoVerifyVolume.c)
 *     ExpPartitionCreatePool @ 0x140AB9EF0 (ExpPartitionCreatePool.c)
 *     WmipReleaseCollectionEnabled @ 0x140ABCEF8 (WmipReleaseCollectionEnabled.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140ADA720 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     PnprInitiateReplaceOperation @ 0x140B53BF4 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140B550A0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140B5B068 (PfpScenCtxPrefetchStateSet.c)
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140B5BE24 (PopHandleWakeSources.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B5F5B0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140B5F790 (PopBuildDeviceNotifyListWatchdog.c)
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140B6236C (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140B64660 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140B65430 (PopTransitionToSleep.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     EmpReleasePagingReference @ 0x140B685E4 (EmpReleasePagingReference.c)
 *     ExpSetSwappingKernelApc @ 0x140B6A520 (ExpSetSwappingKernelApc.c)
 *     HalpPiix4Detect @ 0x140B6AA1C (HalpPiix4Detect.c)
 *     PopFlushVolumeWorker @ 0x140B6BC10 (PopFlushVolumeWorker.c)
 *     PfpScenCtxScenarioSet @ 0x140B6D510 (PfpScenCtxScenarioSet.c)
 *     KdpTimeSlipWork @ 0x140B78650 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140B8E2D0 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140B91FF0 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140B9D510 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140BB2F50 (AnFwpFadeAnimationTimer.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 *     MiInitializePagedPoolEvents @ 0x140C53EC4 (MiInitializePagedPoolEvents.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiEnterDeferredReadyState @ 0x140337910 (KiEnterDeferredReadyState.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  LONG *p_SignalState; // r15
  int v5; // esi
  unsigned __int8 CurrentIrql; // al
  __int64 p_Blink; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v9; // ebx
  struct _LIST_ENTRY *Flink; // r12
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rsi
  struct _LIST_ENTRY *Blink; // rcx
  bool v15; // zf
  struct _LIST_ENTRY *v17; // r14
  char v18; // al
  struct _LIST_ENTRY *v19; // r13
  unsigned int v20; // esi
  struct _LIST_ENTRY *v21; // rbx
  int v22; // eax
  struct _LIST_ENTRY *v23; // rdx
  struct _LIST_ENTRY *v24; // rsi
  unsigned int v25; // ebp
  struct _LIST_ENTRY *v26; // rdx
  struct _LIST_ENTRY *v27; // rcx
  char v28; // al
  struct _LIST_ENTRY *v29; // r13
  char v30; // r14
  struct _LIST_ENTRY *v31; // rbx
  unsigned int v32; // ebp
  __int64 Flink_low; // rcx
  int v34; // eax
  struct _LIST_ENTRY *v35; // rdx
  struct _LIST_ENTRY *v36; // rbp
  unsigned int v37; // r14d
  struct _LIST_ENTRY *v38; // rdx
  struct _LIST_ENTRY *v39; // rcx
  char v40; // al
  __int64 v41; // rcx
  __int64 Blink_high; // rax
  __int64 v43; // rax
  struct _KPRCB *v44; // [rsp+30h] [rbp-58h]
  char v45; // [rsp+38h] [rbp-50h]
  LONG v46; // [rsp+90h] [rbp+8h]

  p_SignalState = &Event->Header.SignalState;
  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v5 = 0;
LABEL_4:
    CurrentIrql = KeGetCurrentIrql();
    v45 = CurrentIrql;
    p_Blink = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = 0;
    v44 = CurrentPrcb;
    if ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(p_Blink) )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Event->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Event->Header.Lock, 7u) );
      CurrentPrcb = v44;
      p_SignalState = &Event->Header.SignalState;
    }
    v46 = *p_SignalState;
    *p_SignalState = 1;
    if ( v46 )
    {
LABEL_14:
      _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
      KiExitDispatcher(CurrentPrcb, v45);
      return v46;
    }
    Flink = Event->Header.WaitListHead.Flink;
    p_WaitListHead = &Event->Header.WaitListHead;
    if ( !v5 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( Flink == p_WaitListHead )
            goto LABEL_14;
          v12 = Flink->Flink;
          v13 = Flink;
          Flink = v12;
          Blink = v13->Blink;
          if ( v12->Blink != v13 || Blink->Flink != v13 )
            goto LABEL_12;
          Blink->Flink = v12;
          v12->Blink = Blink;
          v28 = (char)v13[1].Flink;
          if ( v28 == 1 )
            break;
          if ( v28 == 2 )
          {
            BYTE1(v13[1].Flink) = 5;
            KiInsertQueueInternal(v13[1].Blink, v13);
            v15 = (*p_SignalState)-- == 1;
            CurrentPrcb = v44;
            if ( v15 )
              goto LABEL_14;
            p_WaitListHead = &Event->Header.WaitListHead;
          }
          else
          {
            if ( v28 == 4 )
            {
              BYTE1(v13[1].Flink) = 5;
              *p_SignalState = 0;
              KeInsertQueueDpc((PRKDPC)v13[1].Blink, Event, v13);
            }
            else
            {
              KiTryUnwaitThread(CurrentPrcb, v13, 256LL, 0LL);
            }
            CurrentPrcb = v44;
            p_WaitListHead = &Event->Header.WaitListHead;
          }
        }
        v29 = (struct _LIST_ENTRY *)WORD1(v13[1].Flink);
        v30 = 0;
        v31 = v13[1].Blink;
        v32 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v31[4], 0LL) )
        {
          do
          {
            if ( (++v32 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Blink) )
            {
              HvlNotifyLongSpinWait(v32);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v31[4].Flink );
        }
        if ( BYTE4(v31[24].Flink) != 5 )
          goto LABEL_84;
        Flink_low = LOBYTE(v31[7].Flink);
        v34 = (__int64)v31[7].Flink & 7;
        if ( v34 != 1 && v34 != 4 )
          break;
        v35 = v31[14].Blink;
        if ( v35 )
        {
          if ( ((__int64)v35->Flink & 0x7F) == 0x15 )
          {
            Blink_high = (unsigned __int8)HIDWORD(v31[33].Blink);
            HIDWORD(v31[33].Blink) = Blink_high;
            _InterlockedIncrement((volatile signed __int32 *)&v35[33].Blink + Blink_high);
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)&v35[2].Blink);
          }
        }
        v36 = v31[44].Blink;
        if ( v36 )
        {
          v37 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v36[2109], 0LL) )
          {
            do
            {
              if ( (++v37 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Flink_low) )
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
          if ( v31[44].Blink )
          {
            v38 = v31[13].Blink;
            v39 = v31[14].Flink;
            if ( v38->Blink != (struct _LIST_ENTRY *)&v31[13].Blink
              || v39->Flink != (struct _LIST_ENTRY *)&v31[13].Blink )
            {
              goto LABEL_12;
            }
            v39->Flink = v38;
            v38->Blink = v39;
            v31[44].Blink = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)&v36[2109], 0LL);
        }
        v40 = BYTE4(v31[24].Flink);
        if ( v40 == 1 )
        {
          HIDWORD(v31[7].Flink) |= 2u;
        }
        else if ( v40 == 5 )
        {
          v41 = (unsigned int)(MEMORY[0xFFFFF78000000320] - HIDWORD(v31[27].Flink));
          if ( HIBYTE(v31[24].Flink) )
            v31[62].Blink = (struct _LIST_ENTRY *)((char *)v31[62].Blink + v41);
          else
            v31[62].Flink = (struct _LIST_ENTRY *)((char *)v31[62].Flink + v41);
        }
        CurrentPrcb = v44;
        BYTE4(v31[24].Flink) = 7;
        v30 = 1;
        v31[13].Blink = (struct _LIST_ENTRY *)v44->DeferredReadyListHead.Next;
        v44->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)&v31[13].Blink;
        v31[12].Blink = v29;
        v31[61].Flink = 0LL;
LABEL_79:
        v31[4].Flink = 0LL;
        ++BYTE1(v13[1].Flink);
        p_WaitListHead = &Event->Header.WaitListHead;
        if ( v30 )
        {
          v15 = (*p_SignalState)-- == 1;
          if ( v15 )
            goto LABEL_14;
          p_WaitListHead = &Event->Header.WaitListHead;
        }
      }
      if ( ((__int64)v31[7].Flink & 7) != 0 )
      {
        if ( v34 == 5 )
        {
          CurrentPrcb = v44;
          LOBYTE(v31[7].Flink) = Flink_low & 0xF8 | 6;
        }
        else
        {
          CurrentPrcb = v44;
          if ( v34 == 3 )
            BYTE1(v13[1].Flink) = 2;
        }
        goto LABEL_79;
      }
      v30 = 1;
      LOBYTE(v31[7].Flink) = Flink_low & 0xF8 | 2;
      v31[12].Blink = v29;
      v31[61].Flink = 0LL;
      BYTE1(v13[1].Flink) = 0;
LABEL_84:
      CurrentPrcb = v44;
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
      v17 = Flink;
      Flink = Flink->Flink;
      v18 = (char)v17[1].Flink;
      if ( v18 == 1 )
        break;
      if ( v18 == 2 )
      {
        BYTE1(v17[1].Flink) = 5;
        KiInsertQueueInternal(v17[1].Blink, v17);
        CurrentPrcb = v44;
      }
      else
      {
        if ( v18 == 4 )
        {
          BYTE1(v17[1].Flink) = 5;
          *p_SignalState = 0;
          KeInsertQueueDpc((PRKDPC)v17[1].Blink, Event, v17);
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v17, 256LL, 0LL);
        }
        CurrentPrcb = v44;
      }
LABEL_23:
      p_WaitListHead = &Event->Header.WaitListHead;
    }
    v19 = (struct _LIST_ENTRY *)WORD1(v17[1].Flink);
    v20 = 0;
    v21 = v17[1].Blink;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v21[4], 0LL) )
    {
      do
      {
        if ( (++v20 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(p_Blink) )
        {
          HvlNotifyLongSpinWait(v20);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( v21[4].Flink );
    }
    if ( BYTE4(v21[24].Flink) == 5 )
    {
      p_Blink = LOBYTE(v21[7].Flink);
      v22 = (__int64)v21[7].Flink & 7;
      if ( v22 == 1 || v22 == 4 )
      {
        v23 = v21[14].Blink;
        if ( v23 )
        {
          if ( ((__int64)v23->Flink & 0x7F) == 0x15 )
          {
            v43 = (unsigned __int8)HIDWORD(v21[33].Blink);
            HIDWORD(v21[33].Blink) = v43;
            _InterlockedIncrement((volatile signed __int32 *)&v23[33].Blink + v43);
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)&v23[2].Blink);
          }
        }
        v24 = v21[44].Blink;
        if ( v24 )
        {
          v25 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v24[2109], 0LL) )
          {
            do
            {
              if ( (++v25 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(p_Blink) )
              {
                HvlNotifyLongSpinWait(v25);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( v24[2109].Flink );
          }
          if ( v21[44].Blink )
          {
            v26 = v21[13].Blink;
            v27 = v21[14].Flink;
            if ( v26->Blink != (struct _LIST_ENTRY *)&v21[13].Blink
              || v27->Flink != (struct _LIST_ENTRY *)&v21[13].Blink )
            {
LABEL_12:
              __fastfail(3u);
            }
            v27->Flink = v26;
            v26->Blink = v27;
            v21[44].Blink = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)&v24[2109], 0LL);
        }
        KiEnterDeferredReadyState(v21);
        CurrentPrcb = v44;
        p_Blink = (__int64)&v21[13].Blink;
        v21[13].Blink = (struct _LIST_ENTRY *)v44->DeferredReadyListHead.Next;
        v44->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)&v21[13].Blink;
        v21[12].Blink = v19;
        v21[61].Flink = 0LL;
        goto LABEL_22;
      }
      if ( ((__int64)v21[7].Flink & 7) != 0 )
      {
        if ( v22 == 5 )
        {
          LOBYTE(p_Blink) = p_Blink & 0xF8 | 6;
          LOBYTE(v21[7].Flink) = p_Blink;
        }
        else if ( v22 == 3 )
        {
          BYTE1(v17[1].Flink) = 2;
        }
      }
      else
      {
        LOBYTE(p_Blink) = p_Blink & 0xF8 | 2;
        LOBYTE(v21[7].Flink) = p_Blink;
        v21[12].Blink = v19;
        v21[61].Flink = 0LL;
        BYTE1(v17[1].Flink) = 0;
      }
    }
    CurrentPrcb = v44;
LABEL_22:
    v21[4].Flink = 0LL;
    ++BYTE1(v17[1].Flink);
    goto LABEL_23;
  }
  if ( *p_SignalState != 1 || Wait )
  {
    v5 = 1;
    goto LABEL_4;
  }
  return 1;
}
