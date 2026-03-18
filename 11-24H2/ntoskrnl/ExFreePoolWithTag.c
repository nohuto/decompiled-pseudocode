/*
 * XREFs of ExFreePoolWithTag @ 0x140B72CD0
 * Callers:
 *     PpmEventHgsHardwareTable @ 0x140203014 (PpmEventHgsHardwareTable.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140206A10 (KeQueryLogicalProcessorRelationship.c)
 *     MiGetBackgroundHugePageToZero @ 0x140209AF0 (MiGetBackgroundHugePageToZero.c)
 *     MiStoreEvictPageFile @ 0x14020E830 (MiStoreEvictPageFile.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x14023C6CC (MiEntireSubsectionIsPurged.c)
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     MiObtainSystemCacheView @ 0x140241D90 (MiObtainSystemCacheView.c)
 *     MiEmptyPageAccessLog @ 0x140244260 (MiEmptyPageAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140244A68 (MiQueuePageAccessLog.c)
 *     IoDiskIoAttributionDereference @ 0x140245180 (IoDiskIoAttributionDereference.c)
 *     SmpKeyedStoreEntryGet @ 0x1402457A0 (SmpKeyedStoreEntryGet.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x140246820 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     IoSetOplockKeyContext @ 0x140247C44 (IoSetOplockKeyContext.c)
 *     IoSetOplockPrivateFoExt @ 0x140247E3C (IoSetOplockPrivateFoExt.c)
 *     FsRtlFastUnlockSingleShared @ 0x14024A1C0 (FsRtlFastUnlockSingleShared.c)
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     RtlDeleteElementGenericTable @ 0x14024AF70 (RtlDeleteElementGenericTable.c)
 *     EtwpAllocateFreeBuffers @ 0x14024C2BC (EtwpAllocateFreeBuffers.c)
 *     PsLeavePriorityRegion @ 0x14024CA40 (PsLeavePriorityRegion.c)
 *     PsBoostThreadIo @ 0x14024D950 (PsBoostThreadIo.c)
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     IopAllocateIrpPrivate @ 0x140253E10 (IopAllocateIrpPrivate.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     SepMandatoryIntegrityCheck @ 0x140259F30 (SepMandatoryIntegrityCheck.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x140261F58 (MiCreatePrototypePtes.c)
 *     VslpLockPagesForTransfer @ 0x140266DCC (VslpLockPagesForTransfer.c)
 *     MiGetWorkingSetInfo @ 0x140267168 (MiGetWorkingSetInfo.c)
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     IopBuildDeviceIoControlRequest @ 0x140267920 (IopBuildDeviceIoControlRequest.c)
 *     VslpUnlockPagesForTransfer @ 0x140267E9C (VslpUnlockPagesForTransfer.c)
 *     IopFreeCopyObjectsFromIrp @ 0x14026850C (IopFreeCopyObjectsFromIrp.c)
 *     ExUnlockUserBuffer @ 0x14026893C (ExUnlockUserBuffer.c)
 *     PspReaper @ 0x140269DB0 (PspReaper.c)
 *     IoReleaseRemoveLockEx @ 0x140270610 (IoReleaseRemoveLockEx.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402744C0 (ExpAcquireSharedStarveExclusive.c)
 *     PfSnGetFileInformation @ 0x140276200 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x140276790 (PfSnTraceGetLogEntry.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140277718 (EtwpGetTrackingLockSlotForThread.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402794F0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14027A4F0 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     PopFxDeactivateComponentDependencies @ 0x14027B544 (PopFxDeactivateComponentDependencies.c)
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14027C730 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140286070 (MmProbeAndLockSelectedPages.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140291634 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     IopProcessWorkItem @ 0x1402A2410 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     CcWriteBehind @ 0x1402A7ADC (CcWriteBehind.c)
 *     CcAsyncCopyRead @ 0x1402A94F0 (CcAsyncCopyRead.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1402AA708 (MiDereferenceInPageAutoBoostLock.c)
 *     CcPostDeferredWrites @ 0x1402AAB14 (CcPostDeferredWrites.c)
 *     CcFlushCachePriv @ 0x1402AC810 (CcFlushCachePriv.c)
 *     MiViewMayContainPage @ 0x1402BA550 (MiViewMayContainPage.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     ExpAddTagForBigPages @ 0x1402C4180 (ExpAddTagForBigPages.c)
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1402CA5A8 (CcCreatePrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1402CB768 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeleteNumaNode @ 0x1402CBD74 (CcDeleteNumaNode.c)
 *     CcDeleteSharedCacheMap @ 0x1402CCE98 (CcDeleteSharedCacheMap.c)
 *     CcDeleteMbcb @ 0x1402CD624 (CcDeleteMbcb.c)
 *     CcDeallocateBcb @ 0x1402CD8E4 (CcDeallocateBcb.c)
 *     ExDeleteResourceLite @ 0x1402CD920 (ExDeleteResourceLite.c)
 *     CcInitializeVolumeCacheMap @ 0x1402CDF18 (CcInitializeVolumeCacheMap.c)
 *     MiStoreDrainWriteSupports @ 0x1402CF620 (MiStoreDrainWriteSupports.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1402D001C (MiStoreCheckCompleteWriteBatch.c)
 *     MiFreeSlabEntry @ 0x1402D2150 (MiFreeSlabEntry.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402D24DC (MiReturnSystemCacheRegionsToKva.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1402D25D4 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiFreeDeferredAcceleratorPool @ 0x1402D26BC (MiFreeDeferredAcceleratorPool.c)
 *     IopDereferenceVpbAndFree @ 0x1402D68F8 (IopDereferenceVpbAndFree.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402D6BE0 (ExpReleaseResourceForThreadLite.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiFreeInPageSupportBlock @ 0x1402EEC40 (MiFreeInPageSupportBlock.c)
 *     MiAllocateCombineBlock @ 0x1402FA538 (MiAllocateCombineBlock.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x14031AC50 (IopFreeIrp.c)
 *     IopFreeIrpExtension @ 0x14031B360 (IopFreeIrpExtension.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x14032AF10 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpTraceLostEvent @ 0x14032BB34 (EtwpTraceLostEvent.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14032C460 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmInstallNewIdleStates @ 0x14032C8F0 (PpmInstallNewIdleStates.c)
 *     PpmQueryPlatformStateResidency @ 0x14032D624 (PpmQueryPlatformStateResidency.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x14032F5A4 (PopDiagTraceFxDeviceAccounting.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140330D68 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140331678 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendPowerMessage @ 0x140331990 (PopUmpoSendPowerMessage.c)
 *     PoDestroyReasonContext @ 0x140331BA4 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x140331D38 (PoCaptureReasonContext.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     ExpFreeOwnerEntry @ 0x14033F7B0 (ExpFreeOwnerEntry.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140343740 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x1403438C0 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140343AD0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepAcquireOrderedReadLocks @ 0x140343E00 (SepAcquireOrderedReadLocks.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1403440B0 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403450F0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403468F4 (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140347600 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140347BD0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     SepAdtLogAuditRecord @ 0x140348E4C (SepAdtLogAuditRecord.c)
 *     SepRmDispatchDataToLsa @ 0x140349EEC (SepRmDispatchDataToLsa.c)
 *     SepRmCallLsa @ 0x14034A120 (SepRmCallLsa.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140355758 (SepVerifyDesktopAppxPackageName.c)
 *     SepVerifyDesktopAppxImage @ 0x140356A00 (SepVerifyDesktopAppxImage.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x140356DA0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140356E98 (SepCleanupMarkedForDeletionEntries.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140357560 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140357C3C (AuthzBasepDeleteSecurityAttribute.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140358240 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x14035B6A0 (SepFilterCheck.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14035C750 (AuthzBasepFreeSecurityAttributesList.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     SeCaptureObjectTypeList @ 0x14035ED40 (SeCaptureObjectTypeList.c)
 *     SeLogAccessFailure @ 0x14035F070 (SeLogAccessFailure.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14035F940 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepCommonAccessCheckEx @ 0x140360470 (SepCommonAccessCheckEx.c)
 *     SepFreeResourceInfo @ 0x1403620C0 (SepFreeResourceInfo.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x140363E20 (SepSetProcessTrustLabelAceForToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403642B0 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140364418 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     MiStoreContractVirtualPagefileApc @ 0x1403659B0 (MiStoreContractVirtualPagefileApc.c)
 *     MiStoreEvictThread @ 0x140365C20 (MiStoreEvictThread.c)
 *     MiFindPageFileWriteCluster @ 0x140367BDC (MiFindPageFileWriteCluster.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiMappedPageWriter @ 0x140369760 (MiMappedPageWriter.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiDeleteControlArea @ 0x14036F6E8 (MiDeleteControlArea.c)
 *     MiDeleteSubsection @ 0x14036F8BC (MiDeleteSubsection.c)
 *     MiDeleteSubsectionPages @ 0x140370928 (MiDeleteSubsectionPages.c)
 *     MiFlushComplete @ 0x140370EF0 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x140371070 (MiFreeOverlappedFlushEntry.c)
 *     FsFilterCtrlFree @ 0x140374B44 (FsFilterCtrlFree.c)
 *     IoMakeAssociatedIrpPriv @ 0x140374CE8 (IoMakeAssociatedIrpPriv.c)
 *     PnpGetRelatedTargetDevice @ 0x1403750B4 (PnpGetRelatedTargetDevice.c)
 *     PopFxNextParentRelationSafe @ 0x140375C20 (PopFxNextParentRelationSafe.c)
 *     PopFxActivateComponentDependents @ 0x1403769A0 (PopFxActivateComponentDependents.c)
 *     MiReturnCcAccessLog @ 0x140379C6C (MiReturnCcAccessLog.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037A170 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     SmKmFreeMdlForLock @ 0x14037AD84 (SmKmFreeMdlForLock.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037B210 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x14037CDE4 (HalpMmAllocCtxBufferCleanup.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x14037CE34 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     StEtaCleanup @ 0x14037DF1C (StEtaCleanup.c)
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14037DF60 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E000 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E2D4 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x14037E384 (SmFpCleanup.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E408 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x14037EE98 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14037EFFC (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StStagingRegionCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@@Z @ 0x14037F364 (-StStagingRegionCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14037F398 (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14037F3DC (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x14037F41C (-NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z.c)
 *     SmHpChunkHeapCleanup @ 0x14037F470 (SmHpChunkHeapCleanup.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14037FE90 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140380700 (SmPrepareForFatalHeapCorruption.c)
 *     SmArrayGrow @ 0x140380C70 (SmArrayGrow.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140382530 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140383650 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140383CB0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140387A58 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     SmHpBufferAlloc @ 0x1403881C0 (SmHpBufferAlloc.c)
 *     HalpBuildScatterGatherList @ 0x14038CB08 (HalpBuildScatterGatherList.c)
 *     HalBuildScatterGatherListV2 @ 0x14038E070 (HalBuildScatterGatherListV2.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038E95C (HalpDmaAllocateMapRegisters.c)
 *     HalPutScatterGatherListV2 @ 0x14038F730 (HalPutScatterGatherListV2.c)
 *     HalPutScatterGatherListV3 @ 0x140392818 (HalPutScatterGatherListV3.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x140397070 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140397244 (MmWaitForCacheManagerPrefetch.c)
 *     MiPfCompleteCoalescedIo @ 0x140397438 (MiPfCompleteCoalescedIo.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403978C4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140399A30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14039A0C0 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     MiExpandSystemCache @ 0x1403A7378 (MiExpandSystemCache.c)
 *     MiAllocateLargeZeroPages @ 0x1403A7BB8 (MiAllocateLargeZeroPages.c)
 *     MiStartDpcGang @ 0x1403A875C (MiStartDpcGang.c)
 *     HalFreeCommonBufferVector @ 0x1403A8F20 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferDmarThin @ 0x1403A9030 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x1403A9120 (HalFreeCommonBufferDmaThin.c)
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 *     VmpPrefetchVirtualAddresses @ 0x1403AA658 (VmpPrefetchVirtualAddresses.c)
 *     HalPutScatterGatherListDmarThin @ 0x1403AD350 (HalPutScatterGatherListDmarThin.c)
 *     PopFxActivateComponentDependencies @ 0x1403B5F40 (PopFxActivateComponentDependencies.c)
 *     KiIntSteerConnect @ 0x1403B7680 (KiIntSteerConnect.c)
 *     KeDisconnectInterrupt @ 0x1403B8A3C (KeDisconnectInterrupt.c)
 *     KiIntSteerDisable @ 0x1403BA9C0 (KiIntSteerDisable.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1403BC880 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1403BC9C0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpFinalizeTimerDeletion @ 0x1403BF240 (ExpFinalizeTimerDeletion.c)
 *     IopUnloadSafeCompletion @ 0x1403C2E70 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403C3010 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     EtwpTraceImageUnloadApc @ 0x1403C4A00 (EtwpTraceImageUnloadApc.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403C4D24 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopDropIrp @ 0x1403C5110 (IopDropIrp.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1403C5500 (FsRtlInsertPerFileObjectContext.c)
 *     IoSetShadowFileInformation @ 0x1403C5970 (IoSetShadowFileInformation.c)
 *     IopAllocateFileObjectExtension @ 0x1403C5A80 (IopAllocateFileObjectExtension.c)
 *     IopProcessBufferedIoCompletion @ 0x1403C5E80 (IopProcessBufferedIoCompletion.c)
 *     MiDeleteZeroThreadContext @ 0x1403C6608 (MiDeleteZeroThreadContext.c)
 *     PpmUpdateIdleVeto @ 0x1403CA680 (PpmUpdateIdleVeto.c)
 *     MiCreateCloneChain @ 0x1403CCE38 (MiCreateCloneChain.c)
 *     MiFreeVadRange @ 0x1403CDBD8 (MiFreeVadRange.c)
 *     MiShowBadMapper @ 0x1403D0830 (MiShowBadMapper.c)
 *     EtwTiLogInsertQueueUserApc @ 0x1403D32E4 (EtwTiLogInsertQueueUserApc.c)
 *     EtwpLogMemNodeInfo @ 0x1403D3EBC (EtwpLogMemNodeInfo.c)
 *     FsRtlReleaseEofLock @ 0x1403D8730 (FsRtlReleaseEofLock.c)
 *     FsRtlCheckOplockEx2 @ 0x1403DA5B0 (FsRtlCheckOplockEx2.c)
 *     FsRtlCancelNotify @ 0x1403DB210 (FsRtlCancelNotify.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1403DCC68 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     FsRtlEmptyFreePoolList @ 0x1403DF554 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1403DF654 (FsRtlFreeTunnelNode.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403DFD70 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403E0290 (FsRtlAddEntry.c)
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x1403E4470 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     ExpExpandResourceOwnerTable @ 0x1403E912C (ExpExpandResourceOwnerTable.c)
 *     HalpBuildScatterGatherListDmaThin @ 0x1403ECC40 (HalpBuildScatterGatherListDmaThin.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1403F0930 (RtlDeleteElementGenericTableAvlEx.c)
 *     VfTargetDriversRemove @ 0x1403F0E5C (VfTargetDriversRemove.c)
 *     IoDeleteDevice @ 0x1403F1B00 (IoDeleteDevice.c)
 *     PoRunDownDeviceObject @ 0x1403F1C6C (PoRunDownDeviceObject.c)
 *     PopGetDope @ 0x1403F2908 (PopGetDope.c)
 *     CcExtendVacbArray @ 0x1403F6E60 (CcExtendVacbArray.c)
 *     MiIssueSegmentDereferenceWork @ 0x1403F7920 (MiIssueSegmentDereferenceWork.c)
 *     MiFreeClonePool @ 0x1403F7F0C (MiFreeClonePool.c)
 *     MiDeleteEmptySubsectionProtoPool @ 0x1403F8174 (MiDeleteEmptySubsectionProtoPool.c)
 *     MiFreeCombinePool @ 0x1403F8550 (MiFreeCombinePool.c)
 *     FsRtlTruncateBaseMcb @ 0x1403F9E10 (FsRtlTruncateBaseMcb.c)
 *     MiDeprioritizeVad @ 0x1403FD204 (MiDeprioritizeVad.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     KiInsertNewDpcRuntime @ 0x1403FF6B0 (KiInsertNewDpcRuntime.c)
 *     HalGetScatterGatherListDmaThin @ 0x1404002C0 (HalGetScatterGatherListDmaThin.c)
 *     SepDeleteAccessState @ 0x140401610 (SepDeleteAccessState.c)
 *     MmOutSwapVirtualAddresses @ 0x140404108 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x140404E48 (MmInSwapWorkingSet.c)
 *     MiCommitPageTableRangesForVad @ 0x1404050D8 (MiCommitPageTableRangesForVad.c)
 *     KeFreeXStateContext @ 0x140406E58 (KeFreeXStateContext.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14040AF54 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14040B494 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     EtwpAllocatePartitionMemory @ 0x140410058 (EtwpAllocatePartitionMemory.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14041011C (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140410764 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140410E18 (HalpAllocateCommonBufferDmaThin.c)
 *     MiAllocateContiguousMemory @ 0x14041182C (MiAllocateContiguousMemory.c)
 *     MiAllocateSkipPagesForMdl @ 0x140414774 (MiAllocateSkipPagesForMdl.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     PopCaptureReasonContext @ 0x14041C644 (PopCaptureReasonContext.c)
 *     RtlContractHashTable @ 0x14041CAA0 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x14041CBE0 (RtlExpandHashTable.c)
 *     CmpDoQueryKeyName @ 0x14041EA20 (CmpDoQueryKeyName.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140426C38 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopGetSetSpecificExtension @ 0x140426ED0 (IopGetSetSpecificExtension.c)
 *     IopSetLockOperationProcess @ 0x14042AC50 (IopSetLockOperationProcess.c)
 *     PspInsertProperty @ 0x14042D15C (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x14042D240 (PspRemoveProperty.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     SmFpFree @ 0x14042F2B0 (SmFpFree.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     RtlpAllowsLowBoxAccess @ 0x1404323F0 (RtlpAllowsLowBoxAccess.c)
 *     IopSetFileObjectExtensionFlag @ 0x140434650 (IopSetFileObjectExtensionFlag.c)
 *     HalPutScatterGatherListDmaThin @ 0x140434930 (HalPutScatterGatherListDmaThin.c)
 *     PfSnNameRemove @ 0x1404376C0 (PfSnNameRemove.c)
 *     AuthzBasepResetOperands @ 0x140437B80 (AuthzBasepResetOperands.c)
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14043A220 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     MiFreeModWriterEntry @ 0x14043A49C (MiFreeModWriterEntry.c)
 *     IopMcDereferenceBufferEntry @ 0x14043D2F0 (IopMcDereferenceBufferEntry.c)
 *     EmpEvaluateTargetRule @ 0x14043D590 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x14043D87C (EmpEvaluateNodeLink.c)
 *     FsRtlUninitializeBaseMcb @ 0x1404408F0 (FsRtlUninitializeBaseMcb.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     MiDemoteSlabEntry @ 0x140442F50 (MiDemoteSlabEntry.c)
 *     PopFxNextComponentChildRelationSafe @ 0x140445C38 (PopFxNextComponentChildRelationSafe.c)
 *     MiDereferencePageRuns @ 0x1404473D0 (MiDereferencePageRuns.c)
 *     ?SmCompressCtxDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140449650 (-SmCompressCtxDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAM.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x14044A8F4 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     RtlInsertDynamicUserFunctionTable @ 0x14044B1D0 (RtlInsertDynamicUserFunctionTable.c)
 *     IopSessionChangeWorker @ 0x14044B580 (IopSessionChangeWorker.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14044E0DC (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14044F4B4 (LdrpSetAlternateResourceModuleHandle.c)
 *     AdtpWriteToEtwEx @ 0x140453140 (AdtpWriteToEtwEx.c)
 *     AdtpPackageParameters @ 0x1404534B8 (AdtpPackageParameters.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14045704C (IopDereferencePassiveInterruptBlock.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14045728C (AuthzBasepCompareFQBNOperands.c)
 *     EtwTelemetryCoverageReport @ 0x140457F60 (EtwTelemetryCoverageReport.c)
 *     PopSetWatchdog @ 0x140458BDC (PopSetWatchdog.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140459CBC (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     FsRtlInsertPerFileContextWithReserve @ 0x14045B800 (FsRtlInsertPerFileContextWithReserve.c)
 *     HalGetScatterGatherListDmarThin @ 0x14045EAF0 (HalGetScatterGatherListDmarThin.c)
 *     HalpBuildScatterGatherListDmarThin @ 0x14045EC38 (HalpBuildScatterGatherListDmarThin.c)
 *     CmQueryLayeredKey @ 0x140462148 (CmQueryLayeredKey.c)
 *     EtwpFreeCompression @ 0x140463FA8 (EtwpFreeCompression.c)
 *     EtwpFreePlaceholderList @ 0x14046420C (EtwpFreePlaceholderList.c)
 *     BgpFwAllocateMemory @ 0x140467320 (BgpFwAllocateMemory.c)
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x140467C90 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     IoFreeWorkItem @ 0x140467CE0 (IoFreeWorkItem.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140467EF4 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     ExpFastResourceLegacyRelease @ 0x140469BD0 (ExpFastResourceLegacyRelease.c)
 *     MmFreeAccessPfnBuffer @ 0x14046B30C (MmFreeAccessPfnBuffer.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     IopCreateSecurityCheck @ 0x14046DA5C (IopCreateSecurityCheck.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x14046DC50 (VrpOriginalKeyNameParameterCleanup.c)
 *     MiAllocateModWriterEntry @ 0x14046EBF8 (MiAllocateModWriterEntry.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14046F240 (PnpUnregisterPlugPlayNotification.c)
 *     SepFreeTokenCapabilities @ 0x14046FF38 (SepFreeTokenCapabilities.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1404701FC (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     PnpFreeGenericTableEntryNonPaged @ 0x1404711C0 (PnpFreeGenericTableEntryNonPaged.c)
 *     AdtpCleanupParameterAllocations @ 0x1404720C8 (AdtpCleanupParameterAllocations.c)
 *     KiDpcRuntimeHistoryHashTableCleanupDpcRoutine @ 0x140476BE0 (KiDpcRuntimeHistoryHashTableCleanupDpcRoutine.c)
 *     PfFbBufferListInsertInFree @ 0x140477680 (PfFbBufferListInsertInFree.c)
 *     WheapFreeErrorRecord @ 0x14047808C (WheapFreeErrorRecord.c)
 *     WmipReceiveNotifications @ 0x14047A844 (WmipReceiveNotifications.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14047BB30 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpDeleteWorkerFactory @ 0x14047C610 (ExpDeleteWorkerFactory.c)
 *     MiMakePageBad @ 0x14047C9DC (MiMakePageBad.c)
 *     SepCaptureTokenSecurityOperations @ 0x14047E068 (SepCaptureTokenSecurityOperations.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14047E990 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VmpRemoveMemoryRange @ 0x14047ED34 (VmpRemoveMemoryRange.c)
 *     SepDeleteSessionLowboxEntries @ 0x140480FE4 (SepDeleteSessionLowboxEntries.c)
 *     RtlDeleteHashTable @ 0x1404813D0 (RtlDeleteHashTable.c)
 *     MiDeleteWorkingSetList @ 0x140481A60 (MiDeleteWorkingSetList.c)
 *     EtwpFreeTraceBuffer @ 0x140483510 (EtwpFreeTraceBuffer.c)
 *     EtwpFreePartitionMemory @ 0x1404835A0 (EtwpFreePartitionMemory.c)
 *     EtwpUnregisterPartitionPages @ 0x140483600 (EtwpUnregisterPartitionPages.c)
 *     ExFreeCacheAwareRundownProtection @ 0x140484170 (ExFreeCacheAwareRundownProtection.c)
 *     MiDereferenceExtendInfo @ 0x1404844BC (MiDereferenceExtendInfo.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1404845AC (IopFreeCopyObjectsFromDataBuffer.c)
 *     PpmEventTracePreVetoAccounting @ 0x1404854A8 (PpmEventTracePreVetoAccounting.c)
 *     DbgkPostModuleMessage @ 0x140485670 (DbgkPostModuleMessage.c)
 *     HvpAllocateLogBuffers @ 0x140487D44 (HvpAllocateLogBuffers.c)
 *     IopKeepAliveWorker @ 0x140488DC0 (IopKeepAliveWorker.c)
 *     SshpWriteBlocker @ 0x14048ABA0 (SshpWriteBlocker.c)
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14048B568 (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x14048B624 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmHpBufferCleanup @ 0x14048CE40 (SmHpBufferCleanup.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x14048D520 (CcInitializeAsyncReadForNodeHelper.c)
 *     RtlCheckTokenCapability @ 0x14048DC70 (RtlCheckTokenCapability.c)
 *     EtwpAdjustStackLookasideBuffers @ 0x14048EB74 (EtwpAdjustStackLookasideBuffers.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x14048EBF0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpAdjustLastBranchLookasideBuffers @ 0x14048ED14 (EtwpAdjustLastBranchLookasideBuffers.c)
 *     MiDeleteCloneZombies @ 0x14048F544 (MiDeleteCloneZombies.c)
 *     RtlIsUntrustedObject @ 0x140490B00 (RtlIsUntrustedObject.c)
 *     MiFreeImageCfgContext @ 0x140490D54 (MiFreeImageCfgContext.c)
 *     MiDereferencePageChains @ 0x140491294 (MiDereferencePageChains.c)
 *     ExFreeSvmAsid @ 0x140491AF4 (ExFreeSvmAsid.c)
 *     PnpRemoveLockedDeviceNode @ 0x1404926CC (PnpRemoveLockedDeviceNode.c)
 *     CcUnInitializeAsyncReadForNodeHelper @ 0x140493A40 (CcUnInitializeAsyncReadForNodeHelper.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404946C8 (FsRtlpOplockSendModernAppTermination.c)
 *     MiCleanupBestCandidatesContext @ 0x14049494C (MiCleanupBestCandidatesContext.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140495260 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     MiDeletePerSessionProtos @ 0x140495AB0 (MiDeletePerSessionProtos.c)
 *     MiDeletePxeSharedLocks @ 0x140495F34 (MiDeletePxeSharedLocks.c)
 *     MiGetUltraMdlContext @ 0x14049878C (MiGetUltraMdlContext.c)
 *     SepCaptureHandles @ 0x140498D9C (SepCaptureHandles.c)
 *     MiObtainRotateProtectionRanges @ 0x140499870 (MiObtainRotateProtectionRanges.c)
 *     EtwpFreeApcPool @ 0x14049A610 (EtwpFreeApcPool.c)
 *     IopLiveDumpWriteDumpFile @ 0x14049ADE4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14049B264 (IopLiveDumpFreeDumpBuffers.c)
 *     HalCancelAdapterChannelDmaThin @ 0x14049D310 (HalCancelAdapterChannelDmaThin.c)
 *     HalpIumGetNextVariableName @ 0x14049D420 (HalpIumGetNextVariableName.c)
 *     PopUpdateWakeSource @ 0x1404A0ACC (PopUpdateWakeSource.c)
 *     KsepPoolFreeNonPaged @ 0x1404A0EC0 (KsepPoolFreeNonPaged.c)
 *     HalpIumGetVariable @ 0x1404A0EF0 (HalpIumGetVariable.c)
 *     PpDevNodeRemoveFromTree @ 0x1404A38D4 (PpDevNodeRemoveFromTree.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1404A3FCC (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404A4024 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgUnicodeStringToAnsiString @ 0x1404A40A0 (DbgUnicodeStringToAnsiString.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x1404A58D4 (PiDevCfgPushCopyKeyEntry.c)
 *     IopCleanupNotifications @ 0x1404A60A8 (IopCleanupNotifications.c)
 *     KsepPoolFreePaged @ 0x1404A6F94 (KsepPoolFreePaged.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404A7950 (IoReleaseRemoveLockAndWaitEx.c)
 *     DestroyEventEntry @ 0x1404A8FA4 (DestroyEventEntry.c)
 *     PfTFreeTraceDump @ 0x1404A9C78 (PfTFreeTraceDump.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404AB004 (PopTraceThermalRequestActiveActivity.c)
 *     AppModelFreeUnicodeString @ 0x1404ABDC0 (AppModelFreeUnicodeString.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1404AC03C (ExpSaPageGroupDescriptorFree.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1404AC0F8 (SepCheckAndCopySelfRelativeSD.c)
 *     PopReadRegKeyValue @ 0x1404AC224 (PopReadRegKeyValue.c)
 *     IoWriteErrorLogEntry @ 0x1404AC3E0 (IoWriteErrorLogEntry.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404AD028 (PopUnregisterPowerSettingCallback.c)
 *     ExUnregisterCallback @ 0x1404ADD30 (ExUnregisterCallback.c)
 *     IoRaiseInformationalHardError @ 0x1404ADFA0 (IoRaiseInformationalHardError.c)
 *     IoAllocateDriverObjectExtension @ 0x1404AE3E0 (IoAllocateDriverObjectExtension.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x1404AECE8 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1404B02A0 (MiAddPrivateFixupEntryForSystemImage.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1404B0420 (RtlNormalizeSecurityDescriptor.c)
 *     VslAllocatePool @ 0x1404B0800 (VslAllocatePool.c)
 *     IopReplaceCompletionPort @ 0x1404B28E8 (IopReplaceCompletionPort.c)
 *     ExRegisterCallback @ 0x1404B3D50 (ExRegisterCallback.c)
 *     SepExpandSingletonArrays @ 0x1404B520C (SepExpandSingletonArrays.c)
 *     PnpGetRegistryDword @ 0x1404B53A4 (PnpGetRegistryDword.c)
 *     EtwpInitializeCompression @ 0x1404B6884 (EtwpInitializeCompression.c)
 *     BiMapEfiDeviceForSpaces @ 0x1404B6A60 (BiMapEfiDeviceForSpaces.c)
 *     HalpGrowMapBufferWorker @ 0x1404B6BE0 (HalpGrowMapBufferWorker.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B74C4 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     KasanDriverLoadImageInternal @ 0x1404B7B70 (KasanDriverLoadImageInternal.c)
 *     VslFreePoolTransferObject @ 0x1404B9180 (VslFreePoolTransferObject.c)
 *     sub_1404B97B8 @ 0x1404B97B8 (sub_1404B97B8.c)
 *     VfPoolDelayFreeIfPossible @ 0x1404BAF20 (VfPoolDelayFreeIfPossible.c)
 *     CcMmLogLostDelayedWriteError @ 0x1404BB8C0 (CcMmLogLostDelayedWriteError.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404BB96C (EtwpCovSampCaptureContextStop.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BBE8C (SeSetLearningModeObjectInformation.c)
 *     IopInvalidateBusRelationsWorker @ 0x1404BE320 (IopInvalidateBusRelationsWorker.c)
 *     CcUninitializeAsyncLazywriteForNodeHelper @ 0x1404BE7B0 (CcUninitializeAsyncLazywriteForNodeHelper.c)
 *     PsFreeEnclaveModuleInfo @ 0x1404BEC50 (PsFreeEnclaveModuleInfo.c)
 *     PopIdlePhaseWatchdogCallback @ 0x1404BF450 (PopIdlePhaseWatchdogCallback.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1404BF62C (RtlpMuiRegLoadLicInformation.c)
 *     BiWasFirmwareModified @ 0x1404BFC0C (BiWasFirmwareModified.c)
 *     ExGetWakeTimerList @ 0x1404BFC7C (ExGetWakeTimerList.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1404C229C (PopRecordPoIrpBlackboxInformation.c)
 *     SmFpPreAllocate @ 0x1404C3258 (SmFpPreAllocate.c)
 *     CcPostVolumeTelemetry @ 0x1404C405C (CcPostVolumeTelemetry.c)
 *     PpmEventHgsNormalizedTable @ 0x1404C6EBC (PpmEventHgsNormalizedTable.c)
 *     PfpMemoryRangesQuery @ 0x1404C7DA4 (PfpMemoryRangesQuery.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1404C998C (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PiDevCfgPopDriverNodeEntry @ 0x1404CA620 (PiDevCfgPopDriverNodeEntry.c)
 *     IopAllowRemoteDASD @ 0x1404CB370 (IopAllowRemoteDASD.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404CCC34 (PpmEventHgsHardwareTableResonChanged.c)
 *     PipFreeDependencyEdge @ 0x1404CD984 (PipFreeDependencyEdge.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1404CDEA0 (MiUnlockAndDereferenceNestedVad.c)
 *     HalpHvInitMcaPcrContext @ 0x1404CE1F8 (HalpHvInitMcaPcrContext.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1404CEAE4 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     MiDereferenceHugeContext @ 0x1404CFD8C (MiDereferenceHugeContext.c)
 *     sub_1404D3618 @ 0x1404D3618 (sub_1404D3618.c)
 *     EtwpGetDriverDataDosPath @ 0x1404D4284 (EtwpGetDriverDataDosPath.c)
 *     KeStartProfile @ 0x1404D6890 (KeStartProfile.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D8538 (MiFreeTransitionPageHeatList.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D8A64 (MiLockWorkingSetForLargeMapping.c)
 *     KeDisableProfiling @ 0x1404D8C44 (KeDisableProfiling.c)
 *     PopFxDestroyDeviceDpm @ 0x1404D9358 (PopFxDestroyDeviceDpm.c)
 *     CcAsyncReadWorker @ 0x1404DF280 (CcAsyncReadWorker.c)
 *     CcCompleteAsyncReadWorker @ 0x1404DFBA0 (CcCompleteAsyncReadWorker.c)
 *     FsRtlUninitializeOplock @ 0x1404E0250 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E42B0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E4608 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E4EB0 (FsRtlpRequestShareableOplock.c)
 *     IoCaptureLiveDump @ 0x1404E6068 (IoCaptureLiveDump.c)
 *     IopLoadDriverImage @ 0x1404E691C (IopLoadDriverImage.c)
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     SepMandatorySubProcessToken @ 0x1404EF064 (SepMandatorySubProcessToken.c)
 *     EtwpCovSampLookasideGrow @ 0x1404EF6CC (EtwpCovSampLookasideGrow.c)
 *     EtwpApplyEventNameFilter @ 0x1404EFD50 (EtwpApplyEventNameFilter.c)
 *     MiRemoveSecureEntry @ 0x1404F1C5C (MiRemoveSecureEntry.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404F5AF0 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ExpSaBinaryArrayRemove @ 0x1404F6934 (ExpSaBinaryArrayRemove.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F721C (SepValidateAndCopyGlobalEntry.c)
 *     PsFreeAffinityToken @ 0x1404F8830 (PsFreeAffinityToken.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1404F89C0 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     MiDeleteCloneDescriptor @ 0x1404F8BB8 (MiDeleteCloneDescriptor.c)
 *     ExpDiskEnumCallback @ 0x1404FA228 (ExpDiskEnumCallback.c)
 *     PopFxDestroyDeviceCommon @ 0x1404FA6C0 (PopFxDestroyDeviceCommon.c)
 *     ExFreeCacheAwarePushLock @ 0x1404FB330 (ExFreeCacheAwarePushLock.c)
 *     HalInitializeBios @ 0x14053BD40 (HalInitializeBios.c)
 *     HalpDmaFindDeviceObjectByToken @ 0x14053E108 (HalpDmaFindDeviceObjectByToken.c)
 *     HalCancelAdapterChannel @ 0x14054E9D0 (HalCancelAdapterChannel.c)
 *     HalpDmaFreeChildAdapter @ 0x14054F560 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x1405501A0 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140550340 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCancelAdapterChannelDmarThin @ 0x140551890 (HalCancelAdapterChannelDmarThin.c)
 *     HalpErrorDeferredHandler @ 0x140555190 (HalpErrorDeferredHandler.c)
 *     HalpFreeDrsPool @ 0x14055522C (HalpFreeDrsPool.c)
 *     HalpPmemErrorDeferredHandler @ 0x1405555F0 (HalpPmemErrorDeferredHandler.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1405556E4 (HalpPmemErrorDeferredRecovery.c)
 *     HalpDeleteSecondaryIcEntry @ 0x140555A18 (HalpDeleteSecondaryIcEntry.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405594B8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpIumSetVariable @ 0x140561990 (HalpIumSetVariable.c)
 *     CcDeleteVolumeCacheMap @ 0x140579D80 (CcDeleteVolumeCacheMap.c)
 *     CcRegisterExternalCache @ 0x14057A8A0 (CcRegisterExternalCache.c)
 *     CcRegisterExternalCacheEx @ 0x14057A990 (CcRegisterExternalCacheEx.c)
 *     CcUnregisterExternalCache @ 0x14057AC80 (CcUnregisterExternalCache.c)
 *     CcUnregisterExternalCacheEx @ 0x14057ACC0 (CcUnregisterExternalCacheEx.c)
 *     CcQueryRegKeyValue @ 0x14057B3AC (CcQueryRegKeyValue.c)
 *     CcRegistryChangeCallback @ 0x14057B500 (CcRegistryChangeCallback.c)
 *     CcUpdateDynamicRegistrySettings @ 0x14057B8A0 (CcUpdateDynamicRegistrySettings.c)
 *     CcDeletePartition @ 0x14057C6EC (CcDeletePartition.c)
 *     CcInitializePartition @ 0x14057CD28 (CcInitializePartition.c)
 *     CcGetDeviceGuidAsync @ 0x14057D5C0 (CcGetDeviceGuidAsync.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057E074 (CcCompleteAsyncWriteBehind.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057E3BC (CcWriteBehindAsyncPreProcess.c)
 *     EmpProviderDeregisterEntry @ 0x14057F170 (EmpProviderDeregisterEntry.c)
 *     EmpRuleUpdateWorkerThread @ 0x14057F370 (EmpRuleUpdateWorkerThread.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x14057F618 (EmpEvaluateUpdateRuleEvalState.c)
 *     FsRtlFreeAePushLock @ 0x14057FEC0 (FsRtlFreeAePushLock.c)
 *     FsRtlpFreeRHOpContext @ 0x140580D80 (FsRtlpFreeRHOpContext.c)
 *     FsFilterInit @ 0x14058180C (FsFilterInit.c)
 *     FsRtlStackOverflowRead @ 0x140582090 (FsRtlStackOverflowRead.c)
 *     HvlpDepositPages @ 0x140584134 (HvlpDepositPages.c)
 *     VslGetEtwDebugId @ 0x14058D0C4 (VslGetEtwDebugId.c)
 *     VslQueryActiveSecurePatches @ 0x14058DA90 (VslQueryActiveSecurePatches.c)
 *     BgkDisplayString @ 0x14058FC50 (BgkDisplayString.c)
 *     BvgaReleaseResources @ 0x1405907E0 (BvgaReleaseResources.c)
 *     IoFillDumpHeader @ 0x140590FCC (IoFillDumpHeader.c)
 *     IopGetPhysicalMemoryBlock @ 0x14059473C (IopGetPhysicalMemoryBlock.c)
 *     IopInitializeOfflineCrashDump @ 0x140594AD0 (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x140594CE8 (IopIsBitlockerOn.c)
 *     IopReadDumpRegistry @ 0x140594D8C (IopReadDumpRegistry.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140594F18 (IopRemoveDumpCapsuleSupport.c)
 *     IoFreeErrorLogEntry @ 0x140596990 (IoFreeErrorLogEntry.c)
 *     IoFreeSfioStreamIdentifier @ 0x1405969F0 (IoFreeSfioStreamIdentifier.c)
 *     IoDiscardDeferredLiveDumpData @ 0x140597A00 (IoDiscardDeferredLiveDumpData.c)
 *     IoInitializeLiveDump @ 0x140597A4C (IoInitializeLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140597C08 (IoWriteDeferredLiveDumpData.c)
 *     IopGetRegistryULongValue @ 0x140597DDC (IopGetRegistryULongValue.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405982F0 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x140598D2C (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140599218 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpAllocateIoSpaceRanges @ 0x14059944C (IopLiveDumpAllocateIoSpaceRanges.c)
 *     IopLiveDumpFreeIoSpaceRanges @ 0x14059AE24 (IopLiveDumpFreeIoSpaceRanges.c)
 *     IopLiveDumpFreeMappingResources @ 0x14059AF20 (IopLiveDumpFreeMappingResources.c)
 *     IopLiveDumpQueryIOSpaceRanges @ 0x14059CCA0 (IopLiveDumpQueryIOSpaceRanges.c)
 *     IopLiveDumpReleaseResources @ 0x14059CE5C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059E850 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     SecureDump_ConvertToRsaBlob @ 0x1405A16E0 (SecureDump_ConvertToRsaBlob.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405A17A4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Init @ 0x1405A1CC4 (SecureDump_Init.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405A1E04 (SecureDump_LoadCertAndProvisionKey.c)
 *     SecureDump_PrepareForInit @ 0x1405A217C (SecureDump_PrepareForInit.c)
 *     SecureDump_ReInitialize @ 0x1405A248C (SecureDump_ReInitialize.c)
 *     SecureDump_ReadRegistry @ 0x1405A2668 (SecureDump_ReadRegistry.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1405A2774 (SecureDump_SymmetricEncryptionSetup.c)
 *     IopErrorLogDpc @ 0x1405A2AA0 (IopErrorLogDpc.c)
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     PnpBootDeviceWait @ 0x1405A3D68 (PnpBootDeviceWait.c)
 *     PipEnumeratePersistedMemoryCallback @ 0x1405A4300 (PipEnumeratePersistedMemoryCallback.c)
 *     PipCreateNewDependencyEdge @ 0x1405A45BC (PipCreateNewDependencyEdge.c)
 *     IoTranslateBusAddress @ 0x1405A4F60 (IoTranslateBusAddress.c)
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405A6878 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PiDevCfgQueryResolveValue @ 0x1405A6EBC (PiDevCfgQueryResolveValue.c)
 *     PnpFreeUnicodeStringList @ 0x1405A92C0 (PnpFreeUnicodeStringList.c)
 *     KasanDriverUnloadImage @ 0x1405A99B0 (KasanDriverUnloadImage.c)
 *     KdDeregisterPowerHandler @ 0x1405AF5E0 (KdDeregisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x1405AFF54 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x1405B07FC (KeProcessorProfileControlArea.c)
 *     KiDeregisterNmiSxCallback @ 0x1405B0CFC (KiDeregisterNmiSxCallback.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405B4668 (KeEtwInitializeCpuStarvationProvider.c)
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405B6014 (KiAssignCooperativeIdleSearchContexts.c)
 *     KiFreeIdleSearchStructures @ 0x1405B6E18 (KiFreeIdleSearchStructures.c)
 *     KiFreeLocalSharedReadyQueue @ 0x1405B6E9C (KiFreeLocalSharedReadyQueue.c)
 *     KiFreeStaticRescheduleContext @ 0x1405B70B0 (KiFreeStaticRescheduleContext.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x1405B8740 (KeEnableOptionalXStateFeaturesApc.c)
 *     KiAdjustGroupConfiguration @ 0x1405BABD4 (KiAdjustGroupConfiguration.c)
 *     KiFreeProcessorNumber @ 0x1405BB6B8 (KiFreeProcessorNumber.c)
 *     KeStopProfile @ 0x1405BF174 (KeStopProfile.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BF410 (KeAssignCpuPartitionsToProcess.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BF6B0 (KeCpuPartitionMoveCpus.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405C0050 (KiCpuPartitionCheckAffinitization.c)
 *     KeSrcuFree @ 0x1405C0B50 (KeSrcuFree.c)
 *     KiSrcuInitializeTopology @ 0x1405C0FF8 (KiSrcuInitializeTopology.c)
 *     KiPristineTriageDumpAllocationWorker @ 0x1405C64D0 (KiPristineTriageDumpAllocationWorker.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1405C6D6C (KiLogUserCetSetContextIpValidationFailure.c)
 *     KiFreeForceParkingData @ 0x1405C8508 (KiFreeForceParkingData.c)
 *     KiAltContextProcessMcheckAltReturn @ 0x1405C9A50 (KiAltContextProcessMcheckAltReturn.c)
 *     KiMcheckAlternateReturn @ 0x1405C9C80 (KiMcheckAlternateReturn.c)
 *     PfpPowerActionDpcRoutine @ 0x1405CC460 (PfpPowerActionDpcRoutine.c)
 *     PfpServiceMainThreadUnboost @ 0x1405CC630 (PfpServiceMainThreadUnboost.c)
 *     PfSnEnablePrefetcherTimerRoutine @ 0x1405CC740 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfpPartitionCreate @ 0x1405CC80C (PfpPartitionCreate.c)
 *     PpmRemoveIdleStates @ 0x1405CF0B0 (PpmRemoveIdleStates.c)
 *     PopCleanPowerLimitExtension @ 0x1405CF754 (PopCleanPowerLimitExtension.c)
 *     PopFxComponentRelationsCleanup @ 0x1405D0A1C (PopFxComponentRelationsCleanup.c)
 *     PopFxCreateDeviceCommon @ 0x1405D0C24 (PopFxCreateDeviceCommon.c)
 *     PopFxDeviceRelationsCleanup @ 0x1405D0EBC (PopFxDeviceRelationsCleanup.c)
 *     PopFxRegisterPluginEx @ 0x1405D1A68 (PopFxRegisterPluginEx.c)
 *     PoUnregisterSstNotificationHandler @ 0x1405D3260 (PoUnregisterSstNotificationHandler.c)
 *     PopDereferenceWakeInfos @ 0x1405D32CC (PopDereferenceWakeInfos.c)
 *     PopTracePowerLimitHistogram @ 0x1405D620C (PopTracePowerLimitHistogram.c)
 *     PpmHeteroInitializeFeedbackClass @ 0x1405D76BC (PpmHeteroInitializeFeedbackClass.c)
 *     PopShutdownListenerRemoveCallback @ 0x1405D7AD0 (PopShutdownListenerRemoveCallback.c)
 *     PpmFireWmiEvent @ 0x1405D7EF8 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x1405D7F80 (PpmWmiFireIdleAccountingEvent.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1405D916C (PpmEventHgsContainmentGroupInfo.c)
 *     PpmParkRegisterParking @ 0x1405D9FB4 (PpmParkRegisterParking.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1405E1000 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PpmParkRegisterParkingEx @ 0x1405E3C90 (PpmParkRegisterParkingEx.c)
 *     SshpCopyDataEntry @ 0x1405E44A0 (SshpCopyDataEntry.c)
 *     PspReadDfssConfigurationValues @ 0x1405E4BB8 (PspReadDfssConfigurationValues.c)
 *     PsSetCpuQuotaInformation @ 0x1405E4F54 (PsSetCpuQuotaInformation.c)
 *     PspTimerDelayWorkerRoutine @ 0x1405E5FD0 (PspTimerDelayWorkerRoutine.c)
 *     PspIumAllocatePartitionState @ 0x1405E61E8 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1405E63B4 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405E64D8 (PspIumAllocateSecurePool.c)
 *     PspIumFreePartitionState @ 0x1405E6704 (PspIumFreePartitionState.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405E6A10 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405E6B94 (PsLoadVsmEnclaveData.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405E77D4 (DbgpRemoveDebugPrintCallback.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1405E97C8 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlCompareExchangePointerMapping @ 0x1405E9B80 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x1405E9CD0 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1405EA060 (RtlRemovePointerMapping.c)
 *     RtlpIdnToUnicodeWorker @ 0x1405EE95C (RtlpIdnToUnicodeWorker.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x1405EF1AC (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpGetPersistedRegistryLocation @ 0x1405EF3DC (RtlpGetPersistedRegistryLocation.c)
 *     RtlTraceDatabaseDestroy @ 0x1405F0340 (RtlTraceDatabaseDestroy.c)
 *     SepInitProcessAuditSd @ 0x140607F04 (SepInitProcessAuditSd.c)
 *     SeFreeCapturedObjectTypeList @ 0x1406087B4 (SeFreeCapturedObjectTypeList.c)
 *     SepGetLearningModeObjectInformation @ 0x140608AD4 (SepGetLearningModeObjectInformation.c)
 *     SepBuildCapPolicyTable @ 0x1406096BC (SepBuildCapPolicyTable.c)
 *     SepRmCapPoolExpand @ 0x1406098B4 (SepRmCapPoolExpand.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140609A60 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14060A0F0 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14060ABAC (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     SmpKeyedStoreCtxCleanup @ 0x14060CBD4 (SmpKeyedStoreCtxCleanup.c)
 *     SmKmStoreTerminateWorker @ 0x14060DB20 (SmKmStoreTerminateWorker.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060EACC (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14060EBC4 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060F110 (SmRecordDecompressionFailureDumpPayload.c)
 *     SmHwAcceleratorMgrHotRemoveAccelerator @ 0x14060F5EC (SmHwAcceleratorMgrHotRemoveAccelerator.c)
 *     VfAllocateDomainCommonBuffer @ 0x140610B10 (VfAllocateDomainCommonBuffer.c)
 *     VfDifRecoverIoCallbacks @ 0x140610F30 (VfDifRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x140611250 (VfTargetReplaceIoCallbacks.c)
 *     ViTargetDriversFreeVerifiedData @ 0x140611344 (ViTargetDriversFreeVerifiedData.c)
 *     VfIoPendingUnload @ 0x140612400 (VfIoPendingUnload.c)
 *     VfGetVerifierInformation @ 0x1406147B4 (VfGetVerifierInformation.c)
 *     VfVolatileClearDifRuleClass @ 0x1406148D0 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140614A94 (VfVolatileSetDifRuleClass.c)
 *     ViRlrsUnload @ 0x140615580 (ViRlrsUnload.c)
 *     CarCopyRuleViolationDetails @ 0x140616580 (CarCopyRuleViolationDetails.c)
 *     CarCreateRuleViolationDetails @ 0x140616760 (CarCreateRuleViolationDetails.c)
 *     CarDeleteRuleOverrideEntry @ 0x1406167CC (CarDeleteRuleOverrideEntry.c)
 *     CarDeleteRuleViolationDetails @ 0x140616800 (CarDeleteRuleViolationDetails.c)
 *     CarDeregisterRuleClassConfiguration @ 0x140616860 (CarDeregisterRuleClassConfiguration.c)
 *     CarInitializeTelemetryData @ 0x140616BA0 (CarInitializeTelemetryData.c)
 *     CarReportDifPluginRuleViolation @ 0x140617240 (CarReportDifPluginRuleViolation.c)
 *     DifPopThreadContextData @ 0x140617660 (DifPopThreadContextData.c)
 *     DifPushThreadContextData @ 0x140617750 (DifPushThreadContextData.c)
 *     DifAddPerDriverDataForPlugins @ 0x1406178BC (DifAddPerDriverDataForPlugins.c)
 *     DifRemovePerDriverDataForPlugins @ 0x140617AE0 (DifRemovePerDriverDataForPlugins.c)
 *     DifObjTrkFreeNode @ 0x140617CB0 (DifObjTrkFreeNode.c)
 *     DifRegisterObjectTracking @ 0x140618350 (DifRegisterObjectTracking.c)
 *     DifDeregisterPlugin @ 0x1406186B8 (DifDeregisterPlugin.c)
 *     DifRegisterPlugin @ 0x140618BD0 (DifRegisterPlugin.c)
 *     CarAddUniqueViolation @ 0x14061907C (CarAddUniqueViolation.c)
 *     CarDeleteRuleViolationDB @ 0x1406194C0 (CarDeleteRuleViolationDB.c)
 *     CarFreeDbNode @ 0x140619570 (CarFreeDbNode.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140619618 (CarWriteEarlyRuleViolationEvents.c)
 *     CarLiveDump @ 0x140619B20 (CarLiveDump.c)
 *     CarLiveDumpCallBack @ 0x140619C10 (CarLiveDumpCallBack.c)
 *     DifExFreePoolWithTagWrapper @ 0x14061E410 (DifExFreePoolWithTagWrapper.c)
 *     DifExFreePoolWrapper @ 0x14061E580 (DifExFreePoolWrapper.c)
 *     VmpPinMemoryRange @ 0x14064ACC0 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x14064B360 (VmpUnpinMemoryRangeHelper.c)
 *     WdipAccessCheck @ 0x14064C074 (WdipAccessCheck.c)
 *     EtwpGetPmcOwnership @ 0x14064C900 (EtwpGetPmcOwnership.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x14064CC6C (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpTraceContextRegisters @ 0x14064D0A8 (EtwpTraceContextRegisters.c)
 *     EtwpUnsubscribeContainerStateWnf @ 0x14064D2E0 (EtwpUnsubscribeContainerStateWnf.c)
 *     EtwTraceCpuPartitionAffinityViolation @ 0x14064D50C (EtwTraceCpuPartitionAffinityViolation.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x14064E3D0 (EtwpCancelTraceImageUnloadApc.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14064F630 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpStackDeleteProcessor @ 0x14064F914 (EtwpStackDeleteProcessor.c)
 *     EtwpStackInitializeProcessor @ 0x14064F95C (EtwpStackInitializeProcessor.c)
 *     EtwpFreeKeyNameEntry @ 0x140650640 (EtwpFreeKeyNameEntry.c)
 *     EtwpRegisterPartitionPages @ 0x140650660 (EtwpRegisterPartitionPages.c)
 *     EtwpCCSwapDeleteProcessor @ 0x140652624 (EtwpCCSwapDeleteProcessor.c)
 *     BapdpInitializePageDatabase @ 0x1406526C0 (BapdpInitializePageDatabase.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1406528D8 (BapdpMarshallBootDataToRegistry.c)
 *     BapdpProcessEtwEvents @ 0x140652CA4 (BapdpProcessEtwEvents.c)
 *     BapdpProcessSpacesBootInformation @ 0x140652DE0 (BapdpProcessSpacesBootInformation.c)
 *     ExpSetBootLoaderMetadata @ 0x140652FC8 (ExpSetBootLoaderMetadata.c)
 *     NtDrawText @ 0x140653A40 (NtDrawText.c)
 *     ExFreePool2 @ 0x1406540E0 (ExFreePool2.c)
 *     ExPoolQueryLimits @ 0x140654308 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140654500 (ExPoolSetLimit.c)
 *     ExpPlGrowTableIfNeeded @ 0x140654F74 (ExpPlGrowTableIfNeeded.c)
 *     ExpTrackTableInsertLimit @ 0x140655330 (ExpTrackTableInsertLimit.c)
 *     ExpDeleteSiloState @ 0x1406556C4 (ExpDeleteSiloState.c)
 *     sub_14065592C @ 0x14065592C (sub_14065592C.c)
 *     ExpNlsDeleteSiloState @ 0x140655ED4 (ExpNlsDeleteSiloState.c)
 *     ExDeleteWakeTimerInfo @ 0x1406572B4 (ExDeleteWakeTimerInfo.c)
 *     ExCreateDpcEvent @ 0x1406575E0 (ExCreateDpcEvent.c)
 *     ExDeleteDpcEvent @ 0x1406576F0 (ExDeleteDpcEvent.c)
 *     ExpAtsDereferenceDevice @ 0x140657F9C (ExpAtsDereferenceDevice.c)
 *     ExpPrepareNewAtsDevice @ 0x140658070 (ExpPrepareNewAtsDevice.c)
 *     ExpAllocateAsid @ 0x140658A58 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x140658D8C (ExpPrepareNewSvmDevice.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14065902C (ExpShareAddressSpaceWithDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14065967C (ExpSvmDereferenceDevice.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14065ABEC (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14065AE8C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x14065B110 (ExpResourceTimeoutCaptureLiveDump.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14065B774 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     WheapFreeDriverPacketBuffer @ 0x14065C718 (WheapFreeDriverPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x14065C848 (WheapInitErrorReportDeviceDriver.c)
 *     WheaPersistBadPageToBcd @ 0x14065CE90 (WheaPersistBadPageToBcd.c)
 *     WheaPersistBadPageToRegistry @ 0x14065D04C (WheaPersistBadPageToRegistry.c)
 *     WheapProcessOfflineList @ 0x14065F830 (WheapProcessOfflineList.c)
 *     ApiSetReleaseSchema @ 0x14065FA14 (ApiSetReleaseSchema.c)
 *     ApiSetComposeSchema @ 0x1406602AC (ApiSetComposeSchema.c)
 *     ApiSetComposeSchema_V7 @ 0x14066169C (ApiSetComposeSchema_V7.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066A288 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiZeroPageFile @ 0x14066BEC0 (MiZeroPageFile.c)
 *     MiGetFileOnlyRanges @ 0x14066D370 (MiGetFileOnlyRanges.c)
 *     MiPerformMemoryChange @ 0x14066E094 (MiPerformMemoryChange.c)
 *     MiReturnAddMemoryResources @ 0x14066E8AC (MiReturnAddMemoryResources.c)
 *     MiHotRemoveHugeRange @ 0x140670540 (MiHotRemoveHugeRange.c)
 *     MiInitializeHugePfnDatabase @ 0x140670B90 (MiInitializeHugePfnDatabase.c)
 *     MiMarkHugePfnBad @ 0x140670EEC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140671374 (MiMarkHugePfnGood.c)
 *     MiReturnMdlExcess @ 0x140671F10 (MiReturnMdlExcess.c)
 *     MiCheckLostBadPageNode @ 0x140673650 (MiCheckLostBadPageNode.c)
 *     MiDeletePendingBadPageNodesAwaitingDeleteList @ 0x140673760 (MiDeletePendingBadPageNodesAwaitingDeleteList.c)
 *     MiEnumeratePartitionBadPages @ 0x140673800 (MiEnumeratePartitionBadPages.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x1406739AC (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140673AD0 (MiGetListOfPendingBadPages.c)
 *     MiRemoveBadPages @ 0x14067406C (MiRemoveBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MiDeleteKernelStackNode @ 0x1406752B0 (MiDeleteKernelStackNode.c)
 *     MiDeleteStaleCacheMaps @ 0x140675880 (MiDeleteStaleCacheMaps.c)
 *     MiFreeVadEvents @ 0x140678520 (MiFreeVadEvents.c)
 *     MiLocateSharedPageViews @ 0x1406790E0 (MiLocateSharedPageViews.c)
 *     MiChangePagingFileMaximum @ 0x140679DB0 (MiChangePagingFileMaximum.c)
 *     MiInsertCopyExtents @ 0x14067B2F0 (MiInsertCopyExtents.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067B474 (MiMarkFileOnlyPfnBad.c)
 *     MiMergeCopyExtents @ 0x14067B6F4 (MiMergeCopyExtents.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067C118 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x14067C928 (MiUnlockAndFreeDvPatchImage.c)
 *     MmManageFaultRange @ 0x140680564 (MmManageFaultRange.c)
 *     MiEmptyAccessLogs @ 0x140683670 (MiEmptyAccessLogs.c)
 *     MiCombineWorkingSet @ 0x140685248 (MiCombineWorkingSet.c)
 *     MiInitializeSlabIdentities @ 0x140688308 (MiInitializeSlabIdentities.c)
 *     MmAllocateSecureKernelPages @ 0x140688AC4 (MmAllocateSecureKernelPages.c)
 *     MiAddRangeToPartitionTree @ 0x14068993C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNode @ 0x140689FF4 (MiDeletePartitionPageNode.c)
 *     MiStoreDeletePartition @ 0x14068BE24 (MiStoreDeletePartition.c)
 *     MiAbsorbPossibleEngineChanges @ 0x14068F0A4 (MiAbsorbPossibleEngineChanges.c)
 *     MiDeleteThreadContext @ 0x14068F644 (MiDeleteThreadContext.c)
 *     MiPreserveBootDecisions @ 0x14068FB78 (MiPreserveBootDecisions.c)
 *     MiZeroNodeExiting @ 0x1406901F4 (MiZeroNodeExiting.c)
 *     MiAllocateAcceleratorDescriptor @ 0x140690914 (MiAllocateAcceleratorDescriptor.c)
 *     MiDeleteHardwareAccelerators @ 0x140690ACC (MiDeleteHardwareAccelerators.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x140690CD4 (MiSignalNewAcceleratorsAvailable.c)
 *     MiInsertPteTracker @ 0x1406913D4 (MiInsertPteTracker.c)
 *     MiCreateProcessLargePageCacheAnchor @ 0x140692234 (MiCreateProcessLargePageCacheAnchor.c)
 *     MiFreeZeroCalibrationBuffer @ 0x140693634 (MiFreeZeroCalibrationBuffer.c)
 *     MiMergeCalibrationResults @ 0x1406938F4 (MiMergeCalibrationResults.c)
 *     MiZeroPageCalibrate @ 0x140693E8C (MiZeroPageCalibrate.c)
 *     UcOnUnexpectedCodePath @ 0x14069466C (UcOnUnexpectedCodePath.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x140694C3C (UcpRetrieveCurrentConfigSettings.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140696C5C (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14069708C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x14069777C (BiLogFileOwnerProcess.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x140697A70 (BiSpacesUpdatePhysicalDevicePath.c)
 *     IpmiHwpReadSpmiConfiguration @ 0x14069F8BC (IpmiHwpReadSpmiConfiguration.c)
 *     IpmiLibReadSmbiosRecord38 @ 0x14069F974 (IpmiLibReadSmbiosRecord38.c)
 *     SafeFree @ 0x1406A0A0C (SafeFree.c)
 *     VhdDeferredAutoAttachVirtualDisks @ 0x1406A1730 (VhdDeferredAutoAttachVirtualDisks.c)
 *     NtReplacePartitionUnit @ 0x1406A1830 (NtReplacePartitionUnit.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1406A2170 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1406A2318 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     _SafeReallocBlob @ 0x1406A2AF8 (_SafeReallocBlob.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1406A30A8 (RtlUpdateImportRelocationsInImage.c)
 *     PipDeleteDependencyNode @ 0x1406F55EC (PipDeleteDependencyNode.c)
 *     sub_1406F5DBC @ 0x1406F5DBC (sub_1406F5DBC.c)
 *     sub_1406F618C @ 0x1406F618C (sub_1406F618C.c)
 *     BiGetSystemPartition @ 0x1406F66F0 (BiGetSystemPartition.c)
 *     CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x1406F67FC (CmFcpManagerOnFeatureUsageDataTransferComplete.c)
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x1406F768C (CmFcManagerUnregisterFeatureUsageProvider.c)
 *     EtwpUpdateEventFilterAndFree @ 0x1406F7BB4 (EtwpUpdateEventFilterAndFree.c)
 *     IopFreeReqAlternative @ 0x1406F960C (IopFreeReqAlternative.c)
 *     ExpStringFree @ 0x1406F984C (ExpStringFree.c)
 *     PnpReadDeviceConfiguration @ 0x1406F9CB4 (PnpReadDeviceConfiguration.c)
 *     RtlpGetWindowsPolicy @ 0x1406FA83C (RtlpGetWindowsPolicy.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406FAFD4 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PopFreeHiberContext @ 0x1406FB788 (PopFreeHiberContext.c)
 *     PopResetActionDefaults @ 0x1406FBF94 (PopResetActionDefaults.c)
 *     HalpQueryResources @ 0x1406FEF30 (HalpQueryResources.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FF764 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FFA54 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140700F88 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtExtendApertureRange @ 0x1407014B8 (HalpIrtExtendApertureRange.c)
 *     HalpIrtExtendRemappingRange @ 0x1407015C0 (HalpIrtExtendRemappingRange.c)
 *     HalpLoadMicrocode @ 0x140701A80 (HalpLoadMicrocode.c)
 *     HalpMcExportAndChargeNeededData @ 0x140701DA4 (HalpMcExportAndChargeNeededData.c)
 *     HalpDpReplaceBegin @ 0x1407029B0 (HalpDpReplaceBegin.c)
 *     HalpDpReplaceEnd @ 0x140702B60 (HalpDpReplaceEnd.c)
 *     HalpRegisterPmuNotification @ 0x140702C0C (HalpRegisterPmuNotification.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x140702F40 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1407047B0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddOrdering @ 0x140704A84 (ArbAddOrdering.c)
 *     ArbBootAllocation @ 0x140704B90 (ArbBootAllocation.c)
 *     ArbBuildAssignmentOrdering @ 0x140704D3C (ArbBuildAssignmentOrdering.c)
 *     ArbFreeOrderingList @ 0x1407053F8 (ArbFreeOrderingList.c)
 *     ArbInitializeArbiterInstance @ 0x1407055B4 (ArbInitializeArbiterInstance.c)
 *     ArbPruneOrdering @ 0x140705B6C (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x140705D10 (ArbQueryConflict.c)
 *     ArbRegReadMmConfigRanges @ 0x1407060AC (ArbRegReadMmConfigRanges.c)
 *     ArbRetestAllocation @ 0x140706240 (ArbRetestAllocation.c)
 *     ArbpBuildAllocationStack @ 0x140706810 (ArbpBuildAllocationStack.c)
 *     ArbpGetRegistryValue @ 0x140706A24 (ArbpGetRegistryValue.c)
 *     CcFreeVacbArray @ 0x140706BDC (CcFreeVacbArray.c)
 *     CcUnpinDataForThread @ 0x140706D10 (CcUnpinDataForThread.c)
 *     DbgkpCreateNotificationEvent @ 0x140706D80 (DbgkpCreateNotificationEvent.c)
 *     DbgkQueueUserExceptionReport @ 0x140707404 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140707610 (DbgkUserReportWorkRoutine.c)
 *     DbgkpDeleteErrorPort @ 0x14070790C (DbgkpDeleteErrorPort.c)
 *     DbgkCaptureLiveDump @ 0x140707A3C (DbgkCaptureLiveDump.c)
 *     DbgkLkmdRegisterCallback @ 0x140707E70 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x140707F60 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140708144 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpLkmdSnapThreadApc @ 0x1407083C0 (DbgkpLkmdSnapThreadApc.c)
 *     DbgkpWerFreePool @ 0x140708D50 (DbgkpWerFreePool.c)
 *     EmClientRuleDeregisterNotification @ 0x1407095B0 (EmClientRuleDeregisterNotification.c)
 *     EmpClientRuleRegisterNotification @ 0x1407096E4 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x140709960 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x140709C00 (EmProviderRegisterEntry.c)
 *     FsRtlGetTunnelParameterValue @ 0x14070A8A8 (FsRtlGetTunnelParameterValue.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14070ACD4 (FsRtlpRegisterProviderWithMUP.c)
 *     FsRtlpOplockGetAckTimeoutOverride @ 0x14070B880 (FsRtlpOplockGetAckTimeoutOverride.c)
 *     FsRtlpOplockPerfCleanupData @ 0x14070BB9C (FsRtlpOplockPerfCleanupData.c)
 *     FsRtlDedupChangeInit @ 0x14070C8F0 (FsRtlDedupChangeInit.c)
 *     FsRtlDedupChangeUninit @ 0x14070CAB0 (FsRtlDedupChangeUninit.c)
 *     FsRtlpDedupChangeQueryValueKey @ 0x14070CBA4 (FsRtlpDedupChangeQueryValueKey.c)
 *     FsRtlHeatInit @ 0x14070D410 (FsRtlHeatInit.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14070D880 (FsRtlpHeatUnregisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x14070D910 (FsRtlpQueryValueKey.c)
 *     FsRtlNotifyCleanupAll @ 0x14070DB00 (FsRtlNotifyCleanupAll.c)
 *     IoReadDiskSignature @ 0x14070E070 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x14070E170 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x14070E630 (IoWritePartitionTable.c)
 *     HvlQuerySetBootPagesInfo @ 0x14070EAFC (HvlQuerySetBootPagesInfo.c)
 *     VslObtainHotPatchUndoTable @ 0x14070FCC0 (VslObtainHotPatchUndoTable.c)
 *     VslQueryRuntimeAttestationReport @ 0x14070FE70 (VslQueryRuntimeAttestationReport.c)
 *     VslStartSecureProcessor @ 0x1407103F8 (VslStartSecureProcessor.c)
 *     VslTransformDumpKey @ 0x1407106EC (VslTransformDumpKey.c)
 *     IopInitializeDumpPolicySettings @ 0x140711124 (IopInitializeDumpPolicySettings.c)
 *     IopInitializeTriageDumpData @ 0x140711420 (IopInitializeTriageDumpData.c)
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     IopFreeGenericTableEntry @ 0x140712160 (IopFreeGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x140712180 (IopGetRelatedFileName.c)
 *     IopHardErrorThread @ 0x140712370 (IopHardErrorThread.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407129A0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140712DF8 (IopSetFileObjectIosbRange.c)
 *     IopValidateJunctionTarget @ 0x140713438 (IopValidateJunctionTarget.c)
 *     IoUnregisterFsRegistrationChange @ 0x140714E00 (IoUnregisterFsRegistrationChange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140715044 (IopSetFileMemoryPartitionInformation.c)
 *     IoRegisterContainerNotification @ 0x140715330 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x1407155F0 (IoUnregisterContainerNotification.c)
 *     IoIsValidNameGraftingBuffer @ 0x1407157D0 (IoIsValidNameGraftingBuffer.c)
 *     pIoQueryDeviceDescription @ 0x140715D3C (pIoQueryDeviceDescription.c)
 *     IoUnregisterIoTracking @ 0x140716380 (IoUnregisterIoTracking.c)
 *     IopDeleteIoRing @ 0x1407164D0 (IopDeleteIoRing.c)
 *     IopIoRingCleanupRegBufferArray @ 0x140716544 (IopIoRingCleanupRegBufferArray.c)
 *     IopIoRingDispatchRegisterFiles @ 0x140716C08 (IopIoRingDispatchRegisterFiles.c)
 *     IoVolumeDeviceNameToGuid @ 0x140717B10 (IoVolumeDeviceNameToGuid.c)
 *     NtQueryQuotaInformationFile @ 0x140717C10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140718380 (NtSetVolumeInformationFile.c)
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140718CD0 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x140719170 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x1407192E0 (IopGetEnvironmentVariableTrEE.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x1407197F0 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140719910 (IopSetEnvironmentVariableTrEE.c)
 *     PipOobeCompleteAsyncCallback @ 0x14071A290 (PipOobeCompleteAsyncCallback.c)
 *     PipUpdateAsyncOptionsCallback @ 0x14071A2C0 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgress @ 0x14071A378 (PipUpdateSetupInProgress.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14071A708 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PnpShutdownDevices @ 0x14071AAA0 (PnpShutdownDevices.c)
 *     IoFreeKsrPersistentMemory @ 0x14071AEF0 (IoFreeKsrPersistentMemory.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14071B440 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetDeviceObjectLocation @ 0x14071BA24 (PipGetDeviceObjectLocation.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14071BD40 (PipGetDriverKsrGuidRegistryValue.c)
 *     PipGetPersistentMemory @ 0x14071BE10 (PipGetPersistentMemory.c)
 *     PipMatchPersistentMemory @ 0x14071C4CC (PipMatchPersistentMemory.c)
 *     PipMatchPersistentMemoryV1 @ 0x14071C5B0 (PipMatchPersistentMemoryV1.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x14071D7EC (IopIsReportedAlready.c)
 *     PipFreeBindingRequestEntry @ 0x14071E804 (PipFreeBindingRequestEntry.c)
 *     PiGetDeviceRegistryProperty @ 0x14071EC28 (PiGetDeviceRegistryProperty.c)
 *     IoGetDeviceDirectory @ 0x14071EEF0 (IoGetDeviceDirectory.c)
 *     PiCreateServiceKeyUnderPath @ 0x14071F96C (PiCreateServiceKeyUnderPath.c)
 *     PiOpenDirectoryWithRoot @ 0x14071FD18 (PiOpenDirectoryWithRoot.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x1407209A0 (PnpReportTargetDeviceChangeAsyncWorker.c)
 *     IoReportResourceUsageInternal @ 0x140720F18 (IoReportResourceUsageInternal.c)
 *     PnpRequestDeviceEjectExWorker @ 0x140721250 (PnpRequestDeviceEjectExWorker.c)
 *     IopFreeReqList @ 0x14072192C (IopFreeReqList.c)
 *     IopTranslateAndAdjustReqDesc @ 0x140721E2C (IopTranslateAndAdjustReqDesc.c)
 *     PipApplyFunctionToServiceInstances @ 0x140722AC0 (PipApplyFunctionToServiceInstances.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140722CD0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpRegCopyKeySecurity @ 0x14072362C (PnpRegCopyKeySecurity.c)
 *     PnpRegCopyKeySecurityTree @ 0x14072375C (PnpRegCopyKeySecurityTree.c)
 *     PnpRestartDeviceNode @ 0x1407238C4 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140723BF0 (PnpProcessCompletedEject.c)
 *     PiProcessNewDeviceNodeWorker @ 0x140724020 (PiProcessNewDeviceNodeWorker.c)
 *     PiProcessSetDeviceProblem @ 0x1407241C8 (PiProcessSetDeviceProblem.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407243B4 (PnpCheckPossibleBootStartDriver.c)
 *     IopReleaseResources @ 0x1407244C4 (IopReleaseResources.c)
 *     PnpSetInterruptInformation @ 0x1407247EC (PnpSetInterruptInformation.c)
 *     PiUEventGetProcessImagePath @ 0x140724B20 (PiUEventGetProcessImagePath.c)
 *     PiNotifyCiDriverBlocked @ 0x140724CA0 (PiNotifyCiDriverBlocked.c)
 *     PpBootDDBHelper @ 0x140724D6C (PpBootDDBHelper.c)
 *     PpReleaseBootDDB @ 0x140724EC4 (PpReleaseBootDDB.c)
 *     IopDuplicateDetection @ 0x14072504C (IopDuplicateDetection.c)
 *     IopAllocateBootResourcesInternal @ 0x1407252A8 (IopAllocateBootResourcesInternal.c)
 *     IopCreateCmResourceList @ 0x1407255D8 (IopCreateCmResourceList.c)
 *     IopReleaseFilteredBootResources @ 0x140725798 (IopReleaseFilteredBootResources.c)
 *     IopIsPciRootBus @ 0x140725AE0 (IopIsPciRootBus.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140726634 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x140726678 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140726698 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x1407268E8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmFreeGenericTableEntry @ 0x140726E00 (PiDmFreeGenericTableEntry.c)
 *     PiDmListInit @ 0x140726E20 (PiDmListInit.c)
 *     PiDmListInitEnumCallback @ 0x140726E80 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x140727138 (PiDmObjectManagerPopulate.c)
 *     PipDmgInitReadGroupPolicy @ 0x140727558 (PipDmgInitReadGroupPolicy.c)
 *     PiDcFreeGenericTableEntry @ 0x1407276A0 (PiDcFreeGenericTableEntry.c)
 *     PiDcInitUpdateProperties @ 0x1407276DC (PiDcInitUpdateProperties.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140727980 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140727BD0 (PiDcResetChildDeviceContainers.c)
 *     PiAuAllocateAndInitializeSid @ 0x140727DA0 (PiAuAllocateAndInitializeSid.c)
 *     PiAuCheckClientInteractive @ 0x140727E24 (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140727EE8 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140728090 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407282D8 (PiAuGetStateDirectorySecurityObject.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1407290F0 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140729484 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14072A318 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14072A588 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14072A7B0 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14072A970 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072AC78 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14072B0E8 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14072B158 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14072B6A0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14072B770 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14072BD90 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14072BE70 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14072C050 (PiDevCfgResolveVariableSwitchCase.c)
 *     PpDevCfgProcessDevices @ 0x14072D090 (PpDevCfgProcessDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14072D3C0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14072D40C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCommitTransitioningDock @ 0x14072D71C (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14072D86C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PnpFreeVetoInformation @ 0x14072DC2C (PnpFreeVetoInformation.c)
 *     PnpGetProcessCommandLine @ 0x14072DCC4 (PnpGetProcessCommandLine.c)
 *     PnpRemoveEventFromQueue @ 0x14072DD5C (PnpRemoveEventFromQueue.c)
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x14072ED94 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x14072EF7C (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x14072F094 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x14072F220 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x14072F5B8 (PnprGetPluginDriverImagePath.c)
 *     PnprIsMemoryDevice @ 0x14072FAC0 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x14072FB78 (PnprIsProcessorDevice.c)
 *     PnprLoadPluginDriver @ 0x14072FC94 (PnprLoadPluginDriver.c)
 *     PnprMmFree @ 0x140730544 (PnprMmFree.c)
 *     PiSwFreeGenericTableEntry @ 0x1407308C0 (PiSwFreeGenericTableEntry.c)
 *     PiCMGenerateDeviceInstance @ 0x14073136C (PiCMGenerateDeviceInstance.c)
 *     IopAppendLegacyVeto @ 0x1407330BC (IopAppendLegacyVeto.c)
 *     IopCreateLegacyDeviceIds @ 0x140733190 (IopCreateLegacyDeviceIds.c)
 *     IopQueryBusResourceUpdateInterface @ 0x140733BF0 (IopQueryBusResourceUpdateInterface.c)
 *     IopQueryDockRemovalInterface @ 0x140733C7C (IopQueryDockRemovalInterface.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140734038 (PiRegisterKernelSoftRestartNotification.c)
 *     PnpBuildCmResourceLists @ 0x140734434 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140734668 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpRestoreResourcesInternal @ 0x1407348C0 (PnpRestoreResourcesInternal.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     PnpRebalance @ 0x1407352B8 (PnpRebalance.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1407356B8 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1407358F0 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140735AF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiIommuFreeExtension @ 0x140735F88 (PiIommuFreeExtension.c)
 *     PipIommuRetrieveDeviceId @ 0x1407360B8 (PipIommuRetrieveDeviceId.c)
 *     PiUpdateDeviceResourceLists @ 0x14073646C (PiUpdateDeviceResourceLists.c)
 *     PiDrvDbDestroyNode @ 0x140736BA8 (PiDrvDbDestroyNode.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140736CA8 (PiDrvDbEnumDriverStoreNodes.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407371AC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140737740 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140737D20 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140737FA4 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbRegisterNode @ 0x140738408 (PiDrvDbRegisterNode.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407388B0 (PiDrvDbRegisterNodeCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407389B0 (PiDrvDbResolveFilePathKeyValues.c)
 *     IopExecuteHardwareProfileChange @ 0x140739DD4 (IopExecuteHardwareProfileChange.c)
 *     PipDgqFreeEntry @ 0x14073A46C (PipDgqFreeEntry.c)
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     KeUnregisterAvailableCpusChangeNotification @ 0x14073BD68 (KeUnregisterAvailableCpusChangeNotification.c)
 *     KeDeleteCpuPartition @ 0x14073C878 (KeDeleteCpuPartition.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x14073CE80 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiGetSystemServiceTraceTable @ 0x14073D304 (KiGetSystemServiceTraceTable.c)
 *     KeSetTracepoint @ 0x14073D6A0 (KeSetTracepoint.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140741C20 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x140741DEC (AlpcpGetPortNameInformation.c)
 *     AlpcpPortQueryServerInfo @ 0x140741EA4 (AlpcpPortQueryServerInfo.c)
 *     AlpcRegisterLogRoutine @ 0x14074257C (AlpcRegisterLogRoutine.c)
 *     AlpcUnregisterLogRoutine @ 0x1407426A4 (AlpcUnregisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x1407429B4 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpInitializeMessageLog @ 0x140742C30 (AlpcpInitializeMessageLog.c)
 *     ObCleanupSecurityDescriptor @ 0x140742E54 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x140742EC8 (ObCreateKernelObjectsSD.c)
 *     ObShutdownSystem @ 0x1407432D0 (ObShutdownSystem.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074375C (ObpCreateDosDevicesDirectory.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14074435C (ObpCreateDefaultObjectTypeSD.c)
 *     ObpInitObjectTypeSD @ 0x1407444C8 (ObpInitObjectTypeSD.c)
 *     ObUnRegisterCallbacks @ 0x140744570 (ObUnRegisterCallbacks.c)
 *     ObpDeleteDeviceMap @ 0x140744654 (ObpDeleteDeviceMap.c)
 *     ObpDestroyStackAndObjectTables @ 0x140744BBC (ObpDestroyStackAndObjectTables.c)
 *     ObpFreeWorkItemBlock @ 0x140744CA4 (ObpFreeWorkItemBlock.c)
 *     ObpGetObjectRefInfo @ 0x140744D80 (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x140745058 (ObpInitStackAndObjectTables.c)
 *     ObpStartRuntimeStackTrace @ 0x140745494 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x1407458D4 (ObpStopRuntimeStackTrace.c)
 *     PfpQueryFileExtentsRequest @ 0x140745C48 (PfpQueryFileExtentsRequest.c)
 *     PfTCleanupBuffers @ 0x140746824 (PfTCleanupBuffers.c)
 *     PfpRpShutdown @ 0x140746FD0 (PfpRpShutdown.c)
 *     PfDeletePartition @ 0x140747214 (PfDeletePartition.c)
 *     PfSnSetAltPrefetchParam @ 0x140747784 (PfSnSetAltPrefetchParam.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140747C10 (PfSnTracingStateExWorkerRoutine.c)
 *     PfpCreateEventInternal @ 0x1407487E0 (PfpCreateEventInternal.c)
 *     PfFbBufferListCleanup @ 0x1407489E0 (PfFbBufferListCleanup.c)
 *     PopLoadFileInMemory @ 0x1407493F4 (PopLoadFileInMemory.c)
 *     PpmIdleAllocateVetoReasons @ 0x140749EB8 (PpmIdleAllocateVetoReasons.c)
 *     PpmIdleRegisterDefaultStates @ 0x14074A2C0 (PpmIdleRegisterDefaultStates.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14074A450 (PpmInstallCoordinatedIdleStates.c)
 *     PopEvaluatePowerLimitChange @ 0x14074B3D4 (PopEvaluatePowerLimitChange.c)
 *     PopFreePowerLimitRequest @ 0x14074B644 (PopFreePowerLimitRequest.c)
 *     PopQueryPowerLimitAttributes @ 0x14074BAD8 (PopQueryPowerLimitAttributes.c)
 *     PopRegisterTargetDeviceProtection @ 0x14074BC44 (PopRegisterTargetDeviceProtection.c)
 *     PoCreateThermalRequest @ 0x14074BDA0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x14074BEB0 (PoDeleteThermalRequest.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14074C4D4 (PopRegisterCoolingExtensionProtection.c)
 *     PoReenableSleepStates @ 0x14074CD30 (PoReenableSleepStates.c)
 *     PoFxRegisterCoreDevice @ 0x14074D5D0 (PoFxRegisterCoreDevice.c)
 *     PoFxRegisterDevice @ 0x14074D710 (PoFxRegisterDevice.c)
 *     PoFxRegisterPrimaryDevice @ 0x14074D9F0 (PoFxRegisterPrimaryDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14074DBBC (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074DC98 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxPepPerfInfoFree @ 0x14074E2B4 (PopFxPepPerfInfoFree.c)
 *     PopFxRegisterDevice @ 0x14074E950 (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14074EBF0 (PopFxRegisterDeviceWorker.c)
 *     PopFxVerifyDependencies @ 0x14074F5B4 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14074F88C (PopPluginQuerySocSubsystemMetadata.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     PoUnregisterCoalescingCallback @ 0x140750EC0 (PoUnregisterCoalescingCallback.c)
 *     PoRegisterForEffectivePowerModeNotifications @ 0x1407510D0 (PoRegisterForEffectivePowerModeNotifications.c)
 *     PoUnregisterFromEffectivePowerModeNotifications @ 0x140751200 (PoUnregisterFromEffectivePowerModeNotifications.c)
 *     PopFreeRegistration @ 0x140751344 (PopFreeRegistration.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1407518C8 (PopWakeSourceGetDeviceProperty.c)
 *     PopCreateHiberFile @ 0x140751D30 (PopCreateHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14075229C (PopCreateHiberFileSecurityDescriptor.c)
 *     PopHiberInitializeResources @ 0x1407524BC (PopHiberInitializeResources.c)
 *     PopInitHiberPersistedRegValues @ 0x14075282C (PopInitHiberPersistedRegValues.c)
 *     PopInitializeHibernateGlobals @ 0x14075291C (PopInitializeHibernateGlobals.c)
 *     PopPreallocateHibernateMemory @ 0x140752A4C (PopPreallocateHibernateMemory.c)
 *     PopValidateWinresume @ 0x140752EA8 (PopValidateWinresume.c)
 *     PopExecutePowerAction @ 0x140753574 (PopExecutePowerAction.c)
 *     PopThermalHandlePreviousShutdown @ 0x14075433C (PopThermalHandlePreviousShutdown.c)
 *     PopThermalZoneRemove @ 0x140754A10 (PopThermalZoneRemove.c)
 *     NtInitiatePowerAction @ 0x140754BF0 (NtInitiatePowerAction.c)
 *     PopDeferDoze @ 0x140754EC8 (PopDeferDoze.c)
 *     PopIsWakeTimerImmanent @ 0x140755058 (PopIsWakeTimerImmanent.c)
 *     PopDiagTracePowerLimitExtension @ 0x14075706C (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitExtensionValueUpdate @ 0x1407572B0 (PopDiagTracePowerLimitExtensionValueUpdate.c)
 *     PopDiagTracePowerLimitRequest @ 0x140757400 (PopDiagTracePowerLimitRequest.c)
 *     PopDiagTracePowerLimitRequestValueUpdate @ 0x140757718 (PopDiagTracePowerLimitRequestValueUpdate.c)
 *     PpmAllocatePerfCheck @ 0x140758DE0 (PpmAllocatePerfCheck.c)
 *     PopConnectToPolicyDevice @ 0x14075A3DC (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceTargetChange @ 0x14075AB60 (PopPolicyDeviceTargetChange.c)
 *     PpmWmiIdleAccountingWork @ 0x14075C250 (PpmWmiIdleAccountingWork.c)
 *     PopEtBucketsFree @ 0x14075D8A4 (PopEtBucketsFree.c)
 *     PopEtDeferredInitDxgContext @ 0x14075D8C0 (PopEtDeferredInitDxgContext.c)
 *     PopEtEnergyTrackerCleanup @ 0x14075DA34 (PopEtEnergyTrackerCleanup.c)
 *     PopEtEnergyTrackerFindDxgAdapters @ 0x14075DF08 (PopEtEnergyTrackerFindDxgAdapters.c)
 *     PpmParkFreeParkNodes @ 0x14075E8C8 (PpmParkFreeParkNodes.c)
 *     PopIdleWakeFreeWakeSourceDiagnostic @ 0x14075EF8C (PopIdleWakeFreeWakeSourceDiagnostic.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14075F274 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopExtendConnectionState @ 0x14075F788 (PopExtendConnectionState.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407624E0 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x14076298C (PopAdaptiveStandbyTraceSessionSettings.c)
 *     PopBcdCopyLoaderObjectSettings @ 0x1407632B4 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140763580 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140763790 (PopBcdRegenerateResumeObject.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x1407643DC (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1407647B4 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 *     PopDirectedDripsUmTestDeviceFree @ 0x140764B30 (PopDirectedDripsUmTestDeviceFree.c)
 *     PopPlInitComponents @ 0x140765260 (PopPlInitComponents.c)
 *     PopPlInitDevice @ 0x140765394 (PopPlInitDevice.c)
 *     PopPlInitDevices @ 0x14076549C (PopPlInitDevices.c)
 *     PopPlInitPowerPlane @ 0x140765618 (PopPlInitPowerPlane.c)
 *     PopPlInitWString @ 0x14076570C (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x140768290 (TtmNotifyDeviceArrival.c)
 *     TtmiSessionDeviceListWorker @ 0x140768A40 (TtmiSessionDeviceListWorker.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x140769130 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x140769BB0 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiPurgeSessionPowerRequestEntries @ 0x140769E10 (TtmiPurgeSessionPowerRequestEntries.c)
 *     TtmiSetDisplayPowerRequest @ 0x14076A01C (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEventToAllQueues @ 0x14076A34C (TtmiWriteEventToAllQueues.c)
 *     TtmpCleanupPowerRequestsTrackingFromCurrentSession @ 0x14076A4E4 (TtmpCleanupPowerRequestsTrackingFromCurrentSession.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x14076A638 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmpInsertPowerRequestToSession @ 0x14076A838 (TtmpInsertPowerRequestToSession.c)
 *     TtmpPowerRequestHashDeallocator @ 0x14076AB98 (TtmpPowerRequestHashDeallocator.c)
 *     TtmpSetDisplayRequestEnded @ 0x14076AEC4 (TtmpSetDisplayRequestEnded.c)
 *     TtmiRetrieveEventFromQueue @ 0x140770A58 (TtmiRetrieveEventFromQueue.c)
 *     TtmpDeleteQueue @ 0x140770D60 (TtmpDeleteQueue.c)
 *     PsRegisterSyscallProvider @ 0x140770EE0 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x1407711F4 (PspDestroySyscallProvider.c)
 *     PspDeleteServerSiloGlobals @ 0x1407729F4 (PspDeleteServerSiloGlobals.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407732F8 (PspSiloInitializeSystemRootSymlink.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407741A4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PsEstablishWin32Callouts @ 0x140774510 (PsEstablishWin32Callouts.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1407748A0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140774CF8 (PspProcessDynamicEHContinuationTargets.c)
 *     NtQueryInformationCpuPartition @ 0x140775CD0 (NtQueryInformationCpuPartition.c)
 *     NtSetInformationCpuPartition @ 0x140775EC0 (NtSetInformationCpuPartition.c)
 *     PspAssignCpuPartitionsToProcess @ 0x140776964 (PspAssignCpuPartitionsToProcess.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x140776D0C (PspQueryAndCheckCpuPartitionName.c)
 *     PspApplyWorkingSetLimits @ 0x140777480 (PspApplyWorkingSetLimits.c)
 *     PsRegisterSiloMonitor @ 0x140779150 (PsRegisterSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407794B0 (PsUnregisterSiloMonitor.c)
 *     PspSetMinimalProcessName @ 0x14077A124 (PspSetMinimalProcessName.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14077A318 (PspSetCreateThreadNotifyRoutine.c)
 *     PspIumVerifyParentSd @ 0x14077A8D4 (PspIumVerifyParentSd.c)
 *     PsInitializeVsmEnclave @ 0x14077B32C (PsInitializeVsmEnclave.c)
 *     PsSessionObjectDelete @ 0x14077BA40 (PsSessionObjectDelete.c)
 *     PspGetNewSessionId @ 0x14077BC2C (PspGetNewSessionId.c)
 *     PspSessionObjectCreate @ 0x14077BDCC (PspSessionObjectCreate.c)
 *     NtAlertMultipleThreadByThreadId @ 0x14077C170 (NtAlertMultipleThreadByThreadId.c)
 *     PspQueryThreadIndexInformation @ 0x14077C83C (PspQueryThreadIndexInformation.c)
 *     RawQueryFileSystemInformation @ 0x14077CCF0 (RawQueryFileSystemInformation.c)
 *     RtlAddResourceAttributeAce @ 0x14077FEA0 (RtlAddResourceAttributeAce.c)
 *     RtlGetAppContainerParent @ 0x140780C20 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407814C0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlCheckBootStatusIntegrity @ 0x140782BE4 (RtlCheckBootStatusIntegrity.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1407837C0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140783AD4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140783E04 (RtlpSysVolCreateSecurityDescriptor.c)
 *     LdrpQueryValueKey @ 0x140784180 (LdrpQueryValueKey.c)
 *     RtlIdnToUnicode @ 0x1407845A0 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x14078463C (RtlpNameprepAsciiWorker.c)
 *     RtlpCtContextFree @ 0x14078708C (RtlpCtContextFree.c)
 *     RtlpCtFreeMemory @ 0x1407871FC (RtlpCtFreeMemory.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x140787614 (RtlAddDynamicEnforcedAddressRange.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x1407876DC (RtlRemoveDynamicEnforcedAddressRange.c)
 *     RtlpGetNormalization @ 0x14078D5B0 (RtlpGetNormalization.c)
 *     Pdcv2ActivationClientRegister @ 0x14078D95C (Pdcv2ActivationClientRegister.c)
 *     PdcTaskClientRegister @ 0x14078DE9C (PdcTaskClientRegister.c)
 *     PdcPortOpenCommon @ 0x14078DF44 (PdcPortOpenCommon.c)
 *     PdcpPortReleaseResources @ 0x14078E0D0 (PdcpPortReleaseResources.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14078E208 (SeCodeIntegritySetInformationProcess.c)
 *     SepImageVerificationCallbackWorker @ 0x14078E440 (SepImageVerificationCallbackWorker.c)
 *     SepLoadNgenLocations @ 0x14078E6CC (SepLoadNgenLocations.c)
 *     SepSetSystemPaths @ 0x14078EA40 (SepSetSystemPaths.c)
 *     SeShutdownServerSilo @ 0x14078EE3C (SeShutdownServerSilo.c)
 *     SepInitializationPhase1 @ 0x14078EEE0 (SepInitializationPhase1.c)
 *     SepLogTokenSidManagement @ 0x14078FD60 (SepLogTokenSidManagement.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140790124 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140790B70 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140790D58 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140790EDC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1407910A0 (SeAuditTransactionStateChange.c)
 *     SepAdtGenerateDiscardAudit @ 0x1407912E0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1407915CC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B78 (SepAuditAssignPrimaryToken.c)
 *     SepCaptureAuditPolicy @ 0x140791FD0 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x140792088 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1407922BC (SepCaptureOctetStringArray.c)
 *     SepReleaseAuditPolicy @ 0x1407924CC (SepReleaseAuditPolicy.c)
 *     NtDeleteObjectAuditAlarm @ 0x140792710 (NtDeleteObjectAuditAlarm.c)
 *     SepDereferenceSidValuesBlock @ 0x140793210 (SepDereferenceSidValuesBlock.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1407933E0 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1407934A0 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x1407939A0 (SepNotifyFileSystems.c)
 *     SepRemoveTokenLogonSession @ 0x140793A58 (SepRemoveTokenLogonSession.c)
 *     SepSecureBootCorrectBcd @ 0x140793E34 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140794164 (SepSecureBootUpdateBcdDataForRule.c)
 *     SepRmFetchGlobalSacl @ 0x1407945DC (SepRmFetchGlobalSacl.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407947B0 (SepRmGlobalSaclSetWrkr.c)
 *     SepDeReferenceSharedSidEntries @ 0x140794A18 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140794D78 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepBuildDefaultCap @ 0x140795238 (SepBuildDefaultCap.c)
 *     SepReadAndInsertCaps @ 0x1407952E0 (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x140795638 (SepReadAndPopulateCapes.c)
 *     SepReadSingleCap @ 0x140795D64 (SepReadSingleCap.c)
 *     SepRmDestroyCapTable @ 0x140796214 (SepRmDestroyCapTable.c)
 *     SddlpFreeUuidString @ 0x140796BD8 (SddlpFreeUuidString.c)
 *     SddlpReAlloc @ 0x140796BF8 (SddlpReAlloc.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079ABFC (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileGetExtents @ 0x14079AF50 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079B1BC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B5E8 (SmKmStoreFileWriteHeader.c)
 *     VmpPrefetchForVirtualFault @ 0x14079F46C (VmpPrefetchForVirtualFault.c)
 *     VmpPrefetchWorker @ 0x14079F550 (VmpPrefetchWorker.c)
 *     VmpProcessContextSetup @ 0x14079F5F0 (VmpProcessContextSetup.c)
 *     PerfDiagpProxyWorker @ 0x1407A0750 (PerfDiagpProxyWorker.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1407A0974 (PerfDiagpStartPerfDiagLogger.c)
 *     WdipSemFreePool @ 0x1407A27F8 (WdipSemFreePool.c)
 *     WdipSemCleanupGroupPolicy @ 0x1407A2928 (WdipSemCleanupGroupPolicy.c)
 *     IoWMISetSingleInstance @ 0x1407A3AF0 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1407A3C20 (IoWMISetSingleItem.c)
 *     IoWMISuggestInstanceName @ 0x1407A3D50 (IoWMISuggestInstanceName.c)
 *     WmipGetSysIds @ 0x1407A45E0 (WmipGetSysIds.c)
 *     WmipQuerySingleMultiple @ 0x1407A4F20 (WmipQuerySingleMultiple.c)
 *     WmipGECleanup @ 0x1407A5420 (WmipGECleanup.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407A5A68 (WmipGenerateBinaryMofNotification.c)
 *     WmipInsertMofResource @ 0x1407A5C1C (WmipInsertMofResource.c)
 *     WmipUpdateModifyGuid @ 0x1407A5EB8 (WmipUpdateModifyGuid.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407A6158 (WmipSaveGuidSecurityDescriptor.c)
 *     EtwDeleteProcessor @ 0x1407A63E0 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x1407A65DC (EtwInitializeProcessor.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1407A6948 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407A6C78 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpAllocatePhysicalPages @ 0x1407A6EFC (EtwpAllocatePhysicalPages.c)
 *     EtwpAllocatePmcData @ 0x1407A7064 (EtwpAllocatePmcData.c)
 *     EtwpCleanupSiloState @ 0x1407A70EC (EtwpCleanupSiloState.c)
 *     EtwpFreePfnArray @ 0x1407A7DC8 (EtwpFreePfnArray.c)
 *     EtwpFreePmcData @ 0x1407A7E78 (EtwpFreePmcData.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407A8468 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A8694 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407A89A8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A8F64 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1407A91EC (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1407A9470 (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpSetPmcProfileSource @ 0x1407AA0E8 (EtwpSetPmcProfileSource.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1407AAD70 (EtwpCoverageFreeStringBuffers.c)
 *     EtwpCoverageResetCP @ 0x1407AB024 (EtwpCoverageResetCP.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1407AB488 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1407AB8A4 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1407AC0C4 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1407AC420 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     EtwpSendDbgId @ 0x1407ACCC0 (EtwpSendDbgId.c)
 *     EtwRegisterEventCallback @ 0x1407ACEB0 (EtwRegisterEventCallback.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1407ACF80 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD42C (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407AD74C (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407ADA30 (SendCaptureStateNotificationsWorker.c)
 *     EtwStartAutoLogger @ 0x1407ADDF8 (EtwStartAutoLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AEE98 (EtwpEnumerateAutologgerPath.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AF194 (EtwpInitializeAutoLoggers.c)
 *     EtwpPreserveLogger @ 0x1407AFA4C (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x1407AFC6C (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x1407AFD74 (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLogger @ 0x1407AFE60 (EtwpSavePersistedLogger.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1407B042C (EtwpSavePersistedLoggersWorker.c)
 *     EtwpEnumerateWorkingSet @ 0x1407B0A90 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407B0D30 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1407B0FE4 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1407B1140 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1407B1358 (EtwpProcessorRundown.c)
 *     EtwpFreeLbrData @ 0x1407B1894 (EtwpFreeLbrData.c)
 *     EtwpConstructIptData @ 0x1407B1B38 (EtwpConstructIptData.c)
 *     EtwpDestructIptData @ 0x1407B1BCC (EtwpDestructIptData.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1407B283C (EtwpCovSampStackHashTableAlloc.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1407B4010 (ExEnumerateSystemFirmwareTables.c)
 *     ExGetSystemFirmwareTable @ 0x1407B4100 (ExGetSystemFirmwareTable.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1407B41F8 (ExNotifyPlatformBinaryExecuted.c)
 *     ExpGetSystemPlatformBinary @ 0x1407B42C0 (ExpGetSystemPlatformBinary.c)
 *     ExpQueryElamCertInfo @ 0x1407B4C04 (ExpQueryElamCertInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1407B4FE8 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1407B5140 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407B53A4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407B5650 (ExpRegisterFirmwareTableInformationHandler.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x1407B63B0 (ExpParseAndUpdateLeapSecondData.c)
 *     ExpReadLeapSecondData @ 0x1407B64AC (ExpReadLeapSecondData.c)
 *     ExpWatchLicenseInfoWork @ 0x1407B73B0 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x1407B7870 (NtDisplayString.c)
 *     ExpGenuinePolicyPostProcess @ 0x1407B8980 (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductCacheProviderHelper @ 0x1407B9058 (ExpOsProductCacheProviderHelper.c)
 *     SLGetSubscriptionPfn @ 0x1407B9708 (SLGetSubscriptionPfn.c)
 *     SLQueryLicenseValueInternal @ 0x1407B99EC (SLQueryLicenseValueInternal.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     SpRegOpenRedirectedKey @ 0x1407BB144 (SpRegOpenRedirectedKey.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1407BB318 (ExStartRecordingIRTimerExpiries.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1407BB470 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpConvertArcName @ 0x1407BB504 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1407BB6C8 (ExpConvertSignatureName.c)
 *     ExpCreateOutputARC @ 0x1407BB90C (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BBA04 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1407BBBCC (ExpFindArcName.c)
 *     ExpParseSignatureName @ 0x1407BC030 (ExpParseSignatureName.c)
 *     ExpSetBootEntry @ 0x1407BC32C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCA24 (ExpSetDriverEntry.c)
 *     ExpTranslateNtPath @ 0x1407BD4F4 (ExpTranslateNtPath.c)
 *     NtEnumerateDriverEntries @ 0x1407BDBD0 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BE5B0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetDriverEntryOrder @ 0x1407BEA90 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407BEC50 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407BEF90 (NtSetSystemEnvironmentValueEx.c)
 *     ExpNtDeleteWnfStateData @ 0x1407BF7A8 (ExpNtDeleteWnfStateData.c)
 *     ExpPartitionDestroy @ 0x1407BFCAC (ExpPartitionDestroy.c)
 *     ExpDereferenceHost @ 0x1407C09E0 (ExpDereferenceHost.c)
 *     ExSvmUpdateThreadPasidMsrApc @ 0x1407C0AC0 (ExSvmUpdateThreadPasidMsrApc.c)
 *     NtSetUuidSeed @ 0x1407C0E20 (NtSetUuidSeed.c)
 *     CMFCheckAccess @ 0x1407C1620 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C187C (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1407C1EAC (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C27E0 (CMFSystemThreadRoutine.c)
 *     CMFUnmapModules @ 0x1407C2E00 (CMFUnmapModules.c)
 *     NtMapCMFModule @ 0x1407C3080 (NtMapCMFModule.c)
 *     ExpProfileDelete @ 0x1407C4160 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1407C4440 (NtStartProfile.c)
 *     NtStopProfile @ 0x1407C4740 (NtStopProfile.c)
 *     ExpKdPullRemoteFileForUser @ 0x1407C4CB4 (ExpKdPullRemoteFileForUser.c)
 *     ExpQuerySystemMemoryNumaPerformanceInformation @ 0x1407C5B7C (ExpQuerySystemMemoryNumaPerformanceInformation.c)
 *     ExpWnfDestroyPermanentDataStore @ 0x1407C642C (ExpWnfDestroyPermanentDataStore.c)
 *     WheaAddErrorSource @ 0x1407C6980 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x1407C6C00 (WheaRemoveErrorSource.c)
 *     WheaAddErrorSourceDeviceDriver @ 0x1407C6DE0 (WheaAddErrorSourceDeviceDriver.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x1407C6FD0 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheaPageOfflineAndPersist @ 0x1407C7504 (WheaPageOfflineAndPersist.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1407C7800 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapLogInitEvent @ 0x1407C8368 (WheapLogInitEvent.c)
 *     WheapReportDeferredLiveDumps @ 0x1407C87F0 (WheapReportDeferredLiveDumps.c)
 *     WheapExecuteRowFailureCheck @ 0x1407C8EE8 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaMemoryCheck @ 0x1407C9224 (WheapPfaMemoryCheck.c)
 *     WheapPfaReset @ 0x1407C9404 (WheapPfaReset.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1407C94EC (WheapPfaRetireExpiredMemoryEntries.c)
 *     ApiSetpConstructPathToExtension @ 0x1407C9910 (ApiSetpConstructPathToExtension.c)
 *     ApiSetpLoadSchemaExtension @ 0x1407C99CC (ApiSetpLoadSchemaExtension.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmpSaveKeyByFileCopy @ 0x1407CEFE0 (CmpSaveKeyByFileCopy.c)
 *     NtReplaceKey @ 0x1407D0990 (NtReplaceKey.c)
 *     CmUnRegisterCallback @ 0x1407D1530 (CmUnRegisterCallback.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x1407D1D00 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpQuotaWarningWorker @ 0x1407D2380 (CmpQuotaWarningWorker.c)
 *     CmpSystemHiveHysteresisWorker @ 0x1407D23E0 (CmpSystemHiveHysteresisWorker.c)
 *     CmDeleteKeyRecursive @ 0x1407D2418 (CmDeleteKeyRecursive.c)
 *     CmSetAcpiHwProfile @ 0x1407D25A4 (CmSetAcpiHwProfile.c)
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     CmpFilterAcpiDockingState @ 0x1407D3B3C (CmpFilterAcpiDockingState.c)
 *     CmpGetAcpiProfileInformation @ 0x1407D3D9C (CmpGetAcpiProfileInformation.c)
 *     CmInitializeProcessor @ 0x1407D4BCC (CmInitializeProcessor.c)
 *     CmpFreeAllMemory @ 0x1407D51F0 (CmpFreeAllMemory.c)
 *     CmpCmdInit @ 0x1407D5788 (CmpCmdInit.c)
 *     CmpCmdRenameHive @ 0x1407D5930 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarningWorker @ 0x1407D5A80 (CmpDiskFullWarningWorker.c)
 *     CmpLoadLayerVersions @ 0x1407D6F70 (CmpLoadLayerVersions.c)
 *     CmpLoadSystemVersionData @ 0x1407D7168 (CmpLoadSystemVersionData.c)
 *     CmpSetVersionData @ 0x1407D7920 (CmpSetVersionData.c)
 *     CmpCreateRegistryProcessToken @ 0x1407D8038 (CmpCreateRegistryProcessToken.c)
 *     CmpVolumeContextStart @ 0x1407D89C0 (CmpVolumeContextStart.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpRecordUnloadEventForHive @ 0x1407DA7EC (CmpRecordUnloadEventForHive.c)
 *     CmpBuildVirtualReplicationStack @ 0x1407DB310 (CmpBuildVirtualReplicationStack.c)
 *     CmpReplicateKeyToVirtual @ 0x1407DBC0C (CmpReplicateKeyToVirtual.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DBFE8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpFreeOffsetArray @ 0x1407DC650 (CmpFreeOffsetArray.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DCFBC (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD214 (CmpHiveRootSecurityDescriptor.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407DD868 (CmpReportAuditVirtualizationEvent.c)
 *     CmpCreateEmptyHiveClone @ 0x1407DE510 (CmpCreateEmptyHiveClone.c)
 *     CmpInitializeRegistryNode @ 0x1407DEA4C (CmpInitializeRegistryNode.c)
 *     CmpRmAnalysisPhase @ 0x1407E0798 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1407E0B98 (CmpRmUnDoPhase.c)
 *     CmpPreserveSystemHiveData @ 0x1407E21A8 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x1407E3450 (CmpGetValueForAudit.c)
 *     CmpValueToData @ 0x1407E35C4 (CmpValueToData.c)
 *     HvAllocateOffsetArraysForHiveSnapshot @ 0x1407E36B4 (HvAllocateOffsetArraysForHiveSnapshot.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1407E465C (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407E639C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407E6620 (CmpDeleteCorruptedLogfile.c)
 *     MmFreeBootRegistry @ 0x1407E725C (MmFreeBootRegistry.c)
 *     MiFormDllRegistryPath @ 0x1407E7448 (MiFormDllRegistryPath.c)
 *     MiFormFullImageName @ 0x1407E75D0 (MiFormFullImageName.c)
 *     MiIssueDllInitializeCall @ 0x1407E7684 (MiIssueDllInitializeCall.c)
 *     MmDeleteProcessor @ 0x1407E8154 (MmDeleteProcessor.c)
 *     MiCreateNodeLists @ 0x1407E9290 (MiCreateNodeLists.c)
 *     MiExtendMemoryBlocks @ 0x1407E94C4 (MiExtendMemoryBlocks.c)
 *     MmAllocateNonCachedMemory @ 0x1407EABD0 (MmAllocateNonCachedMemory.c)
 *     MiAddRun @ 0x1407EAD74 (MiAddRun.c)
 *     MmAllocateMemoryRanges @ 0x1407EB130 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x1407EB410 (MmQueryMemoryRanges.c)
 *     MiRemoveMdlPages @ 0x1407EB5D8 (MiRemoveMdlPages.c)
 *     MiLdwPopupWorker @ 0x1407EC360 (MiLdwPopupWorker.c)
 *     MiDeletePartition @ 0x1407EC62C (MiDeletePartition.c)
 *     MmEnumerateBadPages @ 0x1407ED198 (MmEnumerateBadPages.c)
 *     MmSetPermanentCacheAttribute @ 0x1407ED460 (MmSetPermanentCacheAttribute.c)
 *     MiFreeRotateView @ 0x1407EDA3C (MiFreeRotateView.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     MiDeletePagefile @ 0x1407EEEF8 (MiDeletePagefile.c)
 *     MiAllocateEntireImageFileExtents @ 0x1407EFC4C (MiAllocateEntireImageFileExtents.c)
 *     MiComputeIdealFirstSubsection @ 0x1407EFE7C (MiComputeIdealFirstSubsection.c)
 *     MiDeleteFileExtentList @ 0x1407F02DC (MiDeleteFileExtentList.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407F08B0 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiCaptureHotPatchInfo @ 0x1407F2308 (MiCaptureHotPatchInfo.c)
 *     MiDeleteHotPatchEntry @ 0x1407F2550 (MiDeleteHotPatchEntry.c)
 *     MiGetAllRegisteredPatches @ 0x1407F280C (MiGetAllRegisteredPatches.c)
 *     MiGetProcessHotPatchContext @ 0x1407F2AD8 (MiGetProcessHotPatchContext.c)
 *     MiInsertHotPatchRecord @ 0x1407F3340 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1407F35F8 (MiInsertSecureImageActivePatch.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 *     MiPrepareToHotPatchImage @ 0x1407F5540 (MiPrepareToHotPatchImage.c)
 *     MiProcessPatchImageCfg @ 0x1407F5CBC (MiProcessPatchImageCfg.c)
 *     MmRemoveSecureImageActivePatch @ 0x1407F62A8 (MmRemoveSecureImageActivePatch.c)
 *     MiAllocateEnclaveVad @ 0x1407F6D40 (MiAllocateEnclaveVad.c)
 *     MiDereferenceEnclaveModule @ 0x1407F7650 (MiDereferenceEnclaveModule.c)
 *     NtCreateEnclave @ 0x1407F7960 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407F7D50 (NtInitializeEnclave.c)
 *     MmLogSystemShareablePfnInfo @ 0x1407F8094 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1407F9410 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweBitMap @ 0x1407F9648 (MiDeleteAweBitMap.c)
 *     MiDeleteAweInfo @ 0x1407F9698 (MiDeleteAweInfo.c)
 *     NtMapUserPhysicalPages @ 0x1407FA100 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FA3B0 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeletePartitionSlabState @ 0x1407FB560 (MiDeletePartitionSlabState.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 *     MiDeletePartitionResources @ 0x1407FBD44 (MiDeletePartitionResources.c)
 *     MiExpandPartitionIds @ 0x1407FBF28 (MiExpandPartitionIds.c)
 *     MiMakePartitionMemoryBlock @ 0x1407FC61C (MiMakePartitionMemoryBlock.c)
 *     MmCreatePartition @ 0x1407FC90C (MmCreatePartition.c)
 *     MmManagePartitionCharges @ 0x1407FCA7C (MmManagePartitionCharges.c)
 *     MmManagePartitionNodeInformation @ 0x1407FD160 (MmManagePartitionNodeInformation.c)
 *     MmStoreRegister @ 0x1407FD3A8 (MmStoreRegister.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x1407FD7C8 (MiReferenceNonPagedMemoryProcessList.c)
 *     MiReleaseScrubPacket @ 0x1407FD9F4 (MiReleaseScrubPacket.c)
 *     MmScrubMemory @ 0x1407FDC70 (MmScrubMemory.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x1407FE114 (MiCreateSpecialPurposeMemoryPageFile.c)
 *     MiDeletePageFileMemoryExtents @ 0x1407FE1C8 (MiDeletePageFileMemoryExtents.c)
 *     MiDeleteSpecialPurposeMemory @ 0x1407FE1FC (MiDeleteSpecialPurposeMemory.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FE3D4 (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x1407FE898 (MiQuerySpecialPurposeMemoryInformation.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407FECA8 (MiSpecialPurposeMemoryRemoved.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407FF044 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiCreatePerNodeZeroingConductor @ 0x1407FF17C (MiCreatePerNodeZeroingConductor.c)
 *     MiCreateZeroThreadContext @ 0x1407FF2B0 (MiCreateZeroThreadContext.c)
 *     MiMakeSpaceForConductorListZeroThread @ 0x1407FF6D0 (MiMakeSpaceForConductorListZeroThread.c)
 *     MiCreateMemoryEventSD @ 0x1407FFC40 (MiCreateMemoryEventSD.c)
 *     MiInitializeMemoryEvents @ 0x1407FFF3C (MiInitializeMemoryEvents.c)
 *     MiAcceptNewAccelerators @ 0x140800064 (MiAcceptNewAccelerators.c)
 *     MiDeletePartialCloneVads @ 0x1408003E4 (MiDeletePartialCloneVads.c)
 *     UcpApcNormalRoutine @ 0x140800840 (UcpApcNormalRoutine.c)
 *     SdbpFreeAppAttributes @ 0x14080457C (SdbpFreeAppAttributes.c)
 *     AslPathWildcardFindFirst @ 0x14080A0A4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14080A69C (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x14080B3B4 (AslpPathWildcardFreeFindContext.c)
 *     AdtpBuildGuidString @ 0x140810878 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1408109A0 (AdtpBuildHexInt64String.c)
 *     AdtpBuildMacStrings @ 0x140810A64 (AdtpBuildMacStrings.c)
 *     AdtpBuildRegistryValueString @ 0x140810B1C (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSidListString @ 0x140810DC8 (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x140811000 (AdtpAppendString.c)
 *     AdtpObjsInitialize @ 0x1408114B8 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1408119E0 (AdtpInitializeDriveLetters.c)
 *     BiMarkTreatAsSystemStore @ 0x140811E50 (BiMarkTreatAsSystemStore.c)
 *     BcdEnumerateObjects @ 0x140811F1C (BcdEnumerateObjects.c)
 *     BiResolveLocateDevice @ 0x14081243C (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1408127CC (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x140813010 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408131A0 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x1408132A0 (BiCreateFileDeviceElement.c)
 *     BiCreatePartitionDevice @ 0x14081344C (BiCreatePartitionDevice.c)
 *     BiGetDriveLayoutBlock @ 0x140813AC8 (BiGetDriveLayoutBlock.c)
 *     BiGetNtPartitionPath @ 0x140813BA8 (BiGetNtPartitionPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140814138 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x140814368 (BiTranslateSymbolicLinkFile.c)
 *     BiVerifyBootPartition @ 0x1408144D0 (BiVerifyBootPartition.c)
 *     BiIsPortableWorkspaceBoot @ 0x1408148AC (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1408149C4 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140814B14 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiCreateBootEntry @ 0x140814BFC (BiCreateBootEntry.c)
 *     BiCreateEfiEntry @ 0x140814FB0 (BiCreateEfiEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1408153F4 (BiHandleFirmwareDefaultEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1408155D8 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x1408157BC (BiUpdateBcdObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140815B48 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SyspartGetPhysicalPartitions @ 0x140815CD8 (SyspartGetPhysicalPartitions.c)
 *     SyspartIsSpace @ 0x140815DD8 (SyspartIsSpace.c)
 *     SiFindSystemPartition @ 0x140815E34 (SiFindSystemPartition.c)
 *     SiGetDriveLayoutInformation @ 0x140816014 (SiGetDriveLayoutInformation.c)
 *     SiBootEntryGetNtFilePath @ 0x1408161BC (SiBootEntryGetNtFilePath.c)
 *     SiDisambiguateSystemDevice @ 0x14081627C (SiDisambiguateSystemDevice.c)
 *     SiGetEfiSystemDevice @ 0x140816348 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1408167A0 (SiGetEspFromFirmware.c)
 *     SiGetBiosSystemDisk @ 0x140816C70 (SiGetBiosSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x140816DA0 (SiGetBiosSystemPartition.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140816EE8 (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     _PnpCtxCloseMachine @ 0x1408171F0 (_PnpCtxCloseMachine.c)
 *     _PnpCtxDestroyNode @ 0x140817430 (_PnpCtxDestroyNode.c)
 *     _PnpCtxOpenMachine @ 0x140817690 (_PnpCtxOpenMachine.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140817FD8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408184FC (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x140818798 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x140818B70 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140818F18 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14081983C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140819A5C (_CmDeleteDeviceContainerWorker.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140819D68 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14081A14C (_CmGetDevicesInBaseContainerList.c)
 *     _CmMoveBaseContainer @ 0x14081A53C (_CmMoveBaseContainer.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B020 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14081B530 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14081B96C (_CmGetMatchingCommonClassListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14081BC80 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmServiceFilterCallback @ 0x14081BE80 (_CmServiceFilterCallback.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14081CC34 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x14081CECC (_CmDeleteDevicePanelWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14081D090 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14081D770 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14081DE84 (_CmAppendDeclarativeFilterLevel.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14081E810 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _SysCtxCloseMachine @ 0x140820150 (_SysCtxCloseMachine.c)
 *     _SysCtxOpenMachine @ 0x140820404 (_SysCtxOpenMachine.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408206AC (_PnpGetEnumSecurityDescriptor.c)
 *     _RegRtlCopyTreeInternal @ 0x140820BA0 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlQueryKeyPathName @ 0x1408211B8 (_RegRtlQueryKeyPathName.c)
 *     DrvDbDeleteObjectSubKey @ 0x1408215CC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140822F28 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbOpenContext @ 0x140823650 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140823A00 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140823D38 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x140823DEC (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140823ED0 (DrvDbGetSecurityDescriptor.c)
 *     DestroyAggregateSession @ 0x1408247E8 (DestroyAggregateSession.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140824ED4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x14082581C (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     MinCryptParseRevocationList @ 0x140825AC0 (MinCryptParseRevocationList.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140826868 (MinCrypK_VerifySignedDataKModeEx.c)
 *     I_MincryptFreeChainInfo @ 0x1408278DC (I_MincryptFreeChainInfo.c)
 *     MincryptFree @ 0x1408289A0 (MincryptFree.c)
 *     AhcCacheQueryHwId @ 0x140828F30 (AhcCacheQueryHwId.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408293FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x1408296E4 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140829A24 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VhdVerifyBootDisk @ 0x140829D1C (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x14082A068 (VhdiMountVhdFile.c)
 *     NtEnableLastKnownGood @ 0x14082A820 (NtEnableLastKnownGood.c)
 *     ObpGetSilosRootDirectory @ 0x14082B0A0 (ObpGetSilosRootDirectory.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14082B418 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLoadLanguageConfigList @ 0x14082B5F0 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x14082B734 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14082BBA8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x14082BFB4 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14082C4BC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14082CD70 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegResizeStringPool @ 0x14082CFE0 (RtlpMuiRegResizeStringPool.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14082E674 (_RtlpMuiRegValidateInstalled.c)
 *     LkmdTelpFreeMem @ 0x14082F91C (LkmdTelpFreeMem.c)
 *     HashpHashMemory @ 0x14082FB0C (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x14082FD90 (HashpVerifyPkcs1Signature.c)
 *     EtwpInitLoggerContext @ 0x1408309D4 (EtwpInitLoggerContext.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x1408311D4 (PiDevCfgFreeDeviceMigrationNode.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x140832F00 (EtwpCaptureString.c)
 *     EtwpRundownNotifications @ 0x1408348C0 (EtwpRundownNotifications.c)
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 *     EtwpReceiveNotification @ 0x140835D94 (EtwpReceiveNotification.c)
 *     EtwpUnreferenceDataBlock @ 0x140835FF0 (EtwpUnreferenceDataBlock.c)
 *     EtwpSetProviderTraitsUm @ 0x140836014 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsCommon @ 0x1408361EC (EtwpSetProviderTraitsCommon.c)
 *     NtCreateWnfStateName @ 0x140836950 (NtCreateWnfStateName.c)
 *     EtwpFreeFilterInfo @ 0x140837394 (EtwpFreeFilterInfo.c)
 *     ExpWnfPopulateStateData @ 0x140837C4C (ExpWnfPopulateStateData.c)
 *     ExpWnfCreateNameInstance @ 0x140837E90 (ExpWnfCreateNameInstance.c)
 *     EtwpCheckGuidAccess @ 0x14083848C (EtwpCheckGuidAccess.c)
 *     EtwpProviderArrivalCallback @ 0x140838564 (EtwpProviderArrivalCallback.c)
 *     MmGetFileNameForAddress @ 0x140838768 (MmGetFileNameForAddress.c)
 *     EtwpTrackBinaryForSession @ 0x140838890 (EtwpTrackBinaryForSession.c)
 *     EtwpAllocGuidEntry @ 0x140838E48 (EtwpAllocGuidEntry.c)
 *     ObLogSecurityDescriptor @ 0x140838F50 (ObLogSecurityDescriptor.c)
 *     EtwpAddRegEntryToGroup @ 0x140839260 (EtwpAddRegEntryToGroup.c)
 *     EtwpAccessCheckFromState @ 0x140839BF8 (EtwpAccessCheckFromState.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x140839E78 (EtwpGetGuidSecurityDescriptor.c)
 *     EtwpAddDataSource @ 0x14083A384 (EtwpAddDataSource.c)
 *     EtwpDeleteRegistrationObject @ 0x14083C380 (EtwpDeleteRegistrationObject.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083DDC0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083E100 (CmpCreateKeyBody.c)
 *     ObpFreeObjectNameBuffer @ 0x14083E740 (ObpFreeObjectNameBuffer.c)
 *     EtwpFreeGuidEntry @ 0x14083E7D4 (EtwpFreeGuidEntry.c)
 *     NtCreateMutant @ 0x14083E8C0 (NtCreateMutant.c)
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     PfpRpFileKeyUpdate @ 0x140843C20 (PfpRpFileKeyUpdate.c)
 *     CmpDeleteHive @ 0x14084475C (CmpDeleteHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     ObpFreeObject @ 0x1408469C0 (ObpFreeObject.c)
 *     ObDeassignSecurity @ 0x1408471C0 (ObDeassignSecurity.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     VrpRegistryCallback @ 0x140849230 (VrpRegistryCallback.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     EtwpTraceHandle @ 0x14084CBBC (EtwpTraceHandle.c)
 *     ExpFreeTablePagedPool @ 0x14084D4E4 (ExpFreeTablePagedPool.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084D5BC (SepAdtCloseObjectAuditAlarm.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140850540 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpGrantAccess @ 0x140851390 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140851B40 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpGetObjectSecurity @ 0x140853850 (ObpGetObjectSecurity.c)
 *     NtOpenThreadTokenEx @ 0x1408553C0 (NtOpenThreadTokenEx.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     NtCreateEvent @ 0x140856FC0 (NtCreateEvent.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x140857F90 (ObpAssignSecurity.c)
 *     SeDefaultObjectMethod @ 0x140858190 (SeDefaultObjectMethod.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408588B0 (ObSetSecurityDescriptorInfo.c)
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 *     PsReturnSharedPoolQuota @ 0x14085A690 (PsReturnSharedPoolQuota.c)
 *     RtlpFreeAtom @ 0x14085AC78 (RtlpFreeAtom.c)
 *     ExpWnfLookupPermanentName @ 0x14085ACA8 (ExpWnfLookupPermanentName.c)
 *     PiUEventProcessEventWorker @ 0x14085B220 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14085B370 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x14085B5E0 (PiUEventHandleGetEvent.c)
 *     PiUEventFreeEventEntry @ 0x14085BC5C (PiUEventFreeEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14085C13C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14085C45C (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventInitClientRegistrationContext @ 0x14085C5EC (PiUEventInitClientRegistrationContext.c)
 *     BiCreateKeySecurityDescriptor @ 0x14085C904 (BiCreateKeySecurityDescriptor.c)
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14085D348 (ExpGetSystemFirmwareTableInformation.c)
 *     BiGetRegistryValue @ 0x14085D5C8 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     BiGetObjectDescription @ 0x14085DA8C (BiGetObjectDescription.c)
 *     BiCreateKey @ 0x14085DB5C (BiCreateKey.c)
 *     BiIsSystemStore @ 0x14085E2C0 (BiIsSystemStore.c)
 *     BiIsSystemStoreCandidate @ 0x14085E348 (BiIsSystemStoreCandidate.c)
 *     PspSetJobIoRateControlForVolume @ 0x14085E97C (PspSetJobIoRateControlForVolume.c)
 *     BiUnloadHiveByHandle @ 0x14085EDB0 (BiUnloadHiveByHandle.c)
 *     BiUnloadHiveByName @ 0x14085EE48 (BiUnloadHiveByName.c)
 *     BiGetSavedBootEntry @ 0x14085F028 (BiGetSavedBootEntry.c)
 *     BiLoadSystemStore @ 0x14085F450 (BiLoadSystemStore.c)
 *     BcdGetSystemStorePath @ 0x14085F5F8 (BcdGetSystemStorePath.c)
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     AlpcpConnectPort @ 0x1408645A0 (AlpcpConnectPort.c)
 *     SeCaptureSid @ 0x140864EF8 (SeCaptureSid.c)
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 *     ObpSetObjectAuditInfo @ 0x140867674 (ObpSetObjectAuditInfo.c)
 *     ObReleaseObjectSecurityEx @ 0x140867FD0 (ObReleaseObjectSecurityEx.c)
 *     ObpCheckObjectReference @ 0x14086802C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1408682F0 (ObCheckCreateObjectAccess.c)
 *     CmpFlushNotify @ 0x14086869C (CmpFlushNotify.c)
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmpFreePostBlock @ 0x14086A740 (CmpFreePostBlock.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmpRollbackTransactionArray @ 0x14086C1E8 (CmpRollbackTransactionArray.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14086C2B0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryMultipleValueKey @ 0x14086C850 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408704E0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDecommisssionKcb @ 0x140870D10 (CmpDecommisssionKcb.c)
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     CmpVEExecuteOpenLogic @ 0x1408745A0 (CmpVEExecuteOpenLogic.c)
 *     CmpQueryKeyValueData @ 0x140875E50 (CmpQueryKeyValueData.c)
 *     CmpGetValueData @ 0x1408765B0 (CmpGetValueData.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408768A0 (CmpGetSymbolicLinkTarget.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408790E8 (CmpTransSearchAddLightWeightTrans.c)
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140879E8C (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     NtSetSecurityObject @ 0x14087A070 (NtSetSecurityObject.c)
 *     CmpTransSearchAddTrans @ 0x14087A4F0 (CmpTransSearchAddTrans.c)
 *     ObCheckObjectAccess @ 0x14087A740 (ObCheckObjectAccess.c)
 *     CmpRundownUnitOfWork @ 0x14087B024 (CmpRundownUnitOfWork.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 *     CmpDoWritethroughReparse @ 0x14087B570 (CmpDoWritethroughReparse.c)
 *     CmpCleanUpSubKeyInfo @ 0x14087C170 (CmpCleanUpSubKeyInfo.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087DE20 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFree @ 0x14087EC70 (CmpFree.c)
 *     CmpCopyValue @ 0x1408816B4 (CmpCopyValue.c)
 *     CmpCopySyncTree2 @ 0x1408838F4 (CmpCopySyncTree2.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140887F4C (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1408880F8 (SepCaptureTokenSecurityAttributesInformation.c)
 *     PnpCheckDeviceIdsChanged @ 0x140888A78 (PnpCheckDeviceIdsChanged.c)
 *     SepCaptureInt64Array @ 0x140888CC4 (SepCaptureInt64Array.c)
 *     NtQuerySecurityAttributesToken @ 0x140888DC0 (NtQuerySecurityAttributesToken.c)
 *     SepCaptureUnicodeStringArray @ 0x1408890B0 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x140889350 (SeCaptureUnicodeStringStructures.c)
 *     SepReleaseUnicodeStringArray @ 0x1408894A0 (SepReleaseUnicodeStringArray.c)
 *     NtQuerySecurityPolicy @ 0x140889550 (NtQuerySecurityPolicy.c)
 *     NtSetCachedSigningLevel2 @ 0x140889860 (NtSetCachedSigningLevel2.c)
 *     SeExamineSacl @ 0x140889B70 (SeExamineSacl.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088A000 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     NtSecureConnectPort @ 0x14088AF50 (NtSecureConnectPort.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14088DB20 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     AlpcpReleaseAttributes @ 0x140890220 (AlpcpReleaseAttributes.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpCaptureMessageDataSafe @ 0x140892480 (AlpcpCaptureMessageDataSafe.c)
 *     SepCreateClientSecurityEx @ 0x140897AC0 (SepCreateClientSecurityEx.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     IopAllocRealFileObject @ 0x14089A9B0 (IopAllocRealFileObject.c)
 *     ObpDeleteNameCheck @ 0x14089B690 (ObpDeleteNameCheck.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x14089CCA0 (ObpCaptureObjectCreateInformation.c)
 *     ObpCaptureObjectName @ 0x14089CFB0 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IopCheckBackupRestorePrivilege @ 0x1408A1C40 (IopCheckBackupRestorePrivilege.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408A26C0 (FsRtlFreeExtraCreateParameterList.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408A2820 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408A2A00 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1408A2AC8 (IopSymlinkFreeRelatedMountPointChain.c)
 *     PspDeleteCreateProcessContext @ 0x1408A4758 (PspDeleteCreateProcessContext.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408A644C (PspRecheckThreadOptionalXStateFeatures.c)
 *     SeAuditProcessCreation @ 0x1408A73CC (SeAuditProcessCreation.c)
 *     KeRundownApcQueues @ 0x1408A7A74 (KeRundownApcQueues.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     PspThreadIndexCleanup @ 0x1408A8620 (PspThreadIndexCleanup.c)
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 *     PspUserApcKernelRoutine @ 0x1408A8FB0 (PspUserApcKernelRoutine.c)
 *     EtwExitProcess @ 0x1408A9474 (EtwExitProcess.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     ExpWnfDeleteProcessContext @ 0x1408AA090 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1408AA348 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x1408AA6E8 (ExpWnfDeleteNameInstance.c)
 *     NtDeleteWnfStateName @ 0x1408AAC70 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1408AD060 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfWriteStateData @ 0x1408AD580 (ExpWnfWriteStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1408AE824 (ExpWnfCheckCrossScopeAccess.c)
 *     PiSwIrpInterfaceSetState @ 0x1408B1C78 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x1408B1E40 (PiSwIrpPropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x1408B2070 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceInterfaceSetState @ 0x1408B22B0 (PiSwDeviceInterfaceSetState.c)
 *     IopDoDeferredSetInterfaceState @ 0x1408B24D0 (IopDoDeferredSetInterfaceState.c)
 *     PiSwIrpInterfaceRegister @ 0x1408B2584 (PiSwIrpInterfaceRegister.c)
 *     PipCheckForDenyExecute @ 0x1408B2A00 (PipCheckForDenyExecute.c)
 *     IoRegisterDeviceInterface @ 0x1408B2B20 (IoRegisterDeviceInterface.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B2EAC (PnpQueueQueryAndRemoveEvent.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     ConstraintEval @ 0x1408B4EA0 (ConstraintEval.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1408B5640 (IopBuildGlobalSymbolicLinkString.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1408B58C0 (PiCMGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1408B6638 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B7090 (IoGetDeviceInterfaceAlias.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B7510 (PnpUnicodeStringToWstrFree.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1408B77A0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PiSwIrpInterfacePropertySet @ 0x1408B9044 (PiSwIrpInterfacePropertySet.c)
 *     PipEnumerateCompleted @ 0x1408B9260 (PipEnumerateCompleted.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408BA158 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1408BB270 (PiDmCacheDataFree.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1408BB2BC (PiDmObjectUpdateCachedObjectProperty.c)
 *     _PnpCtxRegQueryValue @ 0x1408BC774 (_PnpCtxRegQueryValue.c)
 *     IoGetDeviceProperty @ 0x1408BCAC0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1408BD05C (PiGetDeviceRegProperty.c)
 *     PiControlGetPropertyData @ 0x1408BD4B0 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1408BD8A0 (PiControlGetRelatedDevice.c)
 *     PiCMGetObjectList @ 0x1408BE080 (PiCMGetObjectList.c)
 *     PiCMValidateDeviceInstance @ 0x1408BE2FC (PiCMValidateDeviceInstance.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1408BE750 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCaptureObjectInputData @ 0x1408BEB90 (PiCMCaptureObjectInputData.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     PiCMHandleIoctl @ 0x1408C3A00 (PiCMHandleIoctl.c)
 *     BuildQueryDirectoryIrp @ 0x1408C48F0 (BuildQueryDirectoryIrp.c)
 *     PiCMCapturePropertyInputData @ 0x1408C5220 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C5760 (PiCMCaptureRegistryPropertyInputData.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C6550 (_PnpRegQueryValueIndirect.c)
 *     _CmOpenDeviceRegKey @ 0x1408C6880 (_CmOpenDeviceRegKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C6A30 (_CmOpenDeviceRegKeyWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C7D10 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C7EF0 (_PnpGetGenericStoreProperty.c)
 *     IopGetDeviceInterfaces @ 0x1408C8470 (IopGetDeviceInterfaces.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C8D6C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408CA360 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408CAE98 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiDqQueryEvaluateFilter @ 0x1408CBE00 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlEndOperation @ 0x1408CC158 (PiPnpRtlEndOperation.c)
 *     PnpGetObjectProperty @ 0x1408CCF60 (PnpGetObjectProperty.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CD660 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CF680 (PiDmListEnumObjectsWithCallback.c)
 *     NtPlugPlayControl @ 0x1408CFA10 (NtPlugPlayControl.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CFC60 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408D0150 (PiControlMakeUserModeCallersCopy.c)
 *     PiDmObjectRelease @ 0x1408D0A30 (PiDmObjectRelease.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408D0AE0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiControlGetSetDeviceStatus @ 0x1408D1350 (PiControlGetSetDeviceStatus.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1408D1730 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408D1BF0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1408D2310 (PiUEventNotifyTargetDeviceChange.c)
 *     PiPnpRtlObjectEventRelease @ 0x1408D2A3C (PiPnpRtlObjectEventRelease.c)
 *     PiDqQuerySerializeActionQueue @ 0x1408D2AD0 (PiDqQuerySerializeActionQueue.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D2DD0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1408D3934 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x1408D3C2C (PiDqActionDataFree.c)
 *     PnpAllocatePWSTR @ 0x1408D3DA4 (PnpAllocatePWSTR.c)
 *     PnpFreeDevPropertyArray @ 0x1408D3F3C (PnpFreeDevPropertyArray.c)
 *     PiDqQueryRelease @ 0x1408D3FB0 (PiDqQueryRelease.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D43AC (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D4AF0 (PiDqPnPGetObjectProperty.c)
 *     NtLoadEnclaveData @ 0x1408D9D70 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408DA8E0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408DABA0 (MiLoadDataIntoVsmEnclave.c)
 *     EtwTiLogProtectExecVm @ 0x1408DD430 (EtwTiLogProtectExecVm.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x1408E4628 (MmLinkJobProcess.c)
 *     MiRemoveSharedCommitNode @ 0x1408E5960 (MiRemoveSharedCommitNode.c)
 *     PspEstablishJobHierarchy @ 0x1408E62CC (PspEstablishJobHierarchy.c)
 *     PerfLogImageUnload @ 0x1408E6808 (PerfLogImageUnload.c)
 *     PspJobClose @ 0x1408E9460 (PspJobClose.c)
 *     PspQueryRateControlHistory @ 0x1408EC2DC (PspQueryRateControlHistory.c)
 *     ExProcessCounterSetCallback @ 0x1408EDBC0 (ExProcessCounterSetCallback.c)
 *     EtwpLogMemInfoWs @ 0x1408EE804 (EtwpLogMemInfoWs.c)
 *     EtwpPerfMemInfoWork @ 0x1408EF350 (EtwpPerfMemInfoWork.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408F03C0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408F07FC (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1408F0A50 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408F1214 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408F1920 (SepAdtStagingEvent.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1408F1C3C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x1408F23FC (SepQueryTypeString.c)
 *     SepSetTokenCachedHandles @ 0x1408F2494 (SepSetTokenCachedHandles.c)
 *     SepGetCachedHandlesEntry @ 0x1408F26B8 (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1408F2790 (SepValidateReferencedCachedHandles.c)
 *     SepQueryNameString @ 0x1408F2B48 (SepQueryNameString.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1408F2FA8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     RtlCreateRvaList @ 0x1408F3740 (RtlCreateRvaList.c)
 *     MiFreeImageRetpolineContext @ 0x1408F4A28 (MiFreeImageRetpolineContext.c)
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     MiFreeRelocations @ 0x1408F7358 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x1408F7410 (MiFreeImageLoadConfig.c)
 *     MiFreeRetpolineRelocationInformation @ 0x1408F7460 (MiFreeRetpolineRelocationInformation.c)
 *     MiCompressRelocations @ 0x1408F7520 (MiCompressRelocations.c)
 *     MiCreatePlaceholderStorage @ 0x1408F8210 (MiCreatePlaceholderStorage.c)
 *     MiAllocateVad @ 0x1408F82D8 (MiAllocateVad.c)
 *     MiReturnProcessVads @ 0x1408F842C (MiReturnProcessVads.c)
 *     MiCopyToCfgBitMap @ 0x1408FA0F0 (MiCopyToCfgBitMap.c)
 *     sub_1408FB650 @ 0x1408FB650 (sub_1408FB650.c)
 *     sub_1408FC220 @ 0x1408FC220 (sub_1408FC220.c)
 *     EtwpCovSampContextAddSamples @ 0x140900C90 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampContextGetModule @ 0x140901050 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampProcessEnsureContext @ 0x140901F18 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampProcessAddModule @ 0x140901FBC (EtwpCovSampProcessAddModule.c)
 *     EtwpCovSampProcessCleanup @ 0x140902250 (EtwpCovSampProcessCleanup.c)
 *     TtmInitCurrentSession @ 0x140903118 (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x140903408 (TtmDispatchApi.c)
 *     EtwpCoverageEnsureContext @ 0x140903F90 (EtwpCoverageEnsureContext.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1409050B0 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotUpdate @ 0x140905308 (PopEtProcessSnapshotUpdate.c)
 *     PopEtInternerFree @ 0x140905D70 (PopEtInternerFree.c)
 *     PopEtAggregateGet @ 0x140905DBC (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x140906398 (PopEtProcessSnapshotCreate.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140908E70 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140909B74 (PiDqGetRelativeObjectRegPath.c)
 *     PiDqOpenUserObjectRegKey @ 0x14090A064 (PiDqOpenUserObjectRegKey.c)
 *     PnpConcatPWSTR @ 0x14090A620 (PnpConcatPWSTR.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14090B474 (CmpVEExecuteRealStoreParseLogic.c)
 *     ObpParseSymbolicLinkEx @ 0x14090BD40 (ObpParseSymbolicLinkEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14090F590 (SepAppendAceToTokenObjectAcl.c)
 *     SeCopyClientToken @ 0x14090FF48 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     SeTokenCanImpersonate @ 0x140910A30 (SeTokenCanImpersonate.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140913E28 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     RtlpNewSecurityObject @ 0x14091A290 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x14091C480 (RtlpCombineAcls.c)
 *     SeCaptureSecurityDescriptor @ 0x14091CE60 (SeCaptureSecurityDescriptor.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x14091F8F0 (SepProbeAndCaptureString_U.c)
 *     SepExamineSaclEx @ 0x14091FD68 (SepExamineSaclEx.c)
 *     NtOpenObjectAuditAlarm @ 0x140920280 (NtOpenObjectAuditAlarm.c)
 *     SeReleaseSecurityDescriptor @ 0x1409209D0 (SeReleaseSecurityDescriptor.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140920A00 (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140920CD0 (NtPrivilegeObjectAuditAlarm.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140923A70 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092430C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140925270 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1409254F0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140925AF8 (DrvDbLoadDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409261A4 (_RegRtlCreateTreeTransacted.c)
 *     VrpPreOpenOrCreate @ 0x1409271B4 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x1409276F0 (VrpTranslatePath.c)
 *     VrpPostQueryKey @ 0x140927F20 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x1409284D8 (VrpPostEnumerateKey.c)
 *     VrpDestroyNamespaceNode @ 0x140929080 (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x1409291E0 (VrpDestroyNamespaceNodeList.c)
 *     VrpCreateNamespaceNode @ 0x140929B68 (VrpCreateNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x14092A0C4 (VrpAddNamespaceNodeToList.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14092A8CC (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpCleanupNamespace @ 0x14092AAD8 (VrpCleanupNamespace.c)
 *     ExWnfHiveUnloaded @ 0x14092AFD0 (ExWnfHiveUnloaded.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     CmpNameFromAttributes @ 0x14092D668 (CmpNameFromAttributes.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpLogHiveFileInaccessible @ 0x1409305F4 (CmpLogHiveFileInaccessible.c)
 *     CmpClearKeyAccessBits @ 0x1409312E0 (CmpClearKeyAccessBits.c)
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 *     PfpPfnPrioRequest @ 0x1409334C4 (PfpPfnPrioRequest.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1409336C0 (PfpCopyUserPfnPrioRequest.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140936340 (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x140936364 (SeReleaseAcl.c)
 *     SepSetTokenCapabilities @ 0x140936380 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x140936544 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140936600 (SeCaptureSidAndAttributesArray.c)
 *     NtCreateTokenEx @ 0x140936AB0 (NtCreateTokenEx.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     NtAdjustPrivilegesToken @ 0x1409377D0 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x140937BF0 (NtPrivilegeCheck.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140937E28 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x1409383C4 (SepAdtTokenRightAdjusted.c)
 *     DbgkpQueueMessage @ 0x140939080 (DbgkpQueueMessage.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409393D4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PfProcessExitNotification @ 0x1409398E0 (PfProcessExitNotification.c)
 *     ExpAllocateHandleTable @ 0x14093BFFC (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x14093C154 (ExpAllocateTablePagedPoolNoZero.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x14093F21C (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCaptureMessageData @ 0x14093FCA0 (AlpcpCaptureMessageData.c)
 *     AlpcpAllocateMessageFunction @ 0x14093FEE0 (AlpcpAllocateMessageFunction.c)
 *     AlpcAddHandleTableEntry @ 0x1409408A0 (AlpcAddHandleTableEntry.c)
 *     ObpCallPostOperationCallbacks @ 0x140940A78 (ObpCallPostOperationCallbacks.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     MiCreateDataFileMap @ 0x140943D3C (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x1409451C0 (MiBuildImageControlArea.c)
 *     MiCreateMdl @ 0x140945DF8 (MiCreateMdl.c)
 *     MiDeleteImageCreationMdls @ 0x140945F4C (MiDeleteImageCreationMdls.c)
 *     MiExtendSection @ 0x1409463BC (MiExtendSection.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     EtwpTraceProcessRundown @ 0x14094B0B8 (EtwpTraceProcessRundown.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x14094BCC0 (EtwpQueryProcessCommandLine.c)
 *     EtwTraceAppStateChange @ 0x14094C00C (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x14094CC44 (EtwTraceProcess.c)
 *     EtwpPsProvTraceProcess @ 0x14094D000 (EtwpPsProvTraceProcess.c)
 *     PfTCreateTraceDump @ 0x14094EC80 (PfTCreateTraceDump.c)
 *     PfpRpCHashAddEntries @ 0x140950428 (PfpRpCHashAddEntries.c)
 *     PfpVolumeOpenAndVerify @ 0x140950C88 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchRequest @ 0x140951060 (PfpPrefetchRequest.c)
 *     PfpPrefetchRequestPerform @ 0x140951A08 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchVolumesCleanup @ 0x140951E90 (PfpPrefetchVolumesCleanup.c)
 *     PfSnAsyncPrefetchWorker @ 0x140951F40 (PfSnAsyncPrefetchWorker.c)
 *     PfSnAsyncContextCleanup @ 0x1409522D4 (PfSnAsyncContextCleanup.c)
 *     PfSnCleanupPrefetchHeader @ 0x140952328 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchSharedDeref @ 0x140952908 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchPrivatePages @ 0x14095328C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x1409537E8 (PfpPrefetchFiles.c)
 *     PfpFileBuildReadSupport @ 0x140953F94 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140954370 (PfpReadSupportCleanup.c)
 *     MmPrefetchPagesEx @ 0x140955430 (MmPrefetchPagesEx.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiReleaseReadListResources @ 0x140956000 (MiReleaseReadListResources.c)
 *     MmPrefetchForCacheManager @ 0x1409561A4 (MmPrefetchForCacheManager.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 *     MiPrefetchControlArea @ 0x1409572D4 (MiPrefetchControlArea.c)
 *     MiValidateImagePfn @ 0x140957464 (MiValidateImagePfn.c)
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 *     ExpStringCapture @ 0x14095B244 (ExpStringCapture.c)
 *     ExpGetDeviceDataInformation @ 0x14095B9D4 (ExpGetDeviceDataInformation.c)
 *     AslFree @ 0x14095CD24 (AslFree.c)
 *     EtwpCoverageSamplerQuery @ 0x14095DA30 (EtwpCoverageSamplerQuery.c)
 *     PfProcessCreateNotification @ 0x140960888 (PfProcessCreateNotification.c)
 *     PfSnBeginAppLaunch @ 0x140960934 (PfSnBeginAppLaunch.c)
 *     PfSnBeginScenario @ 0x140960CB0 (PfSnBeginScenario.c)
 *     PfCalculateProcessHash @ 0x140962000 (PfCalculateProcessHash.c)
 *     PfSnBeginTrace @ 0x140962AD8 (PfSnBeginTrace.c)
 *     PfSnPrefetchScenario @ 0x140962D70 (PfSnPrefetchScenario.c)
 *     PfSnOperationProcess @ 0x140963294 (PfSnOperationProcess.c)
 *     PiCMOpenDeviceKey @ 0x1409638F0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x140963AF8 (PiCMOpenObjectKey.c)
 *     PiCMCaptureRegistryInputData @ 0x140963DF8 (PiCMCaptureRegistryInputData.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140964604 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgFreeResolveContext @ 0x14096485C (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgFreeVariable @ 0x1409648DC (PiDevCfgFreeVariable.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140964AB8 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140964C64 (PiDevCfgVerifyDeviceAllowed.c)
 *     NtSetBootEntryOrder @ 0x140964DF0 (NtSetBootEntryOrder.c)
 *     NtTranslateFilePath @ 0x140964F50 (NtTranslateFilePath.c)
 *     NtEnumerateBootEntries @ 0x140965240 (NtEnumerateBootEntries.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1409666C0 (ExGetFirmwareEnvironmentVariable.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1409667C0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExLockUserBuffer @ 0x140966B28 (ExLockUserBuffer.c)
 *     IopOpenSystemVariableDevice @ 0x140967120 (IopOpenSystemVariableDevice.c)
 *     IoVolumeDeviceToGuid @ 0x1409672A0 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1409674D0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoQueryFileDosDeviceName @ 0x140967F00 (IoQueryFileDosDeviceName.c)
 *     IoVolumeDeviceToDosName @ 0x140967FB0 (IoVolumeDeviceToDosName.c)
 *     IopQueryNameInternal @ 0x140968330 (IopQueryNameInternal.c)
 *     EtwpEnumerateAddressSpace @ 0x1409690F0 (EtwpEnumerateAddressSpace.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14096A900 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x14096A9C0 (PfSnPopulateReadList.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14096BF6C (PfSnOpenVolumesForPrefetch.c)
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 *     IopFlushBuffersFile @ 0x14096E4A4 (IopFlushBuffersFile.c)
 *     NtQueryEaFile @ 0x14096E890 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x14096EFA0 (NtQueryVolumeInformationFile.c)
 *     IopSynchronousApiServiceTail @ 0x14096F574 (IopSynchronousApiServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140970628 (IopExceptionCleanupEx.c)
 *     IoQueryInformationByName @ 0x1409708A0 (IoQueryInformationByName.c)
 *     PfSnGetPrefetchInstructions @ 0x140970C24 (PfSnGetPrefetchInstructions.c)
 *     PfSnEndTrace @ 0x140971A58 (PfSnEndTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x140971DD0 (PfSnBuildDumpFromTrace.c)
 *     PfSnCleanupTrace @ 0x14097212C (PfSnCleanupTrace.c)
 *     NtUnlockFile @ 0x140972480 (NtUnlockFile.c)
 *     sub_140972980 @ 0x140972980 (sub_140972980.c)
 *     ntoskrnl_20 @ 0x140972DB0 (ntoskrnl_20.c)
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 *     SPCallServerHandleQueryPolicy @ 0x140976EFC (SPCallServerHandleQueryPolicy.c)
 *     NtQueryLicenseValue @ 0x140977CA0 (NtQueryLicenseValue.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     HvFreeDirtyData @ 0x14097C440 (HvFreeDirtyData.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x14097CDF0 (CmpSignalUnloadEventArrayForHive.c)
 *     HvStoreModifiedData @ 0x14097E3EC (HvStoreModifiedData.c)
 *     HvFreeUnreconciledData @ 0x14097EB5C (HvFreeUnreconciledData.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14097EC8C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     HvpGenerateLogEntry @ 0x14097EF08 (HvpGenerateLogEntry.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1409802F0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x140982C34 (HvWriteHivePrimaryFile.c)
 *     HvpMapHiveImageFromFile @ 0x140983694 (HvpMapHiveImageFromFile.c)
 *     CmpQueryNameString @ 0x1409839B4 (CmpQueryNameString.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140985A6C (PopFxLogSocSubsystemMetadata.c)
 *     MmQueryBadAddresses @ 0x1409876D4 (MmQueryBadAddresses.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140987B34 (MiQueryMemoryPhysicalContiguity.c)
 *     FsRtlIsDbcsInExpression @ 0x1409892A0 (FsRtlIsDbcsInExpression.c)
 *     CmpRegisterCallbackInternal @ 0x140989A9C (CmpRegisterCallbackInternal.c)
 *     AlpcpFreeMessageFunction @ 0x140989F90 (AlpcpFreeMessageFunction.c)
 *     ObCreateObject @ 0x14098A240 (ObCreateObject.c)
 *     NtRemoveIoCompletionEx @ 0x14098B530 (NtRemoveIoCompletionEx.c)
 *     EtwpRegTraceCallback @ 0x14098BEA0 (EtwpRegTraceCallback.c)
 *     EtwpCapturePreviousRegistryData @ 0x14098C820 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x14098C930 (EtwpCaptureRegistryData.c)
 *     PspAddSchedulingGroupToJobChain @ 0x14098CBAC (PspAddSchedulingGroupToJobChain.c)
 *     PspFreeRateControl @ 0x14098CF0C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14098CF58 (PspAllocateRateControl.c)
 *     RtlpAllocateAtom @ 0x14098D004 (RtlpAllocateAtom.c)
 *     PnpFilterResourceRequirementsList @ 0x14098D2D0 (PnpFilterResourceRequirementsList.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14098DBA0 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x14098DD70 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x14098DEA4 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14098E280 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x14098E5B0 (PiQueryResourceRequirements.c)
 *     PnpProcessAssignResources @ 0x14098E760 (PnpProcessAssignResources.c)
 *     _CmUpdateDevicePanelInterface @ 0x14098EC58 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x14098EE00 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x14098F8FC (_CmQueryDevicePanelPldProperty.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     _RegRtlDeleteTreeInternal @ 0x140991230 (_RegRtlDeleteTreeInternal.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x140991658 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiCMEnumerateSubKeys @ 0x14099245C (PiCMEnumerateSubKeys.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140992760 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlEnumKey @ 0x140992974 (_RegRtlEnumKey.c)
 *     _RegRtlEnumValue @ 0x1409935EC (_RegRtlEnumValue.c)
 *     _PnpOpenPropertiesKey @ 0x1409937F0 (_PnpOpenPropertiesKey.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140993BAC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1409946EC (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140994B48 (PipGetRegistrySecurityWithFallback.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140994DB8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x140995028 (PiDqPnPGetObjectPropertyLocales.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140995624 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PiDevCfgFindDeviceDriver @ 0x140995E90 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverNode @ 0x140996564 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409978B4 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x14099A6AC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x14099AE24 (PiDevCfgCopyObjectProperties.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x14099B528 (PiCMReleaseRegistryPropertyInputData.c)
 *     IoQueryDeviceDescription @ 0x14099B730 (IoQueryDeviceDescription.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14099B878 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x14099BA04 (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryBusDescription @ 0x14099C1E4 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x14099C54C (IopGetRegistryKeyInformation.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14099C6D0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14099CA94 (PiDevCfgResolveMultiSzValue.c)
 *     IopGraftName @ 0x14099D348 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x14099D708 (IopSymlinkRememberJunction.c)
 *     IopCopyOverNewPathSecure @ 0x14099D844 (IopCopyOverNewPathSecure.c)
 *     IopSymlinkApplyToOpenedName @ 0x14099D944 (IopSymlinkApplyToOpenedName.c)
 *     IopSymlinkUpdateECP @ 0x14099DACC (IopSymlinkUpdateECP.c)
 *     IopReplaceSymlinkPath @ 0x14099E1C0 (IopReplaceSymlinkPath.c)
 *     SeCaptureAcl @ 0x14099EADC (SeCaptureAcl.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409A0064 (CmpSetSecurityDescriptorInfo.c)
 *     IopUpdateSecureDeviceClassState @ 0x1409A1648 (IopUpdateSecureDeviceClassState.c)
 *     IopCreateSecureDeviceClassSettings @ 0x1409A1A38 (IopCreateSecureDeviceClassSettings.c)
 *     IoCreateDeviceSecure @ 0x1409A1B40 (IoCreateDeviceSecure.c)
 *     CmpCheckExeOwnerForPca @ 0x1409A1D9C (CmpCheckExeOwnerForPca.c)
 *     AstLogDeviceSDDLUpdated @ 0x1409A1FE8 (AstLogDeviceSDDLUpdated.c)
 *     IoCreateDevice @ 0x1409A3530 (IoCreateDevice.c)
 *     AstLogDeviceCreated @ 0x1409A3E34 (AstLogDeviceCreated.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1409A4220 (ExAllocateCacheAwareRundownProtection.c)
 *     RawCleanupVcb @ 0x1409A46D4 (RawCleanupVcb.c)
 *     WmipSecurityMethod @ 0x1409A6000 (WmipSecurityMethod.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1409A6120 (ObAssignObjectSecurityDescriptor.c)
 *     CcUnpinData @ 0x1409A6A30 (CcUnpinData.c)
 *     NtCreateWorkerFactory @ 0x1409A6CF0 (NtCreateWorkerFactory.c)
 *     IopFreeMiniCompletionPacket @ 0x1409A71B0 (IopFreeMiniCompletionPacket.c)
 *     CmpCheckAdminAccess @ 0x1409A7658 (CmpCheckAdminAccess.c)
 *     CmpBuildAdminInformation @ 0x1409A773C (CmpBuildAdminInformation.c)
 *     EtwTiLogReadWriteVm @ 0x1409A99F8 (EtwTiLogReadWriteVm.c)
 *     MiCopyVirtualMemory @ 0x1409A9D80 (MiCopyVirtualMemory.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409AB3F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     MiReleaseVadEventBlocks @ 0x1409B0550 (MiReleaseVadEventBlocks.c)
 *     MiFreePlaceholderVadEvent @ 0x1409B073C (MiFreePlaceholderVadEvent.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B08F0 (AlpcMessageDestroyProcedure.c)
 *     ObpInsertHandleCount @ 0x1409B17B0 (ObpInsertHandleCount.c)
 *     NtSetTimerResolution @ 0x1409B1920 (NtSetTimerResolution.c)
 *     PoDiagCaptureUsermodeStack @ 0x1409B2070 (PoDiagCaptureUsermodeStack.c)
 *     ObGetObjectSecurity @ 0x1409B26F0 (ObGetObjectSecurity.c)
 *     _CmDeleteDeviceWorker @ 0x1409B2CB8 (_CmDeleteDeviceWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B355C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetDeviceSiblings @ 0x1409B3E64 (_CmGetDeviceSiblings.c)
 *     _PnpMultiSzDeleteString @ 0x1409B43BC (_PnpMultiSzDeleteString.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409B5B50 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1409B6F24 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     IoGetLegacyVetoList @ 0x1409B9120 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x1409B923C (PopFilterCapabilities.c)
 *     PopLogDisabledSleepReason @ 0x1409B9550 (PopLogDisabledSleepReason.c)
 *     IopGetLegacyVetoListDrivers @ 0x1409B9634 (IopGetLegacyVetoListDrivers.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1409B9950 (PopRemoveReasonRecordByReasonCode.c)
 *     PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1409BC3C4 (PopResetIdlePhaseWatchdogDiagnosticContext.c)
 *     PopSetPowerSettingValue @ 0x1409BC864 (PopSetPowerSettingValue.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x1409BD01C (PopDiagTraceWin32kCalloutStart.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1409BDB60 (PopDispatchPowerSettingCallbacks.c)
 *     PopUnreferencePowerSetting @ 0x1409BDE74 (PopUnreferencePowerSetting.c)
 *     BcdGetElementDataWithFlags @ 0x1409BE80C (BcdGetElementDataWithFlags.c)
 *     BiGetObjectIdentifier @ 0x1409BEAC8 (BiGetObjectIdentifier.c)
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BiGetKeyName @ 0x1409BEDA8 (BiGetKeyName.c)
 *     BiBuildIdentifierList @ 0x1409BEF7C (BiBuildIdentifierList.c)
 *     BiConvertRegistryDataToElement @ 0x1409BF658 (BiConvertRegistryDataToElement.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409BFAAC (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetElement @ 0x1409BFBB8 (BiGetElement.c)
 *     BiDeleteKey @ 0x1409BFC74 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x1409BFD40 (BiEnumerateSubKeys.c)
 *     BiConvertElementToRegistryData @ 0x1409C00C4 (BiConvertElementToRegistryData.c)
 *     BiBindEfiBootManager @ 0x1409C0574 (BiBindEfiBootManager.c)
 *     BiQueryBootEntryOrder @ 0x1409C0848 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1409C0924 (BiQueryBootOptions.c)
 *     BiGetDeviceFromEfiPath @ 0x1409C09F4 (BiGetDeviceFromEfiPath.c)
 *     BiTranslateFilePath @ 0x1409C0B6C (BiTranslateFilePath.c)
 *     BiEnumerateBootEntries @ 0x1409C0EC8 (BiEnumerateBootEntries.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 *     BiUpdateEfiEntry @ 0x1409C14D0 (BiUpdateEfiEntry.c)
 *     BiCreateMergedBootEntry @ 0x1409C168C (BiCreateMergedBootEntry.c)
 *     BiIsWinPEBoot @ 0x1409C1B7C (BiIsWinPEBoot.c)
 *     BiFreeIdentifierList @ 0x1409C1C00 (BiFreeIdentifierList.c)
 *     RtlAcquirePrivilege @ 0x1409C1C84 (RtlAcquirePrivilege.c)
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409C3660 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateVadEventBitmap @ 0x1409C3A04 (MiCreateVadEventBitmap.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     PnpGetDeviceLocationStrings @ 0x1409C470C (PnpGetDeviceLocationStrings.c)
 *     PiUpdateDriverDBCache @ 0x1409C5084 (PiUpdateDriverDBCache.c)
 *     IopQueryLegacyBusInformation @ 0x1409C53AC (IopQueryLegacyBusInformation.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1409C5A04 (PnpCallDriverQueryServiceHelper.c)
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 *     PnpDelayedRemoveWorker @ 0x1409C6B60 (PnpDelayedRemoveWorker.c)
 *     PipRemoveDevicesInRelationList @ 0x1409C6D70 (PipRemoveDevicesInRelationList.c)
 *     PnpAllocateAndEnableEventWatchdog @ 0x1409C7328 (PnpAllocateAndEnableEventWatchdog.c)
 *     PnpQueryDeviceText @ 0x1409C75AC (PnpQueryDeviceText.c)
 *     IopLoadUnloadDriver @ 0x1409C7700 (IopLoadUnloadDriver.c)
 *     PnpPrepareDriverLoading @ 0x1409C7848 (PnpPrepareDriverLoading.c)
 *     PpCheckInDriverDatabase @ 0x1409C7E2C (PpCheckInDriverDatabase.c)
 *     PiNormalizeDeviceText @ 0x1409C8004 (PiNormalizeDeviceText.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409C8568 (IopQueryRegistryKeySystemPath.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     IopBuildFullDriverPath @ 0x1409C8E18 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     PiFindDevInstMatch @ 0x1409C9A9C (PiFindDevInstMatch.c)
 *     WmipDereferenceEvent @ 0x1409C9CE0 (WmipDereferenceEvent.c)
 *     PiProcessDriverInstance @ 0x1409C9F40 (PiProcessDriverInstance.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1409CA218 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409CA314 (IopGetDriverNameFromKeyNode.c)
 *     WmipSendGuidUpdateNotifications @ 0x1409CA5B4 (WmipSendGuidUpdateNotifications.c)
 *     PiGetServiceNameInfo @ 0x1409CA714 (PiGetServiceNameInfo.c)
 *     IoOpenDriverRegistryKey @ 0x1409CA820 (IoOpenDriverRegistryKey.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     PiCreateServiceStateKey @ 0x1409CB050 (PiCreateServiceStateKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1409CB1EC (PiCreateDriverRedirectedStateKey.c)
 *     PiGetStateRootPath @ 0x1409CB310 (PiGetStateRootPath.c)
 *     WmipGenerateRegistrationNotification @ 0x1409CB3C4 (WmipGenerateRegistrationNotification.c)
 *     WmipEventNotification @ 0x1409CB790 (WmipEventNotification.c)
 *     WmipProcessEvent @ 0x1409CB800 (WmipProcessEvent.c)
 *     IoWMIQuerySingleInstance @ 0x1409CBB30 (IoWMIQuerySingleInstance.c)
 *     WmipCreateGuidObject @ 0x1409CBCD8 (WmipCreateGuidObject.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1409CBEF4 (WmipGetGuidSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x1409CC0E0 (RtlGetPersistedStateLocation.c)
 *     RtlpQueryRegistryValues @ 0x1409CC350 (RtlpQueryRegistryValues.c)
 *     WmipQueryAllDataMultiple @ 0x1409CD5A4 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySetExecuteSI @ 0x1409CDA80 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1409CDD78 (WmipQueryAllData.c)
 *     WmipPrepareWnodeSI @ 0x1409CEBB0 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1409CEEB8 (WmipPrepareForWnodeAD.c)
 *     WmipAddProviderIdToPIList @ 0x1409CF0AC (WmipAddProviderIdToPIList.c)
 *     WmipDSCleanup @ 0x1409CF8B0 (WmipDSCleanup.c)
 *     WmipDeleteMethod @ 0x1409CFC00 (WmipDeleteMethod.c)
 *     WmipAddDataSource @ 0x1409CFD60 (WmipAddDataSource.c)
 *     WmipBuildInstanceSet @ 0x1409D00F4 (WmipBuildInstanceSet.c)
 *     WmipRegisterOrUpdateDS @ 0x1409D06C8 (WmipRegisterOrUpdateDS.c)
 *     WmipAllocGuidEntry @ 0x1409D0E2C (WmipAllocGuidEntry.c)
 *     WmipLegacyEtwWorker @ 0x1409D0ED0 (WmipLegacyEtwWorker.c)
 *     WmipRegistrationWorker @ 0x1409D10C0 (WmipRegistrationWorker.c)
 *     WmipSendEnableDisableRequest @ 0x1409D12AC (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x1409D1534 (WmipUpdateDataSource.c)
 *     ObReleaseObjectSecurity @ 0x1409D22E0 (ObReleaseObjectSecurity.c)
 *     SeAppendPrivileges @ 0x1409D2470 (SeAppendPrivileges.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 *     ExpWnfSubscribeNameInstance @ 0x1409D34B4 (ExpWnfSubscribeNameInstance.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1409D4550 (PiPnpRtlGetFilteredDeviceList.c)
 *     PspDereferenceQuotaBlock @ 0x1409D59C0 (PspDereferenceQuotaBlock.c)
 *     ObRegisterCallbacks @ 0x1409D5C70 (ObRegisterCallbacks.c)
 *     ObGetObjectInformation @ 0x1409D5F50 (ObGetObjectInformation.c)
 *     ObpDestroyTypeArray @ 0x1409D65D4 (ObpDestroyTypeArray.c)
 *     CmpFreeKeyControlBlock @ 0x1409D6920 (CmpFreeKeyControlBlock.c)
 *     _RegRtlQueryValue @ 0x1409D73A0 (_RegRtlQueryValue.c)
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1409D7BCC (EtwpFreeTraceBufferPool.c)
 *     EtwpFreeSoftRestartContext @ 0x1409D7ED4 (EtwpFreeSoftRestartContext.c)
 *     IopThreadStart @ 0x1409D7FA0 (IopThreadStart.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1409D871C (EtwpRealtimeNotifyConsumers.c)
 *     EtwpRealtimeCreateLogfile @ 0x1409D8F3C (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1409D976C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpUpdateFileHeader @ 0x1409DAB48 (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x1409DB6A0 (EtwpDelayCreate.c)
 *     EtwpCreateNtFileName @ 0x1409DB87C (EtwpCreateNtFileName.c)
 *     EtwpFinalizeHeader @ 0x1409DBD1C (EtwpFinalizeHeader.c)
 *     PspCaptureUserProcessParameters @ 0x1409DEA90 (PspCaptureUserProcessParameters.c)
 *     SepSetTokenTrust @ 0x1409DF8F0 (SepSetTokenTrust.c)
 *     sub_1409E1AC8 @ 0x1409E1AC8 (sub_1409E1AC8.c)
 *     PspLazyInitializeStorageExpansion @ 0x1409E2664 (PspLazyInitializeStorageExpansion.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409E2728 (IopCleanupFileObjectIosbRange.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409E45C0 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteDirectoryName @ 0x1409E4BA0 (ObpDeleteDirectoryName.c)
 *     ExpFreeHandleTable @ 0x1409E5244 (ExpFreeHandleTable.c)
 *     DbgkpFreeDebugEvent @ 0x1409E8E38 (DbgkpFreeDebugEvent.c)
 *     NtSetInformationVirtualMemory @ 0x1409E8FB0 (NtSetInformationVirtualMemory.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x1409EB0E0 (RtlCreateFunctionOverrideFixupInfo.c)
 *     ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x1409EB484 (-RtlpCreateFunctionOverrideFixupInfo@@YAJV-$span@$$CBE$0-0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAP.c)
 *     IopQueryDeviceHardwareIdForPdcTask @ 0x1409ED7C0 (IopQueryDeviceHardwareIdForPdcTask.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 *     IopProcessInvalidateBusRelationsRequest @ 0x1409EDC68 (IopProcessInvalidateBusRelationsRequest.c)
 *     Pdcv2ActivationClientActivate @ 0x1409EDF3C (Pdcv2ActivationClientActivate.c)
 *     PnpProcessDeferredRegistrations @ 0x1409EE8CC (PnpProcessDeferredRegistrations.c)
 *     PnpDereferenceNotify @ 0x1409EED14 (PnpDereferenceNotify.c)
 *     PiUEventCacheObjectProperties @ 0x1409EF508 (PiUEventCacheObjectProperties.c)
 *     PnpDeleteDeviceActionRequest @ 0x1409EF704 (PnpDeleteDeviceActionRequest.c)
 *     Pdcv2ActivationClientDeactivate @ 0x1409EF760 (Pdcv2ActivationClientDeactivate.c)
 *     PnpCompleteDeviceEvent @ 0x1409EF9F0 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x1409EFB60 (PnpDeviceEventWorker.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1409EFED0 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x1409EFF6C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpDisableWatchdog @ 0x1409EFFB0 (PnpDisableWatchdog.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x1409F0188 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F24E8 (MiCombineAllPhysicalMemory.c)
 *     MiProcessCrcList @ 0x1409F2910 (MiProcessCrcList.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1409F3020 (RtlQueryRegistryValueWithFallback.c)
 *     EtwpAllocateEventNameFilter @ 0x1409F3638 (EtwpAllocateEventNameFilter.c)
 *     EtwpUpdateGuidFilterData @ 0x1409F3CA8 (EtwpUpdateGuidFilterData.c)
 *     EtwpFreeEventNameFilter @ 0x1409F4130 (EtwpFreeEventNameFilter.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1409F491C (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409F5D48 (EtwpUpdateDisallowedGuids.c)
 *     EtwpReleaseQueueEntry @ 0x1409F6E4C (EtwpReleaseQueueEntry.c)
 *     VrpFreeKeyContext @ 0x1409F6FD8 (VrpFreeKeyContext.c)
 *     VrpDecommissionKeyContext @ 0x1409F7010 (VrpDecommissionKeyContext.c)
 *     PiCMReleasePropertyInputData @ 0x1409F78F0 (PiCMReleasePropertyInputData.c)
 *     PiSwDeviceFree @ 0x1409F819C (PiSwDeviceFree.c)
 *     PiSwPnPInfoFree @ 0x1409F8258 (PiSwPnPInfoFree.c)
 *     PiSwIrpStartCreate @ 0x1409F8394 (PiSwIrpStartCreate.c)
 *     PiSwCompleteCreate @ 0x1409F8538 (PiSwCompleteCreate.c)
 *     PiSwInterfaceFree @ 0x1409F8A14 (PiSwInterfaceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PiDqTraceQueryCreate @ 0x1409F9FD4 (PiDqTraceQueryCreate.c)
 *     PnpCopyDevPropertyArray @ 0x1409FA240 (PnpCopyDevPropertyArray.c)
 *     PnpFreeDevProperty @ 0x1409FA3E4 (PnpFreeDevProperty.c)
 *     PiSwInstanceInfoFree @ 0x1409FA424 (PiSwInstanceInfoFree.c)
 *     PiSwBusRelationAdd @ 0x1409FA468 (PiSwBusRelationAdd.c)
 *     PiDqIrpPropertySet @ 0x1409FA620 (PiDqIrpPropertySet.c)
 *     PiSwBusRelationRemove @ 0x1409FA96C (PiSwBusRelationRemove.c)
 *     PiSwProcessRemove @ 0x1409FB008 (PiSwProcessRemove.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1409FB394 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceDereference @ 0x1409FB4F8 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1409FB784 (PiSwQueuedCreateInfoFree.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1409FBC80 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpTiQueryVad @ 0x1409FBD80 (EtwpTiQueryVad.c)
 *     EtwpTiFreeVad @ 0x1409FBEE4 (EtwpTiFreeVad.c)
 *     sub_1409FBFF8 @ 0x1409FBFF8 (sub_1409FBFF8.c)
 *     sub_1409FC424 @ 0x1409FC424 (sub_1409FC424.c)
 *     sub_1409FCADC @ 0x1409FCADC (sub_1409FCADC.c)
 *     FsRtlTeardownPerFileContexts @ 0x1409FD780 (FsRtlTeardownPerFileContexts.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409FD9D0 (PiPnpRtlServiceFilterCallback.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409FE37C (VrpHandleIoctlInitializeJobForVreg.c)
 *     PiCMGetDeviceInterfaceList @ 0x1409FE7EC (PiCMGetDeviceInterfaceList.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409FEC68 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1409FF118 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     VrpFreeCallbackContext @ 0x1409FF6D0 (VrpFreeCallbackContext.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409FF930 (DrvDbGetObjectSubKeyCallback.c)
 *     EtwUnregister @ 0x140A00060 (EtwUnregister.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140A00320 (EtwpReleaseProviderTraitsReference.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A007F0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A011F0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A01520 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A01C00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x140A01F30 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140A01FF8 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A021B0 (FsRtlNotifyCompleteIrp.c)
 *     ExGetPoolTagInfo @ 0x140A03AF8 (ExGetPoolTagInfo.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A03E50 (ExDereferenceHandleDebugInfo.c)
 *     sub_140A03EB0 @ 0x140A03EB0 (sub_140A03EB0.c)
 *     CmpCleanupTransactionState @ 0x140A05204 (CmpCleanupTransactionState.c)
 *     CmAddLogForAction @ 0x140A05328 (CmAddLogForAction.c)
 *     CmpComputeLogFillLevel @ 0x140A05A68 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x140A05BE0 (CmpDoTransWriteLogRecord.c)
 *     CmpLogCheckpoint @ 0x140A05DB4 (CmpLogCheckpoint.c)
 *     MmInSwapVirtualAddresses @ 0x140A06C50 (MmInSwapVirtualAddresses.c)
 *     PfSnArrayGrow @ 0x140A07A28 (PfSnArrayGrow.c)
 *     AdtpBuildMessageString @ 0x140A08B04 (AdtpBuildMessageString.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A08D24 (SepDereferenceCachedHandlesEntryInternal.c)
 *     NtCreatePrivateNamespace @ 0x140A09670 (NtCreatePrivateNamespace.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A09994 (ObpVerifyCreatorAccessCheck.c)
 *     NtOpenPrivateNamespace @ 0x140A09B40 (NtOpenPrivateNamespace.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A09D98 (ObpCaptureBoundaryDescriptor.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A0AA80 (AlpcpAllocateCompletionPacketLookaside.c)
 *     AlpcpInitializeCompletionList @ 0x140A0AC54 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140A0B28C (AlpcpFreeCompletionList.c)
 *     RtlpFlsDataCleanup @ 0x140A0B6C8 (RtlpFlsDataCleanup.c)
 *     RtlpFlsHeapFree @ 0x140A0B8EC (RtlpFlsHeapFree.c)
 *     PiDeferSetInterfaceState @ 0x140A0C5A8 (PiDeferSetInterfaceState.c)
 *     PnpProcessRelation @ 0x140A0C664 (PnpProcessRelation.c)
 *     PipFreeDeviceObjectList @ 0x140A0CAD8 (PipFreeDeviceObjectList.c)
 *     IopFreeRelationList @ 0x140A0CB00 (IopFreeRelationList.c)
 *     PiDeviceRegistration @ 0x140A0CBC4 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140A0CE90 (PpForEachDeviceInstanceDriver.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140A0D8E8 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventAllocateVetoBuffer @ 0x140A0E248 (PiEventAllocateVetoBuffer.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140A0E460 (PiProcessQueryAndCancelRemoval.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140A0E9B4 (PnpQueuePendingSurpriseRemoval.c)
 *     IopDeleteDevice @ 0x140A0F0B0 (IopDeleteDevice.c)
 *     IopDestroyDeviceNode @ 0x140A0F43C (IopDestroyDeviceNode.c)
 *     IopLegacyResourceAllocation @ 0x140A0FC24 (IopLegacyResourceAllocation.c)
 *     PiSwStopDestroy @ 0x140A102F4 (PiSwStopDestroy.c)
 *     IopUncacheInterfaceInformation @ 0x140A104B4 (IopUncacheInterfaceInformation.c)
 *     PnpFreeDeviceInstancePath @ 0x140A10994 (PnpFreeDeviceInstancePath.c)
 *     PnpDisableDeviceInterfaces @ 0x140A10ED8 (PnpDisableDeviceInterfaces.c)
 *     IopConnectLineBasedInterrupt @ 0x140A11790 (IopConnectLineBasedInterrupt.c)
 *     IoDisconnectInterruptEx @ 0x140A11A70 (IoDisconnectInterruptEx.c)
 *     IoConnectInterruptEx @ 0x140A11B20 (IoConnectInterruptEx.c)
 *     IopGetInterruptConnectionData @ 0x140A11E14 (IopGetInterruptConnectionData.c)
 *     IoDisconnectInterrupt @ 0x140A121C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A12470 (IopConnectInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x140A12B7C (IopConnectMessageBasedInterrupt.c)
 *     EtwpFreeSecurityDescriptor @ 0x140A12F00 (EtwpFreeSecurityDescriptor.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x140A13AFC (EtwpCovSampContextRemoveAndFreeModule.c)
 *     EtwpCovSampModuleCleanup @ 0x140A13BA8 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampEnumerateProcess @ 0x140A13C40 (EtwpCovSampEnumerateProcess.c)
 *     SepSetTokenPackage @ 0x140A141B0 (SepSetTokenPackage.c)
 *     NtCloseObjectAuditAlarm @ 0x140A152C0 (NtCloseObjectAuditAlarm.c)
 *     SeTokenIsElevated @ 0x140A15590 (SeTokenIsElevated.c)
 *     EtwpProcessThreadImageRundown @ 0x140A1632C (EtwpProcessThreadImageRundown.c)
 *     WmipFreeTraceDeviceList @ 0x140A16544 (WmipFreeTraceDeviceList.c)
 *     CmpDelayedDerefKeys @ 0x140A17C38 (CmpDelayedDerefKeys.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140A180B4 (MiSnapThunk.c)
 *     MiCompressImportList @ 0x140A183F4 (MiCompressImportList.c)
 *     MiObtainSectionForDriver @ 0x140A18544 (MiObtainSectionForDriver.c)
 *     MiCreateSectionForDriver @ 0x140A1882C (MiCreateSectionForDriver.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A1946C (ExpWnfSubscribeWnfStateChange.c)
 *     PiCMGetDeviceIdList @ 0x140A19E98 (PiCMGetDeviceIdList.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x140A1A630 (_CmGetMatchingFilteredDeviceListWorker.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     AlpcConnectionDestroyProcedure @ 0x140A1EAA0 (AlpcConnectionDestroyProcedure.c)
 *     WdtpAllocateTimer @ 0x140A20148 (WdtpAllocateTimer.c)
 *     CmpVEExecuteCreateLogic @ 0x140A203DC (CmpVEExecuteCreateLogic.c)
 *     AdtpBuildIPv4Strings @ 0x140A206AC (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140A20804 (AdtpBuildIPv6Strings.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A20DD0 (FsRtlpOplockFsctrlInternal.c)
 *     NtGetMUIRegistryInfo @ 0x140A215C0 (NtGetMUIRegistryInfo.c)
 *     MUIInitializeResourceLock @ 0x140A21948 (MUIInitializeResourceLock.c)
 *     IoCreateSystemThread @ 0x140A21B50 (IoCreateSystemThread.c)
 *     IopStartApcHardError @ 0x140A21C70 (IopStartApcHardError.c)
 *     ExpWorkQueueManagerThread @ 0x140A21D40 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionCreatePoolInternal @ 0x140A22748 (ExpPartitionCreatePoolInternal.c)
 *     PiDqSerializationAlloc @ 0x140A22840 (PiDqSerializationAlloc.c)
 *     SepCreateLogonSessionTrack @ 0x140A22BDC (SepCreateLogonSessionTrack.c)
 *     RtlQueryImageFileKeyOption @ 0x140A22FB0 (RtlQueryImageFileKeyOption.c)
 *     PopUmpoProcessMessages @ 0x140A23B90 (PopUmpoProcessMessages.c)
 *     MiInitializePartialVad @ 0x140A246FC (MiInitializePartialVad.c)
 *     SeReleaseSid @ 0x140A249A0 (SeReleaseSid.c)
 *     PopPowerRequestStatsFreeId @ 0x140A24BAC (PopPowerRequestStatsFreeId.c)
 *     SeDeassignSecurity @ 0x140A265C0 (SeDeassignSecurity.c)
 *     FsRtlpAllocateOplock @ 0x140A28938 (FsRtlpAllocateOplock.c)
 *     PfpRpCHashDeleteEntries @ 0x140A289F4 (PfpRpCHashDeleteEntries.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 *     RtlQueryModuleInformation @ 0x140A2BC00 (RtlQueryModuleInformation.c)
 *     PsDereferenceVsmEnclave @ 0x140A2C23C (PsDereferenceVsmEnclave.c)
 *     IopTrackLink @ 0x140A2C8D4 (IopTrackLink.c)
 *     SiGetSystemDisk @ 0x140A2D7C0 (SiGetSystemDisk.c)
 *     SiGetFirmwareSystemPartition @ 0x140A2D870 (SiGetFirmwareSystemPartition.c)
 *     SiIsWinPEBoot @ 0x140A2D950 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x140A2D9CC (SiGetBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x140A2DCB4 (SiTranslateSymbolicLink.c)
 *     SiGetRegistryValue @ 0x140A2DE5C (SiGetRegistryValue.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A2E074 (CmpUndoDeleteKeyForTrans.c)
 *     CmpLockIXLockIntent @ 0x140A2E5B4 (CmpLockIXLockIntent.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECC0 (MiRotateToFrameBufferNoCopy.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x140A2EEF0 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140A31E38 (RtlpProcessIFEOKeyFilter.c)
 *     PiQueryRemovableDeviceOverride @ 0x140A32AF8 (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x140A32D18 (PipFindDeviceOverrideEntry.c)
 *     SepAddLuidToIndexEntry @ 0x140A330CC (SepAddLuidToIndexEntry.c)
 *     sub_140A338CC @ 0x140A338CC (sub_140A338CC.c)
 *     PnpQueryDeviceID @ 0x140A33FB0 (PnpQueryDeviceID.c)
 *     PnpQueryID @ 0x140A34100 (PnpQueryID.c)
 *     PspInitializeFullProcessImageName @ 0x140A346EC (PspInitializeFullProcessImageName.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x140A34924 (EtwTimLogProhibitChildProcessCreation.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140A363D4 (RtlpFcNotifyFeatureUsageTarget.c)
 *     PopDiagTraceControlCallback @ 0x140A37E50 (PopDiagTraceControlCallback.c)
 *     PopDiagTracePowerRequestCreate @ 0x140A3808C (PopDiagTracePowerRequestCreate.c)
 *     PpmInstallPlatformIdleStates @ 0x140A39740 (PpmInstallPlatformIdleStates.c)
 *     MiFreeWorkingSetSwapContext @ 0x140A3D5EC (MiFreeWorkingSetSwapContext.c)
 *     ExpWnfDeleteStateData @ 0x140A3D76C (ExpWnfDeleteStateData.c)
 *     MiUnlockDriverPages @ 0x140A3E5CC (MiUnlockDriverPages.c)
 *     PiQueryDeviceRelations @ 0x140A3E9EC (PiQueryDeviceRelations.c)
 *     PopBootStatGet @ 0x140A3F048 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A3F42C (PopBootStatSet.c)
 *     RtlUnlockBootStatusData @ 0x140A3F7A0 (RtlUnlockBootStatusData.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140A3FD9C (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140A3FDDC (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     IoWMISystemControl @ 0x140A41AC4 (IoWMISystemControl.c)
 *     WmipGetRegistryHideMachine @ 0x140A42134 (WmipGetRegistryHideMachine.c)
 *     PfSnGetCompletedTrace @ 0x140A43D60 (PfSnGetCompletedTrace.c)
 *     ExpGetSystemFlushInformation @ 0x140A43F14 (ExpGetSystemFlushInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 *     EtwpFreeStackCache @ 0x140A44770 (EtwpFreeStackCache.c)
 *     SiGetSystemDeviceName @ 0x140A44DA8 (SiGetSystemDeviceName.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A45514 (SepDereferenceLowBoxNumberEntry.c)
 *     WheapPredictiveFailureAnalysis @ 0x140A45940 (WheapPredictiveFailureAnalysis.c)
 *     SepGetLogonSessionAccountInfo @ 0x140A466DC (SepGetLogonSessionAccountInfo.c)
 *     EtwpEnableTrace @ 0x140A4882C (EtwpEnableTrace.c)
 *     IopErrorLogThread @ 0x140A48EE0 (IopErrorLogThread.c)
 *     PiDqActionDataGetChangedProperties @ 0x140A499C4 (PiDqActionDataGetChangedProperties.c)
 *     PiDqGrowPropertyArray @ 0x140A49E3C (PiDqGrowPropertyArray.c)
 *     WmipCachePtrs @ 0x140A4AFD8 (WmipCachePtrs.c)
 *     SepUpdateLogonSessionTrack @ 0x140A4BA84 (SepUpdateLogonSessionTrack.c)
 *     SepGetLowBoxNumberEntry @ 0x140A4BEEC (SepGetLowBoxNumberEntry.c)
 *     MiDeleteTrimViewInfoList @ 0x140A4C370 (MiDeleteTrimViewInfoList.c)
 *     MiInSwapStoreContextDereference @ 0x140A4CFE8 (MiInSwapStoreContextDereference.c)
 *     IopRaiseInformationalHardError @ 0x140A4DF50 (IopRaiseInformationalHardError.c)
 *     IopApcHardError @ 0x140A4DFE0 (IopApcHardError.c)
 *     IopRaiseHardError @ 0x140A4E020 (IopRaiseHardError.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x140A4F5B8 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A4F688 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     SepExpandDynamic @ 0x140A4FCE4 (SepExpandDynamic.c)
 *     MiAllocatePerSessionProtos @ 0x140A4FFC0 (MiAllocatePerSessionProtos.c)
 *     PopUnicodeStringDeepCopy @ 0x140A50628 (PopUnicodeStringDeepCopy.c)
 *     RtlReleasePrivilege @ 0x140A5134C (RtlReleasePrivilege.c)
 *     SiQueryProperty @ 0x140A518C0 (SiQueryProperty.c)
 *     RtlpFreeRangeListEntry @ 0x140A52408 (RtlpFreeRangeListEntry.c)
 *     PopRequestShutdownWait @ 0x140A52D84 (PopRequestShutdownWait.c)
 *     MiBuildNewCloneDescriptor @ 0x140A54400 (MiBuildNewCloneDescriptor.c)
 *     WmipCopyFromEventQueues @ 0x140A54ED0 (WmipCopyFromEventQueues.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x140A551F0 (SPCallServerHandleGetAppPolicyValue.c)
 *     WmipQueueNotification @ 0x140A55BA4 (WmipQueueNotification.c)
 *     PspFreeStorage @ 0x140A569B4 (PspFreeStorage.c)
 *     SepCreateClaimAttributes @ 0x140A56BE0 (SepCreateClaimAttributes.c)
 *     NtSystemDebugControl @ 0x140A571F0 (NtSystemDebugControl.c)
 *     EtwpRegisterKMProvider @ 0x140A57524 (EtwpRegisterKMProvider.c)
 *     PipMakeGloballyUniqueId @ 0x140A582C0 (PipMakeGloballyUniqueId.c)
 *     PiControlGetDeviceStack @ 0x140A58ACC (PiControlGetDeviceStack.c)
 *     PopFxTraceDeviceRegistration @ 0x140A58DFC (PopFxTraceDeviceRegistration.c)
 *     CmpDeleteKcbCache @ 0x140A59444 (CmpDeleteKcbCache.c)
 *     PnpFreeInterruptInformation @ 0x140A59830 (PnpFreeInterruptInformation.c)
 *     KIsUnlockSettingEnabled @ 0x140A59CE4 (KIsUnlockSettingEnabled.c)
 *     ExpQueryChannelInformation @ 0x140A5A018 (ExpQueryChannelInformation.c)
 *     PiDqFreeGenericTableEntry @ 0x140A5A4A0 (PiDqFreeGenericTableEntry.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A5AC1C (IopSetDeviceSecurityDescriptor.c)
 *     MmAllocateMappingAddressEx @ 0x140A5B620 (MmAllocateMappingAddressEx.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x140A5CEB4 (EtwpCoverageSamplerAllocateTable.c)
 *     IopPnPDispatch @ 0x140A5D2E0 (IopPnPDispatch.c)
 *     VmpFreeMemoryRanges @ 0x140A5D7A4 (VmpFreeMemoryRanges.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140A5D908 (PopDiagTraceFxComponentAccounting.c)
 *     MmFreeMappingAddress @ 0x140A5DAA0 (MmFreeMappingAddress.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140A5DEE0 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     SepDuplicateClaimAttributes @ 0x140A5E1D0 (SepDuplicateClaimAttributes.c)
 *     PiUEventBroadcastEventWorker @ 0x140A5E370 (PiUEventBroadcastEventWorker.c)
 *     PspJobIoRateControlDisable @ 0x140A5E7F8 (PspJobIoRateControlDisable.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A5F1F8 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A5F4A0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140A60418 (PiDmGetReferencedObjectFromProperty.c)
 *     ExpWnfFreeScopeInstance @ 0x140A604C4 (ExpWnfFreeScopeInstance.c)
 *     MIDL_user_free @ 0x140A60900 (MIDL_user_free.c)
 *     NtSetEaFile @ 0x140A60FA0 (NtSetEaFile.c)
 *     ObpDeleteSymbolicLink @ 0x140A61450 (ObpDeleteSymbolicLink.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x140A61DE4 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A61E54 (PpmIdleGetConcurrencyStats.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140A62358 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     IopGetRootDevices @ 0x140A624B8 (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A62C5C (RtlpGetPolicyValueForSystemCapability.c)
 *     PopAnsiStringToUnicodeString @ 0x140A63150 (PopAnsiStringToUnicodeString.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x140A63644 (VrpDereferenceDiffHiveEntryWithLock.c)
 *     MiDeleteProcessHotPatchContext @ 0x140A63874 (MiDeleteProcessHotPatchContext.c)
 *     ExpTranslateEfiPath @ 0x140A6389C (ExpTranslateEfiPath.c)
 *     ExpParseEfiPath @ 0x140A63B30 (ExpParseEfiPath.c)
 *     ExpTranslateSymbolicLink @ 0x140A63CA4 (ExpTranslateSymbolicLink.c)
 *     ExpFindDiskSignature @ 0x140A63F20 (ExpFindDiskSignature.c)
 *     ExpGetPartitionTableInfo @ 0x140A640EC (ExpGetPartitionTableInfo.c)
 *     SepDeleteLogonSessionTrack @ 0x140A64520 (SepDeleteLogonSessionTrack.c)
 *     ExpWnfRegisterPermanentName @ 0x140A64B40 (ExpWnfRegisterPermanentName.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A64CA8 (MiReplaceRotateWithDemandZero.c)
 *     PiCMGetObjectPropertyKeys @ 0x140A65294 (PiCMGetObjectPropertyKeys.c)
 *     PiDevCfgBuildIndirectString @ 0x140A65E4C (PiDevCfgBuildIndirectString.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140A66258 (PopUmpoSendPowerRequestCreate.c)
 *     NtNotifyChangeSession @ 0x140A67010 (NtNotifyChangeSession.c)
 *     EtwpReferenceStackLookasideList @ 0x140A67A98 (EtwpReferenceStackLookasideList.c)
 *     KeAllocateCalloutStackEx @ 0x140A67B60 (KeAllocateCalloutStackEx.c)
 *     MiReleaseDriverPtes @ 0x140A67CE4 (MiReleaseDriverPtes.c)
 *     MiCreateRotateView @ 0x140A680A8 (MiCreateRotateView.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140A68158 (PiBuildDeviceNodeInstancePath.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140A689C0 (PnpInitializeInheritedRestrictedSd.c)
 *     PopPowerRequestStatsIdConcat @ 0x140A68BC8 (PopPowerRequestStatsIdConcat.c)
 *     CmpDeleteLightWeightTransaction @ 0x140A68E50 (CmpDeleteLightWeightTransaction.c)
 *     PopDirectedDripsDiagRundownBroadcastTrees @ 0x140A698DC (PopDirectedDripsDiagRundownBroadcastTrees.c)
 *     SPCallServerHandleUpdatePolicies @ 0x140A6A19C (SPCallServerHandleUpdatePolicies.c)
 *     PiDevCfgResolveVariable @ 0x140A6A668 (PiDevCfgResolveVariable.c)
 *     _RegRtlDeletePathInternal @ 0x140A6AD38 (_RegRtlDeletePathInternal.c)
 *     IoReplaceFileObjectName @ 0x140A6B7F0 (IoReplaceFileObjectName.c)
 *     ExpQueryMemoryTopologyInformation @ 0x140A6BA40 (ExpQueryMemoryTopologyInformation.c)
 *     IopQueryResourceHandlerInterface @ 0x140A6C444 (IopQueryResourceHandlerInterface.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140A6CE48 (EtwpAcquireTokenAccessInformation.c)
 *     HvWriteExternal @ 0x140A6D050 (HvWriteExternal.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140A6D2B0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6D364 (_CmGetRegKeySecurityDescriptor.c)
 *     EtwpTimLogMitigationForProcess @ 0x140A6DB4C (EtwpTimLogMitigationForProcess.c)
 *     PpmEventTraceProcessorIdle @ 0x140A6E344 (PpmEventTraceProcessorIdle.c)
 *     PiCMRegisterDeviceInterface @ 0x140A6E630 (PiCMRegisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x140A6F4C0 (PiAuditDeviceOperation.c)
 *     PopPowerRequestTableFree @ 0x140A705E0 (PopPowerRequestTableFree.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140A70600 (EtwpCoverageSamplerFreeTable.c)
 *     PiRearrangeDeviceInstances @ 0x140A708CC (PiRearrangeDeviceInstances.c)
 *     EtwpTiQueryTokenIdentity @ 0x140A70AB4 (EtwpTiQueryTokenIdentity.c)
 *     EtwpReceiveReplyDataBlock @ 0x140A712D0 (EtwpReceiveReplyDataBlock.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A71D1C (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x140A72070 (PopBcdSetupResumeObject.c)
 *     PopBcdReadElement @ 0x140A72168 (PopBcdReadElement.c)
 *     PspCreateSecureThread @ 0x140A72708 (PspCreateSecureThread.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140A72F18 (PiDevCfgEnforceDevicePolicy.c)
 *     PopDiagTraceThermalRequest @ 0x140A73644 (PopDiagTraceThermalRequest.c)
 *     PnpQueryBusInformation @ 0x140A738F0 (PnpQueryBusInformation.c)
 *     PnpBusTypeGuidGetIndex @ 0x140A739EC (PnpBusTypeGuidGetIndex.c)
 *     MiFreeCloneDescriptor @ 0x140A73E2C (MiFreeCloneDescriptor.c)
 *     FsRtlNotifyUninitializeSync @ 0x140A73F50 (FsRtlNotifyUninitializeSync.c)
 *     VrpPreLoadKey @ 0x140A73F7C (VrpPreLoadKey.c)
 *     PoFxAbandonDevice @ 0x140A74894 (PoFxAbandonDevice.c)
 *     PopPepUnregisterDevice @ 0x140A74D78 (PopPepUnregisterDevice.c)
 *     IopCreateArcName @ 0x140A75840 (IopCreateArcName.c)
 *     PfpRpControlRequest @ 0x140A75E88 (PfpRpControlRequest.c)
 *     PfpRpControlRequestCopy @ 0x140A75F5C (PfpRpControlRequestCopy.c)
 *     EtwpCreateUmReplyObject @ 0x140A762A0 (EtwpCreateUmReplyObject.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A765D4 (IopCallDriverReinitializationRoutines.c)
 *     SepDeleteClaimAttributes @ 0x140A77774 (SepDeleteClaimAttributes.c)
 *     WmipISCleanup @ 0x140A778D0 (WmipISCleanup.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140A77924 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A77CC0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PopSetHiberFileMcb @ 0x140A78220 (PopSetHiberFileMcb.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140A789EC (PopFxFindDeviceAndAllocateUniqueId.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A79378 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A797FC (_CmDeleteDeviceRegKeyWorker.c)
 *     ObpSetDeviceMap @ 0x140A79B78 (ObpSetDeviceMap.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A79EF0 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140A7A638 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x140A7AE98 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140A7B268 (EtwpGetAutoLoggerEventNameFilter.c)
 *     PopGetPowerRequestListInfo @ 0x140A7BE48 (PopGetPowerRequestListInfo.c)
 *     RtlLockBootStatusData @ 0x140A7C200 (RtlLockBootStatusData.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140A7C4EC (PiProcessNewDeviceNodeAsync.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     PiDevCfgVerifyService @ 0x140A7E540 (PiDevCfgVerifyService.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140A7E6CC (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     EtwpLogPmcCounterRundown @ 0x140A7EF6C (EtwpLogPmcCounterRundown.c)
 *     EtwpGenerateFileName @ 0x140A7F9B8 (EtwpGenerateFileName.c)
 *     SiQuerySystemInformationString @ 0x140A7FFF8 (SiQuerySystemInformationString.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A80898 (_CmGetDeviceCompoundFiltersWorker.c)
 *     FsRtlDeleteTunnelCache @ 0x140A81180 (FsRtlDeleteTunnelCache.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A815F8 (_CmOpenDevicePanelRegKeyWorker.c)
 *     PopGenerateDeviceFriendlyName @ 0x140A81B2C (PopGenerateDeviceFriendlyName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A82014 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140A8275C (CmpLightWeightCleanupSetSecDescUoW.c)
 *     KeFreeCalloutStack @ 0x140A82DB0 (KeFreeCalloutStack.c)
 *     MiCreateLargePageVad @ 0x140A82E50 (MiCreateLargePageVad.c)
 *     DbgkpSectionToFileHandle @ 0x140A83008 (DbgkpSectionToFileHandle.c)
 *     MmGetFileNameForSection @ 0x140A830BC (MmGetFileNameForSection.c)
 *     PiPnpFreePdoDeviceList @ 0x140A832F8 (PiPnpFreePdoDeviceList.c)
 *     BiTranslateSymbolicLink @ 0x140A83F4C (BiTranslateSymbolicLink.c)
 *     PiDqDeleteUserObject @ 0x140A84438 (PiDqDeleteUserObject.c)
 *     PsCreateVsmEnclave @ 0x140A84BF4 (PsCreateVsmEnclave.c)
 *     DbgkRegisterErrorPort @ 0x140A852C4 (DbgkRegisterErrorPort.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140A86C10 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     PspReleaseReferenceToSession @ 0x140A86D78 (PspReleaseReferenceToSession.c)
 *     _CmGetDeviceInterfaceRegKeySecurityDescriptor @ 0x140A870F8 (_CmGetDeviceInterfaceRegKeySecurityDescriptor.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A87340 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140A892F4 (BiIssueGetDriveLayoutIoctl.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140A897E0 (PsSetLoadImageNotifyRoutineEx.c)
 *     PopPdcCsDeviceNotification @ 0x140A89968 (PopPdcCsDeviceNotification.c)
 *     PopDiagQueryDevicePropertyString @ 0x140A89E80 (PopDiagQueryDevicePropertyString.c)
 *     CmpAddStringToMapping @ 0x140A8A09C (CmpAddStringToMapping.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140A8AA80 (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaAllocateScatterMemory @ 0x140A8AB00 (HalpDmaAllocateScatterMemory.c)
 *     IopDeleteDriver @ 0x140A8AC00 (IopDeleteDriver.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     PiUEventHandleVetoEvent @ 0x140A8B24C (PiUEventHandleVetoEvent.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140A8B940 (PsRemoveCreateThreadNotifyRoutine.c)
 *     ExpWnfGetPermanentDataStore @ 0x140A8BAFC (ExpWnfGetPermanentDataStore.c)
 *     PoClearBroadcast @ 0x140A8BD00 (PoClearBroadcast.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8BE6C (_SysCtxRegOpenCurrentUserKey.c)
 *     PopCloneUnicodeString @ 0x140A8C164 (PopCloneUnicodeString.c)
 *     PiQueryPowerRelations @ 0x140A8C2C8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140A8C850 (PiQueryPowerDependencyRelations.c)
 *     SepCheckCapabilities @ 0x140A8CD3C (SepCheckCapabilities.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A8D7D0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     IopReadFileScatter @ 0x140A8E968 (IopReadFileScatter.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8EF90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A90080 (PspSetCreateProcessNotifyRoutine.c)
 *     KeCleanupImageTracepoints @ 0x140A90178 (KeCleanupImageTracepoints.c)
 *     PnpUnloadAttachedDriver @ 0x140A90E60 (PnpUnloadAttachedDriver.c)
 *     PnpAddVetoInformation @ 0x140A90FC8 (PnpAddVetoInformation.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A91630 (PiDevCfgResolveVariableExpression.c)
 *     MiFindLargePageMemory @ 0x140A92A7C (MiFindLargePageMemory.c)
 *     MiConstructLoaderEntry @ 0x140A92FE4 (MiConstructLoaderEntry.c)
 *     PnpBuildCmResourceList @ 0x140A936D4 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x140A93B6C (IopChildToRootTranslation.c)
 *     MiFreePlaceholderStorage @ 0x140A94A68 (MiFreePlaceholderStorage.c)
 *     PoDiagFreeUsermodeStack @ 0x140A94BF8 (PoDiagFreeUsermodeStack.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140A957EC (PiRemoveDeferredSetInterfaceState.c)
 *     IopWriteFileGather @ 0x140A958BC (IopWriteFileGather.c)
 *     EtwpTiFreeTokenIdentity @ 0x140A967E0 (EtwpTiFreeTokenIdentity.c)
 *     PopPepRegisterDevice @ 0x140A96C70 (PopPepRegisterDevice.c)
 *     WmipGetFilePDO @ 0x140A97574 (WmipGetFilePDO.c)
 *     PpmPerfResizeHistory @ 0x140A97878 (PpmPerfResizeHistory.c)
 *     SepAddTokenOriginClaim @ 0x140A97DE0 (SepAddTokenOriginClaim.c)
 *     MiFreeRetpolineImportInfo @ 0x140A981A0 (MiFreeRetpolineImportInfo.c)
 *     SeReleaseImageValidationContext @ 0x140A982AC (SeReleaseImageValidationContext.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A9857C (BiConvertNtDeviceToBootEnvironment.c)
 *     BcdEnumerateDisks @ 0x140A9A084 (BcdEnumerateDisks.c)
 *     MiCloneDiscardVadCommit @ 0x140A9ADE8 (MiCloneDiscardVadCommit.c)
 *     EtwpUpdateKernelGroupsWork @ 0x140A9B710 (EtwpUpdateKernelGroupsWork.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A9C5C0 (PopFxUpdateVetoMaskWork.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A9C7E4 (PiDevCfgResolveVariableKeyHandle.c)
 *     IoWMIExecuteMethod @ 0x140A9D050 (IoWMIExecuteMethod.c)
 *     PiSwPdoAssociationFree @ 0x140A9DA4C (PiSwPdoAssociationFree.c)
 *     MmFreeNonCachedMemory @ 0x140A9DA90 (MmFreeNonCachedMemory.c)
 *     ObCreateObjectTypeEx @ 0x140A9DB20 (ObCreateObjectTypeEx.c)
 *     PfpRpCHashEmpty @ 0x140A9E1D4 (PfpRpCHashEmpty.c)
 *     CMFFreeFn @ 0x140A9E2A0 (CMFFreeFn.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140A9E804 (PpmEventTracePlatformIdleAccounting.c)
 *     PiDevCfgFreeDriverNode @ 0x140A9EB68 (PiDevCfgFreeDriverNode.c)
 *     MiFreeLoadedImportList @ 0x140A9ED10 (MiFreeLoadedImportList.c)
 *     PipFreeBindingId @ 0x140A9EF0C (PipFreeBindingId.c)
 *     CmpDelayFreeRMWorker @ 0x140A9EF40 (CmpDelayFreeRMWorker.c)
 *     PnpLogVetoInformation @ 0x140A9F1B4 (PnpLogVetoInformation.c)
 *     MiLoadHotPatchForUserSid @ 0x140A9F6C0 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A9F9D4 (MiLoadHotPatch.c)
 *     PopFreeWakeInfo @ 0x140AA0360 (PopFreeWakeInfo.c)
 *     PopFreeWakeSource @ 0x140AA03DC (PopFreeWakeSource.c)
 *     PnpDriverLoadingFailed @ 0x140AA1408 (PnpDriverLoadingFailed.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140AA26E8 (EtwTimLogRedirectionTrustPolicy.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140AA3320 (PiCreateDriverSwDeviceCallback.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140AA3E5C (PpmEventTraceCoordinatedIdleStates.c)
 *     PopClearTransitionCheckpoints @ 0x140AA42FC (PopClearTransitionCheckpoints.c)
 *     IopQuerySecureDeviceClassState @ 0x140AA47E0 (IopQuerySecureDeviceClassState.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
 *     WmipMRCleanup @ 0x140AA6440 (WmipMRCleanup.c)
 *     CmpCreateHiveRootCell @ 0x140AA6F78 (CmpCreateHiveRootCell.c)
 *     PnpDeleteDeviceInterfaces @ 0x140AA7668 (PnpDeleteDeviceInterfaces.c)
 *     PopDiagTraceSleepStudyStop @ 0x140AA7A4C (PopDiagTraceSleepStudyStop.c)
 *     IopSendMessageToTrackService @ 0x140AA825C (IopSendMessageToTrackService.c)
 *     CmRmFinalizeRecovery @ 0x140AA88D4 (CmRmFinalizeRecovery.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140AAB050 (IopAllocatePassiveInterruptBlock.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AAB560 (PsRemoveLoadImageNotifyRoutine.c)
 *     SepInformLsaOfDeletedLogon @ 0x140AAB6E4 (SepInformLsaOfDeletedLogon.c)
 *     PopBootStatRestoreDefaults @ 0x140AABC04 (PopBootStatRestoreDefaults.c)
 *     RtlGenerateClass5Guid @ 0x140AAC700 (RtlGenerateClass5Guid.c)
 *     ArbAllocateEntry @ 0x140AAD6E0 (ArbAllocateEntry.c)
 *     MiQueryProcessActivePatches @ 0x140AAE3A8 (MiQueryProcessActivePatches.c)
 *     WmipGenerateMofResourceNotification @ 0x140AB0184 (WmipGenerateMofResourceNotification.c)
 *     PfpSourceBuildVaArray @ 0x140AB04EC (PfpSourceBuildVaArray.c)
 *     PopReadResumeContext @ 0x140AB1028 (PopReadResumeContext.c)
 *     PopReadPagesFromHiberFile @ 0x140AB1180 (PopReadPagesFromHiberFile.c)
 *     PopCleanCoolingExtension @ 0x140AB1600 (PopCleanCoolingExtension.c)
 *     RtlpComputeMergedAcl @ 0x140AB1A54 (RtlpComputeMergedAcl.c)
 *     MiDeleteVadHotPatchState @ 0x140AB2524 (MiDeleteVadHotPatchState.c)
 *     ExpGetDriveGeometry @ 0x140AB2680 (ExpGetDriveGeometry.c)
 *     HalpUnregisterPmuNotification @ 0x140AB2A9C (HalpUnregisterPmuNotification.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AB2D28 (MiGetPhysicalMemoryRanges.c)
 *     BiExportEfiBootManager @ 0x140AB305C (BiExportEfiBootManager.c)
 *     PopEnableHiberFile @ 0x140AB3950 (PopEnableHiberFile.c)
 *     EmpProviderRegister @ 0x140AB3EE0 (EmpProviderRegister.c)
 *     MiReleaseHotPatchResources @ 0x140AB45B8 (MiReleaseHotPatchResources.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     BiGetPhysicalDriveName @ 0x140AB54BC (BiGetPhysicalDriveName.c)
 *     PpmSetSimulatedLoad @ 0x140AB5610 (PpmSetSimulatedLoad.c)
 *     MiAllocateUserPhysicalRanges @ 0x140AB5888 (MiAllocateUserPhysicalRanges.c)
 *     PopBootStatCheckIntegrity @ 0x140AB5DF8 (PopBootStatCheckIntegrity.c)
 *     MiReserveDriverPtes @ 0x140AB636C (MiReserveDriverPtes.c)
 *     _CmGetParentDeviceContainerId @ 0x140AB65B0 (_CmGetParentDeviceContainerId.c)
 *     WmipProcessSynchronousEtw @ 0x140AB676C (WmipProcessSynchronousEtw.c)
 *     PpmClearSimulatedLoad @ 0x140AB6854 (PpmClearSimulatedLoad.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140AB6D0C (EtwpCovSampCaptureFreeLookasides.c)
 *     AdtpBuildObjectTypeStrings @ 0x140AB7ED0 (AdtpBuildObjectTypeStrings.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB861C (MiCreateFileOnlyImageFixupList.c)
 *     PopLoadResumeContext @ 0x140AB8C88 (PopLoadResumeContext.c)
 *     sub_140AB8E18 @ 0x140AB8E18 (sub_140AB8E18.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140AB95B4 (PopDiagTracePowerTransitionEnd.c)
 *     IopSafebootDriverLoad @ 0x140AB9958 (IopSafebootDriverLoad.c)
 *     IopGetPersistedStateLocation @ 0x140ABA0BC (IopGetPersistedStateLocation.c)
 *     sub_140ABA6A0 @ 0x140ABA6A0 (sub_140ABA6A0.c)
 *     sub_140ABACD0 @ 0x140ABACD0 (sub_140ABACD0.c)
 *     PiCMQueryRemove @ 0x140ABB70C (PiCMQueryRemove.c)
 *     BiBindEfiEntryToBcdObject @ 0x140ABC2E0 (BiBindEfiEntryToBcdObject.c)
 *     PiUEventFreeProcessImagePath @ 0x140ABC988 (PiUEventFreeProcessImagePath.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140ABCB94 (IopDeviceObjectFromSymbolicName.c)
 *     PopFxConvertV1Components @ 0x140ABCCB0 (PopFxConvertV1Components.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140ABCE48 (ExStopRecordingIRTimerExpiries.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140ABD4C4 (HalpDmaGrowContiguousMapBuffers.c)
 *     MiCloneProcessAddressSpace @ 0x140ABD72C (MiCloneProcessAddressSpace.c)
 *     sub_140ABDF2C @ 0x140ABDF2C (sub_140ABDF2C.c)
 *     sub_140ABE510 @ 0x140ABE510 (sub_140ABE510.c)
 *     PopFxTracePerfRegistration @ 0x140ABE960 (PopFxTracePerfRegistration.c)
 *     EtwpCCSwapStart @ 0x140ABF2B8 (EtwpCCSwapStart.c)
 *     MiCacheImageSymbols @ 0x140ABFD60 (MiCacheImageSymbols.c)
 *     sub_140AC0280 @ 0x140AC0280 (sub_140AC0280.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x140AC0A70 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     sub_140AC11C4 @ 0x140AC11C4 (sub_140AC11C4.c)
 *     PopDiagTraceCsExitReason @ 0x140AC1838 (PopDiagTraceCsExitReason.c)
 *     MiFreeVadEventBitmap @ 0x140AC24E4 (MiFreeVadEventBitmap.c)
 *     PiSwGetChildPdo @ 0x140AC3B1C (PiSwGetChildPdo.c)
 *     NtQueryDirectoryObject @ 0x140AC44D0 (NtQueryDirectoryObject.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     PspThreadDelete @ 0x140AD1250 (PspThreadDelete.c)
 *     PsCallEnclave @ 0x140AD1D10 (PsCallEnclave.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 *     SepTokenDeleteMethod @ 0x140AD88D0 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x140AD8BA4 (SepDeReferenceLogonSession.c)
 *     NtFilterBootOption @ 0x140AD8E50 (NtFilterBootOption.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140AD9A3C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpCovSampContextCleanup @ 0x140AD9EF8 (EtwpCovSampContextCleanup.c)
 *     EtwpCovSampContextPruneModules @ 0x140ADA1B8 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140ADA720 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     NtQueryWnfStateNameInformation @ 0x140AE3050 (NtQueryWnfStateNameInformation.c)
 *     CmpAllocatePostBlock @ 0x140AE38FC (CmpAllocatePostBlock.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140AE5884 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x140AE5E28 (CmpStartCLFSLog.c)
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE6484 (MmDeleteProcessAddressSpace.c)
 *     NtManageHotPatch @ 0x140AE7000 (NtManageHotPatch.c)
 *     VrpPostOpenOrCreate @ 0x140AE85D0 (VrpPostOpenOrCreate.c)
 *     HalpHandlePreviousMcaErrors @ 0x140B4B8C4 (HalpHandlePreviousMcaErrors.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B4BA0C (HalpHandlePreviousMcaErrorsOnProcessor.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140B4DCD8 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140B4DF40 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x140B4E2D4 (HalpInitializeGenericErrorSource.c)
 *     IoShutdownSystem @ 0x140B5374C (IoShutdownSystem.c)
 *     PnprQuiesceWorker @ 0x140B550A0 (PnprQuiesceWorker.c)
 *     KiApplyProcessorDpcLimits @ 0x140B55BCC (KiApplyProcessorDpcLimits.c)
 *     KiFreeThreadCycleTable @ 0x140B561D0 (KiFreeThreadCycleTable.c)
 *     KiUpdateSavedSupervisorState @ 0x140B57330 (KiUpdateSavedSupervisorState.c)
 *     PopGetBitlockerKeyLocation @ 0x140B5B7BC (PopGetBitlockerKeyLocation.c)
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 *     PopProcessDeviceWakeSource @ 0x140B5C0F4 (PopProcessDeviceWakeSource.c)
 *     PopGetHwConfigurationSignature @ 0x140B5CE34 (PopGetHwConfigurationSignature.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140B5F998 (PopDiagTraceFirmwareS3Stats.c)
 *     BapdRecordFirmwareBootStats @ 0x140B60CB0 (BapdRecordFirmwareBootStats.c)
 *     ExpSystemErrorHandler2 @ 0x140B61470 (ExpSystemErrorHandler2.c)
 *     MmInitializeProcessor @ 0x140B62038 (MmInitializeProcessor.c)
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 *     IopFreePoDeviceNotifyListHead @ 0x140B6A0E0 (IopFreePoDeviceNotifyListHead.c)
 *     PopCloneRange @ 0x140B6C2A0 (PopCloneRange.c)
 *     PopProcessWakeSourceWork @ 0x140B6CA78 (PopProcessWakeSourceWork.c)
 *     IoUnregisterShutdownNotification @ 0x140B6D210 (IoUnregisterShutdownNotification.c)
 *     PfpScenCtxScenarioSet @ 0x140B6D510 (PfpScenCtxScenarioSet.c)
 *     ExGetNextWakeTime @ 0x140B6DF68 (ExGetNextWakeTime.c)
 *     MiDeleteEnclavePages @ 0x140B6E178 (MiDeleteEnclavePages.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B72670 (ExpAllocatePoolWithQuotaTag.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     KdpPullRemoteFile @ 0x140B76B48 (KdpPullRemoteFile.c)
 *     IovUnloadDrivers @ 0x140B8278C (IovUnloadDrivers.c)
 *     IovpBuildDriverObjectList @ 0x140B82894 (IovpBuildDriverObjectList.c)
 *     VfFreeCapturedUnicodeString @ 0x140B82E64 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140B83008 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140B83708 (ViInitializeLocalSystemDescriptor.c)
 *     ViAllocateMapRegisterFile @ 0x140B87EAC (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140B88B9C (ViFreeMapRegisterFile.c)
 *     ViHalFreeDomainCommonBuffer @ 0x140B89178 (ViHalFreeDomainCommonBuffer.c)
 *     ViReleaseDmaAdapter @ 0x140B89A1C (ViReleaseDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140B89BC0 (ViSpecialAllocateCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x140B89D3C (ViSpecialFreeCommonBuffer.c)
 *     VfDriverEnableVerifierForAll @ 0x140B8A3B4 (VfDriverEnableVerifierForAll.c)
 *     VfTargetEtwRegister @ 0x140B8B4AC (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140B8B5A0 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140B8BB44 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPtGenerateTraceInformation @ 0x140B8BF6C (VfPtGenerateTraceInformation.c)
 *     ViPtFreePoolInfoEntryCallback @ 0x140B8C880 (ViPtFreePoolInfoEntryCallback.c)
 *     ViPtFreeStackInfoEntryCallback @ 0x140B8C8D0 (ViPtFreeStackInfoEntryCallback.c)
 *     ViPtPluginUnload @ 0x140B8CA50 (ViPtPluginUnload.c)
 *     ViIrpAllocateLockedPacket @ 0x140B8E0BC (ViIrpAllocateLockedPacket.c)
 *     VerifierExFreePool @ 0x140B91810 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140B91890 (VerifierExFreePoolWithTag.c)
 *     ViPendingCompleteAfterWait @ 0x140B91D28 (ViPendingCompleteAfterWait.c)
 *     ViPendingDelayCompletion @ 0x140B91E88 (ViPendingDelayCompletion.c)
 *     VfBranchTracingPluginEntry @ 0x140B937E0 (VfBranchTracingPluginEntry.c)
 *     VfKeCheckForChanges @ 0x140B95FFC (VfKeCheckForChanges.c)
 *     VfFaultsRemoveAllApps @ 0x140B966BC (VfFaultsRemoveAllApps.c)
 *     VfFaultsRemoveAllTags @ 0x140B96754 (VfFaultsRemoveAllTags.c)
 *     ViCreateProcessCallbackInternal @ 0x140B968D0 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140B969F8 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x140B96AF4 (ViFaultsAddTagNoDuplicates.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140B97018 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkRemoveImportEntry @ 0x140B97AD0 (ViThunkRemoveImportEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140B97B48 (ViThunkReplaceAllThunkedImports.c)
 *     VfDeadlockInitialize @ 0x140B97DEC (VfDeadlockInitialize.c)
 *     VfPoolCheckForLeaks @ 0x140B9A350 (VfPoolCheckForLeaks.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140B9A510 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     VfSuspectDifRemoveEntry @ 0x140B9A640 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversAllocateEntryEx @ 0x140B9A73C (VfSuspectDriversAllocateEntryEx.c)
 *     VfSuspectDriversRemove @ 0x140B9AEA4 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B9AF44 (VfSuspectDriversUnloadCallback.c)
 *     ViPacketNotificationCallback @ 0x140B9B530 (ViPacketNotificationCallback.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x140B9B59C (VfIrpLogDeleteDeviceLogs.c)
 *     VfIrpLogRetrieveWmiData @ 0x140B9B874 (VfIrpLogRetrieveWmiData.c)
 *     VfIrpLogUnlockDatabase @ 0x140B9BB54 (VfIrpLogUnlockDatabase.c)
 *     ViIrpLogExposeWmiCallback @ 0x140B9BC50 (ViIrpLogExposeWmiCallback.c)
 *     VfAddVerifierEntry @ 0x140B9C32C (VfAddVerifierEntry.c)
 *     ViIrqlPluginUnload @ 0x140B9D780 (ViIrqlPluginUnload.c)
 *     VerifierIoWMIWriteEvent @ 0x140BA1650 (VerifierIoWMIWriteEvent.c)
 *     VerifierIoConnectInterrupt @ 0x140BA1AE0 (VerifierIoConnectInterrupt.c)
 *     VerifierIoConnectInterruptEx @ 0x140BA1BE0 (VerifierIoConnectInterruptEx.c)
 *     VerifierIoDisconnectInterrupt @ 0x140BA1CC0 (VerifierIoDisconnectInterrupt.c)
 *     VerifierIoDisconnectInterruptEx @ 0x140BA1D10 (VerifierIoDisconnectInterruptEx.c)
 *     VfIrpDatabaseUninitialize @ 0x140BA4110 (VfIrpDatabaseUninitialize.c)
 *     ViSpRtlReplaceStringBuffer @ 0x140BA4E44 (ViSpRtlReplaceStringBuffer.c)
 *     VfPnpTestStartedPdoStack @ 0x140BA55A0 (VfPnpTestStartedPdoStack.c)
 *     ViThunkFreeSharedThunksArray @ 0x140BA65A0 (ViThunkFreeSharedThunksArray.c)
 *     IovFreeIrpPrivate @ 0x140BA6F30 (IovFreeIrpPrivate.c)
 *     VfThunkCheckDriverUnloading @ 0x140BA8F14 (VfThunkCheckDriverUnloading.c)
 *     HdlspAddLogEntry @ 0x140BAD008 (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x140BAE600 (HdlspSetBlueScreenInformation.c)
 *     ResFwpDestroyBackground @ 0x140BB1B3C (ResFwpDestroyBackground.c)
 *     ResFwpPageOutBackground @ 0x140BB1C34 (ResFwpPageOutBackground.c)
 *     ResFwFreeContext @ 0x140BB34C4 (ResFwFreeContext.c)
 *     BootApplicationPersistentDataProcess @ 0x140BDE52C (BootApplicationPersistentDataProcess.c)
 *     CreateMiniNtBootKey @ 0x140C0A220 (CreateMiniNtBootKey.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     HalpDmaFinalizeDoubleBufferingDisposition @ 0x140C0DC74 (HalpDmaFinalizeDoubleBufferingDisposition.c)
 *     HalpReportResourceUsage @ 0x140C0E954 (HalpReportResourceUsage.c)
 *     HalpPciReportMmConfigAddressRange @ 0x140C1322C (HalpPciReportMmConfigAddressRange.c)
 *     HalpInitChipHacks @ 0x140C13B94 (HalpInitChipHacks.c)
 *     HalpAuditAcpiTables @ 0x140C13DF4 (HalpAuditAcpiTables.c)
 *     HalpAuditAllocateRsdtArrayTable @ 0x140C13EB0 (HalpAuditAllocateRsdtArrayTable.c)
 *     HalpAuditEnumerateRsdts @ 0x140C13F58 (HalpAuditEnumerateRsdts.c)
 *     IommupHvInitializeLibrary @ 0x140C14944 (IommupHvInitializeLibrary.c)
 *     CcInitializeCacheManager @ 0x140C15A88 (CcInitializeCacheManager.c)
 *     EmpParseCallbacks @ 0x140C1640C (EmpParseCallbacks.c)
 *     EmpParseEntryTypes @ 0x140C16644 (EmpParseEntryTypes.c)
 *     EmpParseInfDatabase @ 0x140C167C4 (EmpParseInfDatabase.c)
 *     EmpParseRuleExpression @ 0x140C16900 (EmpParseRuleExpression.c)
 *     EmpParseRuleTerm @ 0x140C16E50 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140C172EC (EmpParseRules.c)
 *     EmpParseStrings @ 0x140C17670 (EmpParseStrings.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140C177EC (EmpParseTargetRuleStringIndexList.c)
 *     EmpParseTargetRules @ 0x140C17B08 (EmpParseTargetRules.c)
 *     EmpRuleParserStackPop @ 0x140C17D64 (EmpRuleParserStackPop.c)
 *     CmpAppendSection @ 0x140C17FE8 (CmpAppendSection.c)
 *     CmpFreeLineList @ 0x140C18180 (CmpFreeLineList.c)
 *     CmpParseInfBuffer @ 0x140C185C4 (CmpParseInfBuffer.c)
 *     FsRtlGetCompatibilityModeValue @ 0x140C18C14 (FsRtlGetCompatibilityModeValue.c)
 *     FsRtlInitializeOplockPerf @ 0x140C192F4 (FsRtlInitializeOplockPerf.c)
 *     IopCreateArcNamesCd @ 0x140C1BE30 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140C1C364 (IopCreateArcNamesDisk.c)
 *     IopCreateUmdfDirectory @ 0x140C1C5E8 (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x140C1D194 (IopStoreArcInformation.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140C1D7C0 (IopCallBootDriverReinitializationRoutines.c)
 *     IopGetBootDiskInformation @ 0x140C1D87C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140C1E168 (IopApplySystemPartitionProt.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140C1FECC (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C20270 (PipCheckSystemFirmwareUpdated.c)
 *     PipCreateComputerId @ 0x140C203D8 (PipCreateComputerId.c)
 *     PipFreeGroupTree @ 0x140C207A4 (PipFreeGroupTree.c)
 *     PipGetDriverTagPriority @ 0x140C207F0 (PipGetDriverTagPriority.c)
 *     PipHardwareConfigInit @ 0x140C20B04 (PipHardwareConfigInit.c)
 *     PipInitDeviceOverrideCache @ 0x140C210A8 (PipInitDeviceOverrideCache.c)
 *     PipMigrateCleanService @ 0x140C21454 (PipMigrateCleanService.c)
 *     PipResetMatchingFilteredDevices @ 0x140C22040 (PipResetMatchingFilteredDevices.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C22798 (PiCreateDriverDataDirectoryRoot.c)
 *     IoReportHalResourceUsage @ 0x140C22DA0 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x140C22F88 (IopInitializeResourceMap.c)
 *     PiLastGoodCopyKeyContents @ 0x140C234D4 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertCopyCallback @ 0x140C236A0 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C23770 (PiLastGoodRevertLastKnownDirectory.c)
 *     IopAllocateLegacyBootResources @ 0x140C23F28 (IopAllocateLegacyBootResources.c)
 *     IopReportBootResources @ 0x140C240C0 (IopReportBootResources.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C24360 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C24500 (PiAuCreateStandardSecurityObject.c)
 *     PiAuFreeUserSids @ 0x140C24C44 (PiAuFreeUserSids.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C24CDC (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PipProcessPendingObjects @ 0x140C25CE0 (PipProcessPendingObjects.c)
 *     IopFileUtilRename @ 0x140C2640C (IopFileUtilRename.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x140C26540 (IopFileUtilWalkDirectoryTreeTopDown.c)
 *     KiComputeDispatchInterruptCost @ 0x140C27598 (KiComputeDispatchInterruptCost.c)
 *     KiComputeNumaCosts @ 0x140C278AC (KiComputeNumaCosts.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140C28A0C (KiPerformAutomaticGroupConfiguration.c)
 *     KiPopulateNodeInformation @ 0x140C28EAC (KiPopulateNodeInformation.c)
 *     KiInitializeMTRR @ 0x140C2984C (KiInitializeMTRR.c)
 *     ObpInitStackTrace @ 0x140C2C6BC (ObpInitStackTrace.c)
 *     PopCreateTimebrokerServiceSid @ 0x140C2D120 (PopCreateTimebrokerServiceSid.c)
 *     PopReadWheaBootErrorCount @ 0x140C2DDAC (PopReadWheaBootErrorCount.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140C309B8 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmInitHeteroEngine @ 0x140C316D8 (PpmInitHeteroEngine.c)
 *     PopNetInitialize @ 0x140C31EF4 (PopNetInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140C32438 (PopUmpoInitializeChannel.c)
 *     PoFxRegisterDebugger @ 0x140C33028 (PoFxRegisterDebugger.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C33C18 (PpmHeteroInitializeIntelWpsSupport.c)
 *     PpmEventInitializeEx @ 0x140C3411C (PpmEventInitializeEx.c)
 *     SshpAlpcInitialize @ 0x140C34404 (SshpAlpcInitialize.c)
 *     PsInitializeBootCpuPartitions @ 0x140C3489C (PsInitializeBootCpuPartitions.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C35470 (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140C35790 (PspInitializeCpuPartitionsPhase1.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140C35F38 (PspInitializeSystemPartitionPhase0.c)
 *     SeMakeAnonymousLogonToken @ 0x140C39E0C (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140C3A090 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140C3A2F0 (SeMakeSystemToken.c)
 *     SeSecureBootRegisterPolicy @ 0x140C3A930 (SeSecureBootRegisterPolicy.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140C3AED4 (SepInitializeSingletonAttributesStructures.c)
 *     WmipInitializeSecurity @ 0x140C3CD70 (WmipInitializeSecurity.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140C3E488 (EtwpEnableBootLoggerRegistryProviders.c)
 *     EtwpStartBootLogger @ 0x140C3E770 (EtwpStartBootLogger.c)
 *     BapdpProcessBitlockerStatus @ 0x140C3ECB8 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessEDrvHintInfo @ 0x140C3EED8 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140C3EFB8 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140C3F098 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140C3F17C (BapdpProcessResumeInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C3F25C (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessWmdResults @ 0x140C3F658 (BapdpProcessWmdResults.c)
 *     BapdpRegisterWbclData @ 0x140C40038 (BapdpRegisterWbclData.c)
 *     BootApplicationPersistentDataInitialize @ 0x140C402D4 (BootApplicationPersistentDataInitialize.c)
 *     ExpAddNonMirroredRanges @ 0x140C403CC (ExpAddNonMirroredRanges.c)
 *     ExpWatchProductTypeInitialization @ 0x140C416CC (ExpWatchProductTypeInitialization.c)
 *     HeadlessInit @ 0x140C42184 (HeadlessInit.c)
 *     ExpKeyedEventInitialization @ 0x140C43A94 (ExpKeyedEventInitialization.c)
 *     WheapInitializeErrorSourceTable @ 0x140C447F8 (WheapInitializeErrorSourceTable.c)
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140C46D74 (CmpCreateRegistryRoot.c)
 *     CmpInitializeDriverStores @ 0x140C471E0 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140C47560 (CmpInitializePreloadedHive.c)
 *     CmpInitializePreloadedHives @ 0x140C479C4 (CmpInitializePreloadedHives.c)
 *     CmpInitializeSystemBiosInformation @ 0x140C47B10 (CmpInitializeSystemBiosInformation.c)
 *     CmpInitializeSystemHive @ 0x140C47C88 (CmpInitializeSystemHive.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4953C (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemBiosInformation @ 0x140C49AE0 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C49E80 (CmpSetVideoBiosInformation.c)
 *     CmFcInitSystem2 @ 0x140C4A21C (CmFcInitSystem2.c)
 *     CmpInitializeHardwareConfiguration @ 0x140C4A9E0 (CmpInitializeHardwareConfiguration.c)
 *     CmpFindTagIndex @ 0x140C4BB38 (CmpFindTagIndex.c)
 *     CmpGetRegistryValue @ 0x140C4CD70 (CmpGetRegistryValue.c)
 *     MiComputeNumaCosts @ 0x140C4D768 (MiComputeNumaCosts.c)
 *     MmFreeLoaderBlock @ 0x140C4E7EC (MmFreeLoaderBlock.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C4FB34 (MiInitializePhysicalMemoryBlocks.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C50900 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeDriverPtes @ 0x140C50A98 (MiInitializeDriverPtes.c)
 *     MiReserveBootDriverPtes @ 0x140C50D50 (MiReserveBootDriverPtes.c)
 *     MiSectionInitialization @ 0x140C53724 (MiSectionInitialization.c)
 *     MiInitializeSystemSpaceMap @ 0x140C54128 (MiInitializeSystemSpaceMap.c)
 *     MiLockKernelScpSection @ 0x140C55A58 (MiLockKernelScpSection.c)
 *     MmInitializeMemoryLimits @ 0x140C564F0 (MmInitializeMemoryLimits.c)
 *     MmRegisterHotPatches @ 0x140C56C7C (MmRegisterHotPatches.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140C59ADC (MiMeasureDemandCoalesceTimeBounds.c)
 *     MiInitializeCacheFlushing @ 0x140C5A2D8 (MiInitializeCacheFlushing.c)
 *     MiBuildImportsForBootDrivers @ 0x140C5A924 (MiBuildImportsForBootDrivers.c)
 *     IntPartCreate @ 0x140C5CC98 (IntPartCreate.c)
 *     VhdiInitializeBootDisk @ 0x140C5D8B0 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140C5DBD4 (VhdiQueryVolumeVhdFilePath.c)
 *     CimfsInitializeBootDisk @ 0x140C5E0F0 (CimfsInitializeBootDisk.c)
 *     CompositefsBootIsEnabled @ 0x140C5E974 (CompositefsBootIsEnabled.c)
 *     SbpAddTransportToInstance @ 0x140C5EA34 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C5EC20 (SbpStartLanman.c)
 *     QueryRegistryHideMachine @ 0x140C5F3A4 (QueryRegistryHideMachine.c)
 *     SaveNodeDistanceInformation @ 0x140C5F580 (SaveNodeDistanceInformation.c)
 *     StartFirstUserProcess @ 0x140C5FF68 (StartFirstUserProcess.c)
 *     EmInitSystem @ 0x140C607D0 (EmInitSystem.c)
 *     IopInitializeSystemDrivers @ 0x140C629DC (IopInitializeSystemDrivers.c)
 *     CmGetSystemDriverList @ 0x140C62C58 (CmGetSystemDriverList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C631D0 (CmpOpenSystemDriverHiveContext.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C6351C (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140C636C8 (PipInitializeEarlyLaunchDrivers.c)
 *     VslRegisterBootDrivers @ 0x140C6397C (VslRegisterBootDrivers.c)
 *     PipInitComputerIds @ 0x140C63B74 (PipInitComputerIds.c)
 *     PpInitGetGroupOrderIndex @ 0x140C67744 (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x140C67B48 (PnpLoadBootFilterDriver.c)
 *     PipCheckDependencies @ 0x140C67CF0 (PipCheckDependencies.c)
 *     PopInitPlatformSettings @ 0x140C67E1C (PopInitPlatformSettings.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     PspReturnResourceQuota @ 0x14024B468 (PspReturnResourceQuota.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpFreePoolChecks @ 0x1402B0D90 (ExpFreePoolChecks.c)
 *     RtlpHpFreeHeap @ 0x1402B2660 (RtlpHpFreeHeap.c)
 *     MmDeterminePoolType @ 0x1402B2B50 (MmDeterminePoolType.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402B2BA0 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     ExpPoolTrackerReturnLimit @ 0x1402B2E60 (ExpPoolTrackerReturnLimit.c)
 *     RtlpHpVsContextFree @ 0x1402B2F20 (RtlpHpVsContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1402B381C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     ExIsSpecialPoolAddress @ 0x1402B4928 (ExIsSpecialPoolAddress.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402BC4B0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402C27C8 (RtlpHpVaMgrCtxQuery.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     EtwTracePool @ 0x1403AA0C8 (EtwTracePool.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     ExpCheckForWorker @ 0x1403D3B6C (ExpCheckForWorker.c)
 *     RtlpHpLargeFree @ 0x140420C64 (RtlpHpLargeFree.c)
 *     ExpCheckForResource @ 0x140491810 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x140499BEC (ExpCheckForLookaside.c)
 *     KeCheckForTimer @ 0x1404CEC7C (KeCheckForTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F561C (RtlpHpLfhThreadDataInitializeSet.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140B744E0 (ExpPoolFlagsToPoolType.c)
 *     ViFreeTrackedPool @ 0x140BA8FD0 (ViFreeTrackedPool.c)
 *     VfPtFreePoolNotification @ 0x140BA96EC (VfPtFreePoolNotification.c)
 */

