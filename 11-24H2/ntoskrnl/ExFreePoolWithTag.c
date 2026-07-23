/*
 * XREFs of ExFreePoolWithTag @ 0x140B74870
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140203EB8 (MiDeleteSubsectionPages.c)
 *     MiDeleteCachedSubsection @ 0x140204084 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x1402043F4 (MiEntireSubsectionIsPurged.c)
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 *     MiEmptyPageAccessLog @ 0x14020C9F0 (MiEmptyPageAccessLog.c)
 *     MiQueuePageAccessLog @ 0x14020D250 (MiQueuePageAccessLog.c)
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     SmpKeyedStoreEntryGet @ 0x14020DF80 (SmpKeyedStoreEntryGet.c)
 *     ExpAddTagForBigPages @ 0x14021A4A0 (ExpAddTagForBigPages.c)
 *     PspReaper @ 0x14021F340 (PspReaper.c)
 *     IoReleaseRemoveLockEx @ 0x140225BA0 (IoReleaseRemoveLockEx.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140229A50 (ExpAcquireSharedStarveExclusive.c)
 *     PfSnGetFileInformation @ 0x14022B790 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x14022BD20 (PfSnTraceGetLogEntry.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x14022CCA8 (EtwpGetTrackingLockSlotForThread.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14022FA80 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     PopFxDeactivateComponentDependencies @ 0x140230AD4 (PopFxDeactivateComponentDependencies.c)
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140231CC0 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushComplete @ 0x140259230 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x14025943C (MiFreeOverlappedFlushEntry.c)
 *     FsFilterCtrlFree @ 0x14025D404 (FsFilterCtrlFree.c)
 *     IoMakeAssociatedIrpPriv @ 0x14025D5A8 (IoMakeAssociatedIrpPriv.c)
 *     PnpGetRelatedTargetDevice @ 0x14025D974 (PnpGetRelatedTargetDevice.c)
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     MiGetWorkingSetInfo @ 0x14025E748 (MiGetWorkingSetInfo.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IopBuildDeviceIoControlRequest @ 0x14025EF00 (IopBuildDeviceIoControlRequest.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x14025F988 (IopFreeCopyObjectsFromDataBuffer.c)
 *     ExUnlockUserBuffer @ 0x14025FDEC (ExUnlockUserBuffer.c)
 *     EtwpLogMemNodeInfo @ 0x140261E3C (EtwpLogMemNodeInfo.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140262B38 (EtwTiLogInsertQueueUserApc.c)
 *     MiCreateCloneChain @ 0x140267008 (MiCreateCloneChain.c)
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiExpandSystemCache @ 0x14026B918 (MiExpandSystemCache.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14026E450 (ExpSaPageGroupDescriptorAllocate.c)
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 *     MiStartDpcGang @ 0x140270670 (MiStartDpcGang.c)
 *     MiDereferencePageChains @ 0x140270AC0 (MiDereferencePageChains.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     CcAsyncCopyRead @ 0x140273E20 (CcAsyncCopyRead.c)
 *     MiCreatePrototypePtes @ 0x1402751A4 (MiCreatePrototypePtes.c)
 *     MiShowBadMapper @ 0x140275730 (MiShowBadMapper.c)
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     CcPostDeferredWrites @ 0x1402795B0 (CcPostDeferredWrites.c)
 *     CcWriteBehind @ 0x1402798D4 (CcWriteBehind.c)
 *     EtwpAllocateFreeBuffers @ 0x14027C8CC (EtwpAllocateFreeBuffers.c)
 *     PsLeavePriorityRegion @ 0x14027D050 (PsLeavePriorityRegion.c)
 *     PsBoostThreadIo @ 0x14027DF60 (PsBoostThreadIo.c)
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     IopAllocateIrpPrivate @ 0x140284420 (IopAllocateIrpPrivate.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     SepMandatoryIntegrityCheck @ 0x14028A540 (SepMandatoryIntegrityCheck.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1402A1234 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     PopFxActivateComponentDependencies @ 0x1402AE240 (PopFxActivateComponentDependencies.c)
 *     KiIntSteerConnect @ 0x1402B3934 (KiIntSteerConnect.c)
 *     PpmQueryPlatformStateResidency @ 0x1402B5BB4 (PpmQueryPlatformStateResidency.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402B7DE8 (PopDiagTraceFxDeviceAccounting.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402B9194 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402B93A8 (PopTraceThermalRequestPassiveHistogram.c)
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x1402B9A64 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1402BAD78 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendPowerMessage @ 0x1402BB090 (PopUmpoSendPowerMessage.c)
 *     PoDestroyReasonContext @ 0x1402BC528 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1402BC6B8 (PoCaptureReasonContext.c)
 *     PopSetWatchdog @ 0x1402BC81C (PopSetWatchdog.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1402C37E0 (IopFreeIrp.c)
 *     IopFreeIrpExtension @ 0x1402C3EF0 (IopFreeIrpExtension.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     FsRtlReleaseEofLock @ 0x1402E0940 (FsRtlReleaseEofLock.c)
 *     IoSetOplockPrivateFoExt @ 0x1402E2088 (IoSetOplockPrivateFoExt.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402E4400 (FsRtlFastUnlockSingleShared.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     RtlDeleteElementGenericTable @ 0x1402E51B0 (RtlDeleteElementGenericTable.c)
 *     CcDeleteMbcb @ 0x1402E5278 (CcDeleteMbcb.c)
 *     CcDeallocateBcb @ 0x1402E5568 (CcDeallocateBcb.c)
 *     ExDeleteResourceLite @ 0x1402E55A0 (ExDeleteResourceLite.c)
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E70E0 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1402E7260 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     SmKmFreeMdlForLock @ 0x1402E7E04 (SmKmFreeMdlForLock.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8290 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x1402EA404 (HalpMmAllocCtxBufferCleanup.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiMappedPageWriter @ 0x1402EB500 (MiMappedPageWriter.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402F5B40 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F613C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1402F6D30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1402F73C0 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     ExpFreeOwnerEntry @ 0x14031EC90 (ExpFreeOwnerEntry.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140322C20 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x140322DA0 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140322FB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepAcquireOrderedReadLocks @ 0x1403232E0 (SepAcquireOrderedReadLocks.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140323590 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140325368 (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140326070 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1403265D0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14032DFF0 (KeQueryLogicalProcessorRelationship.c)
 *     MiGetBackgroundHugePageToZero @ 0x1403310D0 (MiGetBackgroundHugePageToZero.c)
 *     MiStoreEvictPageFile @ 0x140337B90 (MiStoreEvictPageFile.c)
 *     MiAllocateCombineBlock @ 0x140345874 (MiAllocateCombineBlock.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiPfCompleteCoalescedIo @ 0x140351964 (MiPfCompleteCoalescedIo.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1403529B8 (MiDereferenceInPageAutoBoostLock.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1403529EC (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140352BC0 (MmWaitForCacheManagerPrefetch.c)
 *     MiFreeSlabEntry @ 0x1403533C8 (MiFreeSlabEntry.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x140353754 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14035384C (MiReclaimUnusedUltraMdlMaps.c)
 *     MiFreeDeferredAcceleratorPool @ 0x140353934 (MiFreeDeferredAcceleratorPool.c)
 *     IopDereferenceVpbAndFree @ 0x140357B78 (IopDereferenceVpbAndFree.c)
 *     ExpReleaseResourceForThreadLite @ 0x140357E60 (ExpReleaseResourceForThreadLite.c)
 *     MiViewMayContainPage @ 0x140361C90 (MiViewMayContainPage.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     KeDisconnectInterrupt @ 0x140373B88 (KeDisconnectInterrupt.c)
 *     KiIntSteerDisable @ 0x14037432C (KiIntSteerDisable.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x140376108 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     ?SmCompressCtxDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140376500 (-SmCompressCtxDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAM.c)
 *     StEtaCleanup @ 0x140377C40 (StEtaCleanup.c)
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140377C80 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140377D20 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140377FF4 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x1403780A4 (SmFpCleanup.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140378128 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140378BB8 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140378D1C (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StStagingRegionCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@@Z @ 0x140379084 (-StStagingRegionCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1403790B8 (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1403790FC (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x14037913C (-NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z.c)
 *     SmHpChunkHeapCleanup @ 0x140379190 (SmHpChunkHeapCleanup.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403797D0 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14037A040 (SmPrepareForFatalHeapCorruption.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14037BE70 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14037CF90 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14037D5F0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140381398 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     SmHpBufferAlloc @ 0x140381B00 (SmHpBufferAlloc.c)
 *     HalpBuildScatterGatherList @ 0x140386448 (HalpBuildScatterGatherList.c)
 *     HalBuildScatterGatherListV2 @ 0x1403879B0 (HalBuildScatterGatherListV2.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalPutScatterGatherListV2 @ 0x140389070 (HalPutScatterGatherListV2.c)
 *     HalPutScatterGatherListV3 @ 0x14038C148 (HalPutScatterGatherListV3.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403962A4 (HalpAllocateCommonBufferDmaThin.c)
 *     MiAllocateSkipPagesForMdl @ 0x1403968B8 (MiAllocateSkipPagesForMdl.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140397478 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1403976A0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalFreeCommonBufferVector @ 0x140397BB0 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferDmarThin @ 0x140397CC0 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x140397DB0 (HalFreeCommonBufferDmaThin.c)
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 *     VmpPrefetchVirtualAddresses @ 0x1403990BC (VmpPrefetchVirtualAddresses.c)
 *     HalPutScatterGatherListDmarThin @ 0x14039BB60 (HalPutScatterGatherListDmarThin.c)
 *     PpmUpdateIdleVeto @ 0x1403A5250 (PpmUpdateIdleVeto.c)
 *     PopFxNextParentRelationSafe @ 0x1403A6340 (PopFxNextParentRelationSafe.c)
 *     PopFxActivateComponentDependents @ 0x1403A91E0 (PopFxActivateComponentDependents.c)
 *     ExpFinalizeTimerDeletion @ 0x1403ADE00 (ExpFinalizeTimerDeletion.c)
 *     IopUnloadSafeCompletion @ 0x1403B1A30 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403B1BD0 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     EtwpTraceImageUnloadApc @ 0x1403B35C0 (EtwpTraceImageUnloadApc.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403B38E4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopDropIrp @ 0x1403B3CD0 (IopDropIrp.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1403B40C0 (FsRtlInsertPerFileObjectContext.c)
 *     IoSetShadowFileInformation @ 0x1403B4530 (IoSetShadowFileInformation.c)
 *     IopAllocateFileObjectExtension @ 0x1403B4640 (IopAllocateFileObjectExtension.c)
 *     IopProcessBufferedIoCompletion @ 0x1403B4A40 (IopProcessBufferedIoCompletion.c)
 *     RtlCheckTokenCapability @ 0x1403B5260 (RtlCheckTokenCapability.c)
 *     IopCreateSecurityCheck @ 0x1403B5AE0 (IopCreateSecurityCheck.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1403B8958 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1403B8CD0 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1403B94E0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepFreeResourceInfo @ 0x1403B9940 (SepFreeResourceInfo.c)
 *     SepFilterCheck @ 0x1403B9AB0 (SepFilterCheck.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403BA310 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403BAF3C (SepVerifyDesktopAppxPackageName.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1403BC958 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     FsRtlEmptyFreePoolList @ 0x1403BF244 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1403BF344 (FsRtlFreeTunnelNode.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403BFA60 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403BFF80 (FsRtlAddEntry.c)
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     SepRmCallLsa @ 0x1403C17F0 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x1403C1B1C (SepRmDispatchDataToLsa.c)
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     MiFindPageFileWriteCluster @ 0x1403C41E0 (MiFindPageFileWriteCluster.c)
 *     MmOutSwapVirtualAddresses @ 0x1403C64C8 (MmOutSwapVirtualAddresses.c)
 *     MmInSwapWorkingSet @ 0x1403C6A50 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 *     MiCommitPageTableRangesForVad @ 0x1403C7634 (MiCommitPageTableRangesForVad.c)
 *     FsRtlCancelNotify @ 0x1403CC4E0 (FsRtlCancelNotify.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     FsRtlpOplockCleanup @ 0x1403CDA80 (FsRtlpOplockCleanup.c)
 *     IoSetOplockKeyContext @ 0x1403CE0DC (IoSetOplockKeyContext.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x1403D2010 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     ExpExpandResourceOwnerTable @ 0x1403D6CCC (ExpExpandResourceOwnerTable.c)
 *     MiDeprioritizeVad @ 0x1403DAB20 (MiDeprioritizeVad.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     HalpBuildScatterGatherListDmaThin @ 0x1403E1230 (HalpBuildScatterGatherListDmaThin.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1403E2EE0 (SepCleanupMarkedForDeletionEntries.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1403E4650 (RtlDeleteElementGenericTableAvlEx.c)
 *     VfTargetDriversRemove @ 0x1403E4B7C (VfTargetDriversRemove.c)
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     PoRunDownDeviceObject @ 0x1403E598C (PoRunDownDeviceObject.c)
 *     PopGetDope @ 0x1403E6628 (PopGetDope.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x1403E82B0 (EtwpApplyEventIdPayloadFilter.c)
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1403EAEE8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403EB390 (SepSetProcessTrustLabelAceForToken.c)
 *     CcExtendVacbArray @ 0x1403ED180 (CcExtendVacbArray.c)
 *     MiIssueSegmentDereferenceWork @ 0x1403ED890 (MiIssueSegmentDereferenceWork.c)
 *     MiFreeClonePool @ 0x1403EDE7C (MiFreeClonePool.c)
 *     MiFreeCombinePool @ 0x1403EE660 (MiFreeCombinePool.c)
 *     FsRtlTruncateBaseMcb @ 0x1403EFD20 (FsRtlTruncateBaseMcb.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     KiInsertNewDpcRuntime @ 0x1403F9BD0 (KiInsertNewDpcRuntime.c)
 *     HalGetScatterGatherListDmaThin @ 0x1403FA7B0 (HalGetScatterGatherListDmaThin.c)
 *     EtwpTraceLostEvent @ 0x1403FAEA8 (EtwpTraceLostEvent.c)
 *     SepDeleteAccessState @ 0x1403FBF80 (SepDeleteAccessState.c)
 *     KeFreeXStateContext @ 0x1403FF338 (KeFreeXStateContext.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140403434 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140409280 (AlpcpLookasidePacketCallbackRoutine.c)
 *     CcInitializeVolumeCacheMap @ 0x14040BF18 (CcInitializeVolumeCacheMap.c)
 *     CcPostVolumeTelemetry @ 0x14040C990 (CcPostVolumeTelemetry.c)
 *     PopCaptureReasonContext @ 0x14041069C (PopCaptureReasonContext.c)
 *     RtlContractHashTable @ 0x140410AF0 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x140410C30 (RtlExpandHashTable.c)
 *     MiDeleteZeroThreadContext @ 0x140412560 (MiDeleteZeroThreadContext.c)
 *     CmpDoQueryKeyName @ 0x140414760 (CmpDoQueryKeyName.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x14041AAB8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopGetSetSpecificExtension @ 0x14041AD50 (IopGetSetSpecificExtension.c)
 *     IopSetLockOperationProcess @ 0x14041DE90 (IopSetLockOperationProcess.c)
 *     SeCaptureObjectTypeList @ 0x14041E500 (SeCaptureObjectTypeList.c)
 *     PspInsertProperty @ 0x14041F4DC (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x14041F5C0 (PspRemoveProperty.c)
 *     SmFpFree @ 0x140421480 (SmFpFree.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     RtlpAllowsLowBoxAccess @ 0x14042492C (RtlpAllowsLowBoxAccess.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 *     IopSetFileObjectExtensionFlag @ 0x1404278D0 (IopSetFileObjectExtensionFlag.c)
 *     HalPutScatterGatherListDmaThin @ 0x140427BB0 (HalPutScatterGatherListDmaThin.c)
 *     PfSnNameRemove @ 0x14042A140 (PfSnNameRemove.c)
 *     AuthzBasepResetOperands @ 0x14042A600 (AuthzBasepResetOperands.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14042AA30 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     MiFreeModWriterEntry @ 0x14042CCD0 (MiFreeModWriterEntry.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x14042FE00 (CcCreatePrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1404309A4 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeleteNumaNode @ 0x140430FB0 (CcDeleteNumaNode.c)
 *     IopMcDereferenceBufferEntry @ 0x140431590 (IopMcDereferenceBufferEntry.c)
 *     EmpEvaluateTargetRule @ 0x140431830 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140431B1C (EmpEvaluateNodeLink.c)
 *     FsRtlUninitializeBaseMcb @ 0x1404365C0 (FsRtlUninitializeBaseMcb.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140436770 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmInstallNewIdleStates @ 0x140436C00 (PpmInstallNewIdleStates.c)
 *     SeLogAccessFailure @ 0x140438750 (SeLogAccessFailure.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     MiDemoteSlabEntry @ 0x14043BE9C (MiDemoteSlabEntry.c)
 *     PopFxNextComponentChildRelationSafe @ 0x14043DFE8 (PopFxNextComponentChildRelationSafe.c)
 *     MiDeleteControlArea @ 0x14043F354 (MiDeleteControlArea.c)
 *     MiDeleteSubsection @ 0x14043F528 (MiDeleteSubsection.c)
 *     RtlInsertDynamicUserFunctionTable @ 0x140442310 (RtlInsertDynamicUserFunctionTable.c)
 *     IopSessionChangeWorker @ 0x1404426C0 (IopSessionChangeWorker.c)
 *     AdtpWriteToEtwEx @ 0x1404481F0 (AdtpWriteToEtwEx.c)
 *     AdtpPackageParameters @ 0x140448568 (AdtpPackageParameters.c)
 *     MiReturnCcAccessLog @ 0x14044B208 (MiReturnCcAccessLog.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14044C88C (IopDereferencePassiveInterruptBlock.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14044CACC (AuthzBasepCompareFQBNOperands.c)
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14044EA6C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     FsRtlInsertPerFileContextWithReserve @ 0x140450C00 (FsRtlInsertPerFileContextWithReserve.c)
 *     HalGetScatterGatherListDmarThin @ 0x1404539B0 (HalGetScatterGatherListDmarThin.c)
 *     HalpBuildScatterGatherListDmarThin @ 0x140453AF8 (HalpBuildScatterGatherListDmarThin.c)
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     EtwpFreeCompression @ 0x14045A6DC (EtwpFreeCompression.c)
 *     EtwpFreePlaceholderList @ 0x14045A93C (EtwpFreePlaceholderList.c)
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x140460640 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     IoFreeWorkItem @ 0x140460690 (IoFreeWorkItem.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1404608A4 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     ExpFastResourceLegacyRelease @ 0x140462AF4 (ExpFastResourceLegacyRelease.c)
 *     MmFreeAccessPfnBuffer @ 0x140463F10 (MmFreeAccessPfnBuffer.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x140468510 (VrpOriginalKeyNameParameterCleanup.c)
 *     MiAllocateModWriterEntry @ 0x14046930C (MiAllocateModWriterEntry.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140469950 (PnpUnregisterPlugPlayNotification.c)
 *     SepFreeTokenCapabilities @ 0x14046A360 (SepFreeTokenCapabilities.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14046A624 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     PnpFreeGenericTableEntryNonPaged @ 0x14046B940 (PnpFreeGenericTableEntryNonPaged.c)
 *     AdtpCleanupParameterAllocations @ 0x14046E394 (AdtpCleanupParameterAllocations.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x14046FE3C (MiStoreCheckCompleteWriteBatch.c)
 *     MiStoreDrainWriteSupports @ 0x140470054 (MiStoreDrainWriteSupports.c)
 *     KiDpcRuntimeHistoryHashTableCleanupDpcRoutine @ 0x140473180 (KiDpcRuntimeHistoryHashTableCleanupDpcRoutine.c)
 *     PfFbBufferListInsertInFree @ 0x140473C20 (PfFbBufferListInsertInFree.c)
 *     MiDeleteEmptySubsectionProtoPool @ 0x140473E98 (MiDeleteEmptySubsectionProtoPool.c)
 *     WheapFreeErrorRecord @ 0x14047468C (WheapFreeErrorRecord.c)
 *     WmipReceiveNotifications @ 0x140475EC4 (WmipReceiveNotifications.c)
 *     MiStoreContractVirtualPagefileApc @ 0x140476BB0 (MiStoreContractVirtualPagefileApc.c)
 *     MiStoreEvictThread @ 0x140476E20 (MiStoreEvictThread.c)
 *     ExpDeleteWorkerFactory @ 0x140477820 (ExpDeleteWorkerFactory.c)
 *     MiMakePageBad @ 0x140477B64 (MiMakePageBad.c)
 *     SepCaptureTokenSecurityOperations @ 0x140479258 (SepCaptureTokenSecurityOperations.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140479890 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VmpRemoveMemoryRange @ 0x140479B50 (VmpRemoveMemoryRange.c)
 *     SepDeleteSessionLowboxEntries @ 0x14047C2A8 (SepDeleteSessionLowboxEntries.c)
 *     RtlDeleteHashTable @ 0x14047C690 (RtlDeleteHashTable.c)
 *     MiDeleteWorkingSetList @ 0x14047CD20 (MiDeleteWorkingSetList.c)
 *     EtwpAllocatePartitionMemory @ 0x14047CF3C (EtwpAllocatePartitionMemory.c)
 *     EtwpFreeTraceBuffer @ 0x14047E9DC (EtwpFreeTraceBuffer.c)
 *     EtwpFreePartitionMemory @ 0x14047EA6C (EtwpFreePartitionMemory.c)
 *     EtwpUnregisterPartitionPages @ 0x14047EACC (EtwpUnregisterPartitionPages.c)
 *     ExFreeCacheAwareRundownProtection @ 0x14047F710 (ExFreeCacheAwareRundownProtection.c)
 *     MiDereferenceExtendInfo @ 0x14047FA5C (MiDereferenceExtendInfo.c)
 *     PpmEventTracePreVetoAccounting @ 0x140480A8C (PpmEventTracePreVetoAccounting.c)
 *     DbgkPostModuleMessage @ 0x140480C54 (DbgkPostModuleMessage.c)
 *     HvpAllocateLogBuffers @ 0x140482DB4 (HvpAllocateLogBuffers.c)
 *     IopKeepAliveWorker @ 0x140483EB0 (IopKeepAliveWorker.c)
 *     SshpWriteBlocker @ 0x1404859D0 (SshpWriteBlocker.c)
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14048633C (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1404863F8 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmHpBufferCleanup @ 0x140487B60 (SmHpBufferCleanup.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x140487DA0 (CcInitializeAsyncReadForNodeHelper.c)
 *     EtwpAdjustStackLookasideBuffers @ 0x140488FA4 (EtwpAdjustStackLookasideBuffers.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140489020 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpAdjustLastBranchLookasideBuffers @ 0x140489144 (EtwpAdjustLastBranchLookasideBuffers.c)
 *     MiDeleteCloneZombies @ 0x140489754 (MiDeleteCloneZombies.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140489DDC (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlIsUntrustedObject @ 0x14048B140 (RtlIsUntrustedObject.c)
 *     MiFreeImageCfgContext @ 0x14048B394 (MiFreeImageCfgContext.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14048C12C (LdrUnloadAlternateResourceModuleEx.c)
 *     ExFreeSvmAsid @ 0x14048C994 (ExFreeSvmAsid.c)
 *     PnpRemoveLockedDeviceNode @ 0x14048D53C (PnpRemoveLockedDeviceNode.c)
 *     CcUnInitializeAsyncReadForNodeHelper @ 0x14048E430 (CcUnInitializeAsyncReadForNodeHelper.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x14048F158 (FsRtlpOplockSendModernAppTermination.c)
 *     MiCleanupBestCandidatesContext @ 0x14048F3DC (MiCleanupBestCandidatesContext.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14048FB20 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     MiDeletePerSessionProtos @ 0x140490370 (MiDeletePerSessionProtos.c)
 *     MiDeletePxeSharedLocks @ 0x1404907F4 (MiDeletePxeSharedLocks.c)
 *     MiGetUltraMdlContext @ 0x1404930EC (MiGetUltraMdlContext.c)
 *     MiObtainRotateProtectionRanges @ 0x140494200 (MiObtainRotateProtectionRanges.c)
 *     EtwpFreeApcPool @ 0x140495034 (EtwpFreeApcPool.c)
 *     IopLiveDumpWriteDumpFile @ 0x1404957D4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140495C54 (IopLiveDumpFreeDumpBuffers.c)
 *     HalCancelAdapterChannelDmaThin @ 0x140498110 (HalCancelAdapterChannelDmaThin.c)
 *     HalpIumGetNextVariableName @ 0x140498220 (HalpIumGetNextVariableName.c)
 *     PopUpdateWakeSource @ 0x14049B14C (PopUpdateWakeSource.c)
 *     KsepPoolFreeNonPaged @ 0x14049B540 (KsepPoolFreeNonPaged.c)
 *     HalpIumGetVariable @ 0x14049B570 (HalpIumGetVariable.c)
 *     PpDevNodeRemoveFromTree @ 0x14049E834 (PpDevNodeRemoveFromTree.c)
 *     DbgLoadImageSymbolsUnicode @ 0x14049ED5C (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14049EDB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgUnicodeStringToAnsiString @ 0x14049EE30 (DbgUnicodeStringToAnsiString.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x1404A0664 (PiDevCfgPushCopyKeyEntry.c)
 *     IopCleanupNotifications @ 0x1404A0DB4 (IopCleanupNotifications.c)
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404A2380 (IoReleaseRemoveLockAndWaitEx.c)
 *     DestroyEventEntry @ 0x1404A33C4 (DestroyEventEntry.c)
 *     PfTFreeTraceDump @ 0x1404A3F48 (PfTFreeTraceDump.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404A5290 (PopTraceThermalRequestActiveActivity.c)
 *     AppModelFreeUnicodeString @ 0x1404A62AC (AppModelFreeUnicodeString.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1404A6528 (ExpSaPageGroupDescriptorFree.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1404A65E4 (SepCheckAndCopySelfRelativeSD.c)
 *     PopReadRegKeyValue @ 0x1404A667C (PopReadRegKeyValue.c)
 *     IoWriteErrorLogEntry @ 0x1404A6840 (IoWriteErrorLogEntry.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404A770C (PopUnregisterPowerSettingCallback.c)
 *     PpmEventHgsHardwareTable @ 0x1404A81D4 (PpmEventHgsHardwareTable.c)
 *     ExUnregisterCallback @ 0x1404A8640 (ExUnregisterCallback.c)
 *     IoRaiseInformationalHardError @ 0x1404A88B0 (IoRaiseInformationalHardError.c)
 *     IoAllocateDriverObjectExtension @ 0x1404A8CF0 (IoAllocateDriverObjectExtension.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x1404A95F8 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1404AAB30 (MiAddPrivateFixupEntryForSystemImage.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1404AACB0 (RtlNormalizeSecurityDescriptor.c)
 *     VslAllocatePool @ 0x1404AB090 (VslAllocatePool.c)
 *     IopReplaceCompletionPort @ 0x1404AD178 (IopReplaceCompletionPort.c)
 *     ExRegisterCallback @ 0x1404AE560 (ExRegisterCallback.c)
 *     SepExpandSingletonArrays @ 0x1404AFA0C (SepExpandSingletonArrays.c)
 *     PnpGetRegistryDword @ 0x1404AFC44 (PnpGetRegistryDword.c)
 *     EtwpInitializeCompression @ 0x1404B1064 (EtwpInitializeCompression.c)
 *     BiMapEfiDeviceForSpaces @ 0x1404B1240 (BiMapEfiDeviceForSpaces.c)
 *     HalpGrowMapBufferWorker @ 0x1404B13C0 (HalpGrowMapBufferWorker.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B1CA4 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     KasanDriverLoadImageInternal @ 0x1404B24C0 (KasanDriverLoadImageInternal.c)
 *     VslFreePoolTransferObject @ 0x1404B4020 (VslFreePoolTransferObject.c)
 *     sub_1404B4658 @ 0x1404B4658 (sub_1404B4658.c)
 *     VfPoolDelayFreeIfPossible @ 0x1404B5DC0 (VfPoolDelayFreeIfPossible.c)
 *     CcMmLogLostDelayedWriteError @ 0x1404B67D0 (CcMmLogLostDelayedWriteError.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404B687C (EtwpCovSampCaptureContextStop.c)
 *     SeSetLearningModeObjectInformation @ 0x1404B6F50 (SeSetLearningModeObjectInformation.c)
 *     IopInvalidateBusRelationsWorker @ 0x1404B94E0 (IopInvalidateBusRelationsWorker.c)
 *     CcUninitializeAsyncLazywriteForNodeHelper @ 0x1404B9970 (CcUninitializeAsyncLazywriteForNodeHelper.c)
 *     PsFreeEnclaveModuleInfo @ 0x1404B9E10 (PsFreeEnclaveModuleInfo.c)
 *     PopIdlePhaseWatchdogCallback @ 0x1404BA980 (PopIdlePhaseWatchdogCallback.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1404BAB5C (RtlpMuiRegLoadLicInformation.c)
 *     BiWasFirmwareModified @ 0x1404BB13C (BiWasFirmwareModified.c)
 *     ExGetWakeTimerList @ 0x1404BB1AC (ExGetWakeTimerList.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1404BD7D4 (PopRecordPoIrpBlackboxInformation.c)
 *     SmFpPreAllocate @ 0x1404BE790 (SmFpPreAllocate.c)
 *     PpmEventHgsNormalizedTable @ 0x1404C031C (PpmEventHgsNormalizedTable.c)
 *     PfpMemoryRangesQuery @ 0x1404C14D8 (PfpMemoryRangesQuery.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1404C2E3C (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PiDevCfgPopDriverNodeEntry @ 0x1404C3B40 (PiDevCfgPopDriverNodeEntry.c)
 *     IopAllowRemoteDASD @ 0x1404C4890 (IopAllowRemoteDASD.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404C6008 (PpmEventHgsHardwareTableResonChanged.c)
 *     PipFreeDependencyEdge @ 0x1404C6D54 (PipFreeDependencyEdge.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1404C7270 (MiUnlockAndDereferenceNestedVad.c)
 *     HalpHvInitMcaPcrContext @ 0x1404C74C4 (HalpHvInitMcaPcrContext.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1404C7CB0 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     MiDereferenceHugeContext @ 0x1404C8E3C (MiDereferenceHugeContext.c)
 *     sub_1404CC81C @ 0x1404CC81C (sub_1404CC81C.c)
 *     EtwpGetDriverDataDosPath @ 0x1404CD494 (EtwpGetDriverDataDosPath.c)
 *     KeStartProfile @ 0x1404CFCE0 (KeStartProfile.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D1988 (MiFreeTransitionPageHeatList.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D1EB4 (MiLockWorkingSetForLargeMapping.c)
 *     KeDisableProfiling @ 0x1404D2094 (KeDisableProfiling.c)
 *     PopFxDestroyDeviceDpm @ 0x1404D27A8 (PopFxDestroyDeviceDpm.c)
 *     CcAsyncReadWorker @ 0x1404D8CA0 (CcAsyncReadWorker.c)
 *     CcCompleteAsyncReadWorker @ 0x1404D95C0 (CcCompleteAsyncReadWorker.c)
 *     FsRtlUninitializeOplock @ 0x1404D98A0 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404D9C50 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     IopLoadDriverImage @ 0x1404DD018 (IopLoadDriverImage.c)
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     SepMandatorySubProcessToken @ 0x1404EC31C (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x1404EC6F0 (SepVerifyDesktopAppxImage.c)
 *     EtwpCovSampLookasideGrow @ 0x1404ED000 (EtwpCovSampLookasideGrow.c)
 *     EtwpApplyEventNameFilter @ 0x1404ED680 (EtwpApplyEventNameFilter.c)
 *     MiRemoveSecureEntry @ 0x1404EF6FC (MiRemoveSecureEntry.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404F33F0 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ExpSaBinaryArrayRemove @ 0x1404F4218 (ExpSaBinaryArrayRemove.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F4AFC (SepValidateAndCopyGlobalEntry.c)
 *     PsFreeAffinityToken @ 0x1404F6110 (PsFreeAffinityToken.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1404F62A0 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     MiDeleteCloneDescriptor @ 0x1404F6498 (MiDeleteCloneDescriptor.c)
 *     ExpDiskEnumCallback @ 0x1404F7B08 (ExpDiskEnumCallback.c)
 *     PopFxDestroyDeviceCommon @ 0x1404F7FA0 (PopFxDestroyDeviceCommon.c)
 *     ExFreeCacheAwarePushLock @ 0x1404F8C10 (ExFreeCacheAwarePushLock.c)
 *     HalInitializeBios @ 0x140539620 (HalInitializeBios.c)
 *     HalpDmaFindDeviceObjectByToken @ 0x14053BA08 (HalpDmaFindDeviceObjectByToken.c)
 *     HalCancelAdapterChannel @ 0x14054C310 (HalCancelAdapterChannel.c)
 *     HalpDmaFreeChildAdapter @ 0x14054CEA0 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x14054DAE0 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054DC80 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCancelAdapterChannelDmarThin @ 0x14054F1D0 (HalCancelAdapterChannelDmarThin.c)
 *     HalpErrorDeferredHandler @ 0x140552AD0 (HalpErrorDeferredHandler.c)
 *     HalpFreeDrsPool @ 0x140552B6C (HalpFreeDrsPool.c)
 *     HalpPmemErrorDeferredHandler @ 0x140552F30 (HalpPmemErrorDeferredHandler.c)
 *     HalpPmemErrorDeferredRecovery @ 0x140553024 (HalpPmemErrorDeferredRecovery.c)
 *     HalpDeleteSecondaryIcEntry @ 0x140553358 (HalpDeleteSecondaryIcEntry.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405570E8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpIumSetVariable @ 0x14055F5C0 (HalpIumSetVariable.c)
 *     CcDeleteVolumeCacheMap @ 0x140577210 (CcDeleteVolumeCacheMap.c)
 *     CcRegisterExternalCache @ 0x140577D30 (CcRegisterExternalCache.c)
 *     CcRegisterExternalCacheEx @ 0x140577E20 (CcRegisterExternalCacheEx.c)
 *     CcUnregisterExternalCache @ 0x140578110 (CcUnregisterExternalCache.c)
 *     CcUnregisterExternalCacheEx @ 0x140578150 (CcUnregisterExternalCacheEx.c)
 *     CcQueryRegKeyValue @ 0x14057883C (CcQueryRegKeyValue.c)
 *     CcRegistryChangeCallback @ 0x140578990 (CcRegistryChangeCallback.c)
 *     CcUpdateDynamicRegistrySettings @ 0x140578D30 (CcUpdateDynamicRegistrySettings.c)
 *     CcDeletePartition @ 0x140579B7C (CcDeletePartition.c)
 *     CcInitializePartition @ 0x14057A1B8 (CcInitializePartition.c)
 *     CcGetDeviceGuidAsync @ 0x14057AA50 (CcGetDeviceGuidAsync.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057B504 (CcCompleteAsyncWriteBehind.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057B84C (CcWriteBehindAsyncPreProcess.c)
 *     EmpProviderDeregisterEntry @ 0x14057C600 (EmpProviderDeregisterEntry.c)
 *     EmpRuleUpdateWorkerThread @ 0x14057C800 (EmpRuleUpdateWorkerThread.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x14057CAA8 (EmpEvaluateUpdateRuleEvalState.c)
 *     FsRtlFreeAePushLock @ 0x14057D300 (FsRtlFreeAePushLock.c)
 *     FsRtlpFreeRHOpContext @ 0x14057E1A0 (FsRtlpFreeRHOpContext.c)
 *     FsFilterInit @ 0x14057EB8C (FsFilterInit.c)
 *     FsRtlStackOverflowRead @ 0x14057F410 (FsRtlStackOverflowRead.c)
 *     HvlpDepositPages @ 0x1405814B4 (HvlpDepositPages.c)
 *     VslGetEtwDebugId @ 0x14058A3B4 (VslGetEtwDebugId.c)
 *     VslQueryActiveSecurePatches @ 0x14058ADE8 (VslQueryActiveSecurePatches.c)
 *     BgkDisplayString @ 0x14058CC70 (BgkDisplayString.c)
 *     BvgaReleaseResources @ 0x14058D800 (BvgaReleaseResources.c)
 *     IoFillDumpHeader @ 0x14058DFEC (IoFillDumpHeader.c)
 *     IopGetPhysicalMemoryBlock @ 0x140591760 (IopGetPhysicalMemoryBlock.c)
 *     IopInitializeOfflineCrashDump @ 0x140591AF4 (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x140591D0C (IopIsBitlockerOn.c)
 *     IopReadDumpRegistry @ 0x140591DB0 (IopReadDumpRegistry.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140591F3C (IopRemoveDumpCapsuleSupport.c)
 *     IoFreeErrorLogEntry @ 0x140593970 (IoFreeErrorLogEntry.c)
 *     IoFreeSfioStreamIdentifier @ 0x1405939D0 (IoFreeSfioStreamIdentifier.c)
 *     IoDiscardDeferredLiveDumpData @ 0x14059497C (IoDiscardDeferredLiveDumpData.c)
 *     IoInitializeLiveDump @ 0x1405949C8 (IoInitializeLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140594B84 (IoWriteDeferredLiveDumpData.c)
 *     IopGetRegistryULongValue @ 0x140594D58 (IopGetRegistryULongValue.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140595270 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x140595CAC (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140596198 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpAllocateIoSpaceRanges @ 0x1405963CC (IopLiveDumpAllocateIoSpaceRanges.c)
 *     IopLiveDumpFreeIoSpaceRanges @ 0x140597DA4 (IopLiveDumpFreeIoSpaceRanges.c)
 *     IopLiveDumpFreeMappingResources @ 0x140597EA0 (IopLiveDumpFreeMappingResources.c)
 *     IopLiveDumpQueryIOSpaceRanges @ 0x140599C20 (IopLiveDumpQueryIOSpaceRanges.c)
 *     IopLiveDumpReleaseResources @ 0x140599DDC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059B7D0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     SecureDump_ConvertToRsaBlob @ 0x14059E620 (SecureDump_ConvertToRsaBlob.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14059E6E4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Init @ 0x14059EC04 (SecureDump_Init.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14059ED44 (SecureDump_LoadCertAndProvisionKey.c)
 *     SecureDump_PrepareForInit @ 0x14059F0BC (SecureDump_PrepareForInit.c)
 *     SecureDump_ReInitialize @ 0x14059F3CC (SecureDump_ReInitialize.c)
 *     SecureDump_ReadRegistry @ 0x14059F5A8 (SecureDump_ReadRegistry.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14059F6B4 (SecureDump_SymmetricEncryptionSetup.c)
 *     IopErrorLogDpc @ 0x14059F9E0 (IopErrorLogDpc.c)
 *     PipUpdateDeviceProducts @ 0x1405A0600 (PipUpdateDeviceProducts.c)
 *     PnpBootDeviceWait @ 0x1405A0CA8 (PnpBootDeviceWait.c)
 *     PipEnumeratePersistedMemoryCallback @ 0x1405A1240 (PipEnumeratePersistedMemoryCallback.c)
 *     PipCreateNewDependencyEdge @ 0x1405A14FC (PipCreateNewDependencyEdge.c)
 *     IoTranslateBusAddress @ 0x1405A1EA0 (IoTranslateBusAddress.c)
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405A37AC (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PiDevCfgQueryResolveValue @ 0x1405A3EAC (PiDevCfgQueryResolveValue.c)
 *     PnpFreeUnicodeStringList @ 0x1405A63AC (PnpFreeUnicodeStringList.c)
 *     KasanDriverUnloadImage @ 0x1405A6920 (KasanDriverUnloadImage.c)
 *     KdDeregisterPowerHandler @ 0x1405AC550 (KdDeregisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x1405ACEC4 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x1405AD76C (KeProcessorProfileControlArea.c)
 *     KiDeregisterNmiSxCallback @ 0x1405ADC6C (KiDeregisterNmiSxCallback.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405B15EC (KeEtwInitializeCpuStarvationProvider.c)
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405B32DC (KiAssignCooperativeIdleSearchContexts.c)
 *     KiFreeIdleSearchStructures @ 0x1405B40D8 (KiFreeIdleSearchStructures.c)
 *     KiFreeLocalSharedReadyQueue @ 0x1405B415C (KiFreeLocalSharedReadyQueue.c)
 *     KiFreeStaticRescheduleContext @ 0x1405B4370 (KiFreeStaticRescheduleContext.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x1405B5D80 (KeEnableOptionalXStateFeaturesApc.c)
 *     KiAdjustGroupConfiguration @ 0x1405B8204 (KiAdjustGroupConfiguration.c)
 *     KiFreeProcessorNumber @ 0x1405B8CE8 (KiFreeProcessorNumber.c)
 *     KeStopProfile @ 0x1405BC7A4 (KeStopProfile.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BCA40 (KeAssignCpuPartitionsToProcess.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BD680 (KiCpuPartitionCheckAffinitization.c)
 *     KeSrcuFree @ 0x1405BE120 (KeSrcuFree.c)
 *     KiSrcuInitializeTopology @ 0x1405BE5C8 (KiSrcuInitializeTopology.c)
 *     KiPristineTriageDumpAllocationWorker @ 0x1405C3C00 (KiPristineTriageDumpAllocationWorker.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1405C449C (KiLogUserCetSetContextIpValidationFailure.c)
 *     KiFreeForceParkingData @ 0x1405C5C38 (KiFreeForceParkingData.c)
 *     KiAltContextProcessMcheckAltReturn @ 0x1405C7180 (KiAltContextProcessMcheckAltReturn.c)
 *     KiMcheckAlternateReturn @ 0x1405C73B0 (KiMcheckAlternateReturn.c)
 *     PfpPowerActionDpcRoutine @ 0x1405C9BD0 (PfpPowerActionDpcRoutine.c)
 *     PfpServiceMainThreadUnboost @ 0x1405C9DA0 (PfpServiceMainThreadUnboost.c)
 *     PfSnEnablePrefetcherTimerRoutine @ 0x1405C9EB0 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfpPartitionCreate @ 0x1405C9F7C (PfpPartitionCreate.c)
 *     PpmRemoveIdleStates @ 0x1405CC7D0 (PpmRemoveIdleStates.c)
 *     PopCleanPowerLimitExtension @ 0x1405CCE74 (PopCleanPowerLimitExtension.c)
 *     PopFxComponentRelationsCleanup @ 0x1405CE13C (PopFxComponentRelationsCleanup.c)
 *     PopFxCreateDeviceCommon @ 0x1405CE344 (PopFxCreateDeviceCommon.c)
 *     PopFxDeviceRelationsCleanup @ 0x1405CE5DC (PopFxDeviceRelationsCleanup.c)
 *     PopFxRegisterPluginEx @ 0x1405CF188 (PopFxRegisterPluginEx.c)
 *     PoUnregisterSstNotificationHandler @ 0x1405D0980 (PoUnregisterSstNotificationHandler.c)
 *     PopDereferenceWakeInfos @ 0x1405D09EC (PopDereferenceWakeInfos.c)
 *     PopTracePowerLimitHistogram @ 0x1405D3820 (PopTracePowerLimitHistogram.c)
 *     PpmHeteroInitializeFeedbackClass @ 0x1405D4BFC (PpmHeteroInitializeFeedbackClass.c)
 *     PopShutdownListenerRemoveCallback @ 0x1405D4FF0 (PopShutdownListenerRemoveCallback.c)
 *     PpmFireWmiEvent @ 0x1405D5478 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x1405D5500 (PpmWmiFireIdleAccountingEvent.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1405D660C (PpmEventHgsContainmentGroupInfo.c)
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1405DE620 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 *     SshpCopyDataEntry @ 0x1405E1A2C (SshpCopyDataEntry.c)
 *     PspReadDfssConfigurationValues @ 0x1405E20E0 (PspReadDfssConfigurationValues.c)
 *     PsSetCpuQuotaInformation @ 0x1405E247C (PsSetCpuQuotaInformation.c)
 *     PspTimerDelayWorkerRoutine @ 0x1405E3570 (PspTimerDelayWorkerRoutine.c)
 *     PspIumAllocatePartitionState @ 0x1405E37E8 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1405E39B4 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405E3AD8 (PspIumAllocateSecurePool.c)
 *     PspIumFreePartitionState @ 0x1405E3D04 (PspIumFreePartitionState.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405E4010 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405E4194 (PsLoadVsmEnclaveData.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405E4DC4 (DbgpRemoveDebugPrintCallback.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1405E6D18 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlCompareExchangePointerMapping @ 0x1405E70D0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x1405E7220 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1405E75B0 (RtlRemovePointerMapping.c)
 *     RtlpIdnToUnicodeWorker @ 0x1405EBF3C (RtlpIdnToUnicodeWorker.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x1405EC78C (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpGetPersistedRegistryLocation @ 0x1405EC9BC (RtlpGetPersistedRegistryLocation.c)
 *     RtlTraceDatabaseDestroy @ 0x1405ED920 (RtlTraceDatabaseDestroy.c)
 *     SepInitProcessAuditSd @ 0x140605560 (SepInitProcessAuditSd.c)
 *     SeFreeCapturedObjectTypeList @ 0x140605EB4 (SeFreeCapturedObjectTypeList.c)
 *     SepGetLearningModeObjectInformation @ 0x140606348 (SepGetLearningModeObjectInformation.c)
 *     SepVerifyUIAccessChildProcessImage @ 0x140607418 (SepVerifyUIAccessChildProcessImage.c)
 *     SeCaptureHandles @ 0x140607B70 (SeCaptureHandles.c)
 *     SepBuildCapPolicyTable @ 0x140607C74 (SepBuildCapPolicyTable.c)
 *     SepRmCapPoolExpand @ 0x140607E6C (SepRmCapPoolExpand.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140608018 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1406086B0 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14060916C (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     SmpKeyedStoreCtxCleanup @ 0x14060B194 (SmpKeyedStoreCtxCleanup.c)
 *     SmKmStoreTerminateWorker @ 0x14060C0E0 (SmKmStoreTerminateWorker.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060D08C (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14060D184 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060D6D0 (SmRecordDecompressionFailureDumpPayload.c)
 *     SmHwAcceleratorMgrHotRemoveAccelerator @ 0x14060DBAC (SmHwAcceleratorMgrHotRemoveAccelerator.c)
 *     VfAllocateDomainCommonBuffer @ 0x14060F0D0 (VfAllocateDomainCommonBuffer.c)
 *     VfDifRecoverIoCallbacks @ 0x14060F4F0 (VfDifRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x14060F810 (VfTargetReplaceIoCallbacks.c)
 *     ViTargetDriversFreeVerifiedData @ 0x14060F904 (ViTargetDriversFreeVerifiedData.c)
 *     VfIoPendingUnload @ 0x1406109C0 (VfIoPendingUnload.c)
 *     VfGetVerifierInformation @ 0x140612D74 (VfGetVerifierInformation.c)
 *     VfVolatileClearDifRuleClass @ 0x140612E90 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140613054 (VfVolatileSetDifRuleClass.c)
 *     ViRlrsUnload @ 0x140613B40 (ViRlrsUnload.c)
 *     CarCopyRuleViolationDetails @ 0x140614B40 (CarCopyRuleViolationDetails.c)
 *     CarCreateRuleViolationDetails @ 0x140614D20 (CarCreateRuleViolationDetails.c)
 *     CarDeleteRuleOverrideEntry @ 0x140614D8C (CarDeleteRuleOverrideEntry.c)
 *     CarDeleteRuleViolationDetails @ 0x140614DC0 (CarDeleteRuleViolationDetails.c)
 *     CarDeregisterRuleClassConfiguration @ 0x140614E20 (CarDeregisterRuleClassConfiguration.c)
 *     CarInitializeTelemetryData @ 0x140615160 (CarInitializeTelemetryData.c)
 *     CarReportDifPluginRuleViolation @ 0x140615800 (CarReportDifPluginRuleViolation.c)
 *     DifPopThreadContextData @ 0x140615C20 (DifPopThreadContextData.c)
 *     DifPushThreadContextData @ 0x140615D10 (DifPushThreadContextData.c)
 *     DifAddPerDriverDataForPlugins @ 0x140615E7C (DifAddPerDriverDataForPlugins.c)
 *     DifRemovePerDriverDataForPlugins @ 0x1406160A0 (DifRemovePerDriverDataForPlugins.c)
 *     DifObjTrkFreeNode @ 0x140616270 (DifObjTrkFreeNode.c)
 *     DifRegisterObjectTracking @ 0x140616910 (DifRegisterObjectTracking.c)
 *     DifDeregisterPlugin @ 0x140616C78 (DifDeregisterPlugin.c)
 *     DifRegisterPlugin @ 0x140617190 (DifRegisterPlugin.c)
 *     CarAddUniqueViolation @ 0x14061763C (CarAddUniqueViolation.c)
 *     CarDeleteRuleViolationDB @ 0x140617A80 (CarDeleteRuleViolationDB.c)
 *     CarFreeDbNode @ 0x140617B30 (CarFreeDbNode.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140617BD8 (CarWriteEarlyRuleViolationEvents.c)
 *     CarLiveDump @ 0x1406180E0 (CarLiveDump.c)
 *     CarLiveDumpCallBack @ 0x1406181D0 (CarLiveDumpCallBack.c)
 *     DifExFreePoolWithTagWrapper @ 0x14061C9D0 (DifExFreePoolWithTagWrapper.c)
 *     DifExFreePoolWrapper @ 0x14061CB40 (DifExFreePoolWrapper.c)
 *     VmpPinMemoryRange @ 0x140649280 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x140649920 (VmpUnpinMemoryRangeHelper.c)
 *     WdipAccessCheck @ 0x14064A634 (WdipAccessCheck.c)
 *     EtwpGetPmcOwnership @ 0x14064AF10 (EtwpGetPmcOwnership.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x14064B27C (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpTraceContextRegisters @ 0x14064B6B8 (EtwpTraceContextRegisters.c)
 *     EtwpUnsubscribeContainerStateWnf @ 0x14064B8F0 (EtwpUnsubscribeContainerStateWnf.c)
 *     EtwTraceCpuPartitionAffinityViolation @ 0x14064BB1C (EtwTraceCpuPartitionAffinityViolation.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x14064C9E0 (EtwpCancelTraceImageUnloadApc.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14064DD30 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpStackDeleteProcessor @ 0x14064DFC0 (EtwpStackDeleteProcessor.c)
 *     EtwpStackInitializeProcessor @ 0x14064E008 (EtwpStackInitializeProcessor.c)
 *     EtwpFreeKeyNameEntry @ 0x14064EC20 (EtwpFreeKeyNameEntry.c)
 *     EtwpRegisterPartitionPages @ 0x14064EC40 (EtwpRegisterPartitionPages.c)
 *     EtwpCCSwapDeleteProcessor @ 0x140650D24 (EtwpCCSwapDeleteProcessor.c)
 *     BapdpInitializePageDatabase @ 0x140650E14 (BapdpInitializePageDatabase.c)
 *     BapdpMarshallBootDataToRegistry @ 0x140651038 (BapdpMarshallBootDataToRegistry.c)
 *     BapdpProcessEtwEvents @ 0x140651404 (BapdpProcessEtwEvents.c)
 *     BapdpProcessSpacesBootInformation @ 0x140651540 (BapdpProcessSpacesBootInformation.c)
 *     ExpSetBootLoaderMetadata @ 0x140651728 (ExpSetBootLoaderMetadata.c)
 *     NtDrawText @ 0x1406521A0 (NtDrawText.c)
 *     ExFreePool2 @ 0x140652800 (ExFreePool2.c)
 *     ExPoolQueryLimits @ 0x140652A00 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140652BF8 (ExPoolSetLimit.c)
 *     ExpPlGrowTableIfNeeded @ 0x140653674 (ExpPlGrowTableIfNeeded.c)
 *     ExpTrackTableInsertLimit @ 0x140653A30 (ExpTrackTableInsertLimit.c)
 *     ExpDeleteSiloState @ 0x140653DC4 (ExpDeleteSiloState.c)
 *     sub_14065402C @ 0x14065402C (sub_14065402C.c)
 *     ExpNlsDeleteSiloState @ 0x1406545D4 (ExpNlsDeleteSiloState.c)
 *     ExDeleteWakeTimerInfo @ 0x1406559B4 (ExDeleteWakeTimerInfo.c)
 *     ExCreateDpcEvent @ 0x140655CE0 (ExCreateDpcEvent.c)
 *     ExDeleteDpcEvent @ 0x140655DF0 (ExDeleteDpcEvent.c)
 *     ExpAtsDereferenceDevice @ 0x14065669C (ExpAtsDereferenceDevice.c)
 *     ExpPrepareNewAtsDevice @ 0x140656770 (ExpPrepareNewAtsDevice.c)
 *     ExpAllocateAsid @ 0x1406570F8 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14065742C (ExpPrepareNewSvmDevice.c)
 *     ExpShareAddressSpaceWithDevice @ 0x1406576CC (ExpShareAddressSpaceWithDevice.c)
 *     ExpSvmDereferenceDevice @ 0x140657D1C (ExpSvmDereferenceDevice.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14065930C (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1406595AC (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x140659830 (ExpResourceTimeoutCaptureLiveDump.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x140659E94 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     WheapFreeDriverPacketBuffer @ 0x14065AE38 (WheapFreeDriverPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x14065AF68 (WheapInitErrorReportDeviceDriver.c)
 *     WheaPersistBadPageToBcd @ 0x14065B5B0 (WheaPersistBadPageToBcd.c)
 *     WheaPersistBadPageToRegistry @ 0x14065B76C (WheaPersistBadPageToRegistry.c)
 *     WheapProcessOfflineList @ 0x14065E000 (WheapProcessOfflineList.c)
 *     ApiSetReleaseSchema @ 0x14065E1E4 (ApiSetReleaseSchema.c)
 *     ApiSetComposeSchema @ 0x14065EA7C (ApiSetComposeSchema.c)
 *     ApiSetComposeSchema_V7 @ 0x14065FE98 (ApiSetComposeSchema_V7.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066B458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiZeroPageFile @ 0x14066D090 (MiZeroPageFile.c)
 *     MiGetFileOnlyRanges @ 0x14066E544 (MiGetFileOnlyRanges.c)
 *     MiPerformMemoryChange @ 0x14066F268 (MiPerformMemoryChange.c)
 *     MiReturnAddMemoryResources @ 0x14066FA80 (MiReturnAddMemoryResources.c)
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 *     MiInitializeHugePfnDatabase @ 0x140671D60 (MiInitializeHugePfnDatabase.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140672544 (MiMarkHugePfnGood.c)
 *     MiReturnMdlExcess @ 0x1406730E0 (MiReturnMdlExcess.c)
 *     MiCheckLostBadPageNode @ 0x140674820 (MiCheckLostBadPageNode.c)
 *     MiDeletePendingBadPageNodesAwaitingDeleteList @ 0x140674930 (MiDeletePendingBadPageNodesAwaitingDeleteList.c)
 *     MiEnumeratePartitionBadPages @ 0x1406749D0 (MiEnumeratePartitionBadPages.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x140674B7C (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140674CA0 (MiGetListOfPendingBadPages.c)
 *     MiRemoveBadPages @ 0x14067523C (MiRemoveBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiDeleteKernelStackNode @ 0x140676480 (MiDeleteKernelStackNode.c)
 *     MiDeleteStaleCacheMaps @ 0x140676A50 (MiDeleteStaleCacheMaps.c)
 *     MiFreeVadEvents @ 0x1406796AC (MiFreeVadEvents.c)
 *     MiLocateSharedPageViews @ 0x14067A2C0 (MiLocateSharedPageViews.c)
 *     MiChangePagingFileMaximum @ 0x14067AF90 (MiChangePagingFileMaximum.c)
 *     MiInsertCopyExtents @ 0x14067C4D0 (MiInsertCopyExtents.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067C654 (MiMarkFileOnlyPfnBad.c)
 *     MiMergeCopyExtents @ 0x14067C8D4 (MiMergeCopyExtents.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067D2F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x14067DB08 (MiUnlockAndFreeDvPatchImage.c)
 *     MmManageFaultRange @ 0x140681764 (MmManageFaultRange.c)
 *     MiEmptyAccessLogs @ 0x140684820 (MiEmptyAccessLogs.c)
 *     MiCombineWorkingSet @ 0x140686378 (MiCombineWorkingSet.c)
 *     MiInitializeSlabIdentities @ 0x140689438 (MiInitializeSlabIdentities.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 *     MiAddRangeToPartitionTree @ 0x14068AA6C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNode @ 0x14068B124 (MiDeletePartitionPageNode.c)
 *     MiStoreDeletePartition @ 0x14068CF54 (MiStoreDeletePartition.c)
 *     MiAbsorbPossibleEngineChanges @ 0x140690174 (MiAbsorbPossibleEngineChanges.c)
 *     MiDeleteThreadContext @ 0x140690714 (MiDeleteThreadContext.c)
 *     MiPreserveBootDecisions @ 0x140690C48 (MiPreserveBootDecisions.c)
 *     MiZeroNodeExiting @ 0x1406912C4 (MiZeroNodeExiting.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1406919E4 (MiAllocateAcceleratorDescriptor.c)
 *     MiDeleteHardwareAccelerators @ 0x140691B9C (MiDeleteHardwareAccelerators.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x140691DA4 (MiSignalNewAcceleratorsAvailable.c)
 *     MiInsertPteTracker @ 0x1406924A4 (MiInsertPteTracker.c)
 *     MiCreateProcessLargePageCacheAnchor @ 0x140693304 (MiCreateProcessLargePageCacheAnchor.c)
 *     MiFreeZeroCalibrationBuffer @ 0x140694704 (MiFreeZeroCalibrationBuffer.c)
 *     MiMergeCalibrationResults @ 0x1406949C4 (MiMergeCalibrationResults.c)
 *     MiZeroPageCalibrate @ 0x140694F5C (MiZeroPageCalibrate.c)
 *     UcOnUnexpectedCodePath @ 0x14069573C (UcOnUnexpectedCodePath.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x140695D0C (UcpRetrieveCurrentConfigSettings.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140697D2C (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14069810C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x1406987FC (BiLogFileOwnerProcess.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x140698AF0 (BiSpacesUpdatePhysicalDevicePath.c)
 *     IpmiHwpReadSpmiConfiguration @ 0x1406A09C0 (IpmiHwpReadSpmiConfiguration.c)
 *     IpmiLibReadSmbiosRecord38 @ 0x1406A0A78 (IpmiLibReadSmbiosRecord38.c)
 *     SafeFree @ 0x1406A1B14 (SafeFree.c)
 *     VhdDeferredAutoAttachVirtualDisks @ 0x1406A2788 (VhdDeferredAutoAttachVirtualDisks.c)
 *     NtReplacePartitionUnit @ 0x1406A2880 (NtReplacePartitionUnit.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1406A31C0 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1406A3368 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     _SafeReallocBlob @ 0x1406A3B48 (_SafeReallocBlob.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1406A40F8 (RtlUpdateImportRelocationsInImage.c)
 *     PipDeleteDependencyNode @ 0x1406F35EC (PipDeleteDependencyNode.c)
 *     sub_1406F3DBC @ 0x1406F3DBC (sub_1406F3DBC.c)
 *     sub_1406F418C @ 0x1406F418C (sub_1406F418C.c)
 *     BiGetSystemPartition @ 0x1406F46F0 (BiGetSystemPartition.c)
 *     CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x1406F47FC (CmFcpManagerOnFeatureUsageDataTransferComplete.c)
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x1406F568C (CmFcManagerUnregisterFeatureUsageProvider.c)
 *     EtwpUpdateEventFilterAndFree @ 0x1406F5BB4 (EtwpUpdateEventFilterAndFree.c)
 *     IopFreeReqAlternative @ 0x1406F724C (IopFreeReqAlternative.c)
 *     ExpStringFree @ 0x1406F748C (ExpStringFree.c)
 *     PnpReadDeviceConfiguration @ 0x1406F78F4 (PnpReadDeviceConfiguration.c)
 *     RtlpGetWindowsPolicy @ 0x1406F847C (RtlpGetWindowsPolicy.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406F8C14 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PopFreeHiberContext @ 0x1406F93C8 (PopFreeHiberContext.c)
 *     PopResetActionDefaults @ 0x1406F9BD4 (PopResetActionDefaults.c)
 *     HalpQueryResources @ 0x1406FCB70 (HalpQueryResources.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FD3A4 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FD694 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x1406FEBC8 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtExtendApertureRange @ 0x1406FF0F8 (HalpIrtExtendApertureRange.c)
 *     HalpIrtExtendRemappingRange @ 0x1406FF200 (HalpIrtExtendRemappingRange.c)
 *     HalpLoadMicrocode @ 0x1406FF6C0 (HalpLoadMicrocode.c)
 *     HalpMcExportAndChargeNeededData @ 0x1406FF9E4 (HalpMcExportAndChargeNeededData.c)
 *     HalpDpReplaceBegin @ 0x1407005F0 (HalpDpReplaceBegin.c)
 *     HalpDpReplaceEnd @ 0x1407007A0 (HalpDpReplaceEnd.c)
 *     HalpRegisterPmuNotification @ 0x14070084C (HalpRegisterPmuNotification.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x140700B80 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 *     ArbAddInaccessibleAllocationRange @ 0x140702370 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddOrdering @ 0x140702644 (ArbAddOrdering.c)
 *     ArbBootAllocation @ 0x140702750 (ArbBootAllocation.c)
 *     ArbBuildAssignmentOrdering @ 0x1407028FC (ArbBuildAssignmentOrdering.c)
 *     ArbFreeOrderingList @ 0x140702FB8 (ArbFreeOrderingList.c)
 *     ArbInitializeArbiterInstance @ 0x140703174 (ArbInitializeArbiterInstance.c)
 *     ArbPruneOrdering @ 0x14070372C (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1407038D0 (ArbQueryConflict.c)
 *     ArbRegReadMmConfigRanges @ 0x140703C6C (ArbRegReadMmConfigRanges.c)
 *     ArbRetestAllocation @ 0x140703E00 (ArbRetestAllocation.c)
 *     ArbpBuildAllocationStack @ 0x1407043D0 (ArbpBuildAllocationStack.c)
 *     ArbpGetRegistryValue @ 0x1407045E4 (ArbpGetRegistryValue.c)
 *     CcFreeVacbArray @ 0x14070479C (CcFreeVacbArray.c)
 *     CcUnpinDataForThread @ 0x1407048D0 (CcUnpinDataForThread.c)
 *     DbgkpCreateNotificationEvent @ 0x140704940 (DbgkpCreateNotificationEvent.c)
 *     DbgkQueueUserExceptionReport @ 0x140704FC4 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1407051D0 (DbgkUserReportWorkRoutine.c)
 *     DbgkpDeleteErrorPort @ 0x1407054CC (DbgkpDeleteErrorPort.c)
 *     DbgkCaptureLiveDump @ 0x1407055FC (DbgkCaptureLiveDump.c)
 *     DbgkLkmdRegisterCallback @ 0x140705A30 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x140705B20 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140705D04 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpLkmdSnapThreadApc @ 0x140705F80 (DbgkpLkmdSnapThreadApc.c)
 *     DbgkpWerFreePool @ 0x140706910 (DbgkpWerFreePool.c)
 *     EmClientRuleDeregisterNotification @ 0x140707170 (EmClientRuleDeregisterNotification.c)
 *     EmpClientRuleRegisterNotification @ 0x1407072A4 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x140707520 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x1407077C0 (EmProviderRegisterEntry.c)
 *     FsRtlGetTunnelParameterValue @ 0x140708468 (FsRtlGetTunnelParameterValue.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140708894 (FsRtlpRegisterProviderWithMUP.c)
 *     FsRtlpOplockGetAckTimeoutOverride @ 0x140709414 (FsRtlpOplockGetAckTimeoutOverride.c)
 *     FsRtlpOplockPerfCleanupData @ 0x140709730 (FsRtlpOplockPerfCleanupData.c)
 *     FsRtlDedupChangeInit @ 0x14070A490 (FsRtlDedupChangeInit.c)
 *     FsRtlDedupChangeUninit @ 0x14070A650 (FsRtlDedupChangeUninit.c)
 *     FsRtlpDedupChangeQueryValueKey @ 0x14070A744 (FsRtlpDedupChangeQueryValueKey.c)
 *     FsRtlHeatInit @ 0x14070AFB0 (FsRtlHeatInit.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14070B420 (FsRtlpHeatUnregisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x14070B4B0 (FsRtlpQueryValueKey.c)
 *     FsRtlNotifyCleanupAll @ 0x14070B6A0 (FsRtlNotifyCleanupAll.c)
 *     IoReadDiskSignature @ 0x14070BC10 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x14070BD10 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x14070C1D0 (IoWritePartitionTable.c)
 *     HvlQuerySetBootPagesInfo @ 0x14070C68C (HvlQuerySetBootPagesInfo.c)
 *     VslObtainHotPatchUndoTable @ 0x14070D850 (VslObtainHotPatchUndoTable.c)
 *     VslQueryRuntimeAttestationReport @ 0x14070DA00 (VslQueryRuntimeAttestationReport.c)
 *     VslStartSecureProcessor @ 0x14070DF88 (VslStartSecureProcessor.c)
 *     VslTransformDumpKey @ 0x14070E27C (VslTransformDumpKey.c)
 *     IopInitializeDumpPolicySettings @ 0x14070ECB4 (IopInitializeDumpPolicySettings.c)
 *     IopInitializeTriageDumpData @ 0x14070EFB0 (IopInitializeTriageDumpData.c)
 *     IopCopyBootLogRegistryToFile @ 0x14070FA0C (IopCopyBootLogRegistryToFile.c)
 *     IopFreeGenericTableEntry @ 0x14070FCF0 (IopFreeGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x14070FD10 (IopGetRelatedFileName.c)
 *     IopHardErrorThread @ 0x14070FF00 (IopHardErrorThread.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140710530 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140710988 (IopSetFileObjectIosbRange.c)
 *     IopValidateJunctionTarget @ 0x140710FC8 (IopValidateJunctionTarget.c)
 *     IoUnregisterFsRegistrationChange @ 0x140712990 (IoUnregisterFsRegistrationChange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140712BD4 (IopSetFileMemoryPartitionInformation.c)
 *     IoRegisterContainerNotification @ 0x140712EC0 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140713180 (IoUnregisterContainerNotification.c)
 *     IoIsValidNameGraftingBuffer @ 0x140713360 (IoIsValidNameGraftingBuffer.c)
 *     pIoQueryDeviceDescription @ 0x1407138CC (pIoQueryDeviceDescription.c)
 *     IoUnregisterIoTracking @ 0x140713F10 (IoUnregisterIoTracking.c)
 *     IopDeleteIoRing @ 0x140714060 (IopDeleteIoRing.c)
 *     IopIoRingCleanupRegBufferArray @ 0x1407140D4 (IopIoRingCleanupRegBufferArray.c)
 *     IopIoRingDispatchRegisterFiles @ 0x140714798 (IopIoRingDispatchRegisterFiles.c)
 *     IoVolumeDeviceNameToGuid @ 0x1407156A0 (IoVolumeDeviceNameToGuid.c)
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140715F10 (NtSetVolumeInformationFile.c)
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140716860 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x140716D00 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140716E70 (IopGetEnvironmentVariableTrEE.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x140717380 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x1407174A0 (IopSetEnvironmentVariableTrEE.c)
 *     PipOobeCompleteAsyncCallback @ 0x140717E20 (PipOobeCompleteAsyncCallback.c)
 *     PipUpdateAsyncOptionsCallback @ 0x140717E50 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgress @ 0x140717F08 (PipUpdateSetupInProgress.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140718298 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PnpShutdownDevices @ 0x140718630 (PnpShutdownDevices.c)
 *     IoFreeKsrPersistentMemory @ 0x140718A80 (IoFreeKsrPersistentMemory.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140718FD0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetDeviceObjectLocation @ 0x1407195B4 (PipGetDeviceObjectLocation.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x1407198D0 (PipGetDriverKsrGuidRegistryValue.c)
 *     PipGetPersistentMemory @ 0x1407199A0 (PipGetPersistentMemory.c)
 *     PipMatchPersistentMemory @ 0x14071A05C (PipMatchPersistentMemory.c)
 *     PipMatchPersistentMemoryV1 @ 0x14071A140 (PipMatchPersistentMemoryV1.c)
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x14071B37C (IopIsReportedAlready.c)
 *     PipFreeBindingRequestEntry @ 0x14071C394 (PipFreeBindingRequestEntry.c)
 *     PiGetDeviceRegistryProperty @ 0x14071C7B8 (PiGetDeviceRegistryProperty.c)
 *     IoGetDeviceDirectory @ 0x14071CA80 (IoGetDeviceDirectory.c)
 *     PiCreateServiceKeyUnderPath @ 0x14071D4FC (PiCreateServiceKeyUnderPath.c)
 *     PiOpenDirectoryWithRoot @ 0x14071D8A8 (PiOpenDirectoryWithRoot.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x14071E530 (PnpReportTargetDeviceChangeAsyncWorker.c)
 *     IoReportResourceUsageInternal @ 0x14071EAA8 (IoReportResourceUsageInternal.c)
 *     PnpRequestDeviceEjectExWorker @ 0x14071EDE0 (PnpRequestDeviceEjectExWorker.c)
 *     IopFreeReqList @ 0x14071F4BC (IopFreeReqList.c)
 *     IopTranslateAndAdjustReqDesc @ 0x14071F9BC (IopTranslateAndAdjustReqDesc.c)
 *     PipApplyFunctionToServiceInstances @ 0x140720650 (PipApplyFunctionToServiceInstances.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140720860 (PipServiceInstanceToDeviceInstance.c)
 *     PnpRegCopyKeySecurity @ 0x1407211BC (PnpRegCopyKeySecurity.c)
 *     PnpRegCopyKeySecurityTree @ 0x1407212EC (PnpRegCopyKeySecurityTree.c)
 *     PnpRestartDeviceNode @ 0x140721454 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140721780 (PnpProcessCompletedEject.c)
 *     PiProcessNewDeviceNodeWorker @ 0x140721BB0 (PiProcessNewDeviceNodeWorker.c)
 *     PiProcessSetDeviceProblem @ 0x140721D58 (PiProcessSetDeviceProblem.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140721F44 (PnpCheckPossibleBootStartDriver.c)
 *     IopReleaseResources @ 0x140722054 (IopReleaseResources.c)
 *     PnpSetInterruptInformation @ 0x14072237C (PnpSetInterruptInformation.c)
 *     PiUEventGetProcessImagePath @ 0x1407226B0 (PiUEventGetProcessImagePath.c)
 *     PiNotifyCiDriverBlocked @ 0x140722830 (PiNotifyCiDriverBlocked.c)
 *     PpBootDDBHelper @ 0x1407228FC (PpBootDDBHelper.c)
 *     PpReleaseBootDDB @ 0x140722A54 (PpReleaseBootDDB.c)
 *     IopDuplicateDetection @ 0x140722BDC (IopDuplicateDetection.c)
 *     IopAllocateBootResourcesInternal @ 0x140722E38 (IopAllocateBootResourcesInternal.c)
 *     IopCreateCmResourceList @ 0x140723168 (IopCreateCmResourceList.c)
 *     IopReleaseFilteredBootResources @ 0x140723328 (IopReleaseFilteredBootResources.c)
 *     IopIsPciRootBus @ 0x140723670 (IopIsPciRootBus.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x1407241C4 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x140724208 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140724228 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140724478 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmFreeGenericTableEntry @ 0x140724990 (PiDmFreeGenericTableEntry.c)
 *     PiDmListInit @ 0x1407249B0 (PiDmListInit.c)
 *     PiDmListInitEnumCallback @ 0x140724A10 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x140724CC8 (PiDmObjectManagerPopulate.c)
 *     PipDmgInitReadGroupPolicy @ 0x1407250E8 (PipDmgInitReadGroupPolicy.c)
 *     PiDcFreeGenericTableEntry @ 0x140725230 (PiDcFreeGenericTableEntry.c)
 *     PiDcInitUpdateProperties @ 0x14072526C (PiDcInitUpdateProperties.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140725510 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140725760 (PiDcResetChildDeviceContainers.c)
 *     PiAuAllocateAndInitializeSid @ 0x140725930 (PiAuAllocateAndInitializeSid.c)
 *     PiAuCheckClientInteractive @ 0x1407259B4 (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140725A78 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140725C20 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140725E68 (PiAuGetStateDirectorySecurityObject.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140726CF0 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1407270E0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x140727F68 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407281D8 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x140728400 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140728690 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140728A48 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryMinWhcpVersion @ 0x140728EB4 (PiDevCfgQueryMinWhcpVersion.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x140728F98 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140729008 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x140729690 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140729760 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140729D80 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140729E60 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14072A040 (PiDevCfgResolveVariableSwitchCase.c)
 *     PpDevCfgProcessDevices @ 0x14072B0A4 (PpDevCfgProcessDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14072B3D0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14072B41C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCommitTransitioningDock @ 0x14072B72C (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14072B87C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PnpFreeVetoInformation @ 0x14072BC3C (PnpFreeVetoInformation.c)
 *     PnpGetProcessCommandLine @ 0x14072BCD4 (PnpGetProcessCommandLine.c)
 *     PnpRemoveEventFromQueue @ 0x14072BD6C (PnpRemoveEventFromQueue.c)
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x14072CDA4 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x14072CF8C (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x14072D0A4 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x14072D230 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x14072D5C8 (PnprGetPluginDriverImagePath.c)
 *     PnprIsMemoryDevice @ 0x14072DAD0 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x14072DB88 (PnprIsProcessorDevice.c)
 *     PnprLoadPluginDriver @ 0x14072DCA4 (PnprLoadPluginDriver.c)
 *     PnprMmFree @ 0x14072E554 (PnprMmFree.c)
 *     PiSwFreeGenericTableEntry @ 0x14072E8D0 (PiSwFreeGenericTableEntry.c)
 *     PiCMGenerateDeviceInstance @ 0x14072F37C (PiCMGenerateDeviceInstance.c)
 *     IopAppendLegacyVeto @ 0x140730FF0 (IopAppendLegacyVeto.c)
 *     IopCreateLegacyDeviceIds @ 0x1407310C4 (IopCreateLegacyDeviceIds.c)
 *     IopQueryBusResourceUpdateInterface @ 0x140731B24 (IopQueryBusResourceUpdateInterface.c)
 *     IopQueryDockRemovalInterface @ 0x140731BB0 (IopQueryDockRemovalInterface.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140731F6C (PiRegisterKernelSoftRestartNotification.c)
 *     PnpBuildCmResourceLists @ 0x140732364 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140732598 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpRestoreResourcesInternal @ 0x1407327F0 (PnpRestoreResourcesInternal.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 *     PnpRebalance @ 0x1407331E8 (PnpRebalance.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1407335E8 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140733820 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140733A20 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiIommuFreeExtension @ 0x140733EB8 (PiIommuFreeExtension.c)
 *     PipIommuRetrieveDeviceId @ 0x140733FE8 (PipIommuRetrieveDeviceId.c)
 *     PiUpdateDeviceResourceLists @ 0x14073439C (PiUpdateDeviceResourceLists.c)
 *     PiDrvDbDestroyNode @ 0x140734AD8 (PiDrvDbDestroyNode.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140734BD8 (PiDrvDbEnumDriverStoreNodes.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407350DC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140735670 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140735C50 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140735ED4 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbRegisterNode @ 0x140736338 (PiDrvDbRegisterNode.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407367E0 (PiDrvDbRegisterNodeCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407368E0 (PiDrvDbResolveFilePathKeyValues.c)
 *     IopExecuteHardwareProfileChange @ 0x140737D04 (IopExecuteHardwareProfileChange.c)
 *     PipDgqFreeEntry @ 0x14073839C (PipDgqFreeEntry.c)
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeUnregisterAvailableCpusChangeNotification @ 0x140739C98 (KeUnregisterAvailableCpusChangeNotification.c)
 *     KeDeleteCpuPartition @ 0x14073A7A8 (KeDeleteCpuPartition.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x14073ADB0 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiGetSystemServiceTraceTable @ 0x14073B234 (KiGetSystemServiceTraceTable.c)
 *     KeSetTracepoint @ 0x14073B5D0 (KeSetTracepoint.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14073FB50 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x14073FFDC (AlpcpGetPortNameInformation.c)
 *     AlpcpPortQueryServerInfo @ 0x140740094 (AlpcpPortQueryServerInfo.c)
 *     AlpcRegisterLogRoutine @ 0x1407404AC (AlpcRegisterLogRoutine.c)
 *     AlpcUnregisterLogRoutine @ 0x1407405D4 (AlpcUnregisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x1407408E4 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpInitializeMessageLog @ 0x140740B60 (AlpcpInitializeMessageLog.c)
 *     ObCleanupSecurityDescriptor @ 0x140740D84 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x140740DF8 (ObCreateKernelObjectsSD.c)
 *     ObShutdownSystem @ 0x140741200 (ObShutdownSystem.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074168C (ObpCreateDosDevicesDirectory.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14074264C (ObpCreateDefaultObjectTypeSD.c)
 *     ObpInitObjectTypeSD @ 0x1407427B8 (ObpInitObjectTypeSD.c)
 *     ObUnRegisterCallbacks @ 0x140742860 (ObUnRegisterCallbacks.c)
 *     ObpDeleteDeviceMap @ 0x140742944 (ObpDeleteDeviceMap.c)
 *     ObpDestroyStackAndObjectTables @ 0x140742EAC (ObpDestroyStackAndObjectTables.c)
 *     ObpFreeWorkItemBlock @ 0x140742F94 (ObpFreeWorkItemBlock.c)
 *     ObpGetObjectRefInfo @ 0x140743070 (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x140743348 (ObpInitStackAndObjectTables.c)
 *     ObpStartRuntimeStackTrace @ 0x140743784 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x140743BC4 (ObpStopRuntimeStackTrace.c)
 *     PfpQueryFileExtentsRequest @ 0x140743F38 (PfpQueryFileExtentsRequest.c)
 *     PfTCleanupBuffers @ 0x140744B14 (PfTCleanupBuffers.c)
 *     PfpRpShutdown @ 0x1407452C0 (PfpRpShutdown.c)
 *     PfDeletePartition @ 0x140745504 (PfDeletePartition.c)
 *     PfSnSetAltPrefetchParam @ 0x140745A74 (PfSnSetAltPrefetchParam.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140745F00 (PfSnTracingStateExWorkerRoutine.c)
 *     PfpCreateEventInternal @ 0x140746AD0 (PfpCreateEventInternal.c)
 *     PfFbBufferListCleanup @ 0x140746CD0 (PfFbBufferListCleanup.c)
 *     PopLoadFileInMemory @ 0x140747724 (PopLoadFileInMemory.c)
 *     PpmIdleAllocateVetoReasons @ 0x1407481E8 (PpmIdleAllocateVetoReasons.c)
 *     PpmIdleRegisterDefaultStates @ 0x1407485F0 (PpmIdleRegisterDefaultStates.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140748780 (PpmInstallCoordinatedIdleStates.c)
 *     PopEvaluatePowerLimitChange @ 0x140749704 (PopEvaluatePowerLimitChange.c)
 *     PopFreePowerLimitRequest @ 0x140749974 (PopFreePowerLimitRequest.c)
 *     PopQueryPowerLimitAttributes @ 0x140749E08 (PopQueryPowerLimitAttributes.c)
 *     PopRegisterTargetDeviceProtection @ 0x140749F74 (PopRegisterTargetDeviceProtection.c)
 *     PoCreateThermalRequest @ 0x14074A0D0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x14074A1E0 (PoDeleteThermalRequest.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14074A804 (PopRegisterCoolingExtensionProtection.c)
 *     PoReenableSleepStates @ 0x14074B060 (PoReenableSleepStates.c)
 *     PoFxRegisterCoreDevice @ 0x14074B900 (PoFxRegisterCoreDevice.c)
 *     PoFxRegisterDevice @ 0x14074BA40 (PoFxRegisterDevice.c)
 *     PoFxRegisterPrimaryDevice @ 0x14074BD20 (PoFxRegisterPrimaryDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14074BEEC (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074BFC8 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxPepPerfInfoFree @ 0x14074C5E4 (PopFxPepPerfInfoFree.c)
 *     PopFxRegisterDevice @ 0x14074CC80 (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14074CF20 (PopFxRegisterDeviceWorker.c)
 *     PopFxVerifyDependencies @ 0x14074D8E4 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14074DBBC (PopPluginQuerySocSubsystemMetadata.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PoUnregisterCoalescingCallback @ 0x14074F1E0 (PoUnregisterCoalescingCallback.c)
 *     PoRegisterForEffectivePowerModeNotifications @ 0x14074F3F0 (PoRegisterForEffectivePowerModeNotifications.c)
 *     PoUnregisterFromEffectivePowerModeNotifications @ 0x14074F520 (PoUnregisterFromEffectivePowerModeNotifications.c)
 *     PopFreeRegistration @ 0x14074F664 (PopFreeRegistration.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14074FBE8 (PopWakeSourceGetDeviceProperty.c)
 *     PopCreateHiberFile @ 0x140750050 (PopCreateHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407505BC (PopCreateHiberFileSecurityDescriptor.c)
 *     PopHiberInitializeResources @ 0x1407507DC (PopHiberInitializeResources.c)
 *     PopInitHiberPersistedRegValues @ 0x140750B4C (PopInitHiberPersistedRegValues.c)
 *     PopInitializeHibernateGlobals @ 0x140750C3C (PopInitializeHibernateGlobals.c)
 *     PopPreallocateHibernateMemory @ 0x140750D6C (PopPreallocateHibernateMemory.c)
 *     PopValidateWinresume @ 0x1407511C8 (PopValidateWinresume.c)
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopThermalHandlePreviousShutdown @ 0x14075265C (PopThermalHandlePreviousShutdown.c)
 *     PopThermalZoneRemove @ 0x140752D30 (PopThermalZoneRemove.c)
 *     NtInitiatePowerAction @ 0x140752F10 (NtInitiatePowerAction.c)
 *     PopDeferDoze @ 0x1407531E8 (PopDeferDoze.c)
 *     PopIsWakeTimerImmanent @ 0x140753378 (PopIsWakeTimerImmanent.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407554EC (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitExtensionValueUpdate @ 0x140755730 (PopDiagTracePowerLimitExtensionValueUpdate.c)
 *     PopDiagTracePowerLimitRequest @ 0x140755880 (PopDiagTracePowerLimitRequest.c)
 *     PopDiagTracePowerLimitRequestValueUpdate @ 0x140755B98 (PopDiagTracePowerLimitRequestValueUpdate.c)
 *     PpmAllocatePerfCheck @ 0x140757260 (PpmAllocatePerfCheck.c)
 *     PopConnectToPolicyDevice @ 0x140758ACC (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceTargetChange @ 0x140759250 (PopPolicyDeviceTargetChange.c)
 *     PpmWmiIdleAccountingWork @ 0x14075B280 (PpmWmiIdleAccountingWork.c)
 *     PopEtBucketsFree @ 0x14075C844 (PopEtBucketsFree.c)
 *     PopEtDeferredInitDxgContext @ 0x14075C860 (PopEtDeferredInitDxgContext.c)
 *     PopEtEnergyTrackerCleanup @ 0x14075C9D4 (PopEtEnergyTrackerCleanup.c)
 *     PopEtEnergyTrackerFindDxgAdapters @ 0x14075CEA8 (PopEtEnergyTrackerFindDxgAdapters.c)
 *     PpmParkFreeParkNodes @ 0x14075D868 (PpmParkFreeParkNodes.c)
 *     PopIdleWakeFreeWakeSourceDiagnostic @ 0x14075DF2C (PopIdleWakeFreeWakeSourceDiagnostic.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14075E214 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopExtendConnectionState @ 0x14075E728 (PopExtendConnectionState.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x140761CB0 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x14076215C (PopAdaptiveStandbyTraceSessionSettings.c)
 *     PopBcdCopyLoaderObjectSettings @ 0x140762C84 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140762F44 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140763154 (PopBcdRegenerateResumeObject.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x140763DAC (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x140764184 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 *     PopDirectedDripsUmTestDeviceFree @ 0x140764500 (PopDirectedDripsUmTestDeviceFree.c)
 *     PopPlInitComponents @ 0x140764C30 (PopPlInitComponents.c)
 *     PopPlInitDevice @ 0x140764D64 (PopPlInitDevice.c)
 *     PopPlInitDevices @ 0x140764E6C (PopPlInitDevices.c)
 *     PopPlInitPowerPlane @ 0x140764FE8 (PopPlInitPowerPlane.c)
 *     PopPlInitWString @ 0x1407650DC (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1407684B0 (TtmNotifyDeviceArrival.c)
 *     TtmiSessionDeviceListWorker @ 0x140768C60 (TtmiSessionDeviceListWorker.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x140769350 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x140769DD0 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiPurgeSessionPowerRequestEntries @ 0x14076A030 (TtmiPurgeSessionPowerRequestEntries.c)
 *     TtmiSetDisplayPowerRequest @ 0x14076A23C (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEventToAllQueues @ 0x14076A56C (TtmiWriteEventToAllQueues.c)
 *     TtmpCleanupPowerRequestsTrackingFromCurrentSession @ 0x14076A704 (TtmpCleanupPowerRequestsTrackingFromCurrentSession.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x14076A858 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmpInsertPowerRequestToSession @ 0x14076AA58 (TtmpInsertPowerRequestToSession.c)
 *     TtmpPowerRequestHashDeallocator @ 0x14076ADB8 (TtmpPowerRequestHashDeallocator.c)
 *     TtmpSetDisplayRequestEnded @ 0x14076B0E4 (TtmpSetDisplayRequestEnded.c)
 *     TtmiRetrieveEventFromQueue @ 0x140770C78 (TtmiRetrieveEventFromQueue.c)
 *     TtmpDeleteQueue @ 0x140770F80 (TtmpDeleteQueue.c)
 *     PsRegisterSyscallProvider @ 0x140771100 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x140771414 (PspDestroySyscallProvider.c)
 *     PspDeleteServerSiloGlobals @ 0x140772C14 (PspDeleteServerSiloGlobals.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140773518 (PspSiloInitializeSystemRootSymlink.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407743C4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PsEstablishWin32Callouts @ 0x140774730 (PsEstablishWin32Callouts.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140774AC0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140774F18 (PspProcessDynamicEHContinuationTargets.c)
 *     NtQueryInformationCpuPartition @ 0x140775EF0 (NtQueryInformationCpuPartition.c)
 *     NtSetInformationCpuPartition @ 0x1407760E0 (NtSetInformationCpuPartition.c)
 *     PspAssignCpuPartitionsToProcess @ 0x140776B84 (PspAssignCpuPartitionsToProcess.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x140776F2C (PspQueryAndCheckCpuPartitionName.c)
 *     PspApplyWorkingSetLimits @ 0x1407776A0 (PspApplyWorkingSetLimits.c)
 *     PsRegisterSiloMonitor @ 0x140779250 (PsRegisterSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407795B0 (PsUnregisterSiloMonitor.c)
 *     PspSetMinimalProcessName @ 0x14077A224 (PspSetMinimalProcessName.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14077A418 (PspSetCreateThreadNotifyRoutine.c)
 *     PspIumVerifyParentSd @ 0x14077A784 (PspIumVerifyParentSd.c)
 *     PsInitializeVsmEnclave @ 0x14077B1DC (PsInitializeVsmEnclave.c)
 *     PsSessionObjectDelete @ 0x14077B8F0 (PsSessionObjectDelete.c)
 *     PspGetNewSessionId @ 0x14077BADC (PspGetNewSessionId.c)
 *     PspSessionObjectCreate @ 0x14077BC7C (PspSessionObjectCreate.c)
 *     NtAlertMultipleThreadByThreadId @ 0x14077C020 (NtAlertMultipleThreadByThreadId.c)
 *     PspQueryThreadIndexInformation @ 0x14077C6EC (PspQueryThreadIndexInformation.c)
 *     RawQueryFileSystemInformation @ 0x14077CBF4 (RawQueryFileSystemInformation.c)
 *     RtlAddResourceAttributeAce @ 0x14077FDD0 (RtlAddResourceAttributeAce.c)
 *     RtlGetAppContainerParent @ 0x140780B50 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407813F0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlCheckBootStatusIntegrity @ 0x140782B14 (RtlCheckBootStatusIntegrity.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1407836F0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140783A04 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140783D34 (RtlpSysVolCreateSecurityDescriptor.c)
 *     LdrpQueryValueKey @ 0x1407840B0 (LdrpQueryValueKey.c)
 *     RtlIdnToUnicode @ 0x1407844D0 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x14078456C (RtlpNameprepAsciiWorker.c)
 *     RtlpCtContextFree @ 0x140786FBC (RtlpCtContextFree.c)
 *     RtlpCtFreeMemory @ 0x14078712C (RtlpCtFreeMemory.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x140787544 (RtlAddDynamicEnforcedAddressRange.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x14078760C (RtlRemoveDynamicEnforcedAddressRange.c)
 *     RtlpGetNormalization @ 0x14078D4E0 (RtlpGetNormalization.c)
 *     Pdcv2ActivationClientRegister @ 0x14078D88C (Pdcv2ActivationClientRegister.c)
 *     PdcTaskClientRegister @ 0x14078DDCC (PdcTaskClientRegister.c)
 *     PdcPortOpenCommon @ 0x14078DE74 (PdcPortOpenCommon.c)
 *     PdcpPortReleaseResources @ 0x14078E000 (PdcpPortReleaseResources.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14078E138 (SeCodeIntegritySetInformationProcess.c)
 *     SepImageVerificationCallbackWorker @ 0x14078E370 (SepImageVerificationCallbackWorker.c)
 *     SepLoadNgenLocations @ 0x14078E5FC (SepLoadNgenLocations.c)
 *     SepSetSystemPaths @ 0x14078E970 (SepSetSystemPaths.c)
 *     SeShutdownServerSilo @ 0x14078EE0C (SeShutdownServerSilo.c)
 *     SepInitializationPhase1 @ 0x14078EEB0 (SepInitializationPhase1.c)
 *     SepLogTokenSidManagement @ 0x14078FD30 (SepLogTokenSidManagement.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1407900F4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140790B40 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140790D28 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140790EAC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140791070 (SeAuditTransactionStateChange.c)
 *     SepAdtGenerateDiscardAudit @ 0x1407912B0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14079159C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B48 (SepAuditAssignPrimaryToken.c)
 *     SepCaptureAuditPolicy @ 0x140791FA0 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x140792058 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x14079228C (SepCaptureOctetStringArray.c)
 *     SepReleaseAuditPolicy @ 0x14079249C (SepReleaseAuditPolicy.c)
 *     NtDeleteObjectAuditAlarm @ 0x1407926E0 (NtDeleteObjectAuditAlarm.c)
 *     SepDereferenceSidValuesBlock @ 0x1407932B0 (SepDereferenceSidValuesBlock.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140793480 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140793540 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x140793A40 (SepNotifyFileSystems.c)
 *     SepRemoveTokenLogonSession @ 0x140793AF8 (SepRemoveTokenLogonSession.c)
 *     SepSecureBootCorrectBcd @ 0x140793ED4 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140794274 (SepSecureBootUpdateBcdDataForRule.c)
 *     SepRmFetchGlobalSacl @ 0x1407946EC (SepRmFetchGlobalSacl.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407948C0 (SepRmGlobalSaclSetWrkr.c)
 *     SepDeReferenceSharedSidEntries @ 0x140794AA0 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140794E00 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepBuildDefaultCap @ 0x140795348 (SepBuildDefaultCap.c)
 *     SepReadAndInsertCaps @ 0x1407953F0 (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x140795748 (SepReadAndPopulateCapes.c)
 *     SepReadSingleCap @ 0x140795E74 (SepReadSingleCap.c)
 *     SepRmDestroyCapTable @ 0x140796324 (SepRmDestroyCapTable.c)
 *     SddlpFreeUuidString @ 0x140796CE8 (SddlpFreeUuidString.c)
 *     SddlpReAlloc @ 0x140796D08 (SddlpReAlloc.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079AD0C (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileGetExtents @ 0x14079B060 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079B2CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B6F8 (SmKmStoreFileWriteHeader.c)
 *     VmpPrefetchForVirtualFault @ 0x14079F57C (VmpPrefetchForVirtualFault.c)
 *     VmpPrefetchWorker @ 0x14079F660 (VmpPrefetchWorker.c)
 *     VmpProcessContextSetup @ 0x14079F700 (VmpProcessContextSetup.c)
 *     PerfDiagpProxyWorker @ 0x1407A0860 (PerfDiagpProxyWorker.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1407A0A84 (PerfDiagpStartPerfDiagLogger.c)
 *     WdipSemFreePool @ 0x1407A2908 (WdipSemFreePool.c)
 *     WdipSemCleanupGroupPolicy @ 0x1407A2A38 (WdipSemCleanupGroupPolicy.c)
 *     IoWMISetSingleInstance @ 0x1407A3C00 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1407A3D30 (IoWMISetSingleItem.c)
 *     IoWMISuggestInstanceName @ 0x1407A3E60 (IoWMISuggestInstanceName.c)
 *     WmipGetSysIds @ 0x1407A46F0 (WmipGetSysIds.c)
 *     WmipQuerySingleMultiple @ 0x1407A5030 (WmipQuerySingleMultiple.c)
 *     WmipGECleanup @ 0x1407A5560 (WmipGECleanup.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407A5BA8 (WmipGenerateBinaryMofNotification.c)
 *     WmipInsertMofResource @ 0x1407A5D5C (WmipInsertMofResource.c)
 *     WmipUpdateModifyGuid @ 0x1407A5FF8 (WmipUpdateModifyGuid.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407A6298 (WmipSaveGuidSecurityDescriptor.c)
 *     EtwDeleteProcessor @ 0x1407A6520 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x1407A671C (EtwInitializeProcessor.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1407A6A88 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407A6DB8 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpAllocatePhysicalPages @ 0x1407A703C (EtwpAllocatePhysicalPages.c)
 *     EtwpAllocatePmcData @ 0x1407A71A4 (EtwpAllocatePmcData.c)
 *     EtwpCleanupSiloState @ 0x1407A722C (EtwpCleanupSiloState.c)
 *     EtwpFreePfnArray @ 0x1407A7F08 (EtwpFreePfnArray.c)
 *     EtwpFreePmcData @ 0x1407A7FB8 (EtwpFreePmcData.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407A85A8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A87D4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407A8AE8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A90A4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1407A932C (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1407A95B0 (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpSetPmcProfileSource @ 0x1407AA228 (EtwpSetPmcProfileSource.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1407AB240 (EtwpCoverageFreeStringBuffers.c)
 *     EtwpCoverageResetCP @ 0x1407AB4F4 (EtwpCoverageResetCP.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1407AB958 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1407ABD74 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1407AC594 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1407AC8F0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     EtwpSendDbgId @ 0x1407AD190 (EtwpSendDbgId.c)
 *     EtwRegisterEventCallback @ 0x1407AD380 (EtwRegisterEventCallback.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1407AD450 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD880 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407ADBA0 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407ADE80 (SendCaptureStateNotificationsWorker.c)
 *     EtwStartAutoLogger @ 0x1407AE248 (EtwStartAutoLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AF2E8 (EtwpEnumerateAutologgerPath.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AF5E4 (EtwpInitializeAutoLoggers.c)
 *     EtwpPreserveLogger @ 0x1407AFE9C (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x1407B00BC (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x1407B01C4 (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1407B087C (EtwpSavePersistedLoggersWorker.c)
 *     EtwpEnumerateWorkingSet @ 0x1407B0EE0 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407B1180 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1407B1434 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1407B1590 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1407B17A8 (EtwpProcessorRundown.c)
 *     EtwpFreeLbrData @ 0x1407B1CE4 (EtwpFreeLbrData.c)
 *     EtwpConstructIptData @ 0x1407B1F88 (EtwpConstructIptData.c)
 *     EtwpDestructIptData @ 0x1407B201C (EtwpDestructIptData.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1407B2C8C (EtwpCovSampStackHashTableAlloc.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1407B4460 (ExEnumerateSystemFirmwareTables.c)
 *     ExGetSystemFirmwareTable @ 0x1407B4550 (ExGetSystemFirmwareTable.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1407B4648 (ExNotifyPlatformBinaryExecuted.c)
 *     ExpGetSystemPlatformBinary @ 0x1407B4710 (ExpGetSystemPlatformBinary.c)
 *     ExpQueryElamCertInfo @ 0x1407B5054 (ExpQueryElamCertInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1407B5438 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1407B5590 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407B57F4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407B5AA0 (ExpRegisterFirmwareTableInformationHandler.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x1407B6800 (ExpParseAndUpdateLeapSecondData.c)
 *     ExpReadLeapSecondData @ 0x1407B68FC (ExpReadLeapSecondData.c)
 *     ExpWatchLicenseInfoWork @ 0x1407B7800 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x1407B7CC0 (NtDisplayString.c)
 *     ExpGenuinePolicyPostProcess @ 0x1407B8DD0 (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductCacheProviderHelper @ 0x1407B94A8 (ExpOsProductCacheProviderHelper.c)
 *     SLGetSubscriptionPfn @ 0x1407B9B58 (SLGetSubscriptionPfn.c)
 *     SLQueryLicenseValueInternal @ 0x1407B9E3C (SLQueryLicenseValueInternal.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 *     SpRegOpenRedirectedKey @ 0x1407BB594 (SpRegOpenRedirectedKey.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1407BB768 (ExStartRecordingIRTimerExpiries.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1407BB8C0 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpConvertArcName @ 0x1407BB954 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1407BBB18 (ExpConvertSignatureName.c)
 *     ExpCreateOutputARC @ 0x1407BBD5C (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BBE54 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1407BC01C (ExpFindArcName.c)
 *     ExpParseSignatureName @ 0x1407BC480 (ExpParseSignatureName.c)
 *     ExpSetBootEntry @ 0x1407BC77C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCE74 (ExpSetDriverEntry.c)
 *     ExpTranslateNtPath @ 0x1407BD944 (ExpTranslateNtPath.c)
 *     NtEnumerateDriverEntries @ 0x1407BE020 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BEA00 (NtQuerySystemEnvironmentValue.c)
 *     NtSetDriverEntryOrder @ 0x1407BEEE0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407BF0A0 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407BF3E0 (NtSetSystemEnvironmentValueEx.c)
 *     ExpNtDeleteWnfStateData @ 0x1407BFBF8 (ExpNtDeleteWnfStateData.c)
 *     ExpPartitionDestroy @ 0x1407C00FC (ExpPartitionDestroy.c)
 *     ExpDereferenceHost @ 0x1407C0E30 (ExpDereferenceHost.c)
 *     ExSvmUpdateThreadPasidMsrApc @ 0x1407C0F10 (ExSvmUpdateThreadPasidMsrApc.c)
 *     NtSetUuidSeed @ 0x1407C1270 (NtSetUuidSeed.c)
 *     ExpProfileDelete @ 0x1407C1F80 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1407C2260 (NtStartProfile.c)
 *     NtStopProfile @ 0x1407C2560 (NtStopProfile.c)
 *     CMFCheckAccess @ 0x1407C2854 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C2AB0 (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1407C30E0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C3A10 (CMFSystemThreadRoutine.c)
 *     CMFUnmapModules @ 0x1407C4030 (CMFUnmapModules.c)
 *     NtMapCMFModule @ 0x1407C42B0 (NtMapCMFModule.c)
 *     ExpKdPullRemoteFileForUser @ 0x1407C4C90 (ExpKdPullRemoteFileForUser.c)
 *     ExpQuerySystemMemoryNumaPerformanceInformation @ 0x1407C5FDC (ExpQuerySystemMemoryNumaPerformanceInformation.c)
 *     ExpWnfDestroyPermanentDataStore @ 0x1407C688C (ExpWnfDestroyPermanentDataStore.c)
 *     WheaAddErrorSource @ 0x1407C6DE0 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x1407C7080 (WheaRemoveErrorSource.c)
 *     WheaAddErrorSourceDeviceDriver @ 0x1407C7280 (WheaAddErrorSourceDeviceDriver.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x1407C7470 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheaPageOfflineAndPersist @ 0x1407C79A4 (WheaPageOfflineAndPersist.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1407C7CA0 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapLogInitEvent @ 0x1407C8808 (WheapLogInitEvent.c)
 *     WheapReportDeferredLiveDumps @ 0x1407C8CE0 (WheapReportDeferredLiveDumps.c)
 *     WheapExecuteRowFailureCheck @ 0x1407C93D8 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaMemoryCheck @ 0x1407C9714 (WheapPfaMemoryCheck.c)
 *     WheapPfaReset @ 0x1407C98F4 (WheapPfaReset.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1407C99DC (WheapPfaRetireExpiredMemoryEntries.c)
 *     ApiSetpConstructPathToExtension @ 0x1407C9E00 (ApiSetpConstructPathToExtension.c)
 *     ApiSetpLoadSchemaExtension @ 0x1407C9EBC (ApiSetpLoadSchemaExtension.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmpSaveKeyByFileCopy @ 0x1407CF4D0 (CmpSaveKeyByFileCopy.c)
 *     NtReplaceKey @ 0x1407D0E80 (NtReplaceKey.c)
 *     CmUnRegisterCallback @ 0x1407D1A20 (CmUnRegisterCallback.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x1407D21F0 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpQuotaWarningWorker @ 0x1407D2870 (CmpQuotaWarningWorker.c)
 *     CmpSystemHiveHysteresisWorker @ 0x1407D28D0 (CmpSystemHiveHysteresisWorker.c)
 *     CmDeleteKeyRecursive @ 0x1407D2908 (CmDeleteKeyRecursive.c)
 *     CmSetAcpiHwProfile @ 0x1407D2A94 (CmSetAcpiHwProfile.c)
 *     CmpCloneHwProfile @ 0x1407D354C (CmpCloneHwProfile.c)
 *     CmpFilterAcpiDockingState @ 0x1407D402C (CmpFilterAcpiDockingState.c)
 *     CmpGetAcpiProfileInformation @ 0x1407D428C (CmpGetAcpiProfileInformation.c)
 *     CmInitializeProcessor @ 0x1407D50BC (CmInitializeProcessor.c)
 *     CmpFreeAllMemory @ 0x1407D56E0 (CmpFreeAllMemory.c)
 *     CmpCmdInit @ 0x1407D5C78 (CmpCmdInit.c)
 *     CmpCmdRenameHive @ 0x1407D5E20 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarningWorker @ 0x1407D5F70 (CmpDiskFullWarningWorker.c)
 *     CmpLoadLayerVersions @ 0x1407D74E4 (CmpLoadLayerVersions.c)
 *     CmpLoadSystemVersionData @ 0x1407D76DC (CmpLoadSystemVersionData.c)
 *     CmpSetVersionData @ 0x1407D7E74 (CmpSetVersionData.c)
 *     CmpCreateRegistryProcessToken @ 0x1407D858C (CmpCreateRegistryProcessToken.c)
 *     CmpVolumeContextStart @ 0x1407D8F10 (CmpVolumeContextStart.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpRecordUnloadEventForHive @ 0x1407DAD3C (CmpRecordUnloadEventForHive.c)
 *     CmpBuildVirtualReplicationStack @ 0x1407DB860 (CmpBuildVirtualReplicationStack.c)
 *     CmpReplicateKeyToVirtual @ 0x1407DC15C (CmpReplicateKeyToVirtual.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DC538 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpFreeOffsetArray @ 0x1407DCBA0 (CmpFreeOffsetArray.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DD50C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD764 (CmpHiveRootSecurityDescriptor.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407DDDB8 (CmpReportAuditVirtualizationEvent.c)
 *     CmpCreateEmptyHiveClone @ 0x1407DEA60 (CmpCreateEmptyHiveClone.c)
 *     CmpInitializeRegistryNode @ 0x1407DEF9C (CmpInitializeRegistryNode.c)
 *     CmpRmAnalysisPhase @ 0x1407E0CE8 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1407E10E8 (CmpRmUnDoPhase.c)
 *     CmpPreserveSystemHiveData @ 0x1407E26F8 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x1407E39A0 (CmpGetValueForAudit.c)
 *     CmpValueToData @ 0x1407E3B14 (CmpValueToData.c)
 *     HvAllocateOffsetArraysForHiveSnapshot @ 0x1407E3C04 (HvAllocateOffsetArraysForHiveSnapshot.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1407E4BAC (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407E696C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407E6BF0 (CmpDeleteCorruptedLogfile.c)
 *     MmFreeBootRegistry @ 0x1407E782C (MmFreeBootRegistry.c)
 *     MiFormDllRegistryPath @ 0x1407E7A18 (MiFormDllRegistryPath.c)
 *     MiFormFullImageName @ 0x1407E7BA0 (MiFormFullImageName.c)
 *     MiIssueDllInitializeCall @ 0x1407E7C54 (MiIssueDllInitializeCall.c)
 *     MmDeleteProcessor @ 0x1407E8724 (MmDeleteProcessor.c)
 *     MiCreateNodeLists @ 0x1407E9860 (MiCreateNodeLists.c)
 *     MiExtendMemoryBlocks @ 0x1407E9A94 (MiExtendMemoryBlocks.c)
 *     MmAllocateNonCachedMemory @ 0x1407EB1A0 (MmAllocateNonCachedMemory.c)
 *     MiAddRun @ 0x1407EB344 (MiAddRun.c)
 *     MmAllocateMemoryRanges @ 0x1407EB700 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x1407EB9E0 (MmQueryMemoryRanges.c)
 *     MiRemoveMdlPages @ 0x1407EBBA8 (MiRemoveMdlPages.c)
 *     MiLdwPopupWorker @ 0x1407EC930 (MiLdwPopupWorker.c)
 *     MiDeletePartition @ 0x1407ECBFC (MiDeletePartition.c)
 *     MmEnumerateBadPages @ 0x1407ED768 (MmEnumerateBadPages.c)
 *     MmSetPermanentCacheAttribute @ 0x1407EDA30 (MmSetPermanentCacheAttribute.c)
 *     MiFreeRotateView @ 0x1407EE00C (MiFreeRotateView.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     MiDeletePagefile @ 0x1407EF4C8 (MiDeletePagefile.c)
 *     MiAllocateEntireImageFileExtents @ 0x1407F021C (MiAllocateEntireImageFileExtents.c)
 *     MiComputeIdealFirstSubsection @ 0x1407F044C (MiComputeIdealFirstSubsection.c)
 *     MiDeleteFileExtentList @ 0x1407F08AC (MiDeleteFileExtentList.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407F0E80 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiCaptureHotPatchInfo @ 0x1407F28D8 (MiCaptureHotPatchInfo.c)
 *     MiDeleteHotPatchEntry @ 0x1407F2B20 (MiDeleteHotPatchEntry.c)
 *     MiGetAllRegisteredPatches @ 0x1407F2DDC (MiGetAllRegisteredPatches.c)
 *     MiGetProcessHotPatchContext @ 0x1407F30A8 (MiGetProcessHotPatchContext.c)
 *     MiInsertHotPatchRecord @ 0x1407F3934 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1407F3BEC (MiInsertSecureImageActivePatch.c)
 *     MiLogHotPatchRundown @ 0x1407F4BB8 (MiLogHotPatchRundown.c)
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 *     MiProcessPatchImageCfg @ 0x1407F63AC (MiProcessPatchImageCfg.c)
 *     MmRemoveSecureImageActivePatch @ 0x1407F6A1C (MmRemoveSecureImageActivePatch.c)
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     MiDereferenceEnclaveModule @ 0x1407F7DC4 (MiDereferenceEnclaveModule.c)
 *     NtCreateEnclave @ 0x1407F80D0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407F84C0 (NtInitializeEnclave.c)
 *     MmLogSystemShareablePfnInfo @ 0x1407F8804 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1407F9B80 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweBitMap @ 0x1407F9DB8 (MiDeleteAweBitMap.c)
 *     MiDeleteAweInfo @ 0x1407F9E08 (MiDeleteAweInfo.c)
 *     NtMapUserPhysicalPages @ 0x1407FA870 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FAB20 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeletePartitionSlabState @ 0x1407FBCD0 (MiDeletePartitionSlabState.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 *     MiExpandPartitionIds @ 0x1407FC698 (MiExpandPartitionIds.c)
 *     MiMakePartitionMemoryBlock @ 0x1407FCD8C (MiMakePartitionMemoryBlock.c)
 *     MmCreatePartition @ 0x1407FD07C (MmCreatePartition.c)
 *     MmManagePartitionCharges @ 0x1407FD1EC (MmManagePartitionCharges.c)
 *     MmManagePartitionNodeInformation @ 0x1407FD8D0 (MmManagePartitionNodeInformation.c)
 *     MmStoreRegister @ 0x1407FDB18 (MmStoreRegister.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x1407FDF38 (MiReferenceNonPagedMemoryProcessList.c)
 *     MiReleaseScrubPacket @ 0x1407FE164 (MiReleaseScrubPacket.c)
 *     MmScrubMemory @ 0x1407FE3E0 (MmScrubMemory.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x1407FE884 (MiCreateSpecialPurposeMemoryPageFile.c)
 *     MiDeletePageFileMemoryExtents @ 0x1407FE938 (MiDeletePageFileMemoryExtents.c)
 *     MiDeleteSpecialPurposeMemory @ 0x1407FE96C (MiDeleteSpecialPurposeMemory.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FEB44 (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x1407FF008 (MiQuerySpecialPurposeMemoryInformation.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407FF418 (MiSpecialPurposeMemoryRemoved.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407FF7B4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiCreatePerNodeZeroingConductor @ 0x1407FF8C0 (MiCreatePerNodeZeroingConductor.c)
 *     MiCreateZeroThreadContext @ 0x1407FF9F4 (MiCreateZeroThreadContext.c)
 *     MiMakeSpaceForConductorListZeroThread @ 0x1407FFE14 (MiMakeSpaceForConductorListZeroThread.c)
 *     MiCreateMemoryEventSD @ 0x140800380 (MiCreateMemoryEventSD.c)
 *     MiInitializeMemoryEvents @ 0x14080067C (MiInitializeMemoryEvents.c)
 *     MiAcceptNewAccelerators @ 0x1408007A4 (MiAcceptNewAccelerators.c)
 *     MiDeletePartialCloneVads @ 0x140800B24 (MiDeletePartialCloneVads.c)
 *     UcpApcNormalRoutine @ 0x140800F80 (UcpApcNormalRoutine.c)
 *     SdbpFreeAppAttributes @ 0x140804CBC (SdbpFreeAppAttributes.c)
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14080ADDC (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x14080BAF4 (AslpPathWildcardFreeFindContext.c)
 *     AdtpBuildGuidString @ 0x140810FB8 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1408110E0 (AdtpBuildHexInt64String.c)
 *     AdtpBuildMacStrings @ 0x1408111A4 (AdtpBuildMacStrings.c)
 *     AdtpBuildRegistryValueString @ 0x14081125C (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSidListString @ 0x140811508 (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x140811740 (AdtpAppendString.c)
 *     AdtpObjsInitialize @ 0x140811BF8 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140812120 (AdtpInitializeDriveLetters.c)
 *     BiMarkTreatAsSystemStore @ 0x140812590 (BiMarkTreatAsSystemStore.c)
 *     BcdEnumerateObjects @ 0x14081265C (BcdEnumerateObjects.c)
 *     BiResolveLocateDevice @ 0x140812B7C (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140812F0C (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x140813750 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408138E0 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x1408139E0 (BiCreateFileDeviceElement.c)
 *     BiCreatePartitionDevice @ 0x140813B8C (BiCreatePartitionDevice.c)
 *     BiGetDriveLayoutBlock @ 0x140814208 (BiGetDriveLayoutBlock.c)
 *     BiGetNtPartitionPath @ 0x1408142E8 (BiGetNtPartitionPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140814878 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x140814AA8 (BiTranslateSymbolicLinkFile.c)
 *     BiVerifyBootPartition @ 0x140814C10 (BiVerifyBootPartition.c)
 *     BiIsPortableWorkspaceBoot @ 0x140814FEC (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140815104 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140815254 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiCreateBootEntry @ 0x14081533C (BiCreateBootEntry.c)
 *     BiCreateEfiEntry @ 0x1408156F0 (BiCreateEfiEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140815B34 (BiHandleFirmwareDefaultEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140815D18 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x140815EFC (BiUpdateBcdObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140816288 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SyspartGetPhysicalPartitions @ 0x140816418 (SyspartGetPhysicalPartitions.c)
 *     SyspartIsSpace @ 0x140816518 (SyspartIsSpace.c)
 *     SiFindSystemPartition @ 0x140816574 (SiFindSystemPartition.c)
 *     SiGetDriveLayoutInformation @ 0x140816754 (SiGetDriveLayoutInformation.c)
 *     SiBootEntryGetNtFilePath @ 0x1408168FC (SiBootEntryGetNtFilePath.c)
 *     SiDisambiguateSystemDevice @ 0x1408169BC (SiDisambiguateSystemDevice.c)
 *     SiGetEfiSystemDevice @ 0x140816A88 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140816EE0 (SiGetEspFromFirmware.c)
 *     SiGetBiosSystemDisk @ 0x1408173B0 (SiGetBiosSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x1408174E0 (SiGetBiosSystemPartition.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140817628 (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     _PnpCtxCloseMachine @ 0x140817930 (_PnpCtxCloseMachine.c)
 *     _PnpCtxDestroyNode @ 0x140817B70 (_PnpCtxDestroyNode.c)
 *     _PnpCtxOpenMachine @ 0x140817DD0 (_PnpCtxOpenMachine.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140818718 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140818C3C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x140818ED8 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x1408192B0 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140819658 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140819F7C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x14081A19C (_CmDeleteDeviceContainerWorker.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x14081A4A8 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14081A88C (_CmGetDevicesInBaseContainerList.c)
 *     _CmMoveBaseContainer @ 0x14081AC7C (_CmMoveBaseContainer.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B760 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14081BC70 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14081C0AC (_CmGetMatchingCommonClassListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14081C3C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmServiceFilterCallback @ 0x14081C5C0 (_CmServiceFilterCallback.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14081D374 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x14081D60C (_CmDeleteDevicePanelWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14081D7D0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14081DEB0 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14081E5C4 (_CmAppendDeclarativeFilterLevel.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14081EF50 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _SysCtxCloseMachine @ 0x140820890 (_SysCtxCloseMachine.c)
 *     _SysCtxOpenMachine @ 0x140820B44 (_SysCtxOpenMachine.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140820DEC (_PnpGetEnumSecurityDescriptor.c)
 *     _RegRtlCopyTreeInternal @ 0x1408212E0 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlQueryKeyPathName @ 0x1408218F8 (_RegRtlQueryKeyPathName.c)
 *     DrvDbDeleteObjectSubKey @ 0x140821D0C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140823668 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbOpenContext @ 0x140823D90 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140824140 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140824478 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14082452C (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140824610 (DrvDbGetSecurityDescriptor.c)
 *     DestroyAggregateSession @ 0x140824F48 (DestroyAggregateSession.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x140825FE8 (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     MinCryptParseRevocationList @ 0x140826290 (MinCryptParseRevocationList.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 *     I_MincryptFreeChainInfo @ 0x1408280AC (I_MincryptFreeChainInfo.c)
 *     MincryptFree @ 0x140829170 (MincryptFree.c)
 *     AhcCacheQueryHwId @ 0x14082976C (AhcCacheQueryHwId.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140829C2C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140829F14 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14082A254 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VhdVerifyBootDisk @ 0x14082A54C (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x14082A898 (VhdiMountVhdFile.c)
 *     NtEnableLastKnownGood @ 0x14082B050 (NtEnableLastKnownGood.c)
 *     ObpGetSilosRootDirectory @ 0x14082B8D0 (ObpGetSilosRootDirectory.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14082BC48 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLoadLanguageConfigList @ 0x14082BE20 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x14082BF64 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14082C3D8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x14082C7E4 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14082CCEC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14082D5A0 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegResizeStringPool @ 0x14082D810 (RtlpMuiRegResizeStringPool.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14082EEA4 (_RtlpMuiRegValidateInstalled.c)
 *     LkmdTelpFreeMem @ 0x140830114 (LkmdTelpFreeMem.c)
 *     HashpHashMemory @ 0x140830304 (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x1408305C0 (HashpVerifyPkcs1Signature.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140830F98 (CmpSetSecurityDescriptorInfo.c)
 *     EtwpReleaseQueueEntry @ 0x140831B1C (EtwpReleaseQueueEntry.c)
 *     EtwpUpdateDisallowedGuids @ 0x140831C00 (EtwpUpdateDisallowedGuids.c)
 *     ExpWnfLookupPermanentName @ 0x140833714 (ExpWnfLookupPermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x140833F7C (ExpWnfRegisterPermanentName.c)
 *     NtCreateWnfStateName @ 0x1408340B0 (NtCreateWnfStateName.c)
 *     EtwpAddDataSource @ 0x140834E58 (EtwpAddDataSource.c)
 *     EtwpFreeFilterInfo @ 0x140834F58 (EtwpFreeFilterInfo.c)
 *     ExpWnfPopulateStateData @ 0x140835B5C (ExpWnfPopulateStateData.c)
 *     ExpWnfCreateNameInstance @ 0x140835DA0 (ExpWnfCreateNameInstance.c)
 *     EtwpReceiveNotification @ 0x14083641C (EtwpReceiveNotification.c)
 *     EtwpUnreferenceDataBlock @ 0x140836678 (EtwpUnreferenceDataBlock.c)
 *     EtwpCheckGuidAccess @ 0x140836754 (EtwpCheckGuidAccess.c)
 *     EtwpAllocGuidEntry @ 0x140836A58 (EtwpAllocGuidEntry.c)
 *     ObLogSecurityDescriptor @ 0x140836B60 (ObLogSecurityDescriptor.c)
 *     EtwpAccessCheckFromState @ 0x140836E70 (EtwpAccessCheckFromState.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1408370F0 (EtwpGetGuidSecurityDescriptor.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140837CFC (EtwpReleaseProviderTraitsReference.c)
 *     EtwpRundownNotifications @ 0x140837D94 (EtwpRundownNotifications.c)
 *     EtwpDeleteRegistrationObject @ 0x1408389E0 (EtwpDeleteRegistrationObject.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083A3C0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     ObpFreeObjectNameBuffer @ 0x14083AD40 (ObpFreeObjectNameBuffer.c)
 *     EtwpFreeGuidEntry @ 0x14083ADD4 (EtwpFreeGuidEntry.c)
 *     NtCreateMutant @ 0x14083AEC0 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x14083B1F0 (NtCreateWaitCompletionPacket.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     PfpRpFileKeyUpdate @ 0x14083FEE0 (PfpRpFileKeyUpdate.c)
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     ObpFreeObject @ 0x140842C80 (ObpFreeObject.c)
 *     ObDeassignSecurity @ 0x140843480 (ObDeassignSecurity.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     VrpRegistryCallback @ 0x1408454F0 (VrpRegistryCallback.c)
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     EtwpTraceHandle @ 0x140848E7C (EtwpTraceHandle.c)
 *     ExpFreeTablePagedPool @ 0x1408497A4 (ExpFreeTablePagedPool.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084987C (SepAdtCloseObjectAuditAlarm.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14084C800 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x14084DE00 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpGetObjectSecurity @ 0x14084FB10 (ObpGetObjectSecurity.c)
 *     NtOpenThreadTokenEx @ 0x140851680 (NtOpenThreadTokenEx.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x140854270 (ObpAssignSecurity.c)
 *     SeDefaultObjectMethod @ 0x140854470 (SeDefaultObjectMethod.c)
 *     ObSetSecurityDescriptorInfo @ 0x140854B90 (ObSetSecurityDescriptorInfo.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     PsReturnSharedPoolQuota @ 0x140856970 (PsReturnSharedPoolQuota.c)
 *     RtlpFreeAtom @ 0x140856F58 (RtlpFreeAtom.c)
 *     PiUEventProcessEventWorker @ 0x140856F90 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1408570E0 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x140857350 (PiUEventHandleGetEvent.c)
 *     PiUEventFreeEventEntry @ 0x1408579CC (PiUEventFreeEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140857EAC (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1408581CC (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventInitClientRegistrationContext @ 0x14085835C (PiUEventInitClientRegistrationContext.c)
 *     BiCreateKeySecurityDescriptor @ 0x140858674 (BiCreateKeySecurityDescriptor.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1408590B8 (ExpGetSystemFirmwareTableInformation.c)
 *     BiGetRegistryValue @ 0x140859338 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     BiGetObjectDescription @ 0x1408597FC (BiGetObjectDescription.c)
 *     BiCreateKey @ 0x1408598CC (BiCreateKey.c)
 *     BiIsSystemStore @ 0x14085A030 (BiIsSystemStore.c)
 *     BiIsSystemStoreCandidate @ 0x14085A0B8 (BiIsSystemStoreCandidate.c)
 *     PspJobClose @ 0x14085AC90 (PspJobClose.c)
 *     PspQueryRateControlHistory @ 0x14085DB0C (PspQueryRateControlHistory.c)
 *     ExProcessCounterSetCallback @ 0x14085F3F0 (ExProcessCounterSetCallback.c)
 *     EtwpLogMemInfoWs @ 0x140860034 (EtwpLogMemInfoWs.c)
 *     EtwpPerfMemInfoWork @ 0x140860B50 (EtwpPerfMemInfoWork.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140861BC0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x140861FFC (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x140862250 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140862A14 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140863120 (SepAdtStagingEvent.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14086395C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     AlpcpConnectPort @ 0x140868BB0 (AlpcpConnectPort.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     ObpSetObjectAuditInfo @ 0x14086B968 (ObpSetObjectAuditInfo.c)
 *     ObReleaseObjectSecurityEx @ 0x14086C2C0 (ObReleaseObjectSecurityEx.c)
 *     ObpCheckObjectReference @ 0x14086C31C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x14086C5E0 (ObCheckCreateObjectAccess.c)
 *     CmpFlushNotify @ 0x14086C98C (CmpFlushNotify.c)
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmpFreePostBlock @ 0x14086EA70 (CmpFreePostBlock.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmpRollbackTransactionArray @ 0x140870518 (CmpRollbackTransactionArray.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1408705E0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140874810 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDecommisssionKcb @ 0x140875040 (CmpDecommisssionKcb.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpVEExecuteOpenLogic @ 0x1408788D0 (CmpVEExecuteOpenLogic.c)
 *     CmpQueryKeyValueData @ 0x14087A180 (CmpQueryKeyValueData.c)
 *     CmpGetValueData @ 0x14087A8E0 (CmpGetValueData.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14087D418 (CmpTransSearchAddLightWeightTrans.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14087E1BC (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     CmpTransSearchAddTrans @ 0x14087E39C (CmpTransSearchAddTrans.c)
 *     ObCheckObjectAccess @ 0x14087E5F0 (ObCheckObjectAccess.c)
 *     CmpRundownUnitOfWork @ 0x14087EED4 (CmpRundownUnitOfWork.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmpDoWritethroughReparse @ 0x14087F420 (CmpDoWritethroughReparse.c)
 *     CmpCleanUpSubKeyInfo @ 0x140880020 (CmpCleanUpSubKeyInfo.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFree @ 0x140882B20 (CmpFree.c)
 *     CmpCopyValue @ 0x140885564 (CmpCopyValue.c)
 *     CmpCopySyncTree2 @ 0x1408877A4 (CmpCopySyncTree2.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14088BDFC (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14088BFA8 (SepCaptureTokenSecurityAttributesInformation.c)
 *     PnpCheckDeviceIdsChanged @ 0x14088C928 (PnpCheckDeviceIdsChanged.c)
 *     SepCaptureInt64Array @ 0x14088CB74 (SepCaptureInt64Array.c)
 *     NtQuerySecurityAttributesToken @ 0x14088CC70 (NtQuerySecurityAttributesToken.c)
 *     SepCaptureUnicodeStringArray @ 0x14088CF60 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x14088D200 (SeCaptureUnicodeStringStructures.c)
 *     SepReleaseUnicodeStringArray @ 0x14088D350 (SepReleaseUnicodeStringArray.c)
 *     NtQuerySecurityPolicy @ 0x14088D400 (NtQuerySecurityPolicy.c)
 *     NtSetCachedSigningLevel2 @ 0x14088D710 (NtSetCachedSigningLevel2.c)
 *     SeExamineSacl @ 0x14088DA20 (SeExamineSacl.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088DEB0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     NtSecureConnectPort @ 0x140890D60 (NtSecureConnectPort.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140892140 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x14089385C (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCaptureMessageData @ 0x1408942E0 (AlpcpCaptureMessageData.c)
 *     AlpcpAllocateMessageFunction @ 0x140894520 (AlpcpAllocateMessageFunction.c)
 *     AlpcAddHandleTableEntry @ 0x140894EE0 (AlpcAddHandleTableEntry.c)
 *     MiRemoveSharedCommitNode @ 0x140895560 (MiRemoveSharedCommitNode.c)
 *     AlpcpFreeMessageFunction @ 0x140896B30 (AlpcpFreeMessageFunction.c)
 *     AlpcMessageDestroyProcedure @ 0x140897C10 (AlpcMessageDestroyProcedure.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14089BA70 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     ObpDeleteNameCheck @ 0x1408A3D30 (ObpDeleteNameCheck.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 *     ObpCaptureObjectName @ 0x1408A5650 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopCheckBackupRestorePrivilege @ 0x1408AA2E0 (IopCheckBackupRestorePrivilege.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408AAD60 (FsRtlFreeExtraCreateParameterList.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408AAEC0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1408AB168 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkUpdateECP @ 0x1408ABA8C (IopSymlinkUpdateECP.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     AstLogDeviceCreated @ 0x1408AC7C4 (AstLogDeviceCreated.c)
 *     IopSymlinkRememberJunction @ 0x1408ACA10 (IopSymlinkRememberJunction.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1408ACFB0 (ExAllocateCacheAwareRundownProtection.c)
 *     RawCleanupVcb @ 0x1408AE3C4 (RawCleanupVcb.c)
 *     AstLogDeviceSDDLUpdated @ 0x1408AE644 (AstLogDeviceSDDLUpdated.c)
 *     CmpCheckExeOwnerForPca @ 0x1408AE8F4 (CmpCheckExeOwnerForPca.c)
 *     PiSwIrpInterfaceSetState @ 0x1408AF56C (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x1408AF734 (PiSwIrpPropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x1408AF964 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceInterfaceSetState @ 0x1408AFBA4 (PiSwDeviceInterfaceSetState.c)
 *     IopDoDeferredSetInterfaceState @ 0x1408AFDC4 (IopDoDeferredSetInterfaceState.c)
 *     PiSwIrpInterfaceRegister @ 0x1408AFE78 (PiSwIrpInterfaceRegister.c)
 *     PipCheckForDenyExecute @ 0x1408B02F4 (PipCheckForDenyExecute.c)
 *     IoRegisterDeviceInterface @ 0x1408B0410 (IoRegisterDeviceInterface.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B079C (PnpQueueQueryAndRemoveEvent.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1408B1BC4 (IopProcessSetInterfaceState.c)
 *     ConstraintEval @ 0x1408B2790 (ConstraintEval.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1408B2F30 (IopBuildGlobalSymbolicLinkString.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1408B31B0 (PiCMGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1408B3FA8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B4E80 (PnpUnicodeStringToWstrFree.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1408B5110 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PiSwIrpInterfacePropertySet @ 0x1408B69EC (PiSwIrpInterfacePropertySet.c)
 *     PipEnumerateCompleted @ 0x1408B6C08 (PipEnumerateCompleted.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408B7B08 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1408B8C20 (PiDmCacheDataFree.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1408B8C6C (PiDmObjectUpdateCachedObjectProperty.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1408BA9AC (PiGetDeviceRegProperty.c)
 *     PiControlGetPropertyData @ 0x1408BAE00 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1408BB1F0 (PiControlGetRelatedDevice.c)
 *     PiCMGetObjectList @ 0x1408BB9D0 (PiCMGetObjectList.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1408BC0A0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCaptureObjectInputData @ 0x1408BC4E0 (PiCMCaptureObjectInputData.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 *     BuildQueryDirectoryIrp @ 0x1408C22B0 (BuildQueryDirectoryIrp.c)
 *     PiCMCapturePropertyInputData @ 0x1408C2BE0 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C3160 (PiCMCaptureRegistryPropertyInputData.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C3F80 (_PnpRegQueryValueIndirect.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C4460 (_CmOpenDeviceRegKeyWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C5740 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C5920 (_PnpGetGenericStoreProperty.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C679C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408C7D90 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408C88C8 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiDqQueryEvaluateFilter @ 0x1408C9830 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD070 (PiDmListEnumObjectsWithCallback.c)
 *     NtPlugPlayControl @ 0x1408CD400 (NtPlugPlayControl.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD650 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408CDB40 (PiControlMakeUserModeCallersCopy.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408CE4D0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CED40 (PiControlGetSetDeviceStatus.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1408CF120 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5E0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1408CFD00 (PiUEventNotifyTargetDeviceChange.c)
 *     PiPnpRtlObjectEventRelease @ 0x1408D042C (PiPnpRtlObjectEventRelease.c)
 *     PiDqQuerySerializeActionQueue @ 0x1408D04C0 (PiDqQuerySerializeActionQueue.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D07C0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1408D1324 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x1408D161C (PiDqActionDataFree.c)
 *     PnpAllocatePWSTR @ 0x1408D1794 (PnpAllocatePWSTR.c)
 *     PnpFreeDevPropertyArray @ 0x1408D192C (PnpFreeDevPropertyArray.c)
 *     PiDqQueryRelease @ 0x1408D19A0 (PiDqQueryRelease.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D1D9C (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D24E0 (PiDqPnPGetObjectProperty.c)
 *     EtwTiLogProtectExecVm @ 0x1408DB660 (EtwTiLogProtectExecVm.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiCreatePlaceholderStorage @ 0x1408DC630 (MiCreatePlaceholderStorage.c)
 *     MiAllocateVad @ 0x1408DC6F8 (MiAllocateVad.c)
 *     MiCreateVadEventBitmap @ 0x1408DC8AC (MiCreateVadEventBitmap.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408E0590 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1408E1294 (PiDqGetRelativeObjectRegPath.c)
 *     PiDqOpenUserObjectRegKey @ 0x1408E1780 (PiDqOpenUserObjectRegKey.c)
 *     PnpConcatPWSTR @ 0x1408E1D40 (PnpConcatPWSTR.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408E2B94 (CmpVEExecuteRealStoreParseLogic.c)
 *     ObpParseSymbolicLinkEx @ 0x1408E3460 (ObpParseSymbolicLinkEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408E6CE0 (SepAppendAceToTokenObjectAcl.c)
 *     SeCopyClientToken @ 0x1408E7698 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     SeTokenCanImpersonate @ 0x1408E8180 (SeTokenCanImpersonate.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     EtwpTraceProcessRundown @ 0x1408EF628 (EtwpTraceProcessRundown.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x1408F0230 (EtwpQueryProcessCommandLine.c)
 *     EtwTraceAppStateChange @ 0x1408F057C (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1408F11B4 (EtwTraceProcess.c)
 *     EtwpPsProvTraceProcess @ 0x1408F1570 (EtwpPsProvTraceProcess.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     SepAdtTokenRightAdjusted @ 0x1408F2A90 (SepAdtTokenRightAdjusted.c)
 *     DbgkpQueueMessage @ 0x1408F3750 (DbgkpQueueMessage.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1408F3AA4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 *     PfpPfnPrioRequest @ 0x1408F5FDC (PfpPfnPrioRequest.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1408F61E0 (PfpCopyUserPfnPrioRequest.c)
 *     ExpPartitionCreatePoolInternal @ 0x1408F7C7C (ExpPartitionCreatePoolInternal.c)
 *     NtGetMUIRegistryInfo @ 0x1408F7D70 (NtGetMUIRegistryInfo.c)
 *     MUIInitializeResourceLock @ 0x1408F80F8 (MUIInitializeResourceLock.c)
 *     IoCreateSystemThread @ 0x1408F8300 (IoCreateSystemThread.c)
 *     IopStartApcHardError @ 0x1408F8420 (IopStartApcHardError.c)
 *     ExpWorkQueueManagerThread @ 0x1408F84F0 (ExpWorkQueueManagerThread.c)
 *     PspDeleteCreateProcessContext @ 0x1408FAD80 (PspDeleteCreateProcessContext.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408FCA64 (PspRecheckThreadOptionalXStateFeatures.c)
 *     SeAuditProcessCreation @ 0x1408FD624 (SeAuditProcessCreation.c)
 *     KeRundownApcQueues @ 0x1408FDCCC (KeRundownApcQueues.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     PspThreadIndexCleanup @ 0x1408FE880 (PspThreadIndexCleanup.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 *     EtwExitProcess @ 0x1408FF6D4 (EtwExitProcess.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     ExpWnfDeleteProcessContext @ 0x1409002F0 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1409005A8 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x140900948 (ExpWnfDeleteNameInstance.c)
 *     NtDeleteWnfStateName @ 0x140900ED0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1409032C0 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfWriteStateData @ 0x1409037E0 (ExpWnfWriteStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140904A84 (ExpWnfCheckCrossScopeAccess.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14090789C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x14090FEF0 (RtlpCombineAcls.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     NtSetSecurityObject @ 0x1409118E0 (NtSetSecurityObject.c)
 *     NtOpenObjectAuditAlarm @ 0x140911F00 (NtOpenObjectAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x140912BA0 (SepProbeAndCaptureString_U.c)
 *     SeReleaseSecurityDescriptor @ 0x140912CC0 (SeReleaseSecurityDescriptor.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140912CF0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1409134B0 (NtPrivilegedServiceAuditAlarm.c)
 *     SepQueryTypeString @ 0x140913780 (SepQueryTypeString.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140913820 (NtPrivilegeObjectAuditAlarm.c)
 *     SepSetTokenCachedHandles @ 0x140913AE0 (SepSetTokenCachedHandles.c)
 *     SepGetCachedHandlesEntry @ 0x140913D04 (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x140913DDC (SepValidateReferencedCachedHandles.c)
 *     SepQueryNameString @ 0x140914194 (SepQueryNameString.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiInitializePartialVad @ 0x14091A104 (MiInitializePartialVad.c)
 *     MmLinkJobProcess @ 0x14091A3E0 (MmLinkJobProcess.c)
 *     PspEstablishJobHierarchy @ 0x14091B360 (PspEstablishJobHierarchy.c)
 *     MiCopyToCfgBitMap @ 0x14091C9CC (MiCopyToCfgBitMap.c)
 *     sub_14091DF30 @ 0x14091DF30 (sub_14091DF30.c)
 *     sub_14091EB00 @ 0x14091EB00 (sub_14091EB00.c)
 *     EtwpCovSampContextAddSamples @ 0x140923570 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampContextGetModule @ 0x140923930 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1409247F8 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampProcessAddModule @ 0x14092489C (EtwpCovSampProcessAddModule.c)
 *     EtwpCovSampProcessCleanup @ 0x140924B30 (EtwpCovSampProcessCleanup.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140925BB0 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409273B0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140927C38 (DrvDbLoadDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409282E4 (_RegRtlCreateTreeTransacted.c)
 *     VrpPreOpenOrCreate @ 0x1409292F4 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x140929830 (VrpTranslatePath.c)
 *     VrpPostQueryKey @ 0x14092A060 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x14092A618 (VrpPostEnumerateKey.c)
 *     VrpDestroyNamespaceNode @ 0x14092B1C0 (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x14092B320 (VrpDestroyNamespaceNodeList.c)
 *     VrpCreateNamespaceNode @ 0x14092BCA8 (VrpCreateNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x14092C204 (VrpAddNamespaceNodeToList.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14092CA0C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpCleanupNamespace @ 0x14092CC18 (VrpCleanupNamespace.c)
 *     ExWnfHiveUnloaded @ 0x14092D110 (ExWnfHiveUnloaded.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     CmpNameFromAttributes @ 0x14092F7A8 (CmpNameFromAttributes.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpLogHiveFileInaccessible @ 0x140932734 (CmpLogHiveFileInaccessible.c)
 *     CmpClearKeyAccessBits @ 0x140933420 (CmpClearKeyAccessBits.c)
 *     PfpVolumeOpenAndVerify @ 0x140934634 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchRequest @ 0x140934A0C (PfpPrefetchRequest.c)
 *     PfpPrefetchRequestPerform @ 0x1409353B4 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchVolumesCleanup @ 0x14093583C (PfpPrefetchVolumesCleanup.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409358F0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnAsyncContextCleanup @ 0x140935C84 (PfSnAsyncContextCleanup.c)
 *     PfSnCleanupPrefetchHeader @ 0x140935CD8 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchSharedDeref @ 0x1409362B8 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchPrivatePages @ 0x140936C3C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x140937198 (PfpPrefetchFiles.c)
 *     PfpFileBuildReadSupport @ 0x140937944 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140937D20 (PfpReadSupportCleanup.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiReleaseReadListResources @ 0x1409399B0 (MiReleaseReadListResources.c)
 *     MmPrefetchForCacheManager @ 0x140939B54 (MmPrefetchForCacheManager.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 *     MiPrefetchControlArea @ 0x14093AC84 (MiPrefetchControlArea.c)
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 *     MiFreeRelocations @ 0x14093B4DC (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x14093B594 (MiFreeImageLoadConfig.c)
 *     MiFreeRetpolineRelocationInformation @ 0x14093B5E4 (MiFreeRetpolineRelocationInformation.c)
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 *     MiFreeImageRetpolineContext @ 0x14093D8D0 (MiFreeImageRetpolineContext.c)
 *     RtlCreateRvaList @ 0x14093E8D0 (RtlCreateRvaList.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x14093F474 (RtlCreateFunctionOverrideFixupInfo.c)
 *     ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x14093F818 (-RtlpCreateFunctionOverrideFixupInfo@@YAJV-$span@$$CBE$0-0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAP.c)
 *     ExpStringCapture @ 0x140942D04 (ExpStringCapture.c)
 *     ExpGetDeviceDataInformation @ 0x140943494 (ExpGetDeviceDataInformation.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     EtwpCoverageSamplerQuery @ 0x1409454F0 (EtwpCoverageSamplerQuery.c)
 *     PfProcessCreateNotification @ 0x140948348 (PfProcessCreateNotification.c)
 *     PfSnBeginAppLaunch @ 0x1409483F4 (PfSnBeginAppLaunch.c)
 *     PfSnBeginScenario @ 0x140948770 (PfSnBeginScenario.c)
 *     PfCalculateProcessHash @ 0x140949AC0 (PfCalculateProcessHash.c)
 *     PfSnBeginTrace @ 0x14094A598 (PfSnBeginTrace.c)
 *     PfSnPrefetchScenario @ 0x14094A830 (PfSnPrefetchScenario.c)
 *     PfSnOperationProcess @ 0x14094AD54 (PfSnOperationProcess.c)
 *     PiCMOpenDeviceKey @ 0x14094B3B0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14094B5B8 (PiCMOpenObjectKey.c)
 *     PfProcessExitNotification @ 0x14094BDC4 (PfProcessExitNotification.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x14094C3DC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgFreeResolveContext @ 0x14094C634 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgFreeVariable @ 0x14094C6B4 (PiDevCfgFreeVariable.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x14094C890 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14094CA3C (PiDevCfgVerifyDeviceAllowed.c)
 *     MiCompressRelocations @ 0x14094CB50 (MiCompressRelocations.c)
 *     ExpAllocateHandleTable @ 0x14094D2D4 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x14094D42C (ExpAllocateTablePagedPoolNoZero.c)
 *     NtSetBootEntryOrder @ 0x14094D880 (NtSetBootEntryOrder.c)
 *     NtTranslateFilePath @ 0x14094D9E0 (NtTranslateFilePath.c)
 *     NtEnumerateBootEntries @ 0x14094DCD0 (NtEnumerateBootEntries.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x14094F150 (ExGetFirmwareEnvironmentVariable.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14094F250 (NtQuerySystemEnvironmentValueEx.c)
 *     ExLockUserBuffer @ 0x14094F5B8 (ExLockUserBuffer.c)
 *     IopOpenSystemVariableDevice @ 0x14094FBB0 (IopOpenSystemVariableDevice.c)
 *     IoVolumeDeviceToGuid @ 0x14094FD30 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14094FF60 (IoVolumeDeviceNameToGuidPath.c)
 *     IoQueryFileDosDeviceName @ 0x140950990 (IoQueryFileDosDeviceName.c)
 *     IoVolumeDeviceToDosName @ 0x140950A40 (IoVolumeDeviceToDosName.c)
 *     IopQueryNameInternal @ 0x140950DC0 (IopQueryNameInternal.c)
 *     EtwpEnumerateAddressSpace @ 0x140951B80 (EtwpEnumerateAddressSpace.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x140953390 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x140953450 (PfSnPopulateReadList.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1409549CC (PfSnOpenVolumesForPrefetch.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     NtQueryEaFile @ 0x140956950 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x140957060 (NtQueryVolumeInformationFile.c)
 *     IopSynchronousApiServiceTail @ 0x140957634 (IopSynchronousApiServiceTail.c)
 *     IopFlushBuffersFile @ 0x140957794 (IopFlushBuffersFile.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     IoQueryInformationByName @ 0x1409590B0 (IoQueryInformationByName.c)
 *     PfSnGetPrefetchInstructions @ 0x140959434 (PfSnGetPrefetchInstructions.c)
 *     PfSnEndTrace @ 0x14095A268 (PfSnEndTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x14095A5E0 (PfSnBuildDumpFromTrace.c)
 *     PfSnCleanupTrace @ 0x14095A93C (PfSnCleanupTrace.c)
 *     NtUnlockFile @ 0x14095AC90 (NtUnlockFile.c)
 *     sub_14095B190 @ 0x14095B190 (sub_14095B190.c)
 *     ntoskrnl_20 @ 0x14095B5C0 (ntoskrnl_20.c)
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 *     SPCallServerHandleQueryPolicy @ 0x14095F70C (SPCallServerHandleQueryPolicy.c)
 *     NtQueryLicenseValue @ 0x1409604B0 (NtQueryLicenseValue.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     HvFreeDirtyData @ 0x140964C50 (HvFreeDirtyData.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x140965600 (CmpSignalUnloadEventArrayForHive.c)
 *     HvStoreModifiedData @ 0x140966BFC (HvStoreModifiedData.c)
 *     HvFreeUnreconciledData @ 0x14096736C (HvFreeUnreconciledData.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14096749C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     HvpGenerateLogEntry @ 0x140967718 (HvpGenerateLogEntry.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140968B00 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x14096B444 (HvWriteHivePrimaryFile.c)
 *     HvpMapHiveImageFromFile @ 0x14096BEA4 (HvpMapHiveImageFromFile.c)
 *     CmpQueryNameString @ 0x14096C1C4 (CmpQueryNameString.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14096E27C (PopFxLogSocSubsystemMetadata.c)
 *     MmQueryBadAddresses @ 0x14096FEB8 (MmQueryBadAddresses.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140970318 (MiQueryMemoryPhysicalContiguity.c)
 *     PfTCreateTraceDump @ 0x140971190 (PfTCreateTraceDump.c)
 *     FsRtlIsDbcsInExpression @ 0x140972D50 (FsRtlIsDbcsInExpression.c)
 *     CmpRegisterCallbackInternal @ 0x14097354C (CmpRegisterCallbackInternal.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 *     NtRemoveIoCompletionEx @ 0x140975B40 (NtRemoveIoCompletionEx.c)
 *     EtwpRegTraceCallback @ 0x1409764B0 (EtwpRegTraceCallback.c)
 *     EtwpCapturePreviousRegistryData @ 0x140976E30 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x140976F40 (EtwpCaptureRegistryData.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409774CC (PspAddSchedulingGroupToJobChain.c)
 *     PspFreeRateControl @ 0x14097782C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140977878 (PspAllocateRateControl.c)
 *     RtlpAllocateAtom @ 0x140977924 (RtlpAllocateAtom.c)
 *     ObpCallPostOperationCallbacks @ 0x1409780DC (ObpCallPostOperationCallbacks.c)
 *     PnpFilterResourceRequirementsList @ 0x140978308 (PnpFilterResourceRequirementsList.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140978BD8 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x140978DA8 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x140978EDC (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1409792B8 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x1409795E8 (PiQueryResourceRequirements.c)
 *     PnpProcessAssignResources @ 0x140979798 (PnpProcessAssignResources.c)
 *     _CmUpdateDevicePanelInterface @ 0x140979C90 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x140979E38 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x14097A934 (_CmQueryDevicePanelPldProperty.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     _RegRtlDeleteTreeInternal @ 0x14097C270 (_RegRtlDeleteTreeInternal.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14097C698 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiCMEnumerateSubKeys @ 0x14097D49C (PiCMEnumerateSubKeys.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14097D7A0 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlEnumKey @ 0x14097D9B4 (_RegRtlEnumKey.c)
 *     _RegRtlEnumValue @ 0x14097E62C (_RegRtlEnumValue.c)
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x14097EBEC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14097F72C (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14097FB88 (PipGetRegistrySecurityWithFallback.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14097FDF8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x140980068 (PiDqPnPGetObjectPropertyLocales.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140980664 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 *     IopQueryLegacyBusInformation @ 0x140981D7C (IopQueryLegacyBusInformation.c)
 *     PnpGetDeviceLocationStrings @ 0x1409824C0 (PnpGetDeviceLocationStrings.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140982CA8 (PnpCallDriverQueryServiceHelper.c)
 *     SeCaptureAcl @ 0x1409837A4 (SeCaptureAcl.c)
 *     NtCreateTokenEx @ 0x140983E20 (NtCreateTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x140984860 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x140984C80 (NtPrivilegeCheck.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140984EB8 (SeCaptureLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x1409854B8 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x14098567C (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140985730 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x140985BDC (SeReleaseAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140985BF8 (SeReleaseLuidAndAttributesArray.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     WmipSecurityMethod @ 0x140989620 (WmipSecurityMethod.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140989740 (ObAssignObjectSecurityDescriptor.c)
 *     CcUnpinData @ 0x140989B70 (CcUnpinData.c)
 *     MiExtendSection @ 0x14098A4D8 (MiExtendSection.c)
 *     MiCreateDataFileMap @ 0x14098A990 (MiCreateDataFileMap.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x14098F030 (MiBuildImageControlArea.c)
 *     MiCreateMdl @ 0x14098FB34 (MiCreateMdl.c)
 *     MiDeleteImageCreationMdls @ 0x14098FC88 (MiDeleteImageCreationMdls.c)
 *     NtCreateWorkerFactory @ 0x1409901C0 (NtCreateWorkerFactory.c)
 *     IopFreeMiniCompletionPacket @ 0x140990680 (IopFreeMiniCompletionPacket.c)
 *     CmpCheckAdminAccess @ 0x140990AA8 (CmpCheckAdminAccess.c)
 *     CmpBuildAdminInformation @ 0x140990B8C (CmpBuildAdminInformation.c)
 *     EtwTiLogReadWriteVm @ 0x140992E08 (EtwTiLogReadWriteVm.c)
 *     MiCopyVirtualMemory @ 0x140993190 (MiCopyVirtualMemory.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409950F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     MiReleaseVadEventBlocks @ 0x14099A250 (MiReleaseVadEventBlocks.c)
 *     MiFreePlaceholderVadEvent @ 0x14099A43C (MiFreePlaceholderVadEvent.c)
 *     ObpInsertHandleCount @ 0x14099B270 (ObpInsertHandleCount.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14099BD34 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotUpdate @ 0x14099BF8C (PopEtProcessSnapshotUpdate.c)
 *     PopEtInternerFree @ 0x14099C9F0 (PopEtInternerFree.c)
 *     PopEtAggregateGet @ 0x14099CA3C (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x14099D018 (PopEtProcessSnapshotCreate.c)
 *     TtmInitCurrentSession @ 0x14099D6C8 (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x14099D9B8 (TtmDispatchApi.c)
 *     IoGetLegacyVetoList @ 0x14099F770 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 *     PopLogDisabledSleepReason @ 0x14099FBA0 (PopLogDisabledSleepReason.c)
 *     IopGetLegacyVetoListDrivers @ 0x14099FC84 (IopGetLegacyVetoListDrivers.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14099FFA0 (PopRemoveReasonRecordByReasonCode.c)
 *     PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1409A2A14 (PopResetIdlePhaseWatchdogDiagnosticContext.c)
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x1409A366C (PopDiagTraceWin32kCalloutStart.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1409A41B0 (PopDispatchPowerSettingCallbacks.c)
 *     PopUnreferencePowerSetting @ 0x1409A44C4 (PopUnreferencePowerSetting.c)
 *     BcdGetElementDataWithFlags @ 0x1409A4E5C (BcdGetElementDataWithFlags.c)
 *     BiGetObjectIdentifier @ 0x1409A5118 (BiGetObjectIdentifier.c)
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BiGetKeyName @ 0x1409A53F8 (BiGetKeyName.c)
 *     BiBuildIdentifierList @ 0x1409A55CC (BiBuildIdentifierList.c)
 *     BiConvertRegistryDataToElement @ 0x1409A5CA8 (BiConvertRegistryDataToElement.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409A60FC (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetElement @ 0x1409A6208 (BiGetElement.c)
 *     BiDeleteKey @ 0x1409A62C4 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x1409A6390 (BiEnumerateSubKeys.c)
 *     BiConvertElementToRegistryData @ 0x1409A6714 (BiConvertElementToRegistryData.c)
 *     BiBindEfiBootManager @ 0x1409A6BC4 (BiBindEfiBootManager.c)
 *     BiQueryBootEntryOrder @ 0x1409A6E98 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1409A6F74 (BiQueryBootOptions.c)
 *     BiGetDeviceFromEfiPath @ 0x1409A7044 (BiGetDeviceFromEfiPath.c)
 *     BiTranslateFilePath @ 0x1409A71BC (BiTranslateFilePath.c)
 *     BiEnumerateBootEntries @ 0x1409A7518 (BiEnumerateBootEntries.c)
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 *     BiUpdateEfiEntry @ 0x1409A7B20 (BiUpdateEfiEntry.c)
 *     BiCreateMergedBootEntry @ 0x1409A7CDC (BiCreateMergedBootEntry.c)
 *     BiIsWinPEBoot @ 0x1409A81CC (BiIsWinPEBoot.c)
 *     BiFreeIdentifierList @ 0x1409A8250 (BiFreeIdentifierList.c)
 *     RtlAcquirePrivilege @ 0x1409A82D4 (RtlAcquirePrivilege.c)
 *     NtSetTimerResolution @ 0x1409A8C70 (NtSetTimerResolution.c)
 *     PoDiagCaptureUsermodeStack @ 0x1409A93C0 (PoDiagCaptureUsermodeStack.c)
 *     ObGetObjectSecurity @ 0x1409A9A80 (ObGetObjectSecurity.c)
 *     _CmDeleteDeviceWorker @ 0x1409AA048 (_CmDeleteDeviceWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409AA8EC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetDeviceSiblings @ 0x1409AB1F4 (_CmGetDeviceSiblings.c)
 *     _PnpMultiSzDeleteString @ 0x1409AB74C (_PnpMultiSzDeleteString.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409ACEE0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1409AE2B4 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     WmipUpdateDataSource @ 0x1409AF500 (WmipUpdateDataSource.c)
 *     WmipSendEnableDisableRequest @ 0x1409AF934 (WmipSendEnableDisableRequest.c)
 *     WmipRegistrationWorker @ 0x1409AFCD0 (WmipRegistrationWorker.c)
 *     WmipAllocGuidEntry @ 0x1409AFDEC (WmipAllocGuidEntry.c)
 *     WmipRegisterOrUpdateDS @ 0x1409AFF54 (WmipRegisterOrUpdateDS.c)
 *     WmipAddDataSource @ 0x1409B01A8 (WmipAddDataSource.c)
 *     WmipBuildInstanceSet @ 0x1409B053C (WmipBuildInstanceSet.c)
 *     WmipSendGuidUpdateNotifications @ 0x1409B0A84 (WmipSendGuidUpdateNotifications.c)
 *     WmipQueryAllDataMultiple @ 0x1409B169C (WmipQueryAllDataMultiple.c)
 *     WmipGenerateRegistrationNotification @ 0x1409B1AE4 (WmipGenerateRegistrationNotification.c)
 *     WmipEventNotification @ 0x1409B1EB0 (WmipEventNotification.c)
 *     WmipProcessEvent @ 0x1409B1F20 (WmipProcessEvent.c)
 *     IoWMIQuerySingleInstance @ 0x1409B2250 (IoWMIQuerySingleInstance.c)
 *     WmipQuerySetExecuteSI @ 0x1409B2A54 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1409B2D4C (WmipQueryAllData.c)
 *     WmipPrepareWnodeSI @ 0x1409B3B80 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1409B3E88 (WmipPrepareForWnodeAD.c)
 *     WmipAddProviderIdToPIList @ 0x1409B407C (WmipAddProviderIdToPIList.c)
 *     WmipCreateGuidObject @ 0x1409B4758 (WmipCreateGuidObject.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1409B4974 (WmipGetGuidSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x1409B4B60 (RtlGetPersistedStateLocation.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     PiGetStateRootPath @ 0x1409B55E8 (PiGetStateRootPath.c)
 *     PiCreateServiceStateKey @ 0x1409B569C (PiCreateServiceStateKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1409B5838 (PiCreateDriverRedirectedStateKey.c)
 *     PiGetServiceNameInfo @ 0x1409B595C (PiGetServiceNameInfo.c)
 *     IoOpenDriverRegistryKey @ 0x1409B5A60 (IoOpenDriverRegistryKey.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B6410 (IopGetDriverNameFromKeyNode.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1409B68D0 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     PiProcessDriverInstance @ 0x1409B69D0 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x1409B6CA8 (PiFindDevInstMatch.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x1409B78C8 (IopBuildFullDriverPath.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B81B0 (IopQueryRegistryKeySystemPath.c)
 *     PiNormalizeDeviceText @ 0x1409B8420 (PiNormalizeDeviceText.c)
 *     PpCheckInDriverDatabase @ 0x1409B89D4 (PpCheckInDriverDatabase.c)
 *     PnpPrepareDriverLoading @ 0x1409B8F8C (PnpPrepareDriverLoading.c)
 *     PnpQueryDeviceText @ 0x1409B91CC (PnpQueryDeviceText.c)
 *     PnpAllocateAndEnableEventWatchdog @ 0x1409B9634 (PnpAllocateAndEnableEventWatchdog.c)
 *     PnpDelayedRemoveWorker @ 0x1409BABD0 (PnpDelayedRemoveWorker.c)
 *     PipRemoveDevicesInRelationList @ 0x1409BADE0 (PipRemoveDevicesInRelationList.c)
 *     PipFreeDeviceObjectList @ 0x1409BAEDC (PipFreeDeviceObjectList.c)
 *     IopFreeRelationList @ 0x1409BAF04 (IopFreeRelationList.c)
 *     PiDeviceRegistration @ 0x1409BAFC8 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409BB294 (PpForEachDeviceInstanceDriver.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1409BBCEC (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 *     PiEventAllocateVetoBuffer @ 0x1409BC64C (PiEventAllocateVetoBuffer.c)
 *     PiProcessQueryAndCancelRemoval @ 0x1409BC864 (PiProcessQueryAndCancelRemoval.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1409BCDB8 (PnpQueuePendingSurpriseRemoval.c)
 *     IopDeleteDevice @ 0x1409BD4C0 (IopDeleteDevice.c)
 *     IopDestroyDeviceNode @ 0x1409BD84C (IopDestroyDeviceNode.c)
 *     IopLegacyResourceAllocation @ 0x1409BE034 (IopLegacyResourceAllocation.c)
 *     PiSwStopDestroy @ 0x1409BE704 (PiSwStopDestroy.c)
 *     IopUncacheInterfaceInformation @ 0x1409BE8C4 (IopUncacheInterfaceInformation.c)
 *     PnpFreeDeviceInstancePath @ 0x1409BEDA4 (PnpFreeDeviceInstancePath.c)
 *     PnpDisableDeviceInterfaces @ 0x1409BF2E8 (PnpDisableDeviceInterfaces.c)
 *     IopConnectLineBasedInterrupt @ 0x1409BFBA0 (IopConnectLineBasedInterrupt.c)
 *     IoDisconnectInterruptEx @ 0x1409BFE80 (IoDisconnectInterruptEx.c)
 *     IoConnectInterruptEx @ 0x1409BFF30 (IoConnectInterruptEx.c)
 *     IopGetInterruptConnectionData @ 0x1409C0224 (IopGetInterruptConnectionData.c)
 *     IoDisconnectInterrupt @ 0x1409C05D0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x1409C0F8C (IopConnectMessageBasedInterrupt.c)
 *     ObReleaseObjectSecurity @ 0x1409C2110 (ObReleaseObjectSecurity.c)
 *     SeAppendPrivileges @ 0x1409C22A0 (SeAppendPrivileges.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 *     ExpWnfSubscribeNameInstance @ 0x1409C32E4 (ExpWnfSubscribeNameInstance.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1409C4380 (PiPnpRtlGetFilteredDeviceList.c)
 *     PspDereferenceQuotaBlock @ 0x1409C57F0 (PspDereferenceQuotaBlock.c)
 *     ObRegisterCallbacks @ 0x1409C5AA0 (ObRegisterCallbacks.c)
 *     ObGetObjectInformation @ 0x1409C5D80 (ObGetObjectInformation.c)
 *     ObpDestroyTypeArray @ 0x1409C6404 (ObpDestroyTypeArray.c)
 *     CmpFreeKeyControlBlock @ 0x1409C69A0 (CmpFreeKeyControlBlock.c)
 *     IopSymlinkApplyToOpenedName @ 0x1409C6EF4 (IopSymlinkApplyToOpenedName.c)
 *     IopReplaceSymlinkPath @ 0x1409C707C (IopReplaceSymlinkPath.c)
 *     _RegRtlQueryValue @ 0x1409C7A00 (_RegRtlQueryValue.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1409C7B64 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgVerifyService @ 0x1409C8528 (PiDevCfgVerifyService.c)
 *     PiDevCfgFindDeviceDriver @ 0x1409C86B4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409CA030 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x1409CD594 (PiDevCfgCopyObjectProperties.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1409CDC98 (PiCMReleaseRegistryPropertyInputData.c)
 *     IoQueryDeviceDescription @ 0x1409CDEA0 (IoQueryDeviceDescription.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1409CDFE8 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryBusDescription @ 0x1409CE954 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x1409CECBC (IopGetRegistryKeyInformation.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1409CEE40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1409CF204 (PiDevCfgResolveMultiSzValue.c)
 *     EtwpInitLoggerContext @ 0x1409CFDB8 (EtwpInitLoggerContext.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x1409D1540 (PiDevCfgFreeDeviceMigrationNode.c)
 *     IopThreadStart @ 0x1409D1690 (IopThreadStart.c)
 *     EtwpCaptureString @ 0x1409D28F8 (EtwpCaptureString.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1409D3224 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpRealtimeCreateLogfile @ 0x1409D3A4C (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1409D427C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpUpdateFileHeader @ 0x1409D5658 (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x1409D61B0 (EtwpDelayCreate.c)
 *     EtwpCreateNtFileName @ 0x1409D638C (EtwpCreateNtFileName.c)
 *     EtwpFinalizeHeader @ 0x1409D652C (EtwpFinalizeHeader.c)
 *     EtwpGenerateFileName @ 0x1409D6D84 (EtwpGenerateFileName.c)
 *     PspCaptureUserProcessParameters @ 0x1409D8840 (PspCaptureUserProcessParameters.c)
 *     SepSetTokenTrust @ 0x1409D96A0 (SepSetTokenTrust.c)
 *     sub_1409DB878 @ 0x1409DB878 (sub_1409DB878.c)
 *     PspLazyInitializeStorageExpansion @ 0x1409DC414 (PspLazyInitializeStorageExpansion.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409DC4D8 (IopCleanupFileObjectIosbRange.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteDirectoryName @ 0x1409DF600 (ObpDeleteDirectoryName.c)
 *     ExpFreeHandleTable @ 0x1409DFCA4 (ExpFreeHandleTable.c)
 *     FsRtlpAllocateOplock @ 0x1409E1594 (FsRtlpAllocateOplock.c)
 *     DbgkpFreeDebugEvent @ 0x1409E3DF8 (DbgkpFreeDebugEvent.c)
 *     NtSetInformationVirtualMemory @ 0x1409E3F70 (NtSetInformationVirtualMemory.c)
 *     MiCombineAllPhysicalMemory @ 0x1409E6848 (MiCombineAllPhysicalMemory.c)
 *     MiProcessCrcList @ 0x1409E6C70 (MiProcessCrcList.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1409E7380 (RtlQueryRegistryValueWithFallback.c)
 *     EtwpAllocateEventNameFilter @ 0x1409E7998 (EtwpAllocateEventNameFilter.c)
 *     EtwpUpdateGuidFilterData @ 0x1409E8008 (EtwpUpdateGuidFilterData.c)
 *     EtwpFreeEventNameFilter @ 0x1409E8490 (EtwpFreeEventNameFilter.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1409E8C7C (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     EtwpRegisterKMProvider @ 0x1409EA1C4 (EtwpRegisterKMProvider.c)
 *     VrpFreeKeyContext @ 0x1409EACB8 (VrpFreeKeyContext.c)
 *     VrpDecommissionKeyContext @ 0x1409EACF0 (VrpDecommissionKeyContext.c)
 *     IopQueryDeviceHardwareIdForPdcTask @ 0x1409EB200 (IopQueryDeviceHardwareIdForPdcTask.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 *     IopProcessInvalidateBusRelationsRequest @ 0x1409EB6A8 (IopProcessInvalidateBusRelationsRequest.c)
 *     Pdcv2ActivationClientActivate @ 0x1409EB97C (Pdcv2ActivationClientActivate.c)
 *     PnpProcessDeferredRegistrations @ 0x1409EC30C (PnpProcessDeferredRegistrations.c)
 *     PnpDereferenceNotify @ 0x1409EC754 (PnpDereferenceNotify.c)
 *     PnpDeleteDeviceActionRequest @ 0x1409ECFD4 (PnpDeleteDeviceActionRequest.c)
 *     Pdcv2ActivationClientDeactivate @ 0x1409ED030 (Pdcv2ActivationClientDeactivate.c)
 *     PnpCompleteDeviceEvent @ 0x1409ED2C0 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x1409ED430 (PnpDeviceEventWorker.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1409ED7A0 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x1409ED83C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpDisableWatchdog @ 0x1409ED880 (PnpDisableWatchdog.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x1409EDA58 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PiCMReleasePropertyInputData @ 0x1409F0260 (PiCMReleasePropertyInputData.c)
 *     PiSwDeviceFree @ 0x1409F0B0C (PiSwDeviceFree.c)
 *     PiSwPnPInfoFree @ 0x1409F0BC8 (PiSwPnPInfoFree.c)
 *     PiSwIrpStartCreate @ 0x1409F0D04 (PiSwIrpStartCreate.c)
 *     PiSwCompleteCreate @ 0x1409F0EA8 (PiSwCompleteCreate.c)
 *     PiSwInterfaceFree @ 0x1409F1384 (PiSwInterfaceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PiDqTraceQueryCreate @ 0x1409F2944 (PiDqTraceQueryCreate.c)
 *     PnpCopyDevPropertyArray @ 0x1409F2BB0 (PnpCopyDevPropertyArray.c)
 *     PnpFreeDevProperty @ 0x1409F2D54 (PnpFreeDevProperty.c)
 *     PiSwInstanceInfoFree @ 0x1409F2D94 (PiSwInstanceInfoFree.c)
 *     PiSwBusRelationAdd @ 0x1409F2DD8 (PiSwBusRelationAdd.c)
 *     PiDqIrpPropertySet @ 0x1409F2F90 (PiDqIrpPropertySet.c)
 *     PiSwBusRelationRemove @ 0x1409F32DC (PiSwBusRelationRemove.c)
 *     PiSwProcessRemove @ 0x1409F3978 (PiSwProcessRemove.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1409F3D04 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceDereference @ 0x1409F3E68 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1409F40F4 (PiSwQueuedCreateInfoFree.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1409F49C0 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpTiQueryVad @ 0x1409F4AC0 (EtwpTiQueryVad.c)
 *     EtwpTiFreeVad @ 0x1409F4C24 (EtwpTiFreeVad.c)
 *     sub_1409F4D38 @ 0x1409F4D38 (sub_1409F4D38.c)
 *     sub_1409F5164 @ 0x1409F5164 (sub_1409F5164.c)
 *     sub_1409F581C @ 0x1409F581C (sub_1409F581C.c)
 *     FsRtlTeardownPerFileContexts @ 0x1409F64C0 (FsRtlTeardownPerFileContexts.c)
 *     EtwpSetProviderTraitsUm @ 0x1409F67DC (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsCommon @ 0x1409F69B4 (EtwpSetProviderTraitsCommon.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409F6C40 (PiPnpRtlServiceFilterCallback.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409F75EC (VrpHandleIoctlInitializeJobForVreg.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409F7BB0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1409F8060 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     VrpFreeCallbackContext @ 0x1409F8618 (VrpFreeCallbackContext.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409F8880 (DrvDbGetObjectSubKeyCallback.c)
 *     EtwpTrackBinaryForSession @ 0x1409F8C88 (EtwpTrackBinaryForSession.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     FsRtlNotifyFilterReportChange @ 0x1409FD7C0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1409FE1C0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1409FE4F0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1409FEBD0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x1409FEF00 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1409FEFC8 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyCompleteIrp @ 0x1409FF180 (FsRtlNotifyCompleteIrp.c)
 *     PiCMGetDeviceInterfaceList @ 0x1409FF400 (PiCMGetDeviceInterfaceList.c)
 *     ExGetPoolTagInfo @ 0x140A00028 (ExGetPoolTagInfo.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A00380 (ExDereferenceHandleDebugInfo.c)
 *     sub_140A003E0 @ 0x140A003E0 (sub_140A003E0.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmAddLogForAction @ 0x140A01858 (CmAddLogForAction.c)
 *     CmpComputeLogFillLevel @ 0x140A01F98 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x140A02110 (CmpDoTransWriteLogRecord.c)
 *     CmpLogCheckpoint @ 0x140A022E4 (CmpLogCheckpoint.c)
 *     MmInSwapVirtualAddresses @ 0x140A03180 (MmInSwapVirtualAddresses.c)
 *     PfSnArrayGrow @ 0x140A03F58 (PfSnArrayGrow.c)
 *     AdtpBuildMessageString @ 0x140A05034 (AdtpBuildMessageString.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A05254 (SepDereferenceCachedHandlesEntryInternal.c)
 *     NtCreatePrivateNamespace @ 0x140A05BA0 (NtCreatePrivateNamespace.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A05EC4 (ObpVerifyCreatorAccessCheck.c)
 *     NtOpenPrivateNamespace @ 0x140A06070 (NtOpenPrivateNamespace.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A062C8 (ObpCaptureBoundaryDescriptor.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A06FB0 (AlpcpAllocateCompletionPacketLookaside.c)
 *     AlpcpInitializeCompletionList @ 0x140A07184 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140A077BC (AlpcpFreeCompletionList.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     RtlpFlsDataCleanup @ 0x140A0A908 (RtlpFlsDataCleanup.c)
 *     RtlpFlsHeapFree @ 0x140A0AB2C (RtlpFlsHeapFree.c)
 *     EtwpFreeSecurityDescriptor @ 0x140A0B660 (EtwpFreeSecurityDescriptor.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x140A0C25C (EtwpCovSampContextRemoveAndFreeModule.c)
 *     EtwpCovSampModuleCleanup @ 0x140A0C308 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampEnumerateProcess @ 0x140A0C3A0 (EtwpCovSampEnumerateProcess.c)
 *     SepSetTokenPackage @ 0x140A0C9C0 (SepSetTokenPackage.c)
 *     NtCloseObjectAuditAlarm @ 0x140A0E0E0 (NtCloseObjectAuditAlarm.c)
 *     SeTokenIsElevated @ 0x140A0E3B0 (SeTokenIsElevated.c)
 *     PerfLogImageUnload @ 0x140A0E50C (PerfLogImageUnload.c)
 *     EtwpProcessThreadImageRundown @ 0x140A0F50C (EtwpProcessThreadImageRundown.c)
 *     WmipFreeTraceDeviceList @ 0x140A0F724 (WmipFreeTraceDeviceList.c)
 *     CmpDelayedDerefKeys @ 0x140A10DA8 (CmpDelayedDerefKeys.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140A11224 (MiSnapThunk.c)
 *     MiCompressImportList @ 0x140A11564 (MiCompressImportList.c)
 *     MiObtainSectionForDriver @ 0x140A116B4 (MiObtainSectionForDriver.c)
 *     MiCreateSectionForDriver @ 0x140A1199C (MiCreateSectionForDriver.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A125DC (ExpWnfSubscribeWnfStateChange.c)
 *     AlpcConnectionDestroyProcedure @ 0x140A13BA0 (AlpcConnectionDestroyProcedure.c)
 *     WdtpAllocateTimer @ 0x140A15248 (WdtpAllocateTimer.c)
 *     CmpVEExecuteCreateLogic @ 0x140A154DC (CmpVEExecuteCreateLogic.c)
 *     AdtpBuildIPv4Strings @ 0x140A157AC (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140A15904 (AdtpBuildIPv6Strings.c)
 *     MmGetFileNameForAddress @ 0x140A15B1C (MmGetFileNameForAddress.c)
 *     PiCMGetDeviceIdList @ 0x140A15D5C (PiCMGetDeviceIdList.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x140A16574 (_CmGetMatchingFilteredDeviceListWorker.c)
 *     PiUEventCacheObjectProperties @ 0x140A16710 (PiUEventCacheObjectProperties.c)
 *     PiDqSerializationAlloc @ 0x140A16C50 (PiDqSerializationAlloc.c)
 *     SepCreateLogonSessionTrack @ 0x140A16FEC (SepCreateLogonSessionTrack.c)
 *     RtlQueryImageFileKeyOption @ 0x140A173C0 (RtlQueryImageFileKeyOption.c)
 *     PopUmpoProcessMessages @ 0x140A17FA0 (PopUmpoProcessMessages.c)
 *     SeReleaseSid @ 0x140A18990 (SeReleaseSid.c)
 *     PopPowerRequestStatsFreeId @ 0x140A18B9C (PopPowerRequestStatsFreeId.c)
 *     SepExamineSaclEx @ 0x140A19D34 (SepExamineSaclEx.c)
 *     SeDeassignSecurity @ 0x140A1B040 (SeDeassignSecurity.c)
 *     PfpRpCHashDeleteEntries @ 0x140A1D3B8 (PfpRpCHashDeleteEntries.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 *     RtlQueryModuleInformation @ 0x140A1FAC0 (RtlQueryModuleInformation.c)
 *     PsDereferenceVsmEnclave @ 0x140A20164 (PsDereferenceVsmEnclave.c)
 *     IopTrackLink @ 0x140A21314 (IopTrackLink.c)
 *     SiGetSystemDisk @ 0x140A22200 (SiGetSystemDisk.c)
 *     SiGetFirmwareSystemPartition @ 0x140A222B0 (SiGetFirmwareSystemPartition.c)
 *     SiIsWinPEBoot @ 0x140A22390 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x140A2240C (SiGetBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x140A226F4 (SiTranslateSymbolicLink.c)
 *     SiGetRegistryValue @ 0x140A2289C (SiGetRegistryValue.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A22AB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpLockIXLockIntent @ 0x140A22FF4 (CmpLockIXLockIntent.c)
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A23700 (MiRotateToFrameBufferNoCopy.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x140A23930 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140A25DA8 (RtlpProcessIFEOKeyFilter.c)
 *     PiQueryRemovableDeviceOverride @ 0x140A26B08 (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x140A26D28 (PipFindDeviceOverrideEntry.c)
 *     SepAddLuidToIndexEntry @ 0x140A270DC (SepAddLuidToIndexEntry.c)
 *     sub_140A278DC @ 0x140A278DC (sub_140A278DC.c)
 *     PnpQueryDeviceID @ 0x140A27FC0 (PnpQueryDeviceID.c)
 *     PnpQueryID @ 0x140A28110 (PnpQueryID.c)
 *     PspInitializeFullProcessImageName @ 0x140A286FC (PspInitializeFullProcessImageName.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x140A28934 (EtwTimLogProhibitChildProcessCreation.c)
 *     NtLoadEnclaveData @ 0x140A29800 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A2A370 (MiLoadSectionIntoVsmEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A2A630 (MiLoadDataIntoVsmEnclave.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140A2B8E4 (RtlpFcNotifyFeatureUsageTarget.c)
 *     WmipDeleteMethod @ 0x140A2CBD0 (WmipDeleteMethod.c)
 *     PopDiagTraceControlCallback @ 0x140A2CF10 (PopDiagTraceControlCallback.c)
 *     PopDiagTracePowerRequestCreate @ 0x140A2D14C (PopDiagTracePowerRequestCreate.c)
 *     PpmInstallPlatformIdleStates @ 0x140A2E800 (PpmInstallPlatformIdleStates.c)
 *     IopGraftName @ 0x140A2F1E8 (IopGraftName.c)
 *     IopCopyOverNewPathSecure @ 0x140A2F5A8 (IopCopyOverNewPathSecure.c)
 *     MiFreeWorkingSetSwapContext @ 0x140A32EFC (MiFreeWorkingSetSwapContext.c)
 *     ExpWnfDeleteStateData @ 0x140A3307C (ExpWnfDeleteStateData.c)
 *     MiUnlockDriverPages @ 0x140A33EDC (MiUnlockDriverPages.c)
 *     PiQueryDeviceRelations @ 0x140A3435C (PiQueryDeviceRelations.c)
 *     PopBootStatGet @ 0x140A348F8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A34CDC (PopBootStatSet.c)
 *     RtlUnlockBootStatusData @ 0x140A35050 (RtlUnlockBootStatusData.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140A35670 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140A356B0 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     IoWMISystemControl @ 0x140A373A4 (IoWMISystemControl.c)
 *     WmipGetRegistryHideMachine @ 0x140A37A14 (WmipGetRegistryHideMachine.c)
 *     PfSnGetCompletedTrace @ 0x140A395F0 (PfSnGetCompletedTrace.c)
 *     ExpGetSystemFlushInformation @ 0x140A397A4 (ExpGetSystemFlushInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 *     EtwpFreeStackCache @ 0x140A3A000 (EtwpFreeStackCache.c)
 *     SiGetSystemDeviceName @ 0x140A3A6D8 (SiGetSystemDeviceName.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A3B0C0 (SepDereferenceLowBoxNumberEntry.c)
 *     WheapPredictiveFailureAnalysis @ 0x140A3B4F0 (WheapPredictiveFailureAnalysis.c)
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 *     SepGetLogonSessionAccountInfo @ 0x140A3C49C (SepGetLogonSessionAccountInfo.c)
 *     EtwpEnableTrace @ 0x140A3E5DC (EtwpEnableTrace.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     IopErrorLogThread @ 0x140A3FC00 (IopErrorLogThread.c)
 *     PiDqActionDataGetChangedProperties @ 0x140A406E4 (PiDqActionDataGetChangedProperties.c)
 *     PiDqGrowPropertyArray @ 0x140A40B5C (PiDqGrowPropertyArray.c)
 *     WmipCachePtrs @ 0x140A41C58 (WmipCachePtrs.c)
 *     SepUpdateLogonSessionTrack @ 0x140A427E4 (SepUpdateLogonSessionTrack.c)
 *     SepGetLowBoxNumberEntry @ 0x140A42C4C (SepGetLowBoxNumberEntry.c)
 *     MiDeleteTrimViewInfoList @ 0x140A42F00 (MiDeleteTrimViewInfoList.c)
 *     MiInSwapStoreContextDereference @ 0x140A43B78 (MiInSwapStoreContextDereference.c)
 *     IopRaiseInformationalHardError @ 0x140A44BD0 (IopRaiseInformationalHardError.c)
 *     IopApcHardError @ 0x140A44C60 (IopApcHardError.c)
 *     IopRaiseHardError @ 0x140A44CA0 (IopRaiseHardError.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x140A46368 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A46438 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     SepExpandDynamic @ 0x140A46A94 (SepExpandDynamic.c)
 *     MiAllocatePerSessionProtos @ 0x140A46D70 (MiAllocatePerSessionProtos.c)
 *     PopUnicodeStringDeepCopy @ 0x140A473D8 (PopUnicodeStringDeepCopy.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 *     RtlReleasePrivilege @ 0x140A4850C (RtlReleasePrivilege.c)
 *     SiQueryProperty @ 0x140A48990 (SiQueryProperty.c)
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x140A4927C (EtwpFreeTraceBufferPool.c)
 *     EtwpFreeSoftRestartContext @ 0x140A49584 (EtwpFreeSoftRestartContext.c)
 *     WmipDSCleanup @ 0x140A49A00 (WmipDSCleanup.c)
 *     RtlpFreeRangeListEntry @ 0x140A4A338 (RtlpFreeRangeListEntry.c)
 *     PopRequestShutdownWait @ 0x140A4ADD4 (PopRequestShutdownWait.c)
 *     MiBuildNewCloneDescriptor @ 0x140A4C34C (MiBuildNewCloneDescriptor.c)
 *     WmipCopyFromEventQueues @ 0x140A4CE20 (WmipCopyFromEventQueues.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x140A4D140 (SPCallServerHandleGetAppPolicyValue.c)
 *     WmipQueueNotification @ 0x140A4DAF4 (WmipQueueNotification.c)
 *     PspFreeStorage @ 0x140A4E844 (PspFreeStorage.c)
 *     SepCreateClaimAttributes @ 0x140A4EA70 (SepCreateClaimAttributes.c)
 *     NtSystemDebugControl @ 0x140A4F080 (NtSystemDebugControl.c)
 *     PipMakeGloballyUniqueId @ 0x140A4FA70 (PipMakeGloballyUniqueId.c)
 *     PiControlGetDeviceStack @ 0x140A5027C (PiControlGetDeviceStack.c)
 *     PopFxTraceDeviceRegistration @ 0x140A505AC (PopFxTraceDeviceRegistration.c)
 *     CmpDeleteKcbCache @ 0x140A50BF4 (CmpDeleteKcbCache.c)
 *     PnpFreeInterruptInformation @ 0x140A510F0 (PnpFreeInterruptInformation.c)
 *     KIsUnlockSettingEnabled @ 0x140A515A4 (KIsUnlockSettingEnabled.c)
 *     ExpQueryChannelInformation @ 0x140A518D8 (ExpQueryChannelInformation.c)
 *     PiDqFreeGenericTableEntry @ 0x140A51D60 (PiDqFreeGenericTableEntry.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A524DC (IopSetDeviceSecurityDescriptor.c)
 *     EtwUnregister @ 0x140A52EC0 (EtwUnregister.c)
 *     MmAllocateMappingAddressEx @ 0x140A531F0 (MmAllocateMappingAddressEx.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x140A546D4 (EtwpCoverageSamplerAllocateTable.c)
 *     PnpProcessRelation @ 0x140A54854 (PnpProcessRelation.c)
 *     IopPnPDispatch @ 0x140A55010 (IopPnPDispatch.c)
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 *     VmpFreeMemoryRanges @ 0x140A55BC4 (VmpFreeMemoryRanges.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140A55D28 (PopDiagTraceFxComponentAccounting.c)
 *     MmFreeMappingAddress @ 0x140A55EC0 (MmFreeMappingAddress.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140A56300 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     SepDuplicateClaimAttributes @ 0x140A565F0 (SepDuplicateClaimAttributes.c)
 *     PiUEventBroadcastEventWorker @ 0x140A56790 (PiUEventBroadcastEventWorker.c)
 *     PspJobIoRateControlDisable @ 0x140A56A68 (PspJobIoRateControlDisable.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A57370 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     BiLoadSystemStore @ 0x140A575F0 (BiLoadSystemStore.c)
 *     BcdGetSystemStorePath @ 0x140A57798 (BcdGetSystemStorePath.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A579F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140A58968 (PiDmGetReferencedObjectFromProperty.c)
 *     ExpWnfFreeScopeInstance @ 0x140A58A14 (ExpWnfFreeScopeInstance.c)
 *     MIDL_user_free @ 0x140A58E50 (MIDL_user_free.c)
 *     NtSetEaFile @ 0x140A59680 (NtSetEaFile.c)
 *     ObpDeleteSymbolicLink @ 0x140A59C30 (ObpDeleteSymbolicLink.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x140A5A6E4 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A5A754 (PpmIdleGetConcurrencyStats.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140A5AC58 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     IopGetRootDevices @ 0x140A5ADB8 (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A5AFD8 (IopInitializeDeviceInstanceKey.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A5B55C (RtlpGetPolicyValueForSystemCapability.c)
 *     PopAnsiStringToUnicodeString @ 0x140A5BA50 (PopAnsiStringToUnicodeString.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x140A5BF44 (VrpDereferenceDiffHiveEntryWithLock.c)
 *     MiDeleteProcessHotPatchContext @ 0x140A5C174 (MiDeleteProcessHotPatchContext.c)
 *     ExpTranslateEfiPath @ 0x140A5C19C (ExpTranslateEfiPath.c)
 *     ExpParseEfiPath @ 0x140A5C430 (ExpParseEfiPath.c)
 *     ExpTranslateSymbolicLink @ 0x140A5C5A4 (ExpTranslateSymbolicLink.c)
 *     ExpFindDiskSignature @ 0x140A5C820 (ExpFindDiskSignature.c)
 *     ExpGetPartitionTableInfo @ 0x140A5C9EC (ExpGetPartitionTableInfo.c)
 *     SepDeleteLogonSessionTrack @ 0x140A5CE20 (SepDeleteLogonSessionTrack.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A5D478 (MiReplaceRotateWithDemandZero.c)
 *     PiCMGetObjectPropertyKeys @ 0x140A5DA64 (PiCMGetObjectPropertyKeys.c)
 *     PiDevCfgBuildIndirectString @ 0x140A5E534 (PiDevCfgBuildIndirectString.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140A5E938 (PopUmpoSendPowerRequestCreate.c)
 *     PfpRpControlRequest @ 0x140A5EA1C (PfpRpControlRequest.c)
 *     PfpRpControlRequestCopy @ 0x140A5EAF0 (PfpRpControlRequestCopy.c)
 *     PfpRpCHashAddEntries @ 0x140A5EF34 (PfpRpCHashAddEntries.c)
 *     NtNotifyChangeSession @ 0x140A5FDF0 (NtNotifyChangeSession.c)
 *     IoCreateDeviceSecure @ 0x140A603E0 (IoCreateDeviceSecure.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140A6063C (IopCreateSecureDeviceClassSettings.c)
 *     IopUpdateSecureDeviceClassState @ 0x140A60830 (IopUpdateSecureDeviceClassState.c)
 *     EtwpReferenceStackLookasideList @ 0x140A60F90 (EtwpReferenceStackLookasideList.c)
 *     KeAllocateCalloutStackEx @ 0x140A61060 (KeAllocateCalloutStackEx.c)
 *     MiReleaseDriverPtes @ 0x140A611E4 (MiReleaseDriverPtes.c)
 *     MiCreateRotateView @ 0x140A615A8 (MiCreateRotateView.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140A61658 (PiBuildDeviceNodeInstancePath.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140A61D70 (PnpInitializeInheritedRestrictedSd.c)
 *     PopPowerRequestStatsIdConcat @ 0x140A61F78 (PopPowerRequestStatsIdConcat.c)
 *     CmpDeleteLightWeightTransaction @ 0x140A62200 (CmpDeleteLightWeightTransaction.c)
 *     PopDirectedDripsDiagRundownBroadcastTrees @ 0x140A62C8C (PopDirectedDripsDiagRundownBroadcastTrees.c)
 *     SPCallServerHandleUpdatePolicies @ 0x140A6354C (SPCallServerHandleUpdatePolicies.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     EtwpTimLogMitigationForProcess @ 0x140A63DF0 (EtwpTimLogMitigationForProcess.c)
 *     _RegRtlDeletePathInternal @ 0x140A64448 (_RegRtlDeletePathInternal.c)
 *     IoReplaceFileObjectName @ 0x140A64D50 (IoReplaceFileObjectName.c)
 *     ExpQueryMemoryTopologyInformation @ 0x140A64FA0 (ExpQueryMemoryTopologyInformation.c)
 *     IopQueryResourceHandlerInterface @ 0x140A659A4 (IopQueryResourceHandlerInterface.c)
 *     HvWriteExternal @ 0x140A66710 (HvWriteExternal.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140A66970 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A66A24 (_CmGetRegKeySecurityDescriptor.c)
 *     IopLoadUnloadDriver @ 0x140A66EE0 (IopLoadUnloadDriver.c)
 *     PpmEventTraceProcessorIdle @ 0x140A67844 (PpmEventTraceProcessorIdle.c)
 *     PiAuditDeviceOperation @ 0x140A68944 (PiAuditDeviceOperation.c)
 *     PopPowerRequestTableFree @ 0x140A69A70 (PopPowerRequestTableFree.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140A69A90 (EtwpCoverageSamplerFreeTable.c)
 *     PiRearrangeDeviceInstances @ 0x140A69D5C (PiRearrangeDeviceInstances.c)
 *     EtwpTiQueryTokenIdentity @ 0x140A69F44 (EtwpTiQueryTokenIdentity.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A6B0FC (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x140A6B450 (PopBcdSetupResumeObject.c)
 *     PopBcdReadElement @ 0x140A6B548 (PopBcdReadElement.c)
 *     PspCreateSecureThread @ 0x140A6BAE8 (PspCreateSecureThread.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140A6C2F8 (PiDevCfgEnforceDevicePolicy.c)
 *     PiUpdateDriverDBCache @ 0x140A6C434 (PiUpdateDriverDBCache.c)
 *     PopDiagTraceThermalRequest @ 0x140A6CC64 (PopDiagTraceThermalRequest.c)
 *     PnpQueryBusInformation @ 0x140A6CF10 (PnpQueryBusInformation.c)
 *     PnpBusTypeGuidGetIndex @ 0x140A6D00C (PnpBusTypeGuidGetIndex.c)
 *     MiFreeCloneDescriptor @ 0x140A6D78C (MiFreeCloneDescriptor.c)
 *     FsRtlNotifyUninitializeSync @ 0x140A6D8B0 (FsRtlNotifyUninitializeSync.c)
 *     VrpPreLoadKey @ 0x140A6D8DC (VrpPreLoadKey.c)
 *     PoFxAbandonDevice @ 0x140A6EBB4 (PoFxAbandonDevice.c)
 *     PopPepUnregisterDevice @ 0x140A6F098 (PopPepUnregisterDevice.c)
 *     IopCreateArcName @ 0x140A6FCE0 (IopCreateArcName.c)
 *     EtwpCreateUmReplyObject @ 0x140A703BC (EtwpCreateUmReplyObject.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A706F4 (IopCallDriverReinitializationRoutines.c)
 *     SepDeleteClaimAttributes @ 0x140A71894 (SepDeleteClaimAttributes.c)
 *     WmipISCleanup @ 0x140A719F0 (WmipISCleanup.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140A71A44 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A71FC0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PopSetHiberFileMcb @ 0x140A72520 (PopSetHiberFileMcb.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140A72CEC (PopFxFindDeviceAndAllocateUniqueId.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A73678 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A73AFC (_CmDeleteDeviceRegKeyWorker.c)
 *     ObpSetDeviceMap @ 0x140A73E78 (ObpSetDeviceMap.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A741F0 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140A74938 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x140A75198 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140A75568 (EtwpGetAutoLoggerEventNameFilter.c)
 *     PopGetPowerRequestListInfo @ 0x140A76148 (PopGetPowerRequestListInfo.c)
 *     RtlLockBootStatusData @ 0x140A76500 (RtlLockBootStatusData.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140A767EC (PiProcessNewDeviceNodeAsync.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     EtwpLogPmcCounterRundown @ 0x140A7871C (EtwpLogPmcCounterRundown.c)
 *     PiCMRegisterDeviceInterface @ 0x140A79094 (PiCMRegisterDeviceInterface.c)
 *     SiQuerySystemInformationString @ 0x140A7AA58 (SiQuerySystemInformationString.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A7B2F8 (_CmGetDeviceCompoundFiltersWorker.c)
 *     FsRtlDeleteTunnelCache @ 0x140A7BBE0 (FsRtlDeleteTunnelCache.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A7C058 (_CmOpenDevicePanelRegKeyWorker.c)
 *     PopGenerateDeviceFriendlyName @ 0x140A7C424 (PopGenerateDeviceFriendlyName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7CBF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140A7D300 (CmpLightWeightCleanupSetSecDescUoW.c)
 *     KeFreeCalloutStack @ 0x140A7D8D0 (KeFreeCalloutStack.c)
 *     MiCreateLargePageVad @ 0x140A7D970 (MiCreateLargePageVad.c)
 *     DbgkpSectionToFileHandle @ 0x140A7DB28 (DbgkpSectionToFileHandle.c)
 *     MmGetFileNameForSection @ 0x140A7DBDC (MmGetFileNameForSection.c)
 *     PiPnpFreePdoDeviceList @ 0x140A7DE18 (PiPnpFreePdoDeviceList.c)
 *     BiTranslateSymbolicLink @ 0x140A7EA6C (BiTranslateSymbolicLink.c)
 *     PiDqDeleteUserObject @ 0x140A7EF78 (PiDqDeleteUserObject.c)
 *     PsCreateVsmEnclave @ 0x140A7F734 (PsCreateVsmEnclave.c)
 *     DbgkRegisterErrorPort @ 0x140A7FE04 (DbgkRegisterErrorPort.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140A816E8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     PspReleaseReferenceToSession @ 0x140A81850 (PspReleaseReferenceToSession.c)
 *     BiUnloadHiveByHandle @ 0x140A81B58 (BiUnloadHiveByHandle.c)
 *     BiUnloadHiveByName @ 0x140A81BF0 (BiUnloadHiveByName.c)
 *     _CmGetDeviceInterfaceRegKeySecurityDescriptor @ 0x140A81E48 (_CmGetDeviceInterfaceRegKeySecurityDescriptor.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A82090 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140A856F4 (BiIssueGetDriveLayoutIoctl.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140A85BE0 (PsSetLoadImageNotifyRoutineEx.c)
 *     PopPdcCsDeviceNotification @ 0x140A85D68 (PopPdcCsDeviceNotification.c)
 *     PopDiagQueryDevicePropertyString @ 0x140A86280 (PopDiagQueryDevicePropertyString.c)
 *     CmpAddStringToMapping @ 0x140A8649C (CmpAddStringToMapping.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140A86DC0 (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaAllocateScatterMemory @ 0x140A86E40 (HalpDmaAllocateScatterMemory.c)
 *     IopDeleteDriver @ 0x140A86F40 (IopDeleteDriver.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     PiUEventHandleVetoEvent @ 0x140A8758C (PiUEventHandleVetoEvent.c)
 *     WmipLegacyEtwWorker @ 0x140A876B0 (WmipLegacyEtwWorker.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140A87E30 (PsRemoveCreateThreadNotifyRoutine.c)
 *     ExpWnfGetPermanentDataStore @ 0x140A87FEC (ExpWnfGetPermanentDataStore.c)
 *     PoClearBroadcast @ 0x140A881F0 (PoClearBroadcast.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8835C (_SysCtxRegOpenCurrentUserKey.c)
 *     PopCloneUnicodeString @ 0x140A88654 (PopCloneUnicodeString.c)
 *     PiQueryPowerRelations @ 0x140A887F8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140A88D80 (PiQueryPowerDependencyRelations.c)
 *     SepCheckCapabilities @ 0x140A8926C (SepCheckCapabilities.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A89DA0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     IopReadFileScatter @ 0x140A8AFD8 (IopReadFileScatter.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8B600 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDeferSetInterfaceState @ 0x140A8C6C0 (PiDeferSetInterfaceState.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8C77C (PspSetCreateProcessNotifyRoutine.c)
 *     KeCleanupImageTracepoints @ 0x140A8C874 (KeCleanupImageTracepoints.c)
 *     PnpUnloadAttachedDriver @ 0x140A8D55C (PnpUnloadAttachedDriver.c)
 *     PnpAddVetoInformation @ 0x140A8D6C4 (PnpAddVetoInformation.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A8DDE0 (PiDevCfgResolveVariableExpression.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 *     MiConstructLoaderEntry @ 0x140A8F794 (MiConstructLoaderEntry.c)
 *     PnpBuildCmResourceList @ 0x140A8FE84 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x140A9031C (IopChildToRootTranslation.c)
 *     MiFreePlaceholderStorage @ 0x140A91218 (MiFreePlaceholderStorage.c)
 *     PoDiagFreeUsermodeStack @ 0x140A913A8 (PoDiagFreeUsermodeStack.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140A9201C (PiRemoveDeferredSetInterfaceState.c)
 *     IopWriteFileGather @ 0x140A920EC (IopWriteFileGather.c)
 *     EtwpTiFreeTokenIdentity @ 0x140A93010 (EtwpTiFreeTokenIdentity.c)
 *     PopPepRegisterDevice @ 0x140A934A0 (PopPepRegisterDevice.c)
 *     WmipGetFilePDO @ 0x140A93DA4 (WmipGetFilePDO.c)
 *     PpmPerfResizeHistory @ 0x140A940A8 (PpmPerfResizeHistory.c)
 *     SepAddTokenOriginClaim @ 0x140A94630 (SepAddTokenOriginClaim.c)
 *     MiFreeRetpolineImportInfo @ 0x140A9495C (MiFreeRetpolineImportInfo.c)
 *     SeReleaseImageValidationContext @ 0x140A94A68 (SeReleaseImageValidationContext.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A94D38 (BiConvertNtDeviceToBootEnvironment.c)
 *     BcdEnumerateDisks @ 0x140A955F0 (BcdEnumerateDisks.c)
 *     MiCloneDiscardVadCommit @ 0x140A96358 (MiCloneDiscardVadCommit.c)
 *     EtwpUpdateKernelGroupsWork @ 0x140A96C80 (EtwpUpdateKernelGroupsWork.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A97B30 (PopFxUpdateVetoMaskWork.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A97D54 (PiDevCfgResolveVariableKeyHandle.c)
 *     IoWMIExecuteMethod @ 0x140A985C0 (IoWMIExecuteMethod.c)
 *     PiSwPdoAssociationFree @ 0x140A98FBC (PiSwPdoAssociationFree.c)
 *     MmFreeNonCachedMemory @ 0x140A99000 (MmFreeNonCachedMemory.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 *     PfpRpCHashEmpty @ 0x140A99744 (PfpRpCHashEmpty.c)
 *     CMFFreeFn @ 0x140A99810 (CMFFreeFn.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140A99D74 (PpmEventTracePlatformIdleAccounting.c)
 *     MiFreeLoadedImportList @ 0x140A9A0D8 (MiFreeLoadedImportList.c)
 *     PipFreeBindingId @ 0x140A9A2DC (PipFreeBindingId.c)
 *     CmpDelayFreeRMWorker @ 0x140A9A310 (CmpDelayFreeRMWorker.c)
 *     PnpLogVetoInformation @ 0x140A9A584 (PnpLogVetoInformation.c)
 *     MiLoadHotPatchForUserSid @ 0x140A9AA90 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 *     PopFreeWakeInfo @ 0x140A9B6F0 (PopFreeWakeInfo.c)
 *     PopFreeWakeSource @ 0x140A9B76C (PopFreeWakeSource.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140A9DA78 (EtwTimLogRedirectionTrustPolicy.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9E6B0 (PiCreateDriverSwDeviceCallback.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140A9F1EC (PpmEventTraceCoordinatedIdleStates.c)
 *     PopClearTransitionCheckpoints @ 0x140A9F68C (PopClearTransitionCheckpoints.c)
 *     IopQuerySecureDeviceClassState @ 0x140A9FB70 (IopQuerySecureDeviceClassState.c)
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 *     WmipMRCleanup @ 0x140AA14B0 (WmipMRCleanup.c)
 *     BiGetSavedBootEntry @ 0x140AA1720 (BiGetSavedBootEntry.c)
 *     CmpCreateHiveRootCell @ 0x140AA2078 (CmpCreateHiveRootCell.c)
 *     PnpDeleteDeviceInterfaces @ 0x140AA2768 (PnpDeleteDeviceInterfaces.c)
 *     PopDiagTraceSleepStudyStop @ 0x140AA2B4C (PopDiagTraceSleepStudyStop.c)
 *     IopSendMessageToTrackService @ 0x140AA335C (IopSendMessageToTrackService.c)
 *     CmRmFinalizeRecovery @ 0x140AA3958 (CmRmFinalizeRecovery.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140AA6280 (IopAllocatePassiveInterruptBlock.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AA6790 (PsRemoveLoadImageNotifyRoutine.c)
 *     SepInformLsaOfDeletedLogon @ 0x140AA6914 (SepInformLsaOfDeletedLogon.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6BD8 (PopBootStatRestoreDefaults.c)
 *     RtlGenerateClass5Guid @ 0x140AA7730 (RtlGenerateClass5Guid.c)
 *     ArbAllocateEntry @ 0x140AA8760 (ArbAllocateEntry.c)
 *     MiQueryProcessActivePatches @ 0x140AA9284 (MiQueryProcessActivePatches.c)
 *     WmipGenerateMofResourceNotification @ 0x140AAB0F4 (WmipGenerateMofResourceNotification.c)
 *     PfpSourceBuildVaArray @ 0x140AAB45C (PfpSourceBuildVaArray.c)
 *     PopReadResumeContext @ 0x140AABF98 (PopReadResumeContext.c)
 *     PopReadPagesFromHiberFile @ 0x140AAC0F0 (PopReadPagesFromHiberFile.c)
 *     PopCleanCoolingExtension @ 0x140AAC570 (PopCleanCoolingExtension.c)
 *     RtlpComputeMergedAcl @ 0x140AAC9C4 (RtlpComputeMergedAcl.c)
 *     MiDeleteVadHotPatchState @ 0x140AAD494 (MiDeleteVadHotPatchState.c)
 *     ExpGetDriveGeometry @ 0x140AAD5F0 (ExpGetDriveGeometry.c)
 *     HalpUnregisterPmuNotification @ 0x140AADA0C (HalpUnregisterPmuNotification.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AADC98 (MiGetPhysicalMemoryRanges.c)
 *     BiExportEfiBootManager @ 0x140AADFCC (BiExportEfiBootManager.c)
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 *     EmpProviderRegister @ 0x140AAEE50 (EmpProviderRegister.c)
 *     MiReleaseHotPatchResources @ 0x140AAF528 (MiReleaseHotPatchResources.c)
 *     BiGetPhysicalDriveName @ 0x140AAF94C (BiGetPhysicalDriveName.c)
 *     PpmSetSimulatedLoad @ 0x140AAFAA0 (PpmSetSimulatedLoad.c)
 *     MiAllocateUserPhysicalRanges @ 0x140AAFD18 (MiAllocateUserPhysicalRanges.c)
 *     PopBootStatCheckIntegrity @ 0x140AB00C0 (PopBootStatCheckIntegrity.c)
 *     _CmGetParentDeviceContainerId @ 0x140AB0634 (_CmGetParentDeviceContainerId.c)
 *     WmipProcessSynchronousEtw @ 0x140AB07F0 (WmipProcessSynchronousEtw.c)
 *     WmipDereferenceEvent @ 0x140AB08D8 (WmipDereferenceEvent.c)
 *     PpmClearSimulatedLoad @ 0x140AB0B2C (PpmClearSimulatedLoad.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140AB0FE4 (EtwpCovSampCaptureFreeLookasides.c)
 *     AdtpBuildObjectTypeStrings @ 0x140AB2284 (AdtpBuildObjectTypeStrings.c)
 *     PspSetJobIoRateControlForVolume @ 0x140AB24C8 (PspSetJobIoRateControlForVolume.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB2AE0 (MiCreateFileOnlyImageFixupList.c)
 *     PopLoadResumeContext @ 0x140AB314C (PopLoadResumeContext.c)
 *     sub_140AB32DC @ 0x140AB32DC (sub_140AB32DC.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140AB4674 (PopDiagTracePowerTransitionEnd.c)
 *     IopSafebootDriverLoad @ 0x140AB4A18 (IopSafebootDriverLoad.c)
 *     IopGetPersistedStateLocation @ 0x140AB50D8 (IopGetPersistedStateLocation.c)
 *     sub_140AB56C0 @ 0x140AB56C0 (sub_140AB56C0.c)
 *     sub_140AB5CF0 @ 0x140AB5CF0 (sub_140AB5CF0.c)
 *     PiCMQueryRemove @ 0x140AB672C (PiCMQueryRemove.c)
 *     BiBindEfiEntryToBcdObject @ 0x140AB7300 (BiBindEfiEntryToBcdObject.c)
 *     PiUEventFreeProcessImagePath @ 0x140AB79A8 (PiUEventFreeProcessImagePath.c)
 *     MiReturnProcessVads @ 0x140AB7BB4 (MiReturnProcessVads.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140AB7C00 (IopDeviceObjectFromSymbolicName.c)
 *     PopFxConvertV1Components @ 0x140AB7D1C (PopFxConvertV1Components.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140AB7EB4 (ExStopRecordingIRTimerExpiries.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140AB8534 (HalpDmaGrowContiguousMapBuffers.c)
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 *     sub_140AB8F9C @ 0x140AB8F9C (sub_140AB8F9C.c)
 *     sub_140AB9580 @ 0x140AB9580 (sub_140AB9580.c)
 *     PopFxTracePerfRegistration @ 0x140AB99D0 (PopFxTracePerfRegistration.c)
 *     EtwpCCSwapStart @ 0x140ABA320 (EtwpCCSwapStart.c)
 *     MiCacheImageSymbols @ 0x140ABAE40 (MiCacheImageSymbols.c)
 *     sub_140ABB360 @ 0x140ABB360 (sub_140ABB360.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x140ABBBD4 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     sub_140ABC324 @ 0x140ABC324 (sub_140ABC324.c)
 *     PopDiagTraceCsExitReason @ 0x140ABCB20 (PopDiagTraceCsExitReason.c)
 *     MiFreeVadEventBitmap @ 0x140ABD7CC (MiFreeVadEventBitmap.c)
 *     PiDevCfgFreeDriverNode @ 0x140ABF4A0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryDriverNode @ 0x140AC0A0C (PiDevCfgQueryDriverNode.c)
 *     PiSwGetChildPdo @ 0x140AC1360 (PiSwGetChildPdo.c)
 *     NtQueryDirectoryObject @ 0x140AC1EB0 (NtQueryDirectoryObject.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     PspThreadDelete @ 0x140ACF4E0 (PspThreadDelete.c)
 *     PsCallEnclave @ 0x140AD0080 (PsCallEnclave.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SepTokenDeleteMethod @ 0x140AD6F50 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 *     NtFilterBootOption @ 0x140AD74D0 (NtFilterBootOption.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 *     EtwpCoverageEnsureContext @ 0x140ADAD8C (EtwpCoverageEnsureContext.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ADB280 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpCovSampContextCleanup @ 0x140ADB73C (EtwpCovSampContextCleanup.c)
 *     EtwpCovSampContextPruneModules @ 0x140ADB9FC (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140ADBF60 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     NtQueryWnfStateNameInformation @ 0x140AE4930 (NtQueryWnfStateNameInformation.c)
 *     CmpAllocatePostBlock @ 0x140AE51DC (CmpAllocatePostBlock.c)
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140AE7164 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x140AE7708 (CmpStartCLFSLog.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 *     VrpPostOpenOrCreate @ 0x140AEB874 (VrpPostOpenOrCreate.c)
 *     HalpHandlePreviousMcaErrors @ 0x140B4D904 (HalpHandlePreviousMcaErrors.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B4DA4C (HalpHandlePreviousMcaErrorsOnProcessor.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140B4FD28 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140B4FF90 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x140B50324 (HalpInitializeGenericErrorSource.c)
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     PnprQuiesceWorker @ 0x140B570F0 (PnprQuiesceWorker.c)
 *     KiApplyProcessorDpcLimits @ 0x140B57C1C (KiApplyProcessorDpcLimits.c)
 *     KiFreeThreadCycleTable @ 0x140B58220 (KiFreeThreadCycleTable.c)
 *     KiUpdateSavedSupervisorState @ 0x140B593B0 (KiUpdateSavedSupervisorState.c)
 *     PopGetBitlockerKeyLocation @ 0x140B5D82C (PopGetBitlockerKeyLocation.c)
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 *     PopProcessDeviceWakeSource @ 0x140B5E164 (PopProcessDeviceWakeSource.c)
 *     PopGetHwConfigurationSignature @ 0x140B5EEA4 (PopGetHwConfigurationSignature.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140B61A18 (PopDiagTraceFirmwareS3Stats.c)
 *     BapdRecordFirmwareBootStats @ 0x140B62D80 (BapdRecordFirmwareBootStats.c)
 *     ExpSystemErrorHandler2 @ 0x140B63540 (ExpSystemErrorHandler2.c)
 *     MmInitializeProcessor @ 0x140B64108 (MmInitializeProcessor.c)
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 *     IopFreePoDeviceNotifyListHead @ 0x140B6B7F0 (IopFreePoDeviceNotifyListHead.c)
 *     PopCloneRange @ 0x140B6DB44 (PopCloneRange.c)
 *     PopProcessWakeSourceWork @ 0x140B6E318 (PopProcessWakeSourceWork.c)
 *     IoUnregisterShutdownNotification @ 0x140B6EAB0 (IoUnregisterShutdownNotification.c)
 *     PfpScenCtxScenarioSet @ 0x140B6EDB0 (PfpScenCtxScenarioSet.c)
 *     ExGetNextWakeTime @ 0x140B6FA08 (ExGetNextWakeTime.c)
 *     MiDeleteEnclavePages @ 0x140B6FC18 (MiDeleteEnclavePages.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B74210 (ExpAllocatePoolWithQuotaTag.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     KdpPullRemoteFile @ 0x140B78B48 (KdpPullRemoteFile.c)
 *     IovUnloadDrivers @ 0x140B8478C (IovUnloadDrivers.c)
 *     IovpBuildDriverObjectList @ 0x140B84894 (IovpBuildDriverObjectList.c)
 *     VfFreeCapturedUnicodeString @ 0x140B84E64 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140B85008 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140B85708 (ViInitializeLocalSystemDescriptor.c)
 *     ViAllocateMapRegisterFile @ 0x140B89EAC (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140B8AB9C (ViFreeMapRegisterFile.c)
 *     ViHalFreeDomainCommonBuffer @ 0x140B8B178 (ViHalFreeDomainCommonBuffer.c)
 *     ViReleaseDmaAdapter @ 0x140B8BA1C (ViReleaseDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140B8BBC0 (ViSpecialAllocateCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x140B8BD3C (ViSpecialFreeCommonBuffer.c)
 *     VfDriverEnableVerifierForAll @ 0x140B8C3B4 (VfDriverEnableVerifierForAll.c)
 *     VfTargetEtwRegister @ 0x140B8D4AC (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140B8D5A0 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140B8DB44 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPtGenerateTraceInformation @ 0x140B8DF6C (VfPtGenerateTraceInformation.c)
 *     ViPtFreePoolInfoEntryCallback @ 0x140B8E880 (ViPtFreePoolInfoEntryCallback.c)
 *     ViPtFreeStackInfoEntryCallback @ 0x140B8E8D0 (ViPtFreeStackInfoEntryCallback.c)
 *     ViPtPluginUnload @ 0x140B8EA50 (ViPtPluginUnload.c)
 *     ViIrpAllocateLockedPacket @ 0x140B900BC (ViIrpAllocateLockedPacket.c)
 *     VerifierExFreePool @ 0x140B93810 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140B93890 (VerifierExFreePoolWithTag.c)
 *     ViPendingCompleteAfterWait @ 0x140B93D28 (ViPendingCompleteAfterWait.c)
 *     ViPendingDelayCompletion @ 0x140B93E88 (ViPendingDelayCompletion.c)
 *     VfBranchTracingPluginEntry @ 0x140B957E0 (VfBranchTracingPluginEntry.c)
 *     VfKeCheckForChanges @ 0x140B97FFC (VfKeCheckForChanges.c)
 *     VfFaultsRemoveAllApps @ 0x140B986BC (VfFaultsRemoveAllApps.c)
 *     VfFaultsRemoveAllTags @ 0x140B98754 (VfFaultsRemoveAllTags.c)
 *     ViCreateProcessCallbackInternal @ 0x140B988D0 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140B989F8 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x140B98AF4 (ViFaultsAddTagNoDuplicates.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140B99018 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkRemoveImportEntry @ 0x140B99AD0 (ViThunkRemoveImportEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140B99B48 (ViThunkReplaceAllThunkedImports.c)
 *     VfDeadlockInitialize @ 0x140B99DEC (VfDeadlockInitialize.c)
 *     VfPoolCheckForLeaks @ 0x140B9C350 (VfPoolCheckForLeaks.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140B9C510 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     VfSuspectDifRemoveEntry @ 0x140B9C640 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversAllocateEntryEx @ 0x140B9C73C (VfSuspectDriversAllocateEntryEx.c)
 *     VfSuspectDriversRemove @ 0x140B9CEA4 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B9CF44 (VfSuspectDriversUnloadCallback.c)
 *     ViPacketNotificationCallback @ 0x140B9D530 (ViPacketNotificationCallback.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x140B9D59C (VfIrpLogDeleteDeviceLogs.c)
 *     VfIrpLogRetrieveWmiData @ 0x140B9D874 (VfIrpLogRetrieveWmiData.c)
 *     VfIrpLogUnlockDatabase @ 0x140B9DB54 (VfIrpLogUnlockDatabase.c)
 *     ViIrpLogExposeWmiCallback @ 0x140B9DC50 (ViIrpLogExposeWmiCallback.c)
 *     VfAddVerifierEntry @ 0x140B9E32C (VfAddVerifierEntry.c)
 *     ViIrqlPluginUnload @ 0x140B9F780 (ViIrqlPluginUnload.c)
 *     VerifierIoWMIWriteEvent @ 0x140BA3650 (VerifierIoWMIWriteEvent.c)
 *     VerifierIoConnectInterrupt @ 0x140BA3AE0 (VerifierIoConnectInterrupt.c)
 *     VerifierIoConnectInterruptEx @ 0x140BA3BE0 (VerifierIoConnectInterruptEx.c)
 *     VerifierIoDisconnectInterrupt @ 0x140BA3CC0 (VerifierIoDisconnectInterrupt.c)
 *     VerifierIoDisconnectInterruptEx @ 0x140BA3D10 (VerifierIoDisconnectInterruptEx.c)
 *     VfIrpDatabaseUninitialize @ 0x140BA6110 (VfIrpDatabaseUninitialize.c)
 *     ViSpRtlReplaceStringBuffer @ 0x140BA6E44 (ViSpRtlReplaceStringBuffer.c)
 *     VfPnpTestStartedPdoStack @ 0x140BA75A0 (VfPnpTestStartedPdoStack.c)
 *     ViThunkFreeSharedThunksArray @ 0x140BA85A0 (ViThunkFreeSharedThunksArray.c)
 *     IovFreeIrpPrivate @ 0x140BA8F30 (IovFreeIrpPrivate.c)
 *     VfThunkCheckDriverUnloading @ 0x140BAAF14 (VfThunkCheckDriverUnloading.c)
 *     HdlspAddLogEntry @ 0x140BAF008 (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x140BB0600 (HdlspSetBlueScreenInformation.c)
 *     ResFwpDestroyBackground @ 0x140BB3B3C (ResFwpDestroyBackground.c)
 *     ResFwpPageOutBackground @ 0x140BB3C34 (ResFwpPageOutBackground.c)
 *     ResFwFreeContext @ 0x140BB54C4 (ResFwFreeContext.c)
 *     BootApplicationPersistentDataProcess @ 0x140BE052C (BootApplicationPersistentDataProcess.c)
 *     CreateMiniNtBootKey @ 0x140C0C220 (CreateMiniNtBootKey.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     HalpDmaFinalizeDoubleBufferingDisposition @ 0x140C0FC74 (HalpDmaFinalizeDoubleBufferingDisposition.c)
 *     HalpReportResourceUsage @ 0x140C10954 (HalpReportResourceUsage.c)
 *     HalpPciReportMmConfigAddressRange @ 0x140C1522C (HalpPciReportMmConfigAddressRange.c)
 *     HalpInitChipHacks @ 0x140C15B94 (HalpInitChipHacks.c)
 *     HalpAuditAcpiTables @ 0x140C15DF4 (HalpAuditAcpiTables.c)
 *     HalpAuditAllocateRsdtArrayTable @ 0x140C15EB0 (HalpAuditAllocateRsdtArrayTable.c)
 *     HalpAuditEnumerateRsdts @ 0x140C15F58 (HalpAuditEnumerateRsdts.c)
 *     IommupHvInitializeLibrary @ 0x140C16944 (IommupHvInitializeLibrary.c)
 *     CcInitializeCacheManager @ 0x140C17A88 (CcInitializeCacheManager.c)
 *     EmpParseCallbacks @ 0x140C1840C (EmpParseCallbacks.c)
 *     EmpParseEntryTypes @ 0x140C18644 (EmpParseEntryTypes.c)
 *     EmpParseInfDatabase @ 0x140C187C4 (EmpParseInfDatabase.c)
 *     EmpParseRuleExpression @ 0x140C18900 (EmpParseRuleExpression.c)
 *     EmpParseRuleTerm @ 0x140C18E50 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140C192EC (EmpParseRules.c)
 *     EmpParseStrings @ 0x140C19670 (EmpParseStrings.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140C197EC (EmpParseTargetRuleStringIndexList.c)
 *     EmpParseTargetRules @ 0x140C19B08 (EmpParseTargetRules.c)
 *     EmpRuleParserStackPop @ 0x140C19D64 (EmpRuleParserStackPop.c)
 *     CmpAppendSection @ 0x140C19FE8 (CmpAppendSection.c)
 *     CmpFreeLineList @ 0x140C1A180 (CmpFreeLineList.c)
 *     CmpParseInfBuffer @ 0x140C1A5C4 (CmpParseInfBuffer.c)
 *     FsRtlGetCompatibilityModeValue @ 0x140C1AC14 (FsRtlGetCompatibilityModeValue.c)
 *     FsRtlInitializeOplockPerf @ 0x140C1B2E8 (FsRtlInitializeOplockPerf.c)
 *     IopCreateArcNamesCd @ 0x140C1DE70 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140C1E3A4 (IopCreateArcNamesDisk.c)
 *     IopCreateUmdfDirectory @ 0x140C1E628 (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x140C1F1D4 (IopStoreArcInformation.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140C1F800 (IopCallBootDriverReinitializationRoutines.c)
 *     IopGetBootDiskInformation @ 0x140C1F8BC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140C201A8 (IopApplySystemPartitionProt.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140C21F0C (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C222B0 (PipCheckSystemFirmwareUpdated.c)
 *     PipCreateComputerId @ 0x140C22418 (PipCreateComputerId.c)
 *     PipFreeGroupTree @ 0x140C227E4 (PipFreeGroupTree.c)
 *     PipGetDriverTagPriority @ 0x140C22830 (PipGetDriverTagPriority.c)
 *     PipHardwareConfigInit @ 0x140C22B44 (PipHardwareConfigInit.c)
 *     PipInitDeviceOverrideCache @ 0x140C230E8 (PipInitDeviceOverrideCache.c)
 *     PipMigrateCleanService @ 0x140C23494 (PipMigrateCleanService.c)
 *     PipResetMatchingFilteredDevices @ 0x140C24080 (PipResetMatchingFilteredDevices.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C247C8 (PiCreateDriverDataDirectoryRoot.c)
 *     IoReportHalResourceUsage @ 0x140C24DD0 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x140C24FB8 (IopInitializeResourceMap.c)
 *     PiLastGoodCopyKeyContents @ 0x140C25504 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertCopyCallback @ 0x140C256D0 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C257A0 (PiLastGoodRevertLastKnownDirectory.c)
 *     IopAllocateLegacyBootResources @ 0x140C25F58 (IopAllocateLegacyBootResources.c)
 *     IopReportBootResources @ 0x140C260F0 (IopReportBootResources.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C26390 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C26530 (PiAuCreateStandardSecurityObject.c)
 *     PiAuFreeUserSids @ 0x140C26C74 (PiAuFreeUserSids.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C26D0C (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PipProcessPendingObjects @ 0x140C27D30 (PipProcessPendingObjects.c)
 *     IopFileUtilRename @ 0x140C2845C (IopFileUtilRename.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x140C28590 (IopFileUtilWalkDirectoryTreeTopDown.c)
 *     KiComputeDispatchInterruptCost @ 0x140C29574 (KiComputeDispatchInterruptCost.c)
 *     KiComputeNumaCosts @ 0x140C29888 (KiComputeNumaCosts.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140C2AAAC (KiPerformAutomaticGroupConfiguration.c)
 *     KiPopulateNodeInformation @ 0x140C2AF4C (KiPopulateNodeInformation.c)
 *     KiInitializeMTRR @ 0x140C2B8EC (KiInitializeMTRR.c)
 *     ObpInitStackTrace @ 0x140C2E7DC (ObpInitStackTrace.c)
 *     PopCreateTimebrokerServiceSid @ 0x140C2F240 (PopCreateTimebrokerServiceSid.c)
 *     PopReadWheaBootErrorCount @ 0x140C2FECC (PopReadWheaBootErrorCount.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140C32AD8 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmInitHeteroEngine @ 0x140C337F8 (PpmInitHeteroEngine.c)
 *     PopNetInitialize @ 0x140C34034 (PopNetInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140C34578 (PopUmpoInitializeChannel.c)
 *     PoFxRegisterDebugger @ 0x140C35168 (PoFxRegisterDebugger.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C35D58 (PpmHeteroInitializeIntelWpsSupport.c)
 *     PpmEventInitializeEx @ 0x140C3625C (PpmEventInitializeEx.c)
 *     SshpAlpcInitialize @ 0x140C36544 (SshpAlpcInitialize.c)
 *     PsInitializeBootCpuPartitions @ 0x140C369DC (PsInitializeBootCpuPartitions.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C375B0 (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140C378D0 (PspInitializeCpuPartitionsPhase1.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140C38078 (PspInitializeSystemPartitionPhase0.c)
 *     SeMakeAnonymousLogonToken @ 0x140C3BF64 (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140C3C1E8 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140C3C448 (SeMakeSystemToken.c)
 *     SeSecureBootRegisterPolicy @ 0x140C3CA88 (SeSecureBootRegisterPolicy.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140C3D02C (SepInitializeSingletonAttributesStructures.c)
 *     WmipInitializeSecurity @ 0x140C3EEC0 (WmipInitializeSecurity.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140C405D8 (EtwpEnableBootLoggerRegistryProviders.c)
 *     EtwpStartBootLogger @ 0x140C408C0 (EtwpStartBootLogger.c)
 *     BapdpProcessBitlockerStatus @ 0x140C40E08 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessEDrvHintInfo @ 0x140C41028 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140C41108 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140C411E8 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140C412CC (BapdpProcessResumeInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C413AC (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessWmdResults @ 0x140C417A8 (BapdpProcessWmdResults.c)
 *     BapdpRegisterWbclData @ 0x140C42188 (BapdpRegisterWbclData.c)
 *     BootApplicationPersistentDataInitialize @ 0x140C42424 (BootApplicationPersistentDataInitialize.c)
 *     ExpAddNonMirroredRanges @ 0x140C4251C (ExpAddNonMirroredRanges.c)
 *     ExpWatchProductTypeInitialization @ 0x140C4381C (ExpWatchProductTypeInitialization.c)
 *     HeadlessInit @ 0x140C442D4 (HeadlessInit.c)
 *     ExpKeyedEventInitialization @ 0x140C459EC (ExpKeyedEventInitialization.c)
 *     WheapInitializeErrorSourceTable @ 0x140C46948 (WheapInitializeErrorSourceTable.c)
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140C48EC4 (CmpCreateRegistryRoot.c)
 *     CmpInitializeDriverStores @ 0x140C49330 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140C496B0 (CmpInitializePreloadedHive.c)
 *     CmpInitializePreloadedHives @ 0x140C49B14 (CmpInitializePreloadedHives.c)
 *     CmpInitializeSystemBiosInformation @ 0x140C49C60 (CmpInitializeSystemBiosInformation.c)
 *     CmpInitializeSystemHive @ 0x140C49DD8 (CmpInitializeSystemHive.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4B660 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemBiosInformation @ 0x140C4BC04 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C4BFA4 (CmpSetVideoBiosInformation.c)
 *     CmFcInitSystem2 @ 0x140C4C3B8 (CmFcInitSystem2.c)
 *     CmpInitializeHardwareConfiguration @ 0x140C4CB7C (CmpInitializeHardwareConfiguration.c)
 *     CmpFindTagIndex @ 0x140C4DCD4 (CmpFindTagIndex.c)
 *     CmpGetRegistryValue @ 0x140C4EF0C (CmpGetRegistryValue.c)
 *     MiComputeNumaCosts @ 0x140C4F904 (MiComputeNumaCosts.c)
 *     MmFreeLoaderBlock @ 0x140C5097C (MmFreeLoaderBlock.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C51CC4 (MiInitializePhysicalMemoryBlocks.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C52A90 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeDriverPtes @ 0x140C52C28 (MiInitializeDriverPtes.c)
 *     MiReserveBootDriverPtes @ 0x140C52EE0 (MiReserveBootDriverPtes.c)
 *     MiSectionInitialization @ 0x140C558B4 (MiSectionInitialization.c)
 *     MiInitializeSystemSpaceMap @ 0x140C562B8 (MiInitializeSystemSpaceMap.c)
 *     MiLockKernelScpSection @ 0x140C57BE8 (MiLockKernelScpSection.c)
 *     MmInitializeMemoryLimits @ 0x140C58680 (MmInitializeMemoryLimits.c)
 *     MmRegisterHotPatches @ 0x140C58E0C (MmRegisterHotPatches.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140C5BC6C (MiMeasureDemandCoalesceTimeBounds.c)
 *     MiInitializeCacheFlushing @ 0x140C5C468 (MiInitializeCacheFlushing.c)
 *     MiBuildImportsForBootDrivers @ 0x140C5CAB4 (MiBuildImportsForBootDrivers.c)
 *     IntPartCreate @ 0x140C5EE28 (IntPartCreate.c)
 *     VhdiInitializeBootDisk @ 0x140C5FA00 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140C5FD24 (VhdiQueryVolumeVhdFilePath.c)
 *     CimfsInitializeBootDisk @ 0x140C60240 (CimfsInitializeBootDisk.c)
 *     CompositefsBootIsEnabled @ 0x140C60AC4 (CompositefsBootIsEnabled.c)
 *     SbpAddTransportToInstance @ 0x140C60B84 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C60D70 (SbpStartLanman.c)
 *     QueryRegistryHideMachine @ 0x140C614F4 (QueryRegistryHideMachine.c)
 *     SaveNodeDistanceInformation @ 0x140C616D0 (SaveNodeDistanceInformation.c)
 *     StartFirstUserProcess @ 0x140C620B8 (StartFirstUserProcess.c)
 *     EmInitSystem @ 0x140C62920 (EmInitSystem.c)
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 *     CmGetSystemDriverList @ 0x140C64DD4 (CmGetSystemDriverList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C6534C (CmpOpenSystemDriverHiveContext.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C65698 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140C65844 (PipInitializeEarlyLaunchDrivers.c)
 *     VslRegisterBootDrivers @ 0x140C65AF8 (VslRegisterBootDrivers.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 *     PpInitGetGroupOrderIndex @ 0x140C698C0 (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x140C69CC4 (PnpLoadBootFilterDriver.c)
 *     PipCheckDependencies @ 0x140C69E6C (PipCheckDependencies.c)
 *     PopInitPlatformSettings @ 0x140C69F98 (PopInitPlatformSettings.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpCheckForWorker @ 0x140261AEC (ExpCheckForWorker.c)
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpFreePoolChecks @ 0x14035B160 (ExpFreePoolChecks.c)
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     MmDeterminePoolType @ 0x14035B710 (MmDeterminePoolType.c)
 *     ExpRemovePoolTrackerExpansion @ 0x14035B760 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     ExpPoolTrackerReturnLimit @ 0x14035BA20 (ExpPoolTrackerReturnLimit.c)
 *     RtlpHpVsContextFree @ 0x14035BAE0 (RtlpHpVsContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14035C3DC (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14035D9AC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpSegPageRangeShrink @ 0x140363BF0 (RtlpHpSegPageRangeShrink.c)
 *     EtwTracePool @ 0x1403971E8 (EtwTracePool.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     RtlpHpLargeFree @ 0x140458F38 (RtlpHpLargeFree.c)
 *     ExIsSpecialPoolAddress @ 0x14048BD64 (ExIsSpecialPoolAddress.c)
 *     ExpCheckForResource @ 0x14048C4AC (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14049464C (ExpCheckForLookaside.c)
 *     KeCheckForTimer @ 0x1404C7E48 (KeCheckForTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C (RtlpHpLfhThreadDataInitializeSet.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140B76080 (ExpPoolFlagsToPoolType.c)
 *     ViFreeTrackedPool @ 0x140BAAFD0 (ViFreeTrackedPool.c)
 *     VfPtFreePoolNotification @ 0x140BAB6EC (VfPtFreePoolNotification.c)
 */

