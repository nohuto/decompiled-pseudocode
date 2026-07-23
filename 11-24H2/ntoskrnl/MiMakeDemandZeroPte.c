/*
 * XREFs of MiMakeDemandZeroPte @ 0x140392C40
 * Callers:
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 *     MiLinkPoolCommitChain @ 0x1402077F0 (MiLinkPoolCommitChain.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MiUpdatePfnProtection @ 0x140212AA8 (MiUpdatePfnProtection.c)
 *     MiOutPageSingleKernelStack @ 0x140215F40 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiResolvePageTablePage @ 0x140239FB0 (MiResolvePageTablePage.c)
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 *     MiInitializePfn @ 0x14024B260 (MiInitializePfn.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     MiFreeLargePages @ 0x1402666C0 (MiFreeLargePages.c)
 *     MiWriteSharedDemandZeroPte @ 0x14026A080 (MiWriteSharedDemandZeroPte.c)
 *     MiDecommitInitializePacket @ 0x1402995B0 (MiDecommitInitializePacket.c)
 *     MiInsertCachedPte @ 0x14029E0E0 (MiInsertCachedPte.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14029E560 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiZeroFault @ 0x1403091D0 (MiZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiReturnPhysicalPoolPages @ 0x14034B914 (MiReturnPhysicalPoolPages.c)
 *     MiUnmapFrameBuffer @ 0x14038E570 (MiUnmapFrameBuffer.c)
 *     MiInitializePfnForOtherProcess @ 0x14038FF2C (MiInitializePfnForOtherProcess.c)
 *     MiWriteUselessChildPte @ 0x140391668 (MiWriteUselessChildPte.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 *     MiAddMappedPtes @ 0x140391F90 (MiAddMappedPtes.c)
 *     MiRevertPfnActivePageTable @ 0x140392B5C (MiRevertPfnActivePageTable.c)
 *     MiConvertContiguousPages @ 0x1403932BC (MiConvertContiguousPages.c)
 *     MiInitializeMdlBatchPages @ 0x140393678 (MiInitializeMdlBatchPages.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiIsPdeOrAboveAccessible @ 0x1403F4C00 (MiIsPdeOrAboveAccessible.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiMakeHyperPteDemandZero @ 0x140450460 (MiMakeHyperPteDemandZero.c)
 *     MiSetPfnOwnedAndActive @ 0x140450A30 (MiSetPfnOwnedAndActive.c)
 *     MiInitializeEnclavePfn @ 0x14046DD14 (MiInitializeEnclavePfn.c)
 *     MiInPageSingleKernelStack @ 0x14047BE44 (MiInPageSingleKernelStack.c)
 *     MiDeleteSystemPageTable @ 0x1404811C0 (MiDeleteSystemPageTable.c)
 *     MiReleaseLargePdeMappings @ 0x14048CC64 (MiReleaseLargePdeMappings.c)
 *     MiDeletePerSessionProtos @ 0x140490370 (MiDeletePerSessionProtos.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1404A6B00 (MiInitializeLargeMdlLeafPfns.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404BC78C (MiUpdatePrivateDemandZeroView.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiMakeGlobalSubsectionPte @ 0x1404CF418 (MiMakeGlobalSubsectionPte.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D1540 (MiMakeSystemLeavesNonZero.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 *     MiMakeLargePageTable @ 0x1404F5A48 (MiMakeLargePageTable.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MiCreatePfnTemplate @ 0x14066D6E0 (MiCreatePfnTemplate.c)
 *     MiUpdateLargePageSectionPfns @ 0x140674258 (MiUpdateLargePageSectionPfns.c)
 *     MiAddExpansionNonPagedPool @ 0x14067DBDC (MiAddExpansionNonPagedPool.c)
 *     MiCommitHotPatchTable @ 0x14067E0B4 (MiCommitHotPatchTable.c)
 *     MmMapDriverTablePage @ 0x14067EB4C (MmMapDriverTablePage.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 *     MiChargeSegmentCommit @ 0x140974EF8 (MiChargeSegmentCommit.c)
 *     MiInitializePrototypePtes @ 0x140989EA4 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x14098F030 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x14098F6FC (MiParseImageSectionHeaders.c)
 *     MiPrefetchDriverPages @ 0x1409E63EC (MiPrefetchDriverPages.c)
 *     MmFreeNonCachedMemory @ 0x140A99000 (MmFreeNonCachedMemory.c)
 *     MiInitializeSharedUserData @ 0x140C50724 (MiInitializeSharedUserData.c)
 *     MiAllocateDummyPage @ 0x140C50D68 (MiAllocateDummyPage.c)
 *     MiInitializeDummyPages @ 0x140C51970 (MiInitializeDummyPages.c)
 *     MxCreatePfn @ 0x140C54874 (MxCreatePfn.c)
 *     MxInsertEnclaveBootPages @ 0x140C5A354 (MxInsertEnclaveBootPages.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140C675CC (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  __int64 result; // rax

  result = 32LL * (a1 & 0x1F);
  if ( qword_140E2DCC0 )
  {
    if ( (qword_140E2DCC0 & result) != 0 )
      return result | 0x10;
    else
      return qword_140E2DCC0 | result;
  }
  return result;
}