void __stdcall ExFreePoolWithTag(PVOID P, ULONG Tag)
{
  ULONG_PTR v2; // r13
  unsigned int v3; // r12d
  int v4; // eax
  __int64 v5; // r15
  __int64 v6; // r15
  char v7; // al
  ULONG_PTR v8; // r14
  char v9; // r8
  int v10; // ecx
  unsigned int v11; // ebx
  int v12; // edx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rdi
  ULONG_PTR v18; // rdx
  __int16 v19; // ax
  volatile CCHAR v20; // al
  __int64 v21; // rax
  int v22; // r9d
  __int64 v23; // r11
  unsigned int v24; // edx
  unsigned int v25; // r10d
  int v26; // eax
  __int64 v27; // r8
  unsigned __int8 v28; // di
  _QWORD *v29; // rdx
  unsigned int k; // edx
  char *v31; // r8
  __int64 *i; // rax
  int v33; // r9d
  volatile signed __int64 *v34; // rdx
  volatile signed __int64 *v35; // rax
  signed __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r9
  ULONG_PTR v41; // rdx
  char v42; // r10
  ULONG_PTR v43; // r8
  __int64 v44; // r8
  char v45; // r11
  unsigned __int64 v46; // rdi
  ULONG_PTR *v47; // rsi
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rbx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  __int64 v52; // r8
  int v53; // r9d
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // rax
  signed __int64 v58; // rax
  ULONG_PTR v59; // r8
  unsigned __int64 v60; // rdx
  signed __int64 v61; // rtt
  ULONG_PTR *v62; // r9
  signed __int64 v63; // rax
  __int64 v64; // r10
  signed __int64 v65; // rax
  signed __int64 v66; // rtt
  signed __int64 v67; // r8
  unsigned int v68; // r9d
  volatile signed __int64 *v69; // rdx
  volatile signed __int64 *v70; // rax
  __int64 v71; // r10
  signed __int64 v72; // rcx
  __int64 v73; // r11
  signed __int64 v74; // rax
  unsigned __int64 v75; // r9
  signed __int64 v76; // rbx
  signed __int64 v77; // rtt
  __int64 v78; // rsi
  __int16 v79; // di
  int v80; // r8d
  __int64 v81; // r11
  unsigned int v82; // edx
  unsigned int v83; // r10d
  int v84; // eax
  __int64 v85; // r9
  unsigned int v86; // r8d
  ULONG_PTR v87; // rcx
  __int64 v88; // rcx
  __int16 v89; // si
  ULONG_PTR v90; // rdx
  __int16 v91; // ax
  unsigned int v92; // r14d
  ULONG_PTR v93; // rbx
  ULONG_PTR v94; // rdi
  struct _KPROCESS *v95; // rdi
  __int64 v96; // rsi
  ULONG_PTR v97; // r15
  char v98; // r13
  unsigned __int64 *v99; // r12
  unsigned __int64 v100; // rsi
  unsigned __int64 v101; // rax
  unsigned __int64 *v102; // r8
  unsigned __int64 v103; // rdx
  ULONG_PTR v104; // r8
  unsigned __int64 v105; // r9
  signed __int64 v106; // rdx
  bool v107; // zf
  signed __int64 v108; // rax
  signed __int64 v109; // rsi
  bool v110; // cc
  signed __int64 v111; // rsi
  ULONG_PTR v112; // rsi
  unsigned __int8 v113; // r14
  int v114; // r10d
  unsigned int v115; // edx
  char *v116; // rcx
  ULONG_PTR v117; // rdi
  _WORD *v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r10
  signed __int64 v121; // rcx
  signed __int64 v122; // rdx
  signed __int32 v123; // eax
  signed __int32 v124; // ett
  int v125; // eax
  __int64 v126; // rax
  int v127; // eax
  __int64 v128; // rax
  __int64 v129; // rax
  unsigned __int64 v131; // rtt
  __int64 v132; // r8
  __int64 *v133; // r13
  ULONG_PTR v134; // r12
  unsigned __int64 *v135; // r14
  unsigned __int64 v136; // r15
  unsigned __int64 v137; // rax
  __int64 v138; // r8
  unsigned __int64 v139; // rdx
  ULONG_PTR v140; // r8
  unsigned __int64 v141; // r9
  signed __int64 v142; // rdx
  signed __int64 v143; // rax
  signed __int64 v144; // rsi
  signed __int64 BugCheckParameter4; // rsi
  unsigned __int64 v146; // rax
  volatile signed __int64 *v147; // rcx
  unsigned __int64 v148; // rtt
  __int64 v149; // r8
  __int64 v150; // rcx
  int v151; // eax
  volatile CCHAR v152; // al
  volatile CCHAR v153; // al
  volatile CCHAR v154; // al
  __int16 v155; // dx
  char *v156; // r11
  signed __int64 v157; // rax
  unsigned __int64 v158; // r10
  signed __int64 v159; // rbx
  signed __int64 v160; // rtt
  __int16 v161; // dx
  __int64 v162; // rdx
  __int64 v163; // rax
  __int64 v164; // r10
  __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rdx
  __int64 v168; // rdx
  __int64 v169; // r8
  _BYTE *v170; // r8
  int v171; // ecx
  _BYTE *j; // r8
  int v173; // edi
  _WORD *v174; // rbx
  ULONG_PTR v175; // rsi
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v177; // rdx
  unsigned __int64 v178; // r14
  _BYTE *v179; // rbx
  int v180; // [rsp+38h] [rbp-69h]
  signed __int64 v181; // [rsp+38h] [rbp-69h]
  __int64 *SchedulingGroup; // [rsp+38h] [rbp-69h]
  signed __int64 v183; // [rsp+38h] [rbp-69h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-61h]
  int BugCheckParameter3_4; // [rsp+44h] [rbp-5Dh]
  char v186; // [rsp+48h] [rbp-59h]
  char v187[3]; // [rsp+49h] [rbp-58h] BYREF
  int v188; // [rsp+4Ch] [rbp-55h] BYREF
  int v189; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v190[3]; // [rsp+54h] [rbp-4Dh] BYREF
  ULONG_PTR v191; // [rsp+60h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-39h] BYREF
  _DWORD v193[4]; // [rsp+80h] [rbp-21h]
  __int128 v194; // [rsp+90h] [rbp-11h]
  __int128 v195; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v196; // [rsp+B0h] [rbp+Fh]
  __int64 retaddr; // [rsp+100h] [rbp+5Fh]
  PVOID v198; // [rsp+108h] [rbp+67h] BYREF
  __int64 v199; // [rsp+118h] [rbp+77h] BYREF
  char v200; // [rsp+120h] [rbp+7Fh] BYREF

  v198 = P;
  v2 = (ULONG_PTR)P;
  if ( (unsigned __int64)P < 0xFFFF800000000000uLL || ((unsigned __int8)P & 0xF) != 0 )
    KeBugCheckEx(0xC2u, 0x99uLL, (ULONG_PTR)P, 0LL, 0LL);
  v194 = 0LL;
  v3 = 0;
  LOWORD(v194) = 259;
  BYTE2(v194) = 0;
  if ( (_WORD)P )
  {
    v4 = 0;
LABEL_5:
    v193[0] = 0x100000;
    v193[1] = 0x1000000;
    v5 = (unsigned int)v193[v4];
    v6 = (RtlpHpHeapGlobals ^ *(_QWORD *)((v2 & ~(v5 - 1)) + 0x10) ^ v2 & ~(v5 - 1)) - 192LL * v4 - 320;
    goto LABEL_6;
  }
  v129 = RtlCSparseBitmapBitmaskRead((__int64)&dword_140E68310, 2 * (((unsigned __int64)P - qword_140E68308) >> 20));
  if ( v129 )
  {
    v4 = v129 - 1;
    if ( v4 != 2 )
      goto LABEL_5;
  }
  v195 = 0LL;
  v196 = 0LL;
  RtlpHpVaMgrCtxQuery((__int64)&unk_140E68358, v2, (__int64)&v195);
  v6 = *(_QWORD *)v196;
LABEL_6:
  v199 = v6;
  if ( !v6 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, v2, 0LL);
  if ( ExpSpecialAllocations )
  {
    for ( i = qword_140EEEC40; (__int64)i < (__int64)qword_140EEEC60; ++i )
    {
      if ( v6 == *i )
      {
        _InterlockedDecrement(&ExpSpecialAllocations);
        v173 = MmDeterminePoolType(v2);
        v174 = (_WORD *)(v2 & 0xFFFFFFFFFFFFF000uLL);
        if ( byte_140FCDC28 )
        {
          if ( (unsigned __int64)v174 < 0xFFFF800000000000uLL )
            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v2 & 0xFFFFFFFFFFFFF000uLL, 0LL);
          if ( v174 + 2048 < v174 )
            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v2 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL);
          memset_0((void *)(KasaniShadow + ((unsigned __int64)(v174 + 0x400000000000LL) >> 3)), 0, 0x200uLL);
        }
        v175 = 4096 - (unsigned int)(v2 & 0xFFF);
        ExpFreePoolChecks(v2, *(_DWORD *)((v2 & 0xFFFFFFFFFFFFF000uLL) + 4), v175, 128, v2);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > (unsigned __int8)(((v173 & 0x100) == 0LL) + 1) )
          KeBugCheckEx(0xC1u, CurrentIrql, 0x100uLL, v2, 0x31uLL);
        v177 = *v174 & 0x1FFF;
        v178 = (v177 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v178 != v175 )
          KeBugCheckEx(0xC1u, v2, *v174 & 0x1FFF, v175, 0x21uLL);
        v170 = v174 + 8;
        v171 = HIWORD(*(_DWORD *)v174);
        if ( (*(_DWORD *)v174 & 0x4000) != 0 )
          v170 = v174 + 12;
        while ( (unsigned __int64)v170 < v2 )
        {
          if ( *v170 != (_BYTE)v171 )
            KeBugCheckEx(0xC1u, v2, (ULONG_PTR)v170, *(unsigned int *)v174, 0x23uLL);
          ++v170;
        }
        for ( j = (_BYTE *)(v177 + v2); (unsigned __int64)j < ((v2 + 4095) & 0xFFFFFFFFFFFFF000uLL); ++j )
        {
          if ( *j != (_BYTE)v171 )
            KeBugCheckEx(0xC1u, v2, (ULONG_PTR)j, *(unsigned int *)v174, 0x24uLL);
        }
        if ( (*(_DWORD *)v174 & 0x4000) != 0 )
          ViFreeTrackedPool(v2, v177);
        v78 = *(unsigned int *)((v2 & 0xFFFFFFFFFFFFF000uLL) + 4);
        v188 = 0;
        LOBYTE(v198) = 0;
        v200 = 0;
        if ( (_DWORD)v78 == PoolHitTag )
          __debugbreak();
        if ( (BYTE4(PerfGlobalGroupMask[0]) & 0x41) != 0
          && (int)ExpPoolFlagsToPoolType(v173, v173 & 0x10, (unsigned int)&v188, (unsigned int)&v198, (__int64)&v200) >= 0 )
        {
          v161 = v188;
          if ( (_BYTE)v198 )
          {
            v161 = v188 | 8;
            v188 |= 8u;
          }
          EtwTracePool(3618, v161, v78, v2, v178);
        }
        v79 = v173 & 0xFFFB;
        v80 = PoolTrackTableMask;
        v81 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
        v82 = PoolTrackTableMask & ((40543 * v78) ^ ((unsigned __int64)(40543 * v78) >> 32));
        v83 = v82;
        while ( 1 )
        {
          v84 = *(_DWORD *)(v81 + 80LL * v82);
          v85 = v81 + 80LL * v82;
          if ( v84 == (_DWORD)v78 )
            break;
          if ( v84 || (v127 = *(_DWORD *)(PoolTrackTable + 80LL * v82)) == 0 )
          {
            v82 = v80 & (v82 + 1);
            if ( v82 == v83 )
            {
              ExpRemovePoolTrackerExpansion(v78, v178, v79);
              goto LABEL_108;
            }
          }
          else
          {
            *(_DWORD *)v85 = v127;
            v128 = *(_QWORD *)(PoolTrackTable + 80LL * v82 + 72);
            if ( v128 )
              *(_QWORD *)(v85 + 72) = v128;
          }
        }
        ExpPoolTrackerReturnLimit((v79 & 0x100) == 0, v178, v81 + 80LL * v82);
LABEL_108:
        RtlpHpFreeHeap(v6, v2 & 0xFFFFFFFFFFFFF000uLL, v86);
        return;
      }
    }
  }
  if ( (v2 & 0xFFF) != 0 )
  {
    v7 = *(_BYTE *)(v2 - 13);
    v8 = v2 - 16;
    if ( (v7 & 8) != 0 )
    {
      v87 = v2 - 16;
      if ( (v7 & 4) != 0 )
        v87 = v8 - 16LL * (unsigned __int8)*(_WORD *)v8;
      v88 = ExpPoolQuotaCookie ^ *(_QWORD *)(v87 + 8) ^ v87;
      if ( v88 && v88 != -1 && (!ExpSpecialAllocations || !(unsigned int)ExIsSpecialPoolAddress(v2)) )
      {
        if ( byte_140E389A8[((v2 >> 39) & 0x1FF) - 256] == 5 )
          v89 = 256;
        else
          v89 = 64;
        v90 = v2 - 16;
        if ( (*(_BYTE *)(v8 + 3) & 4) != 0 )
          v90 = -16LL * (unsigned __int8)*(_WORD *)v8 + v8;
        v91 = *(_WORD *)(v90 + 2);
        v92 = *(_DWORD *)(v90 + 4);
        v93 = 16LL * (unsigned __int8)v91;
        if ( (v91 & 0x800) != 0 )
        {
          v94 = *(_QWORD *)(v90 + 8) ^ v90;
          *(_QWORD *)(v90 + 8) = ExpPoolQuotaCookie ^ v90;
          v95 = (struct _KPROCESS *)(ExpPoolQuotaCookie ^ v94);
          if ( v95 )
          {
            if ( v95 != (struct _KPROCESS *)-1LL )
            {
              if ( (unsigned __int64)v95 < 0xFFFF800000000000uLL || (v95->Header.Type & 0x7F) != 3 )
              {
                if ( v90 )
                  v3 = v92;
                KeBugCheckEx(0xC2u, 0xDuLL, v2, v3, (ULONG_PTR)v95);
              }
              v96 = v89 & 0x100;
              if ( v95 != PsInitialSystemProcess )
              {
                SchedulingGroup = (__int64 *)v95[1].SchedulingGroup;
                v97 = v96 != 0;
                v191 = v97 << 7;
                v98 = PspResourceFlags[8 * v97];
                v99 = (unsigned __int64 *)&SchedulingGroup[16 * v97];
                _m_prefetchw(v99);
                v100 = *v99;
                v101 = v99[8];
                if ( v99[10] )
                {
                  if ( v101 > v100 )
                  {
                    v102 = (unsigned __int64 *)&qword_140F05848[7 * v97];
                    v103 = *v102;
                    if ( v101 - v100 > *v102 )
                    {
                      if ( v103 > v93 )
                        v103 = v93;
                      v131 = v99[8];
                      if ( v131 == _InterlockedCompareExchange64((volatile signed __int64 *)v99 + 8, v101 - v103, v101)
                        && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 9, v103) + v103 > *v102 )
                      {
                        v132 = _InterlockedExchange64((volatile __int64 *)v99 + 9, 0LL);
                        if ( v132 )
                          PspReturnResourceQuota(v97, (__int64)v99, v132, 0);
                      }
                    }
                  }
                }
                v104 = v93;
                while ( 1 )
                {
                  do
                  {
                    v105 = v100;
                    if ( v93 < v100 )
                      v105 = v93;
                    v106 = 0LL;
                    if ( v93 < v100 )
                      v106 = v100 - v93;
                    v108 = _InterlockedCompareExchange64((volatile signed __int64 *)v99, v106, v100);
                    v107 = v100 == v108;
                    v100 = v108;
                  }
                  while ( !v107 );
                  v93 -= v105;
                  if ( !v93 )
                    break;
                  if ( SchedulingGroup == &PspSystemQuotaBlock )
                    KeBugCheckEx(0x21u, (ULONG_PTR)v95, v97, v104, v93);
                  SchedulingGroup = &PspSystemQuotaBlock;
                  v99 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v191);
                  _m_prefetchw((char *)&PspSystemQuotaBlock + v191);
                  v100 = *(__int64 *)((char *)&PspSystemQuotaBlock + v191);
                }
                if ( (v98 & 4) != 0 )
                  _InterlockedAdd64((volatile signed __int64 *)&v95[1].ThreadListHead.Blink + v97, -(__int64)v104);
                v2 = (ULONG_PTR)v198;
                v6 = v199;
              }
              if ( ObpTraceFlags )
                ObpPushStackInfo((__int64)&v95[-1].ExtendedFeatureDisableMask, 0, 1u, v92);
              v109 = _InterlockedExchangeAdd64(
                       (volatile signed __int64 *)&v95[-1].ExtendedFeatureDisableMask,
                       0xFFFFFFFFFFFFFFFFuLL);
              v110 = v109 <= 1;
              v111 = v109 - 1;
              if ( v110 )
              {
                if ( *(_QWORD *)&v95[-1].PrimaryGroup )
                  KeBugCheckEx(
                    0x18u,
                    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v95[-1].CpuPartitionList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v95 - 48) >> 8)],
                    (ULONG_PTR)v95,
                    3uLL,
                    *(_QWORD *)&v95[-1].PrimaryGroup);
                if ( v111 < 0 )
                  KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v95, 4uLL, v111);
                ObpDeferObjectDeletion((signed __int64)&v95[-1].ExtendedFeatureDisableMask);
              }
            }
          }
        }
        v8 = v2 - 16;
      }
    }
    if ( (*(_BYTE *)(v8 + 3) & 4) != 0 )
    {
      v8 += -16LL * (unsigned __int8)*(_WORD *)v8;
      *(_BYTE *)(v8 + 3) |= 4u;
    }
    v9 = *(_BYTE *)(v8 + 3);
    v10 = 256;
    v11 = *(_DWORD *)(v8 + 4);
    if ( (v9 & 1) == 0 )
      v10 = 128;
    v12 = v10 | 4;
    if ( (v9 & 0x20) == 0 )
      v12 = v10;
    v13 = v12 | 2;
    v180 = v13;
    if ( (*(_BYTE *)(v8 + 3) & 8) != 0 )
    {
      v13 |= 1u;
      v180 = v13;
    }
    if ( (v9 & 0xDE) != 0 )
    {
      v14 = v13 | 8;
      if ( (v9 & 4) == 0 )
        v14 = v13;
      v15 = v14 | 0x200;
      if ( v9 >= 0 )
        v15 = v14;
      v16 = v15 | 0x400;
      if ( (v9 & 0x40) == 0 )
        v16 = v15;
      v180 = v16;
      if ( (*(_BYTE *)(v8 + 3) & 8) == 0 )
      {
        v180 = v16;
        if ( (v9 & 0x10) != 0 )
          v180 = v16 | 0x20;
      }
    }
    v17 = v8 + 16;
    v18 = 16LL * (unsigned __int8)*(_WORD *)(v8 + 2);
    BugCheckParameter3 = v18;
  }
  else
  {
    v112 = 64LL;
    if ( byte_140E389A8[((v2 >> 39) & 0x1FF) - 256] == 5 )
      v112 = 256LL;
    v113 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v113, 2);
    if ( (BYTE6(PerfGlobalGroupMask[0]) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&ExpLargePoolTableLock);
      v123 = ExpLargePoolTableLock & 0x7FFFFFFF;
      while ( 1 )
      {
        v124 = v123;
        v123 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v123 + 1, v123);
        if ( v124 == v123 )
          break;
        if ( v123 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, v113);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, v113);
    }
    v114 = 1;
    v115 = (((40543 * (v2 >> 12)) >> 32) ^ (40543 * (v2 >> 12))) & (PoolBigPageTableSize - 1);
    while ( 1 )
    {
      v116 = (char *)PoolBigPageTable + 32 * v115;
      if ( *(_QWORD *)v116 == v2 )
        break;
      if ( ++v115 >= (unsigned __int64)PoolBigPageTableSize )
      {
        if ( !v114 )
          goto LABEL_154;
        v115 = 0;
        v114 = 0;
      }
    }
    if ( !v116 )