void __stdcall ExFreePoolWithTag(PVOID P, ULONG Tag)
{
  __int64 v2; // r8
  __int64 v3; // r9
  ULONG_PTR v4; // r13
  unsigned int v5; // r12d
  int v6; // eax
  __int64 v7; // r15
  __int64 v8; // r15
  char v9; // al
  ULONG_PTR v10; // r14
  char v11; // r8
  int v12; // ecx
  unsigned int v13; // ebx
  int v14; // edx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rdi
  ULONG_PTR v20; // rdx
  __int16 v21; // ax
  volatile CCHAR v22; // al
  __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // r11
  unsigned int v26; // edx
  unsigned int v27; // r10d
  int v28; // eax
  __int64 v29; // r8
  unsigned __int8 v30; // di
  _QWORD *v31; // rdx
  unsigned int k; // edx
  char *v33; // r8
  __int64 *i; // rax
  int v35; // r9d
  volatile signed __int64 *v36; // rdx
  volatile signed __int64 *v37; // rax
  signed __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // r9
  ULONG_PTR v43; // rdx
  char v44; // r10
  ULONG_PTR v45; // r8
  __int64 v46; // r8
  char v47; // r11
  unsigned __int64 v48; // rdi
  ULONG_PTR *v49; // rsi
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rbx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  __int64 v54; // r8
  int v55; // r9d
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // r9
  __int64 v59; // rax
  signed __int64 v60; // rax
  ULONG_PTR v61; // r8
  unsigned __int64 v62; // rdx
  signed __int64 v63; // rtt
  ULONG_PTR *v64; // r9
  signed __int64 v65; // rax
  __int64 v66; // r10
  signed __int64 v67; // rax
  signed __int64 v68; // rtt
  signed __int64 v69; // r8
  unsigned int v70; // r9d
  volatile signed __int64 *v71; // rdx
  volatile signed __int64 *v72; // rax
  __int64 v73; // r10
  signed __int64 v74; // rcx
  __int64 v75; // r11
  signed __int64 v76; // rax
  unsigned __int64 v77; // r9
  signed __int64 v78; // rbx
  signed __int64 v79; // rtt
  __int64 v80; // rsi
  __int16 v81; // di
  int v82; // r8d
  __int64 v83; // r11
  unsigned int v84; // edx
  unsigned int v85; // r10d
  int v86; // eax
  __int64 v87; // r9
  unsigned int v88; // r8d
  ULONG_PTR v89; // rcx
  __int64 v90; // rcx
  __int16 v91; // si
  ULONG_PTR v92; // rdx
  __int16 v93; // ax
  unsigned int v94; // r14d
  ULONG_PTR v95; // rbx
  ULONG_PTR v96; // rdi
  struct _KPROCESS *v97; // rdi
  __int64 v98; // rsi
  ULONG_PTR v99; // r15
  char v100; // r13
  unsigned __int64 *v101; // r12
  unsigned __int64 v102; // rsi
  unsigned __int64 v103; // rax
  unsigned __int64 *v104; // r8
  unsigned __int64 v105; // rdx
  ULONG_PTR v106; // r8
  unsigned __int64 v107; // r9
  signed __int64 v108; // rdx
  bool v109; // zf
  signed __int64 v110; // rax
  signed __int64 v111; // rsi
  bool v112; // cc
  signed __int64 v113; // rsi
  ULONG_PTR v114; // rsi
  unsigned __int8 v115; // r14
  int v116; // r10d
  unsigned int v117; // edx
  char *v118; // rcx
  ULONG_PTR v119; // rdi
  _WORD *v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r10
  signed __int64 v123; // rcx
  signed __int64 v124; // rdx
  signed __int32 v125; // eax
  signed __int32 v126; // ett
  int v127; // eax
  __int64 v128; // rax
  int v129; // eax
  __int64 v130; // rax
  __int64 v131; // rax
  unsigned __int64 v133; // rtt
  __int64 v134; // r8
  __int64 *v135; // r13
  ULONG_PTR v136; // r12
  unsigned __int64 *v137; // r14
  unsigned __int64 v138; // r15
  unsigned __int64 v139; // rax
  __int64 v140; // r8
  unsigned __int64 v141; // rdx
  ULONG_PTR v142; // r8
  unsigned __int64 v143; // r9
  signed __int64 v144; // rdx
  signed __int64 v145; // rax
  signed __int64 v146; // rsi
  signed __int64 BugCheckParameter4; // rsi
  unsigned __int64 v148; // rax
  volatile signed __int64 *v149; // rcx
  unsigned __int64 v150; // rtt
  __int64 v151; // r8
  __int64 v152; // rcx
  int v153; // eax
  volatile CCHAR v154; // al
  volatile CCHAR v155; // al
  volatile CCHAR v156; // al
  __int16 v157; // dx
  char *v158; // r11
  signed __int64 v159; // rax
  unsigned __int64 v160; // r10
  signed __int64 v161; // rbx
  signed __int64 v162; // rtt
  __int16 v163; // dx
  __int64 v164; // rdx
  __int64 v165; // rax
  __int64 v166; // r10
  __int64 v167; // rax
  __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // rdx
  __int64 v171; // r8
  _BYTE *v172; // r8
  int v173; // ecx
  _BYTE *j; // r8
  int v175; // edi
  _WORD *v176; // rbx
  ULONG_PTR v177; // rsi
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v179; // rdx
  unsigned __int64 v180; // r14
  _BYTE *v181; // rbx
  int v182; // [rsp+38h] [rbp-69h]
  signed __int64 v183; // [rsp+38h] [rbp-69h]
  __int64 *SchedulingGroup; // [rsp+38h] [rbp-69h]
  signed __int64 v185; // [rsp+38h] [rbp-69h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-61h]
  int BugCheckParameter3_4; // [rsp+44h] [rbp-5Dh]
  char v188; // [rsp+48h] [rbp-59h]
  char v189[3]; // [rsp+49h] [rbp-58h] BYREF
  int v190; // [rsp+4Ch] [rbp-55h] BYREF
  int v191; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v192[3]; // [rsp+54h] [rbp-4Dh] BYREF
  ULONG_PTR v193; // [rsp+60h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-39h] BYREF
  _DWORD v195[4]; // [rsp+80h] [rbp-21h]
  __int128 v196; // [rsp+90h] [rbp-11h]
  __int128 v197; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v198; // [rsp+B0h] [rbp+Fh]
  __int64 retaddr; // [rsp+100h] [rbp+5Fh]
  PVOID v200; // [rsp+108h] [rbp+67h] BYREF
  __int64 v201; // [rsp+118h] [rbp+77h] BYREF
  char v202; // [rsp+120h] [rbp+7Fh] BYREF

  v200 = P;
  v4 = (ULONG_PTR)P;
  if ( (unsigned __int64)P < 0xFFFF800000000000uLL || ((unsigned __int8)P & 0xF) != 0 )
    KeBugCheckEx(0xC2u, 0x99uLL, (ULONG_PTR)P, 0LL, 0LL);
  v196 = 0LL;
  v5 = 0;
  LOWORD(v196) = 259;
  BYTE2(v196) = 0;
  if ( (_WORD)P )
  {
    v6 = 0;
LABEL_5:
    v195[0] = 0x100000;
    v195[1] = 0x1000000;
    v7 = (unsigned int)v195[v6];
    v8 = (RtlpHpHeapGlobals ^ *(_QWORD *)((v4 & ~(v7 - 1)) + 0x10) ^ v4 & ~(v7 - 1)) - 192LL * v6 - 320;
    goto LABEL_6;
  }
  v131 = RtlCSparseBitmapBitmaskRead((__int64)&dword_140E68510, 2 * (((unsigned __int64)P - qword_140E68508) >> 20));
  if ( v131 )
  {
    v6 = v131 - 1;
    if ( v6 != 2 )
      goto LABEL_5;
  }
  v197 = 0LL;
  v198 = 0LL;
  RtlpHpVaMgrCtxQuery((__int64)&unk_140E68558, v4, (__int64)&v197);
  v8 = *(_QWORD *)v198;
LABEL_6:
  v201 = v8;
  if ( !v8 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, v4, 0LL);
  if ( ExpSpecialAllocations )
  {
    for ( i = qword_140EEEE40; (__int64)i < (__int64)qword_140EEEE60; ++i )
    {
      if ( v8 == *i )
      {
        _InterlockedDecrement(&ExpSpecialAllocations);
        v175 = MmDeterminePoolType(v4);
        v176 = (_WORD *)(v4 & 0xFFFFFFFFFFFFF000uLL);
        if ( byte_140FCECA8 )
        {
          if ( (unsigned __int64)v176 < 0xFFFF800000000000uLL )
            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v4 & 0xFFFFFFFFFFFFF000uLL, 0LL);
          if ( v176 + 2048 < v176 )
            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v4 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL);
          memset_0((void *)(KasaniShadow + ((unsigned __int64)(v176 + 0x400000000000LL) >> 3)), 0, 0x200uLL);
        }
        v177 = 4096 - (unsigned int)(v4 & 0xFFF);
        ExpFreePoolChecks(v4, *(_DWORD *)((v4 & 0xFFFFFFFFFFFFF000uLL) + 4), v177, 128, v4);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > (unsigned __int8)(((v175 & 0x100) == 0LL) + 1) )
          KeBugCheckEx(0xC1u, CurrentIrql, 0x100uLL, v4, 0x31uLL);
        v179 = *v176 & 0x1FFF;
        v180 = (v179 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v180 != v177 )
          KeBugCheckEx(0xC1u, v4, *v176 & 0x1FFF, v177, 0x21uLL);
        v172 = v176 + 8;
        v173 = HIWORD(*(_DWORD *)v176);
        if ( (*(_DWORD *)v176 & 0x4000) != 0 )
          v172 = v176 + 12;
        while ( (unsigned __int64)v172 < v4 )
        {
          if ( *v172 != (_BYTE)v173 )
            KeBugCheckEx(0xC1u, v4, (ULONG_PTR)v172, *(unsigned int *)v176, 0x23uLL);
          ++v172;
        }
        for ( j = (_BYTE *)(v179 + v4); (unsigned __int64)j < ((v4 + 4095) & 0xFFFFFFFFFFFFF000uLL); ++j )
        {
          if ( *j != (_BYTE)v173 )
            KeBugCheckEx(0xC1u, v4, (ULONG_PTR)j, *(unsigned int *)v176, 0x24uLL);
        }
        if ( (*(_DWORD *)v176 & 0x4000) != 0 )
          ViFreeTrackedPool(v4, v179);
        v80 = *(unsigned int *)((v4 & 0xFFFFFFFFFFFFF000uLL) + 4);
        v190 = 0;
        LOBYTE(v200) = 0;
        v202 = 0;
        if ( (_DWORD)v80 == PoolHitTag )
          __debugbreak();
        if ( (BYTE4(PerfGlobalGroupMask[0]) & 0x41) != 0
          && (int)ExpPoolFlagsToPoolType(v175, v175 & 0x10, (unsigned int)&v190, (unsigned int)&v200, (__int64)&v202) >= 0 )
        {
          v163 = v190;
          if ( (_BYTE)v200 )
          {
            v163 = v190 | 8;
            v190 |= 8u;
          }
          EtwTracePool(3618, v163, v80, v4, v180);
        }
        v81 = v175 & 0xFFFB;
        v82 = PoolTrackTableMask;
        v83 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
        v84 = PoolTrackTableMask & ((40543 * v80) ^ ((unsigned __int64)(40543 * v80) >> 32));
        v85 = v84;
        while ( 1 )
        {
          v86 = *(_DWORD *)(v83 + 80LL * v84);
          v87 = v83 + 80LL * v84;
          if ( v86 == (_DWORD)v80 )
            break;
          if ( v86 || (v129 = *(_DWORD *)(PoolTrackTable + 80LL * v84)) == 0 )
          {
            v84 = v82 & (v84 + 1);
            if ( v84 == v85 )
            {
              ExpRemovePoolTrackerExpansion(v80, v180, v81);
              goto LABEL_108;
            }
          }
          else
          {
            *(_DWORD *)v87 = v129;
            v130 = *(_QWORD *)(PoolTrackTable + 80LL * v84 + 72);
            if ( v130 )
              *(_QWORD *)(v87 + 72) = v130;
          }
        }
        ExpPoolTrackerReturnLimit((v81 & 0x100) == 0, v180, v83 + 80LL * v84);
LABEL_108:
        RtlpHpFreeHeap(v8, v4 & 0xFFFFFFFFFFFFF000uLL, v88);
        return;
      }
    }
  }
  if ( (v4 & 0xFFF) != 0 )
  {
    v9 = *(_BYTE *)(v4 - 13);
    v10 = v4 - 16;
    if ( (v9 & 8) != 0 )
    {
      v89 = v4 - 16;
      if ( (v9 & 4) != 0 )
        v89 = v10 - 16LL * (unsigned __int8)*(_WORD *)v10;
      v90 = ExpPoolQuotaCookie ^ *(_QWORD *)(v89 + 8) ^ v89;
      if ( v90 && v90 != -1 && (!ExpSpecialAllocations || !(unsigned int)ExIsSpecialPoolAddress(v4)) )
      {
        if ( byte_140E38AE8[((v4 >> 39) & 0x1FF) - 256] == 5 )
          v91 = 256;
        else
          v91 = 64;
        v92 = v4 - 16;
        if ( (*(_BYTE *)(v10 + 3) & 4) != 0 )
          v92 = -16LL * (unsigned __int8)*(_WORD *)v10 + v10;
        v93 = *(_WORD *)(v92 + 2);
        v94 = *(_DWORD *)(v92 + 4);
        v95 = 16LL * (unsigned __int8)v93;
        if ( (v93 & 0x800) != 0 )
        {
          v96 = *(_QWORD *)(v92 + 8) ^ v92;
          *(_QWORD *)(v92 + 8) = ExpPoolQuotaCookie ^ v92;
          v97 = (struct _KPROCESS *)(ExpPoolQuotaCookie ^ v96);
          if ( v97 )
          {
            if ( v97 != (struct _KPROCESS *)-1LL )
            {
              if ( (unsigned __int64)v97 < 0xFFFF800000000000uLL || (v97->Header.Type & 0x7F) != 3 )
              {
                if ( v92 )
                  v5 = v94;
                KeBugCheckEx(0xC2u, 0xDuLL, v4, v5, (ULONG_PTR)v97);
              }
              v98 = v91 & 0x100;
              if ( v97 != PsInitialSystemProcess )
              {
                SchedulingGroup = (__int64 *)v97[1].SchedulingGroup;
                v99 = v98 != 0;
                v193 = v99 << 7;
                v100 = PspResourceFlags[8 * v99];
                v101 = (unsigned __int64 *)&SchedulingGroup[16 * v99];
                _m_prefetchw(v101);
                v102 = *v101;
                v103 = v101[8];
                if ( v101[10] )
                {
                  if ( v103 > v102 )
                  {
                    v104 = (unsigned __int64 *)&qword_140F05B28[7 * v99];
                    v105 = *v104;
                    if ( v103 - v102 > *v104 )
                    {
                      if ( v105 > v95 )
                        v105 = v95;
                      v133 = v101[8];
                      if ( v133 == _InterlockedCompareExchange64((volatile signed __int64 *)v101 + 8, v103 - v105, v103)
                        && _InterlockedExchangeAdd64((volatile signed __int64 *)v101 + 9, v105) + v105 > *v104 )
                      {
                        v134 = _InterlockedExchange64((volatile __int64 *)v101 + 9, 0LL);
                        if ( v134 )
                          PspReturnResourceQuota(v99, (__int64)v101, v134, 0);
                      }
                    }
                  }
                }
                v106 = v95;
                while ( 1 )
                {
                  do
                  {
                    v107 = v102;
                    if ( v95 < v102 )
                      v107 = v95;
                    v108 = 0LL;
                    if ( v95 < v102 )
                      v108 = v102 - v95;
                    v110 = _InterlockedCompareExchange64((volatile signed __int64 *)v101, v108, v102);
                    v109 = v102 == v110;
                    v102 = v110;
                  }
                  while ( !v109 );
                  v95 -= v107;
                  if ( !v95 )
                    break;
                  if ( SchedulingGroup == &PspSystemQuotaBlock )
                    KeBugCheckEx(0x21u, (ULONG_PTR)v97, v99, v106, v95);
                  SchedulingGroup = &PspSystemQuotaBlock;
                  v101 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v193);
                  _m_prefetchw((char *)&PspSystemQuotaBlock + v193);
                  v102 = *(__int64 *)((char *)&PspSystemQuotaBlock + v193);
                }
                if ( (v100 & 4) != 0 )
                  _InterlockedAdd64((volatile signed __int64 *)&v97[1].ThreadListHead.Blink + v99, -(__int64)v106);
                v4 = (ULONG_PTR)v200;
                v8 = v201;
              }
              if ( ObpTraceFlags )
                ObpPushStackInfo((__int64)&v97[-1].ExtendedFeatureDisableMask, 0, 1u, v94);
              v111 = _InterlockedExchangeAdd64(
                       (volatile signed __int64 *)&v97[-1].ExtendedFeatureDisableMask,
                       0xFFFFFFFFFFFFFFFFuLL);
              v112 = v111 <= 1;
              v113 = v111 - 1;
              if ( v112 )
              {
                if ( *(_QWORD *)&v97[-1].PrimaryGroup )
                  KeBugCheckEx(
                    0x18u,
                    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v97[-1].CpuPartitionList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v97 - 48) >> 8)],
                    (ULONG_PTR)v97,
                    3uLL,
                    *(_QWORD *)&v97[-1].PrimaryGroup);
                if ( v113 < 0 )
                  KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v97, 4uLL, v113);
                ObpDeferObjectDeletion((signed __int64)&v97[-1].ExtendedFeatureDisableMask);
              }
            }
          }
        }
        v10 = v4 - 16;
      }
    }
    if ( (*(_BYTE *)(v10 + 3) & 4) != 0 )
    {
      v10 += -16LL * (unsigned __int8)*(_WORD *)v10;
      *(_BYTE *)(v10 + 3) |= 4u;
    }
    v11 = *(_BYTE *)(v10 + 3);
    v12 = 256;
    v13 = *(_DWORD *)(v10 + 4);
    if ( (v11 & 1) == 0 )
      v12 = 128;
    v14 = v12 | 4;
    if ( (v11 & 0x20) == 0 )
      v14 = v12;
    v15 = v14 | 2;
    v182 = v15;
    if ( (*(_BYTE *)(v10 + 3) & 8) != 0 )
    {
      v15 |= 1u;
      v182 = v15;
    }
    if ( (v11 & 0xDE) != 0 )
    {
      v16 = v15 | 8;
      if ( (v11 & 4) == 0 )
        v16 = v15;
      v17 = v16 | 0x200;
      if ( v11 >= 0 )
        v17 = v16;
      v18 = v17 | 0x400;
      if ( (v11 & 0x40) == 0 )
        v18 = v17;
      v182 = v18;
      if ( (*(_BYTE *)(v10 + 3) & 8) == 0 )
      {
        v182 = v18;
        if ( (v11 & 0x10) != 0 )
          v182 = v18 | 0x20;
      }
    }
    v19 = v10 + 16;
    v20 = 16LL * (unsigned __int8)*(_WORD *)(v10 + 2);
    BugCheckParameter3 = v20;
  }
  else
  {
    v114 = 64LL;
    if ( byte_140E38AE8[((v4 >> 39) & 0x1FF) - 256] == 5 )
      v114 = 256LL;
    v115 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v115, 2);
    if ( (BYTE6(PerfGlobalGroupMask[0]) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&ExpLargePoolTableLock);
      v125 = ExpLargePoolTableLock & 0x7FFFFFFF;
      while ( 1 )
      {
        v126 = v125;
        v125 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v125 + 1, v125);
        if ( v126 == v125 )
          break;
        if ( v125 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, v115, v2, v3);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, v115);
    }
    v116 = 1;
    v117 = (((40543 * (v4 >> 12)) >> 32) ^ (40543 * (v4 >> 12))) & (PoolBigPageTableSize - 1);
    while ( 1 )
    {
      v118 = (char *)PoolBigPageTable + 32 * v117;
      if ( *(_QWORD *)v118 == v4 )
        break;
      if ( ++v117 >= (unsigned __int64)PoolBigPageTableSize )
      {
        if ( !v116 )
          goto LABEL_154;
        v117 = 0;
        v116 = 0;
      }
    }
    if ( !v118 )
