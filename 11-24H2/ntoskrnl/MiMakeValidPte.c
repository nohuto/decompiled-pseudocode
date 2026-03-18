/*
 * XREFs of MiMakeValidPte @ 0x1402383C0
 * Callers:
 *     MiComputeCombineHash @ 0x14020C3A0 (MiComputeCombineHash.c)
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14021EFA0 (MiFillPhysicalPages.c)
 *     MiUnlinkStandbyPfn @ 0x1402363D0 (MiUnlinkStandbyPfn.c)
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402386B4 (MiSetProtectionOnTransitionPte.c)
 *     MiCompleteRestrictedImageFault @ 0x140238F64 (MiCompleteRestrictedImageFault.c)
 *     MiLinkPoolCommitChain @ 0x14023F6A0 (MiLinkPoolCommitChain.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1402C89A4 (MiUpdateImagePfnImportRelocations.c)
 *     MiReplacePageOfProtoPool @ 0x1402E73F0 (MiReplacePageOfProtoPool.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiCreateSharedZeroPages @ 0x1402EED80 (MiCreateSharedZeroPages.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiReplacePageTablePage @ 0x140311CD4 (MiReplacePageTablePage.c)
 *     MiMapArbitraryPage @ 0x140313BE8 (MiMapArbitraryPage.c)
 *     MiMapSinglePage @ 0x140314164 (MiMapSinglePage.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiCopyTopLevelMappings @ 0x140393D4C (MiCopyTopLevelMappings.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiMapWithLargePages @ 0x1403A7068 (MiMapWithLargePages.c)
 *     MiInsertPhysicalPteMapping @ 0x1403CFC94 (MiInsertPhysicalPteMapping.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiInsertLargeVadMapping @ 0x1403F3B88 (MiInsertLargeVadMapping.c)
 *     MiScrubPage @ 0x1403F5970 (MiScrubPage.c)
 *     MmProtectMdlSystemAddress @ 0x14040E150 (MmProtectMdlSystemAddress.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiMakeSystemCachePteValid @ 0x14046F7A8 (MiMakeSystemCachePteValid.c)
 *     MiAddPagesToEnclave @ 0x140473CEC (MiAddPagesToEnclave.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     MiMapPageFileHash @ 0x140486688 (MiMapPageFileHash.c)
 *     MiMapMemoryDumpMdl @ 0x14049BB2C (MiMapMemoryDumpMdl.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     MiInitializeSelfmap @ 0x1404A6DD0 (MiInitializeSelfmap.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiFinishLastForkPageTable @ 0x1404A903C (MiFinishLastForkPageTable.c)
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x1404CACEC (MiProtectEnclavePages.c)
 *     MiMapMdlCommon @ 0x1404F0304 (MiMapMdlCommon.c)
 *     MiMapKernelScp @ 0x1404F25A8 (MiMapKernelScp.c)
 *     MiMakeLargePageTable @ 0x1404F8168 (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x14066BBD4 (MiInitializeNewPfns.c)
 *     MiPfnRangeIsZero @ 0x14066E2AC (MiPfnRangeIsZero.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
 *     MiUpdateLargePageSectionPfns @ 0x140673088 (MiUpdateLargePageSectionPfns.c)
 *     MiInitializeSlowPte @ 0x14067832C (MiInitializeSlowPte.c)
 *     MiInitializeDynamicBitmap @ 0x1406794B8 (MiInitializeDynamicBitmap.c)
 *     MiEnableLargeSubsection @ 0x14067AA74 (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x14067ACF4 (MiFillPageWithImageExtentContents.c)
 *     MmMapDriverTablePage @ 0x14067D94C (MmMapDriverTablePage.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14067F1F0 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x140680158 (MmReadProcessPageTables.c)
 *     MiPrepareEnclaveMetadataPage @ 0x1406808E8 (MiPrepareEnclaveMetadataPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiScrubLargePage @ 0x14068DA04 (MiScrubLargePage.c)
 *     MiCopyMemoryPagefileData @ 0x14068E320 (MiCopyMemoryPagefileData.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E7EC0 (MiProtectLargeKernelHalRange.c)
 *     MmAllocateNonCachedMemory @ 0x1407EABD0 (MmAllocateNonCachedMemory.c)
 *     MiInitializeShadowPageTable @ 0x1407F6428 (MiInitializeShadowPageTable.c)
 *     MiCreateHardwareEnclave @ 0x1407F719C (MiCreateHardwareEnclave.c)
 *     MiCaptureSparsePages @ 0x1407FA6FC (MiCaptureSparsePages.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiValidateImagePfn @ 0x140957464 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1409587A8 (MiRelocateImagePfn.c)
 *     MiAllocateProcessShadow @ 0x140A5A1B0 (MiAllocateProcessShadow.c)
 *     MiUpdateForkMaps @ 0x140A6680C (MiUpdateForkMaps.c)
 *     MmAllocateIndependentPagesEx @ 0x140A88F6C (MmAllocateIndependentPagesEx.c)
 *     MmMapProtectedKernelPage @ 0x140AA1E4C (MmMapProtectedKernelPage.c)
 *     MiInitializeSharedUserData @ 0x140C4E594 (MiInitializeSharedUserData.c)
 *     MiInitializeDummyPages @ 0x140C4F7E0 (MiInitializeDummyPages.c)
 *     MiMapDummyPages @ 0x140C4FC6C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C50154 (MiProtectSharedUserPage.c)
 *     MxCopyPage @ 0x140C52474 (MxCopyPage.c)
 *     MxMapVa @ 0x140C53144 (MxMapVa.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5428C (MmInitializeImageViewExtensionCfg.c)
 *     MiFillGapPtes @ 0x140C54D90 (MiFillGapPtes.c)
 *     MiInitializeTbFlush @ 0x140C5A5FC (MiInitializeTbFlush.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x140238638 (MiUserPdeOrAbove.c)
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
      if ( (unsigned int)MiUserPdeOrAbove(a1) )
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
      v10 = HIBYTE(word_140E2ED84);
    }
    else if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v7 < qword_140E2F280 || v7 > qword_140E2F290 )
        v10 = (unsigned __int8)word_140E2ED84;
      else
        v10 = HIBYTE(word_140E2ED84);
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
    v13 = ((unsigned __int64)(unsigned __int8)word_140E2ED84 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2ED84 << 8) ^ v13) & 0xFFFFFFFFFFFFFEFFuLL;
  v14 = v13 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v14 = v13;
  v15 = v14 | 0x80;
  if ( !v8 )
    v15 = v14;
  return v15 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