LABEL_154:
      KeBugCheckEx(0x19u, 0x22uLL, v2, v112, 0LL);
    v11 = *((_DWORD *)v116 + 2);
    v180 = (*((_DWORD *)v116 + 3) >> 8) & 0xFFF;
    BugCheckParameter3 = *((_QWORD *)v116 + 2);
    if ( (*((_DWORD *)v116 + 3) & 0x100) != 0 )
      v117 = v2 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v116 + 3);
    else
      v117 = -1LL;
    _InterlockedDecrement(&ExpPoolBigEntriesInUse);
    *((_QWORD *)v116 + 3) = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v116);
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
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v113);
    __writecr8(v113);
    if ( v117 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( (PEPROCESS)v117 != PsInitialSystemProcess )
      {
        v133 = *(__int64 **)(v117 + 760);
        v134 = (v180 & 0x100) != 0LL;
        v186 = PspResourceFlags[8 * v134];
        v191 = v134 << 7;
        v135 = (unsigned __int64 *)&v133[16 * v134];
        _m_prefetchw(v135);
        v136 = *v135;
        v137 = v135[8];
        if ( v135[10] )
        {
          v138 = 7 * v134;
          if ( v137 > v136 )
          {
            v139 = qword_140F05848[v138];
            if ( v137 - v136 > v139 )
            {
              if ( v139 > BugCheckParameter3 )
                v139 = BugCheckParameter3;
              v148 = v135[8];
              if ( v148 == _InterlockedCompareExchange64((volatile signed __int64 *)v135 + 8, v137 - v139, v137)
                && _InterlockedExchangeAdd64((volatile signed __int64 *)v135 + 9, v139) + v139 > qword_140F05848[v138] )
              {
                v149 = _InterlockedExchange64((volatile __int64 *)v135 + 9, 0LL);
                if ( v149 )
                  PspReturnResourceQuota(v134, (__int64)&v133[16 * v134], v149, 0);
              }
            }
          }
        }
        v140 = BugCheckParameter3;
        while ( 1 )
        {
          do
          {
            v141 = v136;
            if ( v140 < v136 )
              v141 = v140;
            v142 = 0LL;
            if ( v140 < v136 )
              v142 = v136 - v140;
            v143 = _InterlockedCompareExchange64((volatile signed __int64 *)v135, v142, v136);
            v107 = v136 == v143;
            v136 = v143;
          }
          while ( !v107 );
          v140 -= v141;
          if ( !v140 )
            break;
          if ( v133 == &PspSystemQuotaBlock )
            KeBugCheckEx(0x21u, v117, v134, BugCheckParameter3, v140);
          v133 = &PspSystemQuotaBlock;
          v135 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v191);
          _m_prefetchw((char *)&PspSystemQuotaBlock + v191);
          v136 = *(__int64 *)((char *)&PspSystemQuotaBlock + v191);
        }
        if ( (v186 & 4) != 0 )
          _InterlockedAdd64((volatile signed __int64 *)(v117 + 8 * v134 + 512), -(__int64)BugCheckParameter3);
        v2 = (ULONG_PTR)v198;
        v6 = v199;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v117 - 48, 0, 1u, v11);
      v144 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v117 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v110 = v144 <= 1;
      BugCheckParameter4 = v144 - 1;
      if ( v110 )
      {
        if ( *(_QWORD *)(v117 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v117 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v117 - 48) >> 8)],
            v117,
            3uLL,
            *(_QWORD *)(v117 - 40));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, v117, 4uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v117 - 48);
      }
    }
    v18 = BugCheckParameter3;
    v8 = v2;
    v17 = v2;
  }
  v19 = *(_WORD *)&KeNumberProcessorsGroup0[9];
  if ( (v19 & 0x207) != 0 )
  {
    if ( (v180 & 0xC0) != 0 && (v19 & 0x200) != 0 )
      ExpCheckForLookaside(v8, v18);
    v152 = KeNumberProcessorsGroup0[9];
    if ( (v152 & 1) != 0 )
      KeCheckForTimer(v8, BugCheckParameter3);
    v153 = KeNumberProcessorsGroup0[9];
    if ( (v153 & 4) != 0 )
      ExpCheckForResource((__int64 *)v8, BugCheckParameter3);
    v154 = KeNumberProcessorsGroup0[9];
    if ( (v154 & 2) != 0 )
      ExpCheckForWorker(v8, BugCheckParameter3);
  }
  v20 = KeNumberProcessorsGroup0[9];
  if ( (v20 & 0x10) != 0 )
    VfPtFreePoolNotification(v8, v11, BugCheckParameter3, v2);
  v189 = 0;
  LOBYTE(v199) = 0;
  v187[0] = 0;
  if ( v11 == PoolHitTag )
    __debugbreak();
  v21 = DWORD1(PerfGlobalGroupMask[0]);
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 0x41) != 0 )
  {
    v21 = ExpPoolFlagsToPoolType(v180, v180 & 0x10, (unsigned int)&v189, (unsigned int)&v199, (__int64)v187);
    if ( (int)v21 >= 0 )
    {
      v155 = v189;
      if ( (_BYTE)v199 )
      {
        v155 = v189 | 8;
        v189 |= 8u;
      }
      EtwTracePool(3618, v155, v11, v17, BugCheckParameter3);
    }
  }
  LODWORD(v21) = KeGetPcr()->Prcb.Number;
  v22 = PoolTrackTableMask;
  v23 = (__int64)*(&ExPoolTagTables + v21);
  v24 = PoolTrackTableMask & ((40543 * v11) ^ ((40543 * (unsigned __int64)v11) >> 32));
  v25 = v24;
  while ( 1 )
  {
    v26 = *(_DWORD *)(v23 + 80LL * v24);
    v27 = v23 + 80LL * v24;
    if ( v26 == v11 )
      break;
    if ( v26 || (v125 = *(_DWORD *)(PoolTrackTable + 80LL * v24)) == 0 )
    {
      v24 = v22 & (v24 + 1);
      if ( v24 == v25 )
      {
        LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
        LockHandle.LockQueue.Next = 0LL;
        *(_QWORD *)&LockHandle.OldIrql = 0LL;
        v28 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v28, 2);
        LockHandle.OldIrql = v28;
        if ( (BYTE6(PerfGlobalGroupMask[0]) & 0x21) == 0 || PopHibernateInProgress )
        {
          v29 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
          if ( v29 )
            KxWaitForLockOwnerShip((__int64)&LockHandle, v29);
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
            v146 = -(__int64)BugCheckParameter3;
            v147 = (volatile signed __int64 *)((char *)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number)
                                             + 80 * (unsigned int)(PoolTrackTableSize - 1));
            if ( (v180 & 0x100) != 0 )
            {
              _InterlockedIncrement64(v147 + 6);
              _InterlockedAdd64(v147 + 4, v146);
            }
            else
            {
              _InterlockedIncrement64(v147 + 3);
              _InterlockedAdd64(v147 + 1, v146);
            }
            goto LABEL_59;
          }
          v31 = (char *)PoolTrackTableExpansion + 80 * k;
          if ( *(_DWORD *)v31 == v11 )
            break;
          if ( !*(_DWORD *)v31 )
            goto LABEL_228;
        }
        if ( (v180 & 0x100) != 0 )
        {
          v33 = 0;
          v34 = (volatile signed __int64 *)(v31 + 32);
          v35 = (volatile signed __int64 *)(v31 + 48);
        }
        else
        {
          v33 = 1;
          v34 = (volatile signed __int64 *)(v31 + 8);
          v35 = (volatile signed __int64 *)(v31 + 24);
        }
        _InterlockedIncrement64(v35);
        v36 = _InterlockedExchangeAdd64(v34, -(__int64)BugCheckParameter3);
        if ( *((_QWORD *)v31 + 9) )
        {
          v156 = &v31[8 * v33];
          if ( (v156[56] & 1) == 0 )
          {
            v157 = *((_QWORD *)v156 + 7);
            v158 = (4 * BugCheckParameter3 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
            if ( v158 == 64 )
              v158 = 128LL;
            while ( 1 )
            {
              v159 = v158 + v36;
              if ( v36 >= v157 || v159 >= v157 )
                break;
              v160 = v157;
              v157 = _InterlockedCompareExchange64((volatile signed __int64 *)v156 + 7, v159, v157);
              if ( v160 == v157 )
              {
                v162 = *((_QWORD *)v31 + 9);
                v163 = v157 - v159;
                v164 = -v163;
                if ( v163 >= 0 )
                  v164 = v163;
                if ( *(_QWORD *)(v162 + 24LL * v33 + 16) || *(_QWORD *)(v162 + 24LL * v33 + 24) )
                  _InterlockedAdd64((volatile signed __int64 *)(v162 + 24LL * v33 + 32), -v164);
                break;
              }
              v36 = *v34;
            }
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_59;
      }
    }
    else
    {
      *(_DWORD *)v27 = v125;
      v126 = *(_QWORD *)(PoolTrackTable + 80LL * v24 + 72);
      if ( v126 )
        *(_QWORD *)(v27 + 72) = v126;
    }
  }
  if ( (v180 & 0x100) != 0 )
  {
    v68 = 0;
    v69 = (volatile signed __int64 *)(v27 + 32);
    v70 = (volatile signed __int64 *)(v27 + 48);
    v71 = 0LL;
  }
  else
  {
    v68 = 1;
    v69 = (volatile signed __int64 *)(v27 + 8);
    v70 = (volatile signed __int64 *)(v27 + 24);
    v71 = 24LL;
  }
  _InterlockedIncrement64(v70);
  v72 = _InterlockedExchangeAdd64(v69, -(__int64)BugCheckParameter3);
  if ( *(_QWORD *)(v27 + 72) )
  {
    v73 = v27 + 8LL * v68;
    if ( (*(_BYTE *)(v73 + 56) & 1) == 0 )
    {
      v74 = *(_QWORD *)(v73 + 56);
      v75 = (4 * BugCheckParameter3 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v75 == 64 )
        v75 = 128LL;
      while ( 1 )
      {
        v76 = v75 + v72;
        if ( v72 >= v74 || v76 >= v74 )
          break;
        v77 = v74;
        v74 = _InterlockedCompareExchange64((volatile signed __int64 *)(v73 + 56), v76, v74);
        if ( v77 == v74 )
        {
          v165 = v74 - v76;
          v166 = -v165;
          if ( v165 >= 0 )
            v166 = v165;
          v167 = v71 + *(_QWORD *)(v27 + 72);
          if ( *(_QWORD *)(v167 + 16) || *(_QWORD *)(v167 + 24) )
            _InterlockedAdd64((volatile signed __int64 *)(v167 + 32), -v166);
          break;
        }
        v72 = *v69;
      }
    }
  }