LABEL_154:
      KeBugCheckEx(0x19u, 0x22uLL, v4, v114, 0LL);
    v13 = *((_DWORD *)v118 + 2);
    v182 = (*((_DWORD *)v118 + 3) >> 8) & 0xFFF;
    BugCheckParameter3 = *((_QWORD *)v118 + 2);
    if ( (*((_DWORD *)v118 + 3) & 0x100) != 0 )
      v119 = v4 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v118 + 3);
    else
      v119 = -1LL;
    _InterlockedDecrement(&ExpPoolBigEntriesInUse);
    *((_QWORD *)v118 + 3) = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v118);
    if ( (BYTE6(PerfGlobalGroupMask[0]) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
      _InterlockedDecrement(&ExpLargePoolTableLock);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v115);
    __writecr8(v115);
    if ( v119 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( (PEPROCESS)v119 != PsInitialSystemProcess )
      {
        v135 = *(__int64 **)(v119 + 760);
        v136 = (v182 & 0x100) != 0LL;
        v188 = PspResourceFlags[8 * v136];
        v193 = v136 << 7;
        v137 = (unsigned __int64 *)&v135[16 * v136];
        _m_prefetchw(v137);
        v138 = *v137;
        v139 = v137[8];
        if ( v137[10] )
        {
          v140 = 7 * v136;
          if ( v139 > v138 )
          {
            v141 = qword_140F05B28[v140];
            if ( v139 - v138 > v141 )
            {
              if ( v141 > BugCheckParameter3 )
                v141 = BugCheckParameter3;
              v150 = v137[8];
              if ( v150 == _InterlockedCompareExchange64((volatile signed __int64 *)v137 + 8, v139 - v141, v139)
                && _InterlockedExchangeAdd64((volatile signed __int64 *)v137 + 9, v141) + v141 > qword_140F05B28[v140] )
              {
                v151 = _InterlockedExchange64((volatile __int64 *)v137 + 9, 0LL);
                if ( v151 )
                  PspReturnResourceQuota(v136, (__int64)&v135[16 * v136], v151, 0);
              }
            }
          }
        }
        v142 = BugCheckParameter3;
        while ( 1 )
        {
          do
          {
            v143 = v138;
            if ( v142 < v138 )
              v143 = v142;
            v144 = 0LL;
            if ( v142 < v138 )
              v144 = v138 - v142;
            v145 = _InterlockedCompareExchange64((volatile signed __int64 *)v137, v144, v138);
            v109 = v138 == v145;
            v138 = v145;
          }
          while ( !v109 );
          v142 -= v143;
          if ( !v142 )
            break;
          if ( v135 == &PspSystemQuotaBlock )
            KeBugCheckEx(0x21u, v119, v136, BugCheckParameter3, v142);
          v135 = &PspSystemQuotaBlock;
          v137 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v193);
          _m_prefetchw((char *)&PspSystemQuotaBlock + v193);
          v138 = *(__int64 *)((char *)&PspSystemQuotaBlock + v193);
        }
        if ( (v188 & 4) != 0 )
          _InterlockedAdd64((volatile signed __int64 *)(v119 + 8 * v136 + 512), -(__int64)BugCheckParameter3);
        v4 = (ULONG_PTR)v200;
        v8 = v201;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v119 - 48, 0, 1u, v13);
      v146 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v119 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v112 = v146 <= 1;
      BugCheckParameter4 = v146 - 1;
      if ( v112 )
      {
        if ( *(_QWORD *)(v119 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v119 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v119 - 48) >> 8)],
            v119,
            3uLL,
            *(_QWORD *)(v119 - 40));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, v119, 4uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v119 - 48);
      }
    }
    v20 = BugCheckParameter3;
    v10 = v4;
    v19 = v4;
  }
  v21 = *(_WORD *)&KeNumberProcessorsGroup0[9];
  if ( (v21 & 0x207) != 0 )
  {
    if ( (v182 & 0xC0) != 0 && (v21 & 0x200) != 0 )
      ExpCheckForLookaside(v10, v20);
    v154 = KeNumberProcessorsGroup0[9];
    if ( (v154 & 1) != 0 )
      KeCheckForTimer(v10, BugCheckParameter3);
    v155 = KeNumberProcessorsGroup0[9];
    if ( (v155 & 4) != 0 )
      ExpCheckForResource((__int64 *)v10, BugCheckParameter3);
    v156 = KeNumberProcessorsGroup0[9];
    if ( (v156 & 2) != 0 )
      ExpCheckForWorker(v10, BugCheckParameter3);
  }
  v22 = KeNumberProcessorsGroup0[9];
  if ( (v22 & 0x10) != 0 )
    VfPtFreePoolNotification(v10, v13, BugCheckParameter3, v4);
  v191 = 0;
  LOBYTE(v201) = 0;
  v189[0] = 0;
  if ( v13 == PoolHitTag )
    __debugbreak();
  v23 = DWORD1(PerfGlobalGroupMask[0]);
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 0x41) != 0 )
  {
    v23 = ExpPoolFlagsToPoolType(v182, v182 & 0x10, (unsigned int)&v191, (unsigned int)&v201, (__int64)v189);
    if ( (int)v23 >= 0 )
    {
      v157 = v191;
      if ( (_BYTE)v201 )
      {
        v157 = v191 | 8;
        v191 |= 8u;
      }
      EtwTracePool(3618, v157, v13, v19, BugCheckParameter3);
    }
  }
  LODWORD(v23) = KeGetPcr()->Prcb.Number;
  v24 = PoolTrackTableMask;
  v25 = (__int64)*(&ExPoolTagTables + v23);
  v26 = PoolTrackTableMask & ((40543 * v13) ^ ((40543 * (unsigned __int64)v13) >> 32));
  v27 = v26;
  while ( 1 )
  {
    v28 = *(_DWORD *)(v25 + 80LL * v26);
    v29 = v25 + 80LL * v26;
    if ( v28 == v13 )
      break;
    if ( v28 || (v127 = *(_DWORD *)(PoolTrackTable + 80LL * v26)) == 0 )
    {
      v26 = v24 & (v26 + 1);
      if ( v26 == v27 )
      {
        LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
        LockHandle.LockQueue.Next = 0LL;
        *(_QWORD *)&LockHandle.OldIrql = 0LL;
        v30 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v30, 2);
        LockHandle.OldIrql = v30;
        if ( (BYTE6(PerfGlobalGroupMask[0]) & 0x21) == 0 || PopHibernateInProgress )
        {
          v31 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
          if ( v31 )
            KxWaitForLockOwnerShip((__int64)&LockHandle, v31);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&ExpTaggedPoolLock);
        }
        for ( k = 0; ; ++k )
        {
          if ( k >= (unsigned __int64)PoolTrackTableExpansionSize )
          {
LABEL_228:
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v148 = -(__int64)BugCheckParameter3;
            v149 = (volatile signed __int64 *)((char *)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number)
                                             + 80 * (unsigned int)(PoolTrackTableSize - 1));
            if ( (v182 & 0x100) != 0 )
            {
              _InterlockedIncrement64(v149 + 6);
              _InterlockedAdd64(v149 + 4, v148);
            }
            else
            {
              _InterlockedIncrement64(v149 + 3);
              _InterlockedAdd64(v149 + 1, v148);
            }
            goto LABEL_59;
          }
          v33 = (char *)PoolTrackTableExpansion + 80 * k;
          if ( *(_DWORD *)v33 == v13 )
            break;
          if ( !*(_DWORD *)v33 )
            goto LABEL_228;
        }
        if ( (v182 & 0x100) != 0 )
        {
          v35 = 0;
          v36 = (volatile signed __int64 *)(v33 + 32);
          v37 = (volatile signed __int64 *)(v33 + 48);
        }
        else
        {
          v35 = 1;
          v36 = (volatile signed __int64 *)(v33 + 8);
          v37 = (volatile signed __int64 *)(v33 + 24);
        }
        _InterlockedIncrement64(v37);
        v38 = _InterlockedExchangeAdd64(v36, -(__int64)BugCheckParameter3);
        if ( *((_QWORD *)v33 + 9) )
        {
          v158 = &v33[8 * v35];
          if ( (v158[56] & 1) == 0 )
          {
            v159 = *((_QWORD *)v158 + 7);
            v160 = (4 * BugCheckParameter3 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
            if ( v160 == 64 )
              v160 = 128LL;
            while ( 1 )
            {
              v161 = v160 + v38;
              if ( v38 >= v159 || v161 >= v159 )
                break;
              v162 = v159;
              v159 = _InterlockedCompareExchange64((volatile signed __int64 *)v158 + 7, v161, v159);
              if ( v162 == v159 )
              {
                v164 = *((_QWORD *)v33 + 9);
                v165 = v159 - v161;
                v166 = -v165;
                if ( v165 >= 0 )
                  v166 = v165;
                if ( *(_QWORD *)(v164 + 24LL * v35 + 16) || *(_QWORD *)(v164 + 24LL * v35 + 24) )
                  _InterlockedAdd64((volatile signed __int64 *)(v164 + 24LL * v35 + 32), -v166);
                break;
              }
              v38 = *v36;
            }
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_59;
      }
    }
    else
    {
      *(_DWORD *)v29 = v127;
      v128 = *(_QWORD *)(PoolTrackTable + 80LL * v26 + 72);
      if ( v128 )
        *(_QWORD *)(v29 + 72) = v128;
    }
  }
  if ( (v182 & 0x100) != 0 )
  {
    v70 = 0;
    v71 = (volatile signed __int64 *)(v29 + 32);
    v72 = (volatile signed __int64 *)(v29 + 48);
    v73 = 0LL;
  }
  else
  {
    v70 = 1;
    v71 = (volatile signed __int64 *)(v29 + 8);
    v72 = (volatile signed __int64 *)(v29 + 24);
    v73 = 24LL;
  }
  _InterlockedIncrement64(v72);
  v74 = _InterlockedExchangeAdd64(v71, -(__int64)BugCheckParameter3);
  if ( *(_QWORD *)(v29 + 72) )
  {
    v75 = v29 + 8LL * v70;
    if ( (*(_BYTE *)(v75 + 56) & 1) == 0 )
    {
      v76 = *(_QWORD *)(v75 + 56);
      v77 = (4 * BugCheckParameter3 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v77 == 64 )
        v77 = 128LL;
      while ( 1 )
      {
        v78 = v77 + v74;
        if ( v74 >= v76 || v78 >= v76 )
          break;
        v79 = v76;
        v76 = _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 56), v78, v76);
        if ( v79 == v76 )
        {
          v167 = v76 - v78;
          v168 = -v167;
          if ( v167 >= 0 )
            v168 = v167;
          v169 = v73 + *(_QWORD *)(v29 + 72);
          if ( *(_QWORD *)(v169 + 16) || *(_QWORD *)(v169 + 24) )
            _InterlockedAdd64((volatile signed __int64 *)(v169 + 32), -v168);
          break;
        }
        v74 = *v71;
      }
    }
  }
