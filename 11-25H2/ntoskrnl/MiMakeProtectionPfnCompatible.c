/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x140224530
 * Callers:
 *     MiComputeCombineHash @ 0x140210ED0 (MiComputeCombineHash.c)
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiZeroWithUltraSpace @ 0x140224410 (MiZeroWithUltraSpace.c)
 *     MiMapArbitraryPage @ 0x14022492C (MiMapArbitraryPage.c)
 *     MiMapSinglePage @ 0x140225164 (MiMapSinglePage.c)
 *     MiInsertPhysicalPteMapping @ 0x140338440 (MiInsertPhysicalPteMapping.c)
 *     MiReplacePageOfProtoPool @ 0x14033AFCC (MiReplacePageOfProtoPool.c)
 *     MiCopySinglePage @ 0x140377E44 (MiCopySinglePage.c)
 *     MiScrubPage @ 0x1403F0F94 (MiScrubPage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403FF808 (MiUpdateImagePfnImportRelocations.c)
 *     MiReplacePageTablePage @ 0x14040B438 (MiReplacePageTablePage.c)
 *     MmProtectMdlSystemAddress @ 0x1404107F0 (MmProtectMdlSystemAddress.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiMapMemoryDumpMdl @ 0x14049C45C (MiMapMemoryDumpMdl.c)
 *     MiMapMdlWithLargePages @ 0x1404C6BAC (MiMapMdlWithLargePages.c)
 *     MiMapMdlCommon @ 0x1404ECDC4 (MiMapMdlCommon.c)
 *     MiInitializeSlowPte @ 0x14066C9DC (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1406739D0 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 *     MiCopyMemoryPagefileData @ 0x140682A90 (MiCopyMemoryPagefileData.c)
 *     MiInitializeNewUltraHugeContext @ 0x1406841C4 (MiInitializeNewUltraHugeContext.c)
 *     MiRelocateImagePfn @ 0x140945ED0 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 *     MiProtectSharedUserPage @ 0x140C3EF24 (MiProtectSharedUserPage.c)
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