LABEL_59:
  if ( (v180 & 0x400) != 0 )
    ViFreeTrackedPool(v2, BugCheckParameter3);
  if ( byte_140FCDC28 )
  {
    if ( v8 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v8, 0LL);
    if ( (v8 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v8, 8uLL);
    if ( BugCheckParameter3 + v8 < v8 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v8, BugCheckParameter3);
    v179 = (_BYTE *)(KasaniShadow + ((v8 + 0x800000000000LL) >> 3));
    if ( BugCheckParameter3 >> 3 )
    {
      memset_0((void *)(KasaniShadow + ((v8 + 0x800000000000LL) >> 3)), 0, BugCheckParameter3 >> 3);
      v179 += BugCheckParameter3 >> 3;
    }
    if ( (BugCheckParameter3 & 7) != 0 )
      *v179 = BugCheckParameter3 & 7;
  }
  v37 = *(_QWORD *)(v6 + 56);
  if ( BugCheckParameter3 - 513 > 0xD7F
    || !v37
    || ((v150 = v37
              + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                + ((unsigned int)(BugCheckParameter3 + 15) >> 4))
                - 33
                + 1LL) << 6),
         ++*(_DWORD *)(v150 + 28),
         *(_WORD *)v150 >= *(_WORD *)(v150 + 16))
      ? (++*(_DWORD *)(v150 + 32), v151 = 0)
      : (RtlpInterlockedPushEntrySList((PSLIST_HEADER)v150, (PSLIST_ENTRY)v8), v151 = 1),
        !v151) )
  {
    if ( (_WORD)v8 )
    {
      v38 = v6 + 320;
    }
    else
    {
      v39 = RtlCSparseBitmapBitmaskRead((__int64)&dword_140E68310, 2 * ((v8 - qword_140E68308) >> 20));
      if ( !v39 || (_DWORD)v39 == 3 )
      {
        RtlpHpLargeFree(v6, v8);
        return;
      }
      v38 = v6 + 320;
      if ( (_DWORD)v39 == 2 )
        v38 = v6 + 512;
    }
    v40 = *(_QWORD *)v38;
    v41 = v8 & *(_QWORD *)v38;
    if ( !(RtlpHpHeapGlobals ^ v38 ^ *(_QWORD *)(v41 + 0x10) ^ v41) )
    {
      v42 = *(_BYTE *)(v38 + 8);
      v43 = v41 + 32LL * ((unsigned int)(v8 - v41) >> v42);
      v44 = -32LL * *(unsigned __int8 *)(v43 + 26) + v43;
      v45 = *(_BYTE *)(v44 + 24);
      v46 = v41 + ((__int64)(v44 - v41) >> 5 << v42);
      if ( (v46 == v8) + v45 == 11 )
      {
        v47 = *(ULONG_PTR **)(v38 + 24);
        v48 = (unsigned __int64)*(unsigned __int16 *)(v46 + 44) << 6;
        v49 = (((unsigned int)v8
              - ((_DWORD)v46
               + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v46 + 40) ^ (unsigned int)(v46 >> 12)) >> 16)))
             * (unsigned __int64)*(unsigned int *)((char *)v47 + v48 + 72)) >> 32;
        if ( (_DWORD)v8
           - ((_DWORD)v46
            + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v46 + 40) ^ (unsigned int)(v46 >> 12)) >> 16)) != (unsigned __int16)(qword_140E28208 ^ *(_WORD *)(v46 + 40) ^ (v46 >> 12)) * ((((unsigned int)v8 - ((_DWORD)v46 + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v46 + 40) ^ (unsigned int)(v46 >> 12)) >> 16))) * (unsigned __int64)*(unsigned int *)((char *)v47 + v48 + 72)) >> 32) )
          return;
        v50 = (*((_DWORD *)v47 + 19) >> 13) & 0x3FFFF;
        _BitScanReverse(&v51, v50);
        v52 = (*((_DWORD *)v47 + 19) >> 4) & 0x1FF;
        v53 = 1 << v51;
        v54 = v51 - 2;
        v190[1] = v54;
        v55 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v54) + 8LL * (v50 ^ v53) + 8)
                        + 8 * v52);
        if ( !v55 )
          LOWORD(v55) = RtlpHpLfhThreadDataInitializeSet((__int64)v47);
        if ( (_WORD)v55 != *(_WORD *)(v46 + 46) || *(_BYTE *)(v46 + 22) == 1 )
        {
          v56 = v49;
          v57 = *(_QWORD *)(v46 + 8 * (v49 >> 6) + 64);
          if ( _bittest64(&v57, v49 & 0x3F) )
          {
            v58 = *(_QWORD *)(v46 + 16);
            do
            {
              BugCheckParameter3_4 = HIDWORD(v58);
              v181 = v58;
              if ( BYTE6(v58) == 1 )
                BYTE6(v181) = 2;
              if ( v8 )
              {
                v59 = v47[10];
                *(_WORD *)v8 = v58;
                LOWORD(v181) = v49 + 1;
                *(_DWORD *)(v8 + 8) = v8 ^ HIDWORD(v59) ^ __ROL4__(*(_DWORD *)v8 ^ v59, v58);
              }
              WORD1(v181) = WORD1(v58) + 1;
              v60 = (unsigned __int64)*(unsigned __int16 *)(v46 + 44) << 6;
              v61 = v58;
              v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v46 + 16), v181, v58);
            }
            while ( v61 != v58 );
            if ( !*((_BYTE *)v47 + v60 + 92) )
            {
              *((_BYTE *)v47 + v60 + 92) = 1;
              if ( !(BYTE1(**(_QWORD **)(*v47 + 56)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
                RtlpHpEnvCompactionSchedule(*(_QWORD **)(*v47 + 56));
            }
            if ( BYTE2(BugCheckParameter3_4) == 1 )
            {
              v62 = &v47[8 * (unsigned __int16)BugCheckParameter3_4];
              _m_prefetchw(v62 + 1);
              v63 = v62[1];
              v64 = *(_QWORD *)(v46 + 24);
              *(_QWORD *)(v46 + 24) = v64 & 0xFFF | (v63 - (v63 & 0xFFF));
              v66 = v63;
              v65 = _InterlockedCompareExchange64((volatile signed __int64 *)v62 + 1, v63 & 0xFFF | v46, v63);
              if ( v66 != v65 )
              {
                do
                {
                  v67 = v65;
                  *(_QWORD *)(v46 + 24) = v64 ^ (v65 ^ v64) & 0xFFFFFFFFFFFFF000uLL;
                  v65 = _InterlockedCompareExchange64((volatile signed __int64 *)v62 + 1, v46 | v65 & 0xFFF, v65);
                }
                while ( v65 != v67 );
              }
            }
            return;
          }
        }
        else
        {
          v168 = *(_QWORD *)(v46 + 8 * (v49 >> 6) + 64);
          v169 = __ROL8__(-2LL, v49 & 0x3F);
          v56 = v49;
          *(_QWORD *)(v46 + 8 * (v49 >> 6) + 64) = v168 & v169;
          if ( (~v169 & v168) != 0 )
          {
            ++*(_WORD *)(v46 + 32);
            return;
          }
        }
        RtlpLogHeapFailure(17, *v47, v8, v46, v56, 0LL);
        return;
      }
      v190[0] = 0;
      v118 = (_WORD *)((v40 & v44) + ((v44 - (v40 & v44)) >> 5 << v42));
      if ( (v45 & 3) == 3 )
      {
        if ( (_WORD *)v8 == v118 )
          goto LABEL_184;
        if ( v45 == 15 )
        {
          if ( v8 > (unsigned __int64)v118 )
          {
            if ( (unsigned int)RtlpHpVsContextFree(*(_QWORD *)(v38 + 32), v118, v8, v190) )
            {
              v119 = *(_QWORD *)(v38 + 24);
              if ( v190[0] < *(unsigned __int16 *)(v119 + 68) )
              {
                v120 = v119
                     + 8LL
                     * ((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                      + ((unsigned __int64)(v190[0] + 15) >> 4))
                      - 1);
                do
                {
                  v183 = *(_QWORD *)(v120 + 448);
                  v121 = v183;
                  v122 = v183;
                  if ( (v183 & 1) == 0 )
                    break;
                  if ( WORD1(v183) > 1u )
                  {
                    --WORD1(v183);
                    v122 = v183;
                  }
                }
                while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v120 + 448), v122, v121) != v121 );
              }
            }
            return;
          }
LABEL_184:
          RtlpHpSegPageRangeShrink(v38, v44, v44);
          return;
        }
      }
    }
    RtlpLogHeapFailure(9, *(_QWORD *)(v38 + 56), v8, 0LL, 0LL, 0LL);
  }
}