LABEL_59:
  if ( (v182 & 0x400) != 0 )
    ViFreeTrackedPool(v4, BugCheckParameter3);
  if ( byte_140FCECA8 )
  {
    if ( v10 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v10, 0LL);
    if ( (v10 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v10, 8uLL);
    if ( BugCheckParameter3 + v10 < v10 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v10, BugCheckParameter3);
    v181 = (_BYTE *)(KasaniShadow + ((v10 + 0x800000000000LL) >> 3));
    if ( BugCheckParameter3 >> 3 )
    {
      memset_0((void *)(KasaniShadow + ((v10 + 0x800000000000LL) >> 3)), 0, BugCheckParameter3 >> 3);
      v181 += BugCheckParameter3 >> 3;
    }
    if ( (BugCheckParameter3 & 7) != 0 )
      *v181 = BugCheckParameter3 & 7;
  }
  v39 = *(_QWORD *)(v8 + 56);
  if ( BugCheckParameter3 - 513 > 0xD7F
    || !v39
    || ((v152 = v39
              + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                + ((unsigned int)(BugCheckParameter3 + 15) >> 4))
                - 33
                + 1LL) << 6),
         ++*(_DWORD *)(v152 + 28),
         *(_WORD *)v152 >= *(_WORD *)(v152 + 16))
      ? (++*(_DWORD *)(v152 + 32), v153 = 0)
      : (RtlpInterlockedPushEntrySList((PSLIST_HEADER)v152, (PSLIST_ENTRY)v10), v153 = 1),
        !v153) )
  {
    if ( (_WORD)v10 )
    {
      v40 = v8 + 320;
    }
    else
    {
      v41 = RtlCSparseBitmapBitmaskRead((__int64)&dword_140E68510, 2 * ((v10 - qword_140E68508) >> 20));
      if ( !v41 || (_DWORD)v41 == 3 )
      {
        RtlpHpLargeFree(v8, v10);
        return;
      }
      v40 = v8 + 320;
      if ( (_DWORD)v41 == 2 )
        v40 = v8 + 512;
    }
    v42 = *(_QWORD *)v40;
    v43 = v10 & *(_QWORD *)v40;
    if ( !(RtlpHpHeapGlobals ^ v40 ^ *(_QWORD *)(v43 + 0x10) ^ v43) )
    {
      v44 = *(_BYTE *)(v40 + 8);
      v45 = v43 + 32LL * ((unsigned int)(v10 - v43) >> v44);
      v46 = -32LL * *(unsigned __int8 *)(v45 + 26) + v45;
      v47 = *(_BYTE *)(v46 + 24);
      v48 = v43 + ((__int64)(v46 - v43) >> 5 << v44);
      if ( (v48 == v10) + v47 == 11 )
      {
        v49 = *(ULONG_PTR **)(v40 + 24);
        v50 = (unsigned __int64)*(unsigned __int16 *)(v48 + 44) << 6;
        v51 = (((unsigned int)v10
              - ((_DWORD)v48
               + (((unsigned int)qword_140E28348 ^ *(_DWORD *)(v48 + 40) ^ (unsigned int)(v48 >> 12)) >> 16)))
             * (unsigned __int64)*(unsigned int *)((char *)v49 + v50 + 72)) >> 32;
        if ( (_DWORD)v10
           - ((_DWORD)v48
            + (((unsigned int)qword_140E28348 ^ *(_DWORD *)(v48 + 40) ^ (unsigned int)(v48 >> 12)) >> 16)) != (unsigned __int16)(qword_140E28348 ^ *(_WORD *)(v48 + 40) ^ (v48 >> 12)) * ((((unsigned int)v10 - ((_DWORD)v48 + (((unsigned int)qword_140E28348 ^ *(_DWORD *)(v48 + 40) ^ (unsigned int)(v48 >> 12)) >> 16))) * (unsigned __int64)*(unsigned int *)((char *)v49 + v50 + 72)) >> 32) )
          return;
        v52 = (*((_DWORD *)v49 + 19) >> 13) & 0x3FFFF;
        _BitScanReverse(&v53, v52);
        v54 = (*((_DWORD *)v49 + 19) >> 4) & 0x1FF;
        v55 = 1 << v53;
        v56 = v53 - 2;
        v192[1] = v56;
        v57 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v56) + 8LL * (v52 ^ v55) + 8)
                        + 8 * v54);
        if ( !v57 )
          LOWORD(v57) = RtlpHpLfhThreadDataInitializeSet((__int64)v49);
        if ( (_WORD)v57 != *(_WORD *)(v48 + 46) || *(_BYTE *)(v48 + 22) == 1 )
        {
          v58 = v51;
          v59 = *(_QWORD *)(v48 + 8 * (v51 >> 6) + 64);
          if ( _bittest64(&v59, v51 & 0x3F) )
          {
            v60 = *(_QWORD *)(v48 + 16);
            do
            {
              BugCheckParameter3_4 = HIDWORD(v60);
              v183 = v60;
              if ( BYTE6(v60) == 1 )
                BYTE6(v183) = 2;
              if ( v10 )
              {
                v61 = v49[10];
                *(_WORD *)v10 = v60;
                LOWORD(v183) = v51 + 1;
                *(_DWORD *)(v10 + 8) = v10 ^ HIDWORD(v61) ^ __ROL4__(*(_DWORD *)v10 ^ v61, v60);
              }
              WORD1(v183) = WORD1(v60) + 1;
              v62 = (unsigned __int64)*(unsigned __int16 *)(v48 + 44) << 6;
              v63 = v60;
              v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v48 + 16), v183, v60);
            }
            while ( v63 != v60 );
            if ( !*((_BYTE *)v49 + v62 + 92) )
            {
              *((_BYTE *)v49 + v62 + 92) = 1;
              if ( !(BYTE1(**(_QWORD **)(*v49 + 56)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
                RtlpHpEnvCompactionSchedule(*(_QWORD **)(*v49 + 56));
            }
            if ( BYTE2(BugCheckParameter3_4) == 1 )
            {
              v64 = &v49[8 * (unsigned __int16)BugCheckParameter3_4];
              _m_prefetchw(v64 + 1);
              v65 = v64[1];
              v66 = *(_QWORD *)(v48 + 24);
              *(_QWORD *)(v48 + 24) = v66 & 0xFFF | (v65 - (v65 & 0xFFF));
              v68 = v65;
              v67 = _InterlockedCompareExchange64((volatile signed __int64 *)v64 + 1, v65 & 0xFFF | v48, v65);
              if ( v68 != v67 )
              {
                do
                {
                  v69 = v67;
                  *(_QWORD *)(v48 + 24) = v66 ^ (v67 ^ v66) & 0xFFFFFFFFFFFFF000uLL;
                  v67 = _InterlockedCompareExchange64((volatile signed __int64 *)v64 + 1, v48 | v67 & 0xFFF, v67);
                }
                while ( v67 != v69 );
              }
            }
            return;
          }
        }
        else
        {
          v170 = *(_QWORD *)(v48 + 8 * (v51 >> 6) + 64);
          v171 = __ROL8__(-2LL, v51 & 0x3F);
          v58 = v51;
          *(_QWORD *)(v48 + 8 * (v51 >> 6) + 64) = v170 & v171;
          if ( (~v171 & v170) != 0 )
          {
            ++*(_WORD *)(v48 + 32);
            return;
          }
        }
        RtlpLogHeapFailure(17, *v49, v10, v48, v58, 0LL);
        return;
      }
      v192[0] = 0;
      v120 = (_WORD *)((v42 & v46) + ((v46 - (v42 & v46)) >> 5 << v44));
      if ( (v47 & 3) == 3 )
      {
        if ( (_WORD *)v10 == v120 )
          goto LABEL_184;
        if ( v47 == 15 )
        {
          if ( v10 > (unsigned __int64)v120 )
          {
            if ( (unsigned int)RtlpHpVsContextFree(*(_QWORD *)(v40 + 32), v120, v10, v192) )
            {
              v121 = *(_QWORD *)(v40 + 24);
              if ( v192[0] < *(unsigned __int16 *)(v121 + 68) )
              {
                v122 = v121
                     + 8LL
                     * ((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                      + ((unsigned __int64)(v192[0] + 15) >> 4))
                      - 1);
                do
                {
                  v185 = *(_QWORD *)(v122 + 448);
                  v123 = v185;
                  v124 = v185;
                  if ( (v185 & 1) == 0 )
                    break;
                  if ( WORD1(v185) > 1u )
                  {
                    --WORD1(v185);
                    v124 = v185;
                  }
                }
                while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v122 + 448), v124, v123) != v123 );
              }
            }
            return;
          }
LABEL_184:
          RtlpHpSegPageRangeShrink(v40, v46, v46);
          return;
        }
      }
    }
    RtlpLogHeapFailure(9, *(_QWORD *)(v40 + 56), v10, 0LL, 0LL, 0LL);
  }
}
