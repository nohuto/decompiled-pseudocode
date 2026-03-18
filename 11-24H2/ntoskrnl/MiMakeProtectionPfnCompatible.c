/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x140313770
 * Callers:
 *     MiComputeCombineHash @ 0x14020C3A0 (MiComputeCombineHash.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1402C89A4 (MiUpdateImagePfnImportRelocations.c)
 *     MiReplacePageOfProtoPool @ 0x1402E73F0 (MiReplacePageOfProtoPool.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiReplacePageTablePage @ 0x140311CD4 (MiReplacePageTablePage.c)
 *     MiMapArbitraryPage @ 0x140313BE8 (MiMapArbitraryPage.c)
 *     MiMapSinglePage @ 0x140314164 (MiMapSinglePage.c)
 *     MiCopySinglePage @ 0x140395C54 (MiCopySinglePage.c)
 *     MiInsertPhysicalPteMapping @ 0x1403CFC94 (MiInsertPhysicalPteMapping.c)
 *     MiScrubPage @ 0x1403F5970 (MiScrubPage.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403F98CC (MiInitializeNewUltraHugeContext.c)
 *     MmProtectMdlSystemAddress @ 0x14040E150 (MmProtectMdlSystemAddress.c)
 *     MiMapMemoryDumpMdl @ 0x14049BB2C (MiMapMemoryDumpMdl.c)
 *     MiMapMdlWithLargePages @ 0x1404C71D0 (MiMapMdlWithLargePages.c)
 *     MiMapMdlCommon @ 0x1404F0304 (MiMapMdlCommon.c)
 *     MiInitializeSlowPte @ 0x14067832C (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14067F1F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubLargePage @ 0x14068DA04 (MiScrubLargePage.c)
 *     MiCopyMemoryPagefileData @ 0x14068E320 (MiCopyMemoryPagefileData.c)
 *     MiValidateImagePfn @ 0x140957464 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1409587A8 (MiRelocateImagePfn.c)
 *     MiProtectSharedUserPage @ 0x140C50154 (MiProtectSharedUserPage.c)
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
