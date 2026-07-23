/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x1403F26B0
 * Callers:
 *     MiComputeCombineHash @ 0x140335700 (MiComputeCombineHash.c)
 *     MiReplacePageOfProtoPool @ 0x140348A30 (MiReplacePageOfProtoPool.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiInsertPhysicalPteMapping @ 0x1403910B8 (MiInsertPhysicalPteMapping.c)
 *     MiScrubPage @ 0x1403EBDB0 (MiScrubPage.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403EF7D8 (MiInitializeNewUltraHugeContext.c)
 *     MiMapArbitraryPage @ 0x1403F0E90 (MiMapArbitraryPage.c)
 *     MiMapSinglePage @ 0x1403F14B0 (MiMapSinglePage.c)
 *     MiReplacePageTablePage @ 0x1403F2DE8 (MiReplacePageTablePage.c)
 *     MiCopySinglePage @ 0x1403F4224 (MiCopySinglePage.c)
 *     MmProtectMdlSystemAddress @ 0x1404063A0 (MmProtectMdlSystemAddress.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14043A5B4 (MiUpdateImagePfnImportRelocations.c)
 *     MiMapMemoryDumpMdl @ 0x14049665C (MiMapMemoryDumpMdl.c)
 *     MiMapMdlWithLargePages @ 0x1404C0630 (MiMapMdlWithLargePages.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 *     MiInitializeSlowPte @ 0x1406794B8 (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1406803F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 *     MiCopyMemoryPagefileData @ 0x14068F450 (MiCopyMemoryPagefileData.c)
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x14093B6F8 (MiRelocateImagePfn.c)
 *     MiProtectSharedUserPage @ 0x140C522E4 (MiProtectSharedUserPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionPfnCompatible(char a1, __int64 a2)
{
  unsigned int v2; // ecx

  v2 = a1 & 7;
  if ( BYTE2(*(_DWORD *)(a2 + 32)) < 0x40u )
    return v2 | 8;
  if ( (HIWORD(*(_DWORD *)(a2 + 32)) & 0xC0) == 0x80 )
    v2 |= 0x18u;
  return v2;
}
