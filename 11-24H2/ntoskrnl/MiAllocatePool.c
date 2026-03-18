/*
 * XREFs of MiAllocatePool @ 0x1402ACA70
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     MiCreatePrototypePtes @ 0x140261F58 (MiCreatePrototypePtes.c)
 *     MiGetWorkingSetInfo @ 0x140267168 (MiGetWorkingSetInfo.c)
 *     MmProbeAndLockSelectedPages @ 0x140286070 (MmProbeAndLockSelectedPages.c)
 *     MiViewMayContainPage @ 0x1402BA550 (MiViewMayContainPage.c)
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiGetInPageSupportBlock @ 0x1402E42D0 (MiGetInPageSupportBlock.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiAllocateCombineBlock @ 0x1402FA538 (MiAllocateCombineBlock.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x140367B8C (MiAllocateWorkingSetSwapSupport.c)
 *     MiMappedPageWriter @ 0x140369760 (MiMappedPageWriter.c)
 *     MiBuildMappedCluster @ 0x14036ABB8 (MiBuildMappedCluster.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x140397070 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MiExpandSystemCache @ 0x1403A7378 (MiExpandSystemCache.c)
 *     MiInitializeDpcGang @ 0x1403A80A0 (MiInitializeDpcGang.c)
 *     MiCreateCloneChain @ 0x1403CCE38 (MiCreateCloneChain.c)
 *     MiShowBadMapper @ 0x1403D0830 (MiShowBadMapper.c)
 *     MiIssueSegmentDereferenceWork @ 0x1403F7920 (MiIssueSegmentDereferenceWork.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 *     MiObtainMdlCharges @ 0x1404128E0 (MiObtainMdlCharges.c)
 *     MiInitializeBestCandidatesContext @ 0x140414BC4 (MiInitializeBestCandidatesContext.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MmCreateMdl @ 0x14045AB70 (MmCreateMdl.c)
 *     MiExpandFlushMdl @ 0x140465CB0 (MiExpandFlushMdl.c)
 *     MiAllocateModWriterEntry @ 0x14046EBF8 (MiAllocateModWriterEntry.c)
 *     MiAllocateInPageSupportBlock @ 0x14046F504 (MiAllocateInPageSupportBlock.c)
 *     MiMakePageBad @ 0x14047C9DC (MiMakePageBad.c)
 *     MiPfIssueCoalescedSupport @ 0x14047E5A4 (MiPfIssueCoalescedSupport.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14047E990 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiAllocateAccessLog @ 0x140485ED0 (MiAllocateAccessLog.c)
 *     MiCreatePageChains @ 0x140493E84 (MiCreatePageChains.c)
 *     MiGetUltraMdlContext @ 0x14049878C (MiGetUltraMdlContext.c)
 *     MiObtainRotateProtectionRanges @ 0x140499870 (MiObtainRotateProtectionRanges.c)
 *     MiAllocateSlabEntry @ 0x1404A4378 (MiAllocateSlabEntry.c)
 *     MiCloneCaptureVadCommit @ 0x1404AA908 (MiCloneCaptureVadCommit.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1404B02A0 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404D6A8C (MiReplenishTransitionPageHeatList.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiCreateKernelStackNode @ 0x1404F9A78 (MiCreateKernelStackNode.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     MiGetFileOnlyRanges @ 0x14066D370 (MiGetFileOnlyRanges.c)
 *     MiHotRemoveHugeRange @ 0x140670540 (MiHotRemoveHugeRange.c)
 *     MiInitializeHugePfnDatabase @ 0x140670B90 (MiInitializeHugePfnDatabase.c)
 *     MiMarkHugePfnBad @ 0x140670EEC (MiMarkHugePfnBad.c)
 *     MiReturnMdlExcess @ 0x140671F10 (MiReturnMdlExcess.c)
 *     MiNotifyUserOfLostData @ 0x140672438 (MiNotifyUserOfLostData.c)
 *     MiCheckLostBadPageNode @ 0x140673650 (MiCheckLostBadPageNode.c)
 *     MiEnumeratePartitionBadPages @ 0x140673800 (MiEnumeratePartitionBadPages.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x1406739AC (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140673AD0 (MiGetListOfPendingBadPages.c)
 *     MiRemoveBadPages @ 0x14067406C (MiRemoveBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140678930 (MiInitializeWorkingSetManagerParameters.c)
 *     MiLocateSharedPageViews @ 0x1406790E0 (MiLocateSharedPageViews.c)
 *     MiFormCopyExtents @ 0x14067B054 (MiFormCopyExtents.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067B474 (MiMarkFileOnlyPfnBad.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067C118 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmManageFaultRange @ 0x140680564 (MmManageFaultRange.c)
 *     MmGetEnclaveModuleList @ 0x140680BD8 (MmGetEnclaveModuleList.c)
 *     MiCombineWorkingSet @ 0x140685248 (MiCombineWorkingSet.c)
 *     MmAllocateSecureKernelPages @ 0x140688AC4 (MmAllocateSecureKernelPages.c)
 *     MiAddRangeToPartitionTree @ 0x14068993C (MiAddRangeToPartitionTree.c)
 *     MiPreserveBootDecisions @ 0x14068FB78 (MiPreserveBootDecisions.c)
 *     MiInsertPteTracker @ 0x1406913D4 (MiInsertPteTracker.c)
 *     MiCreateProcessLargePageCacheAnchor @ 0x140692234 (MiCreateProcessLargePageCacheAnchor.c)
 *     MiAllocateProcessExtension @ 0x1406FC05C (MiAllocateProcessExtension.c)
 *     MiFormDllRegistryPath @ 0x1407E7448 (MiFormDllRegistryPath.c)
 *     MiFormFullImageName @ 0x1407E75D0 (MiFormFullImageName.c)
 *     MiInitializeLockedPagesTracking @ 0x1407E79B0 (MiInitializeLockedPagesTracking.c)
 *     MiPrepareDriverPatchState @ 0x1407E7E2C (MiPrepareDriverPatchState.c)
 *     MiAllocateMemoryBlock @ 0x1407E8F90 (MiAllocateMemoryBlock.c)
 *     MiConvertInitialMemoryBlock @ 0x1407E917C (MiConvertInitialMemoryBlock.c)
 *     MiCreateNodeLists @ 0x1407E9290 (MiCreateNodeLists.c)
 *     MiDescribePageRun @ 0x1407E93FC (MiDescribePageRun.c)
 *     MiAddRun @ 0x1407EAD74 (MiAddRun.c)
 *     MmEnumerateBadPages @ 0x1407ED198 (MmEnumerateBadPages.c)
 *     MmSetPermanentCacheAttribute @ 0x1407ED460 (MmSetPermanentCacheAttribute.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1407EDF2C (MiCreatePageFileSpaceBitmaps.c)
 *     MiCreatePagefile @ 0x1407EDFA0 (MiCreatePagefile.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     MiAllocateEntireImageFileExtents @ 0x1407EFC4C (MiAllocateEntireImageFileExtents.c)
 *     MiComputeIdealFirstSubsection @ 0x1407EFE7C (MiComputeIdealFirstSubsection.c)
 *     MiConvertRunsToPages @ 0x1407EFF38 (MiConvertRunsToPages.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x1407F0830 (MiConstructNonRetpolineImageLoadRecord.c)
 *     MiAllocateHotPatchRecord @ 0x1407F0B60 (MiAllocateHotPatchRecord.c)
 *     MiAllocateSecureImageActivePatch @ 0x1407F0C00 (MiAllocateSecureImageActivePatch.c)
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiCaptureHotPatchInfo @ 0x1407F2308 (MiCaptureHotPatchInfo.c)
 *     MiGetAllRegisteredPatches @ 0x1407F280C (MiGetAllRegisteredPatches.c)
 *     MiGetProcessHotPatchContext @ 0x1407F2AD8 (MiGetProcessHotPatchContext.c)
 *     MiIdentifyImageDiscardablePages @ 0x1407F2EE0 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x1407F2FE8 (MiIdentifyPatchImageDataPages.c)
 *     MiPrepareToHotPatchImage @ 0x1407F5540 (MiPrepareToHotPatchImage.c)
 *     MiProcessPatchImageCfg @ 0x1407F5CBC (MiProcessPatchImageCfg.c)
 *     MiAllocateEnclaveVad @ 0x1407F6D40 (MiAllocateEnclaveVad.c)
 *     NtCreateEnclave @ 0x1407F7960 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407F7D50 (NtInitializeEnclave.c)
 *     MmLogSystemShareablePfnInfo @ 0x1407F8094 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateAweInfo @ 0x1407F81B8 (MiAllocateAweInfo.c)
 *     MiCreateAweInfoBitMap @ 0x1407F9410 (MiCreateAweInfoBitMap.c)
 *     NtMapUserPhysicalPages @ 0x1407FA100 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FA3B0 (NtMapUserPhysicalPagesScatter.c)
 *     MiExpandPartitionIds @ 0x1407FBF28 (MiExpandPartitionIds.c)
 *     MiMakePartitionMemoryBlock @ 0x1407FC61C (MiMakePartitionMemoryBlock.c)
 *     MmCreatePartition @ 0x1407FC90C (MmCreatePartition.c)
 *     MmManagePartitionCharges @ 0x1407FCA7C (MmManagePartitionCharges.c)
 *     MmManagePartitionNodeInformation @ 0x1407FD160 (MmManagePartitionNodeInformation.c)
 *     MmStoreRegister @ 0x1407FD3A8 (MmStoreRegister.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x1407FD7C8 (MiReferenceNonPagedMemoryProcessList.c)
 *     MmScrubMemory @ 0x1407FDC70 (MmScrubMemory.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FDE8C (MiCreatePagefileMemoryExtents.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FE3D4 (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x1407FE898 (MiQuerySpecialPurposeMemoryInformation.c)
 *     MiMakeSpaceForConductorListZeroThread @ 0x1407FF6D0 (MiMakeSpaceForConductorListZeroThread.c)
 *     MiCreateMemoryEventSD @ 0x1407FFC40 (MiCreateMemoryEventSD.c)
 *     MiAcceptNewAccelerators @ 0x140800064 (MiAcceptNewAccelerators.c)
 *     MmGetFileNameForAddress @ 0x140838768 (MmGetFileNameForAddress.c)
 *     NtLoadEnclaveData @ 0x1408D9D70 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408DA8E0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408DABA0 (MiLoadDataIntoVsmEnclave.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x1408E4628 (MmLinkJobProcess.c)
 *     MiCreateRetpolineRelocationInformation @ 0x1408F3248 (MiCreateRetpolineRelocationInformation.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1408F3470 (MiCaptureRetpolineRelocationTables.c)
 *     MiCaptureImageCfgContext @ 0x1408F4A80 (MiCaptureImageCfgContext.c)
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     MiCreateFixupRecord @ 0x1408F62E4 (MiCreateFixupRecord.c)
 *     MiCompressRelocations @ 0x1408F7520 (MiCompressRelocations.c)
 *     MiCreatePlaceholderStorage @ 0x1408F8210 (MiCreatePlaceholderStorage.c)
 *     MiAllocateVad @ 0x1408F82D8 (MiAllocateVad.c)
 *     MiCopyToCfgBitMap @ 0x1408FA0F0 (MiCopyToCfgBitMap.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     MiCreateDataFileMap @ 0x140943D3C (MiCreateDataFileMap.c)
 *     MiBuildImageControlArea @ 0x1409451C0 (MiBuildImageControlArea.c)
 *     MiCreateMdl @ 0x140945DF8 (MiCreateMdl.c)
 *     MiExtendSection @ 0x1409463BC (MiExtendSection.c)
 *     MmPrefetchPagesEx @ 0x140955430 (MmPrefetchPagesEx.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 *     MiGetCcAccessLog @ 0x140956DF4 (MiGetCcAccessLog.c)
 *     MiRevertRelocatedImagePfn @ 0x140957834 (MiRevertRelocatedImagePfn.c)
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140967B50 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryBadAddresses @ 0x1409876D4 (MmQueryBadAddresses.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140987B34 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyVirtualMemory @ 0x1409A9D80 (MiCopyVirtualMemory.c)
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409C3660 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateVadEventBitmap @ 0x1409C3A04 (MiCreateVadEventBitmap.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     NtSetInformationVirtualMemory @ 0x1409E8FB0 (NtSetInformationVirtualMemory.c)
 *     MiProcessCrcList @ 0x1409F2910 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x1409F2EE0 (MiAllocateCrcList.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140A180B4 (MiSnapThunk.c)
 *     MiAllocateImportList @ 0x140A184A4 (MiAllocateImportList.c)
 *     MiAllocateTempLoaderEntry @ 0x140A18B30 (MiAllocateTempLoaderEntry.c)
 *     MiAllocateSplitVads @ 0x140A245C0 (MiAllocateSplitVads.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     MiQuerySingleLoadedPatch @ 0x140A32534 (MiQuerySingleLoadedPatch.c)
 *     MiInSwapStore @ 0x140A4CDC4 (MiInSwapStore.c)
 *     MiAllocatePerSessionProtos @ 0x140A4FFC0 (MiAllocatePerSessionProtos.c)
 *     MiBuildNewCloneDescriptor @ 0x140A54400 (MiBuildNewCloneDescriptor.c)
 *     MmGetChannelInformation @ 0x140A5A0F8 (MmGetChannelInformation.c)
 *     MmAllocateMappingAddressEx @ 0x140A5B620 (MmAllocateMappingAddressEx.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A64CA8 (MiReplaceRotateWithDemandZero.c)
 *     MiCreateRotateView @ 0x140A680A8 (MiCreateRotateView.c)
 *     MmGetNodeChannelRanges @ 0x140A6BAE4 (MmGetNodeChannelRanges.c)
 *     MiCreateLargePageVad @ 0x140A82E50 (MiCreateLargePageVad.c)
 *     MmGetFileNameForSection @ 0x140A830BC (MmGetFileNameForSection.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A877D0 (MiCaptureRetpolineImportInfo.c)
 *     MiFindLargePageMemory @ 0x140A92A7C (MiFindLargePageMemory.c)
 *     MiConstructLoaderEntry @ 0x140A92FE4 (MiConstructLoaderEntry.c)
 *     MiLoadHotPatchForUserSid @ 0x140A9F6C0 (MiLoadHotPatchForUserSid.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
 *     MiQueryLoadedPatches @ 0x140AA6168 (MiQueryLoadedPatches.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AAB2DC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiQueryProcessActivePatches @ 0x140AAE3A8 (MiQueryProcessActivePatches.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AB2D28 (MiGetPhysicalMemoryRanges.c)
 *     MiAllocateUserPhysicalRanges @ 0x140AB5888 (MiAllocateUserPhysicalRanges.c)
 *     MiRememberUnloadedDriver @ 0x140AB5BE4 (MiRememberUnloadedDriver.c)
 *     MiReserveDriverPtes @ 0x140AB636C (MiReserveDriverPtes.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB861C (MiCreateFileOnlyImageFixupList.c)
 *     MiGenerateSystemImageNames @ 0x140ABF64C (MiGenerateSystemImageNames.c)
 *     MiCacheImageSymbols @ 0x140ABFD60 (MiCacheImageSymbols.c)
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140AE66AC (MmInitializeHandBuiltProcess.c)
 *     MiCreateUserPhysicalView @ 0x140AE76D8 (MiCreateUserPhysicalView.c)
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140B6236C (MiZeroAllPageFiles.c)
 *     MiInitializeNumaRangesPermanent @ 0x140C4D9E8 (MiInitializeNumaRangesPermanent.c)
 *     MiInitializeSharedUserData @ 0x140C4E594 (MiInitializeSharedUserData.c)
 *     MmFreeLoaderBlock @ 0x140C4E7EC (MmFreeLoaderBlock.c)
 *     MiInitializeDriverPtes @ 0x140C50A98 (MiInitializeDriverPtes.c)
 *     MiReserveBootDriverPtes @ 0x140C50D50 (MiReserveBootDriverPtes.c)
 *     MiSectionInitialization @ 0x140C53724 (MiSectionInitialization.c)
 *     MiInitializeSystemSpaceMap @ 0x140C54128 (MiInitializeSystemSpaceMap.c)
 *     MmInitializeMemoryLimits @ 0x140C564F0 (MmInitializeMemoryLimits.c)
 *     MiInitializeChannelRangesPermanent @ 0x140C577C4 (MiInitializeChannelRangesPermanent.c)
 *     MiCreateEnclaveRegions @ 0x140C57EDC (MiCreateEnclaveRegions.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C584A0 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeRelocations @ 0x140C58D1C (MiInitializeRelocations.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140C59D18 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeCacheFlushing @ 0x140C5A2D8 (MiInitializeCacheFlushing.c)
 *     MiBuildImportsForBootDrivers @ 0x140C5A924 (MiBuildImportsForBootDrivers.c)
 *     MiInitializeSystemImageRegion @ 0x140C5B698 (MiInitializeSystemImageRegion.c)
 *     MiCreateTopLevelUltraMappings @ 0x140C5C384 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeUltraSpace @ 0x140C5C4D0 (MiInitializeUltraSpace.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402ACCF0 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B72670 (ExpAllocatePoolWithQuotaTag.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall MiAllocatePool(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // r9
  int v5; // ecx
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
