/*
 * XREFs of MiAllocatePool @ 0x140277450
 * Callers:
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     MiGetWorkingSetInfo @ 0x14025E748 (MiGetWorkingSetInfo.c)
 *     MiCreateCloneChain @ 0x140267008 (MiCreateCloneChain.c)
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiExpandSystemCache @ 0x14026B918 (MiExpandSystemCache.c)
 *     MiInitializeDpcGang @ 0x14026F77C (MiInitializeDpcGang.c)
 *     MiExpandFlushMdl @ 0x140272448 (MiExpandFlushMdl.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiCreatePrototypePtes @ 0x1402751A4 (MiCreatePrototypePtes.c)
 *     MiShowBadMapper @ 0x140275730 (MiShowBadMapper.c)
 *     MiMappedPageWriter @ 0x1402EB500 (MiMappedPageWriter.c)
 *     MiBuildMappedCluster @ 0x1402EC958 (MiBuildMappedCluster.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiAllocateCombineBlock @ 0x140345874 (MiAllocateCombineBlock.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1403529EC (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MiViewMayContainPage @ 0x140361C90 (MiViewMayContainPage.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiObtainMdlCharges @ 0x140394D20 (MiObtainMdlCharges.c)
 *     MiInitializeBestCandidatesContext @ 0x1403973B0 (MiInitializeBestCandidatesContext.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1403C4190 (MiAllocateWorkingSetSwapSupport.c)
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 *     MiPfIssueCoalescedSupport @ 0x1403DAF90 (MiPfIssueCoalescedSupport.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiGetInPageSupportBlock @ 0x1403DC710 (MiGetInPageSupportBlock.c)
 *     MiIssueSegmentDereferenceWork @ 0x1403ED890 (MiIssueSegmentDereferenceWork.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     MmCreateMdl @ 0x14044FFA0 (MmCreateMdl.c)
 *     MiAllocateModWriterEntry @ 0x14046930C (MiAllocateModWriterEntry.c)
 *     MiAllocateInPageSupportBlock @ 0x140469C14 (MiAllocateInPageSupportBlock.c)
 *     MiMakePageBad @ 0x140477B64 (MiMakePageBad.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140479890 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiAllocateAccessLog @ 0x1404814C0 (MiAllocateAccessLog.c)
 *     MiCreatePageChains @ 0x14048E910 (MiCreatePageChains.c)
 *     MiGetUltraMdlContext @ 0x1404930EC (MiGetUltraMdlContext.c)
 *     MiObtainRotateProtectionRanges @ 0x140494200 (MiObtainRotateProtectionRanges.c)
 *     MiAllocateSlabEntry @ 0x14049F108 (MiAllocateSlabEntry.c)
 *     MiCloneCaptureVadCommit @ 0x1404A4B08 (MiCloneCaptureVadCommit.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1404AAB30 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404CFEDC (MiReplenishTransitionPageHeatList.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     MiCreateKernelStackNode @ 0x1404F7358 (MiCreateKernelStackNode.c)
 *     MiPageBootRegistry @ 0x14066A6F8 (MiPageBootRegistry.c)
 *     MiGetFileOnlyRanges @ 0x14066E544 (MiGetFileOnlyRanges.c)
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 *     MiInitializeHugePfnDatabase @ 0x140671D60 (MiInitializeHugePfnDatabase.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     MiReturnMdlExcess @ 0x1406730E0 (MiReturnMdlExcess.c)
 *     MiNotifyUserOfLostData @ 0x140673608 (MiNotifyUserOfLostData.c)
 *     MiCheckLostBadPageNode @ 0x140674820 (MiCheckLostBadPageNode.c)
 *     MiEnumeratePartitionBadPages @ 0x1406749D0 (MiEnumeratePartitionBadPages.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x140674B7C (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140674CA0 (MiGetListOfPendingBadPages.c)
 *     MiRemoveBadPages @ 0x14067523C (MiRemoveBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140679B10 (MiInitializeWorkingSetManagerParameters.c)
 *     MiLocateSharedPageViews @ 0x14067A2C0 (MiLocateSharedPageViews.c)
 *     MiFormCopyExtents @ 0x14067C234 (MiFormCopyExtents.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067C654 (MiMarkFileOnlyPfnBad.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067D2F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmManageFaultRange @ 0x140681764 (MmManageFaultRange.c)
 *     MmGetEnclaveModuleList @ 0x140681DD8 (MmGetEnclaveModuleList.c)
 *     MiCombineWorkingSet @ 0x140686378 (MiCombineWorkingSet.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 *     MiAddRangeToPartitionTree @ 0x14068AA6C (MiAddRangeToPartitionTree.c)
 *     MiPreserveBootDecisions @ 0x140690C48 (MiPreserveBootDecisions.c)
 *     MiInsertPteTracker @ 0x1406924A4 (MiInsertPteTracker.c)
 *     MiCreateProcessLargePageCacheAnchor @ 0x140693304 (MiCreateProcessLargePageCacheAnchor.c)
 *     MiAllocateProcessExtension @ 0x1406F9C9C (MiAllocateProcessExtension.c)
 *     MiFormDllRegistryPath @ 0x1407E7A18 (MiFormDllRegistryPath.c)
 *     MiFormFullImageName @ 0x1407E7BA0 (MiFormFullImageName.c)
 *     MiInitializeLockedPagesTracking @ 0x1407E7F80 (MiInitializeLockedPagesTracking.c)
 *     MiPrepareDriverPatchState @ 0x1407E83FC (MiPrepareDriverPatchState.c)
 *     MiAllocateMemoryBlock @ 0x1407E9560 (MiAllocateMemoryBlock.c)
 *     MiConvertInitialMemoryBlock @ 0x1407E974C (MiConvertInitialMemoryBlock.c)
 *     MiCreateNodeLists @ 0x1407E9860 (MiCreateNodeLists.c)
 *     MiDescribePageRun @ 0x1407E99CC (MiDescribePageRun.c)
 *     MiAddRun @ 0x1407EB344 (MiAddRun.c)
 *     MmEnumerateBadPages @ 0x1407ED768 (MmEnumerateBadPages.c)
 *     MmSetPermanentCacheAttribute @ 0x1407EDA30 (MmSetPermanentCacheAttribute.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1407EE4FC (MiCreatePageFileSpaceBitmaps.c)
 *     MiCreatePagefile @ 0x1407EE570 (MiCreatePagefile.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     MiAllocateEntireImageFileExtents @ 0x1407F021C (MiAllocateEntireImageFileExtents.c)
 *     MiComputeIdealFirstSubsection @ 0x1407F044C (MiComputeIdealFirstSubsection.c)
 *     MiConvertRunsToPages @ 0x1407F0508 (MiConvertRunsToPages.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x1407F0E00 (MiConstructNonRetpolineImageLoadRecord.c)
 *     MiAllocateHotPatchRecord @ 0x1407F1130 (MiAllocateHotPatchRecord.c)
 *     MiAllocateSecureImageActivePatch @ 0x1407F11D0 (MiAllocateSecureImageActivePatch.c)
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiCaptureHotPatchInfo @ 0x1407F28D8 (MiCaptureHotPatchInfo.c)
 *     MiGetAllRegisteredPatches @ 0x1407F2DDC (MiGetAllRegisteredPatches.c)
 *     MiGetProcessHotPatchContext @ 0x1407F30A8 (MiGetProcessHotPatchContext.c)
 *     MiIdentifyImageDiscardablePages @ 0x1407F3514 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x1407F361C (MiIdentifyPatchImageDataPages.c)
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 *     MiProcessPatchImageCfg @ 0x1407F63AC (MiProcessPatchImageCfg.c)
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     NtCreateEnclave @ 0x1407F80D0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407F84C0 (NtInitializeEnclave.c)
 *     MmLogSystemShareablePfnInfo @ 0x1407F8804 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateAweInfo @ 0x1407F8928 (MiAllocateAweInfo.c)
 *     MiCreateAweInfoBitMap @ 0x1407F9B80 (MiCreateAweInfoBitMap.c)
 *     NtMapUserPhysicalPages @ 0x1407FA870 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FAB20 (NtMapUserPhysicalPagesScatter.c)
 *     MiExpandPartitionIds @ 0x1407FC698 (MiExpandPartitionIds.c)
 *     MiMakePartitionMemoryBlock @ 0x1407FCD8C (MiMakePartitionMemoryBlock.c)
 *     MmCreatePartition @ 0x1407FD07C (MmCreatePartition.c)
 *     MmManagePartitionCharges @ 0x1407FD1EC (MmManagePartitionCharges.c)
 *     MmManagePartitionNodeInformation @ 0x1407FD8D0 (MmManagePartitionNodeInformation.c)
 *     MmStoreRegister @ 0x1407FDB18 (MmStoreRegister.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x1407FDF38 (MiReferenceNonPagedMemoryProcessList.c)
 *     MmScrubMemory @ 0x1407FE3E0 (MmScrubMemory.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FE5FC (MiCreatePagefileMemoryExtents.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FEB44 (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x1407FF008 (MiQuerySpecialPurposeMemoryInformation.c)
 *     MiMakeSpaceForConductorListZeroThread @ 0x1407FFE14 (MiMakeSpaceForConductorListZeroThread.c)
 *     MiCreateMemoryEventSD @ 0x140800380 (MiCreateMemoryEventSD.c)
 *     MiAcceptNewAccelerators @ 0x1408007A4 (MiAcceptNewAccelerators.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiCreatePlaceholderStorage @ 0x1408DC630 (MiCreatePlaceholderStorage.c)
 *     MiAllocateVad @ 0x1408DC6F8 (MiAllocateVad.c)
 *     MiCreateVadEventBitmap @ 0x1408DC8AC (MiCreateVadEventBitmap.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiAllocateSplitVads @ 0x140919FC8 (MiAllocateSplitVads.c)
 *     MmLinkJobProcess @ 0x14091A3E0 (MmLinkJobProcess.c)
 *     MiCopyToCfgBitMap @ 0x14091C9CC (MiCopyToCfgBitMap.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 *     MiGetCcAccessLog @ 0x14093A7A4 (MiGetCcAccessLog.c)
 *     MiRevertRelocatedImagePfn @ 0x14093B22C (MiRevertRelocatedImagePfn.c)
 *     MiCreateRetpolineRelocationInformation @ 0x14093C258 (MiCreateRetpolineRelocationInformation.c)
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 *     MiCaptureImageCfgContext @ 0x14093D928 (MiCaptureImageCfgContext.c)
 *     MiCaptureRetpolineRelocationTables @ 0x14093F254 (MiCaptureRetpolineRelocationTables.c)
 *     MiCompressRelocations @ 0x14094CB50 (MiCompressRelocations.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409505E0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryBadAddresses @ 0x14096FEB8 (MmQueryBadAddresses.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140970318 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCreateFixupRecord @ 0x1409771A4 (MiCreateFixupRecord.c)
 *     MiExtendSection @ 0x14098A4D8 (MiExtendSection.c)
 *     MiCreateDataFileMap @ 0x14098A990 (MiCreateDataFileMap.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 *     MiBuildImageControlArea @ 0x14098F030 (MiBuildImageControlArea.c)
 *     MiCreateMdl @ 0x14098FB34 (MiCreateMdl.c)
 *     MiCopyVirtualMemory @ 0x140993190 (MiCopyVirtualMemory.c)
 *     NtSetInformationVirtualMemory @ 0x1409E3F70 (NtSetInformationVirtualMemory.c)
 *     MiProcessCrcList @ 0x1409E6C70 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x1409E7240 (MiAllocateCrcList.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140A11224 (MiSnapThunk.c)
 *     MiAllocateImportList @ 0x140A11614 (MiAllocateImportList.c)
 *     MiAllocateTempLoaderEntry @ 0x140A11CA0 (MiAllocateTempLoaderEntry.c)
 *     MmGetFileNameForAddress @ 0x140A15B1C (MmGetFileNameForAddress.c)
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiQuerySingleLoadedPatch @ 0x140A2654C (MiQuerySingleLoadedPatch.c)
 *     NtLoadEnclaveData @ 0x140A29800 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A2A370 (MiLoadSectionIntoVsmEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A2A630 (MiLoadDataIntoVsmEnclave.c)
 *     MiInSwapStore @ 0x140A43954 (MiInSwapStore.c)
 *     MiAllocatePerSessionProtos @ 0x140A46D70 (MiAllocatePerSessionProtos.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x140A4C34C (MiBuildNewCloneDescriptor.c)
 *     MmGetChannelInformation @ 0x140A519B8 (MmGetChannelInformation.c)
 *     MmAllocateMappingAddressEx @ 0x140A531F0 (MmAllocateMappingAddressEx.c)
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A5D478 (MiReplaceRotateWithDemandZero.c)
 *     MiCreateRotateView @ 0x140A615A8 (MiCreateRotateView.c)
 *     MmGetNodeChannelRanges @ 0x140A65044 (MmGetNodeChannelRanges.c)
 *     MiCreateLargePageVad @ 0x140A7D970 (MiCreateLargePageVad.c)
 *     MmGetFileNameForSection @ 0x140A7DBDC (MmGetFileNameForSection.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A83CC0 (MiCaptureRetpolineImportInfo.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 *     MiConstructLoaderEntry @ 0x140A8F794 (MiConstructLoaderEntry.c)
 *     MiLoadHotPatchForUserSid @ 0x140A9AA90 (MiLoadHotPatchForUserSid.c)
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 *     MiQueryLoadedPatches @ 0x140AA11D8 (MiQueryLoadedPatches.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AA650C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiQueryProcessActivePatches @ 0x140AA9284 (MiQueryProcessActivePatches.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AADC98 (MiGetPhysicalMemoryRanges.c)
 *     MiAllocateUserPhysicalRanges @ 0x140AAFD18 (MiAllocateUserPhysicalRanges.c)
 *     MiRememberUnloadedDriver @ 0x140AAFEAC (MiRememberUnloadedDriver.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB2AE0 (MiCreateFileOnlyImageFixupList.c)
 *     MiGenerateSystemImageNames @ 0x140ABA72C (MiGenerateSystemImageNames.c)
 *     MiCacheImageSymbols @ 0x140ABAE40 (MiCacheImageSymbols.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140AE7F8C (MmInitializeHandBuiltProcess.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 *     MiCreateUserPhysicalView @ 0x140AEA2A8 (MiCreateUserPhysicalView.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140B6443C (MiZeroAllPageFiles.c)
 *     MiInitializeNumaRangesPermanent @ 0x140C4FB84 (MiInitializeNumaRangesPermanent.c)
 *     MiInitializeSharedUserData @ 0x140C50724 (MiInitializeSharedUserData.c)
 *     MmFreeLoaderBlock @ 0x140C5097C (MmFreeLoaderBlock.c)
 *     MiInitializeDriverPtes @ 0x140C52C28 (MiInitializeDriverPtes.c)
 *     MiReserveBootDriverPtes @ 0x140C52EE0 (MiReserveBootDriverPtes.c)
 *     MiSectionInitialization @ 0x140C558B4 (MiSectionInitialization.c)
 *     MiInitializeSystemSpaceMap @ 0x140C562B8 (MiInitializeSystemSpaceMap.c)
 *     MmInitializeMemoryLimits @ 0x140C58680 (MmInitializeMemoryLimits.c)
 *     MiInitializeChannelRangesPermanent @ 0x140C59954 (MiInitializeChannelRangesPermanent.c)
 *     MiCreateEnclaveRegions @ 0x140C5A06C (MiCreateEnclaveRegions.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C5A630 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeRelocations @ 0x140C5AEAC (MiInitializeRelocations.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140C5BEA8 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeCacheFlushing @ 0x140C5C468 (MiInitializeCacheFlushing.c)
 *     MiBuildImportsForBootDrivers @ 0x140C5CAB4 (MiBuildImportsForBootDrivers.c)
 *     MiInitializeSystemImageRegion @ 0x140C5D828 (MiInitializeSystemImageRegion.c)
 *     MiCreateTopLevelUltraMappings @ 0x140C5E514 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeUltraSpace @ 0x140C5E660 (MiInitializeUltraSpace.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402776D0 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B74210 (ExpAllocatePoolWithQuotaTag.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall MiAllocatePool(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // r9
  NTSTATUS v5; // ecx
  __int64 result; // rax
  ULONG v7; // r10d
  volatile CCHAR v8; // al
  __int64 v9[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = BugCheckParameter3;
  *(_OWORD *)v9 = 0LL;
  v4 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v4) = v4 | 0x80000000;
  if ( (BugCheckParameter3 & 0x1C0) == 0
    || (((BugCheckParameter3 & 0x1C0) - 1) & BugCheckParameter3 & 0x1C0) != 0
    || (BugCheckParameter3 & 0xFFFFF000) != 0
    || (BugCheckParameter3 & 0x800) != 0 )
  {
    v5 = -1073741811;
    result = 0LL;
    goto LABEL_4;
  }
  v7 = a3 & 0x7FFFFFFF;
  if ( (a3 & 0x7FFFFFFF) == 0 )
    v7 = 811884866;
  v8 = KeNumberProcessorsGroup0[9];
  if ( (v8 & 8) != 0 )
  {
    if ( (BugCheckParameter3 & 0x210) == 0 )
    {
      LODWORD(v9[1]) = 32;
      v9[0] = v9[0] & 0xFFFFFFFFFFFFFF00uLL | 1;
      return VfHandlePoolAlloc(
               NonPagedPool,
               BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL,
               a2,
               v7,
               LowPoolPriority,
               (__int64)v9,
               1,
               retaddr);
    }
    v3 = BugCheckParameter3 & 0xFFFFFFFFFFFFFDFFuLL;
    if ( (BugCheckParameter3 & 0x10) != 0 && (MmVerifierData & 1) != 0 )
      v3 = BugCheckParameter3 & 0xFFFFFFFEFFFFFDFFuLL | 0x100000000LL;
  }
  if ( (v3 & 1) != 0 )
    result = ExpAllocatePoolWithQuotaTag(v3);
  else
    result = ExpAllocatePoolWithTagFromNode(v3, a2, v7, v4);
  if ( !result )
  {
    v5 = -1073741670;
LABEL_4:
    if ( (v3 & 0x20) != 0 )
      RtlRaiseStatus(v5);
  }
  return result;
}
