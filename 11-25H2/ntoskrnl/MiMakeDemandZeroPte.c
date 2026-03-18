/*
 * XREFs of MiMakeDemandZeroPte @ 0x140385190
 * Callers:
 *     MiConvertContiguousPages @ 0x140224560 (MiConvertContiguousPages.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     MiLinkPoolCommitChain @ 0x140238250 (MiLinkPoolCommitChain.c)
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiZeroFault @ 0x1402429D0 (MiZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiInitializePfn @ 0x14024CD40 (MiInitializePfn.c)
 *     MiResolvePageTablePage @ 0x1402AE990 (MiResolvePageTablePage.c)
 *     MiMakeHyperRangeAccessible @ 0x1402B94E0 (MiMakeHyperRangeAccessible.c)
 *     MiReturnPhysicalPoolPages @ 0x1402C4578 (MiReturnPhysicalPoolPages.c)
 *     MiWriteSharedDemandZeroPte @ 0x1402CFFF4 (MiWriteSharedDemandZeroPte.c)
 *     MiInitializePfnForOtherProcess @ 0x1402D0D28 (MiInitializePfnForOtherProcess.c)
 *     MiWriteUselessChildPte @ 0x1402D0FFC (MiWriteUselessChildPte.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiAddMappedPtes @ 0x140323A90 (MiAddMappedPtes.c)
 *     MiInsertCachedPte @ 0x140328E50 (MiInsertCachedPte.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x1403292C0 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 *     MiCoalesceFreeSmallPages @ 0x140345720 (MiCoalesceFreeSmallPages.c)
 *     MiStopPageAccessor @ 0x140347A84 (MiStopPageAccessor.c)
 *     MiUpdatePfnProtection @ 0x14037F744 (MiUpdatePfnProtection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiDecommitInitializePacket @ 0x14038308C (MiDecommitInitializePacket.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiRevertPfnActivePageTable @ 0x1403858EC (MiRevertPfnActivePageTable.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiDeleteSystemPageTable @ 0x14038A330 (MiDeleteSystemPageTable.c)
 *     MiUnmapFrameBuffer @ 0x140391878 (MiUnmapFrameBuffer.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiInitializeEnclavePfn @ 0x1403FD254 (MiInitializeEnclavePfn.c)
 *     MiIsPdeOrAboveAccessible @ 0x14040AE10 (MiIsPdeOrAboveAccessible.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiInitializeMdlBatchPages @ 0x140416570 (MiInitializeMdlBatchPages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14041753C (MiInitializeLargeMdlLeafPfns.c)
 *     MiMakeHyperPteDemandZero @ 0x14045BD40 (MiMakeHyperPteDemandZero.c)
 *     MiSetPfnOwnedAndActive @ 0x14045C318 (MiSetPfnOwnedAndActive.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiInPageSingleKernelStack @ 0x14046BDAC (MiInPageSingleKernelStack.c)
 *     MiReleaseLargePdeMappings @ 0x140492BE8 (MiReleaseLargePdeMappings.c)
 *     MiDeletePerSessionProtos @ 0x1404967DC (MiDeletePerSessionProtos.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiFreeLargePages @ 0x1404BB340 (MiFreeLargePages.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C29AC (MiUpdatePrivateDemandZeroView.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiMakeGlobalSubsectionPte @ 0x1404D68D8 (MiMakeGlobalSubsectionPte.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D9074 (MiMakeSystemLeavesNonZero.c)
 *     MiClearDriverTablePtes @ 0x1404EE8A0 (MiClearDriverTablePtes.c)
 *     MiMakeLargePageTable @ 0x1404F59B4 (MiMakeLargePageTable.c)
 *     MiLockDriverPageRange @ 0x14065F370 (MiLockDriverPageRange.c)
 *     MiCreatePfnTemplate @ 0x1406609D0 (MiCreatePfnTemplate.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406675D8 (MiUpdateLargePageSectionPfns.c)
 *     MiAddExpansionNonPagedPool @ 0x14067123C (MiAddExpansionNonPagedPool.c)
 *     MiCommitHotPatchTable @ 0x140671714 (MiCommitHotPatchTable.c)
 *     MmMapDriverTablePage @ 0x14067213C (MmMapDriverTablePage.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 *     MiInitializePrototypePtes @ 0x14093A344 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x140940EBC (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x1409429D8 (MiParseImageSectionHeaders.c)
 *     MiPrefetchDriverPages @ 0x1409F3B5C (MiPrefetchDriverPages.c)
 *     MiChargeSegmentCommit @ 0x1409FC7C8 (MiChargeSegmentCommit.c)
 *     MmFreeNonCachedMemory @ 0x140A97F60 (MmFreeNonCachedMemory.c)
 *     MiInitializeSharedUserData @ 0x140C3D30C (MiInitializeSharedUserData.c)
 *     MiAllocateDummyPage @ 0x140C3D9A8 (MiAllocateDummyPage.c)
 *     MiInitializeDummyPages @ 0x140C3E5B0 (MiInitializeDummyPages.c)
 *     MxCreatePfn @ 0x140C414B4 (MxCreatePfn.c)
 *     MxInsertEnclaveBootPages @ 0x140C46EE4 (MxInsertEnclaveBootPages.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140C5413C (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  __int64 result; // rax

  result = 32LL * (a1 & 0x1F);
  if ( qword_140E2D940 )
  {
    if ( (qword_140E2D940 & result) != 0 )
      return result | 0x10;
    else
      return qword_140E2D940 | result;
  }
  return result;
}
