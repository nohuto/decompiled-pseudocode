/*
 * XREFs of MiMakeValidPte @ 0x14020EF10
 * Callers:
 *     MiReadyStandbyPageForActive @ 0x14020E430 (MiReadyStandbyPageForActive.c)
 *     MiUnlinkStandbyPfn @ 0x14020EBB4 (MiUnlinkStandbyPfn.c)
 *     MiMapBackgroundPagesToZero @ 0x140210430 (MiMapBackgroundPagesToZero.c)
 *     MiComputeCombineHash @ 0x140210ED0 (MiComputeCombineHash.c)
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MiMapArbitraryPage @ 0x14022492C (MiMapArbitraryPage.c)
 *     MiMapSinglePage @ 0x140225164 (MiMapSinglePage.c)
 *     MiMakeSystemCachePteValid @ 0x140225760 (MiMakeSystemCachePteValid.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiLinkPoolCommitChain @ 0x140238250 (MiLinkPoolCommitChain.c)
 *     MiCreateSharedZeroPages @ 0x14023B000 (MiCreateSharedZeroPages.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14024D8D0 (MiFillPhysicalPages.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiMapPageFileHash @ 0x1402D1A18 (MiMapPageFileHash.c)
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x140338440 (MiInsertPhysicalPteMapping.c)
 *     MiReplacePageOfProtoPool @ 0x14033AFCC (MiReplacePageOfProtoPool.c)
 *     MiSetProtectionOnTransitionPte @ 0x14037F4E0 (MiSetProtectionOnTransitionPte.c)
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MiMapWithLargePages @ 0x1403900B8 (MiMapWithLargePages.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiInsertLargeVadMapping @ 0x1403EC828 (MiInsertLargeVadMapping.c)
 *     MiScrubPage @ 0x1403F0F94 (MiScrubPage.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403FCE98 (MiAddPagesToEnclave.c)
 *     MiCopyTopLevelMappings @ 0x1403FDDF4 (MiCopyTopLevelMappings.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403FF808 (MiUpdateImagePfnImportRelocations.c)
 *     MiReplacePageTablePage @ 0x14040B438 (MiReplacePageTablePage.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiInitializeSelfmap @ 0x14040F5E4 (MiInitializeSelfmap.c)
 *     MmProtectMdlSystemAddress @ 0x1404107F0 (MmProtectMdlSystemAddress.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiCompleteRestrictedImageFault @ 0x140464CC4 (MiCompleteRestrictedImageFault.c)
 *     MiMapMemoryDumpMdl @ 0x14049C45C (MiMapMemoryDumpMdl.c)
 *     MiFinishLastForkPageTable @ 0x1404AEE2C (MiFinishLastForkPageTable.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 *     MiMapMdlCommon @ 0x1404ECDC4 (MiMapMdlCommon.c)
 *     MiMapKernelScp @ 0x1404EE5D8 (MiMapKernelScp.c)
 *     MiMakeLargePageTable @ 0x1404F59B4 (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x140660094 (MiInitializeNewPfns.c)
 *     MiPfnRangeIsZero @ 0x14066276C (MiPfnRangeIsZero.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406675D8 (MiUpdateLargePageSectionPfns.c)
 *     MiInitializeSlowPte @ 0x14066C9DC (MiInitializeSlowPte.c)
 *     MiInitializeDynamicBitmap @ 0x14066DC0C (MiInitializeDynamicBitmap.c)
 *     MiEnableLargeSubsection @ 0x14066F2B4 (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x14066F534 (MiFillPageWithImageExtentContents.c)
 *     MmMapDriverTablePage @ 0x14067213C (MmMapDriverTablePage.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1406739D0 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x140674938 (MmReadProcessPageTables.c)
 *     MiPrepareEnclaveMetadataPage @ 0x1406750C8 (MiPrepareEnclaveMetadataPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 *     MiCopyMemoryPagefileData @ 0x140682A90 (MiCopyMemoryPagefileData.c)
 *     MiProtectLargeKernelHalRange @ 0x1407D8000 (MiProtectLargeKernelHalRange.c)
 *     MmAllocateNonCachedMemory @ 0x1407DAD30 (MmAllocateNonCachedMemory.c)
 *     MiInitializeShadowPageTable @ 0x1407E6598 (MiInitializeShadowPageTable.c)
 *     MiCreateHardwareEnclave @ 0x1407E730C (MiCreateHardwareEnclave.c)
 *     MiCaptureSparsePages @ 0x1407EA86C (MiCaptureSparsePages.c)
 *     MiRelocateImagePfn @ 0x140945ED0 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 *     MiAllocateProcessShadow @ 0x140A47EB0 (MiAllocateProcessShadow.c)
 *     MiUpdateForkMaps @ 0x140A6EA7C (MiUpdateForkMaps.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 *     MmMapProtectedKernelPage @ 0x140A9CC18 (MmMapProtectedKernelPage.c)
 *     MiInitializeSharedUserData @ 0x140C3D30C (MiInitializeSharedUserData.c)
 *     MiInitializeDummyPages @ 0x140C3E5B0 (MiInitializeDummyPages.c)
 *     MiMapDummyPages @ 0x140C3EA3C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C3EF24 (MiProtectSharedUserPage.c)
 *     MxCopyPage @ 0x140C41244 (MxCopyPage.c)
 *     MxMapVa @ 0x140C41F14 (MxMapVa.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 *     MiFillGapPtes @ 0x140C43B10 (MiFillGapPtes.c)
 *     MiInitializeTbFlush @ 0x140C492CC (MiInitializeTbFlush.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14020F170 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  int v7; // r8d
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  v4 = a3 & 0x1F;
  v5 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v5 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x121;
    v7 = a3 & 0x4000000;
    goto LABEL_18;
  }
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v5 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (a3 & 0x4000000) == 0 )
    {
      v5 = ((a2 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v4] & 0x7FF0000000000E7FLL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove() )
      v5 |= 4uLL;
  }
  v6 = (__int64)(a1 << 25) >> 16;
  v7 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 && v6 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v6 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v6 = (__int64)(v6 << 25) >> 16;
    }
    while ( v6 >= 0xFFFFF68000000000uLL );
  }
  if ( v6 <= 0x7FFFFFFEFFFFLL )
  {
    v5 |= 4uLL;
    goto LABEL_14;
  }
  if ( v6 < 0xFFFF800000000000uLL )
  {
LABEL_14:
    v8 = HIBYTE(word_140E2EB44);
    goto LABEL_15;
  }
  if ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_18;
  if ( v6 < qword_140E2F040 || (v8 = HIBYTE(word_140E2EB44), v6 > qword_140E2F050) )
    v8 = (unsigned __int8)word_140E2EB44;
LABEL_15:
  if ( v8 )
    v5 |= 0x100uLL;
LABEL_18:
  if ( a3 < 0 && (v4 & 5) == 4 )
    v5 |= 0x42uLL;
  v9 = v5 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (a3 & 0x40000000) == 0 )
    v9 = v5;
  if ( (a3 & 0x20000000) != 0 )
    v9 = ((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ v9) & 0xFFFFFFFFFFFFFEFFuLL;
  v10 = v9 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v10 = v9;
  v11 = v10 | 0x80;
  if ( !v7 )
    v11 = v10;
  return v11 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
