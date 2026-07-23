/*
 * XREFs of MiMakeValidPte @ 0x140212550
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1402077F0 (MiLinkPoolCommitChain.c)
 *     MiUnlinkStandbyPfn @ 0x140210560 (MiUnlinkStandbyPfn.c)
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x140212844 (MiSetProtectionOnTransitionPte.c)
 *     MiCompleteRestrictedImageFault @ 0x140213BC4 (MiCompleteRestrictedImageFault.c)
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiMakeSystemCachePteValid @ 0x14021C440 (MiMakeSystemCachePteValid.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14024BCF0 (MiFillPhysicalPages.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiMapWithLargePages @ 0x14026BB00 (MiMapWithLargePages.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiInitializeSelfmap @ 0x1402EF544 (MiInitializeSelfmap.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiComputeCombineHash @ 0x140335700 (MiComputeCombineHash.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiCreateSharedZeroPages @ 0x140342A48 (MiCreateSharedZeroPages.c)
 *     MiReplacePageOfProtoPool @ 0x140348A30 (MiReplacePageOfProtoPool.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiCopyTopLevelMappings @ 0x14038D368 (MiCopyTopLevelMappings.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiInsertPhysicalPteMapping @ 0x1403910B8 (MiInsertPhysicalPteMapping.c)
 *     MiScrubPage @ 0x1403EBDB0 (MiScrubPage.c)
 *     MiMapArbitraryPage @ 0x1403F0E90 (MiMapArbitraryPage.c)
 *     MiMapSinglePage @ 0x1403F14B0 (MiMapSinglePage.c)
 *     MiReplacePageTablePage @ 0x1403F2DE8 (MiReplacePageTablePage.c)
 *     MmProtectMdlSystemAddress @ 0x1404063A0 (MmProtectMdlSystemAddress.c)
 *     MiMapPageFileHash @ 0x140425FA8 (MiMapPageFileHash.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14043A5B4 (MiUpdateImagePfnImportRelocations.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MiMapMemoryDumpMdl @ 0x14049665C (MiMapMemoryDumpMdl.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x1404A345C (MiFinishLastForkPageTable.c)
 *     MiWriteAwePtes @ 0x1404B4FD0 (MiWriteAwePtes.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 *     MiInsertLargeVadMapping @ 0x1404CE7F4 (MiInsertLargeVadMapping.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 *     MiMapKernelScp @ 0x1404F0048 (MiMapKernelScp.c)
 *     MiMakeLargePageTable @ 0x1404F5A48 (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x14066CDA4 (MiInitializeNewPfns.c)
 *     MiPfnRangeIsZero @ 0x14066F480 (MiPfnRangeIsZero.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 *     MiUpdateLargePageSectionPfns @ 0x140674258 (MiUpdateLargePageSectionPfns.c)
 *     MiInitializeSlowPte @ 0x1406794B8 (MiInitializeSlowPte.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 *     MiEnableLargeSubsection @ 0x14067BC54 (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x14067BED4 (MiFillPageWithImageExtentContents.c)
 *     MmMapDriverTablePage @ 0x14067EB4C (MmMapDriverTablePage.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1406803F0 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x140681358 (MmReadProcessPageTables.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140681AE8 (MiPrepareEnclaveMetadataPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 *     MiCopyMemoryPagefileData @ 0x14068F450 (MiCopyMemoryPagefileData.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E8490 (MiProtectLargeKernelHalRange.c)
 *     MmAllocateNonCachedMemory @ 0x1407EB1A0 (MmAllocateNonCachedMemory.c)
 *     MiInitializeShadowPageTable @ 0x1407F6B9C (MiInitializeShadowPageTable.c)
 *     MiCreateHardwareEnclave @ 0x1407F7910 (MiCreateHardwareEnclave.c)
 *     MiCaptureSparsePages @ 0x1407FAE6C (MiCaptureSparsePages.c)
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x14093B6F8 (MiRelocateImagePfn.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 *     MiAllocateProcessShadow @ 0x140A51A70 (MiAllocateProcessShadow.c)
 *     MiUpdateForkMaps @ 0x140A5F5F0 (MiUpdateForkMaps.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 *     MmMapProtectedKernelPage @ 0x140A9D1DC (MmMapProtectedKernelPage.c)
 *     MiInitializeSharedUserData @ 0x140C50724 (MiInitializeSharedUserData.c)
 *     MiInitializeDummyPages @ 0x140C51970 (MiInitializeDummyPages.c)
 *     MiMapDummyPages @ 0x140C51DFC (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C522E4 (MiProtectSharedUserPage.c)
 *     MxCopyPage @ 0x140C54604 (MxCopyPage.c)
 *     MxMapVa @ 0x140C552D4 (MxMapVa.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
 *     MiFillGapPtes @ 0x140C56F20 (MiFillGapPtes.c)
 *     MiInitializeTbFlush @ 0x140C5C78C (MiInitializeTbFlush.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x1402127C8 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax

  v4 = a3 & 0x1F;
  v5 = (a2 & 0xFFFFFFFFFFLL) << 12;
  v6 = v5 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = v5 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x121;
    v8 = a3 & 0x4000000;
  }
  else
  {
    if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v6 = v5 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
      }
      else if ( (a3 & 0x4000000) == 0 )
      {
        v6 = v5 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v4] & 0x7FF0000000000E7FLL | 0x21;
      }
      if ( (unsigned int)MiUserPdeOrAbove() )
        v6 |= 4uLL;
    }
    v7 = (__int64)(a1 << 25) >> 16;
    v8 = a3 & 0x4000000;
    if ( (a3 & 0x4000000) != 0 && v7 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v7 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v7 = (__int64)(v7 << 25) >> 16;
      }
      while ( v7 >= 0xFFFFF68000000000uLL );
    }
    v9 = v6 | 4;
    if ( v7 > 0x7FFFFFFEFFFFLL )
      v9 = v6;
    if ( v7 < 0xFFFF800000000000uLL )
    {
      v10 = HIBYTE(word_140E2EEC4);
    }
    else if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v7 < qword_140E2F3C0 || v7 > qword_140E2F3D0 )
        v10 = (unsigned __int8)word_140E2EEC4;
      else
        v10 = HIBYTE(word_140E2EEC4);
    }
    else
    {
      v10 = 0;
    }
    v11 = v9 | 0x100;
    if ( !v10 )
      v11 = v9;
  }
  v12 = v11 | 0x42;
  if ( (v4 & 5) != 4 || a3 >= 0 )
    v12 = v11;
  v13 = v12 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (a3 & 0x40000000) == 0 )
    v13 = v12;
  if ( (a3 & 0x20000000) != 0 )
    v13 = ((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ v13) & 0xFFFFFFFFFFFFFEFFuLL;
  v14 = v13 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v14 = v13;
  v15 = v14 | 0x80;
  if ( !v8 )
    v15 = v14;
  return v15 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
