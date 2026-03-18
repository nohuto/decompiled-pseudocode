/*
 * XREFs of FioFwReadBytesAtOffset @ 0x1404665BC
 * Callers:
 *     RaspInitializeGlyphData @ 0x14046612C (RaspInitializeGlyphData.c)
 *     FioFwReadUshortAtOffset @ 0x1404F8754 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeCompositeGlyphData @ 0x14069B4B0 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadBearings @ 0x14069B820 (RaspLoadBearings.c)
 *     FioFwReadUlongAtOffset @ 0x14069BF2C (FioFwReadUlongAtOffset.c)
 *     FopGetTableOffsetAndSize @ 0x140C700E8 (FopGetTableOffsetAndSize.c)
 *     FopReadCmapTable @ 0x140C70344 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140C70494 (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140C70680 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140C70804 (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x140C71314 (BgpRasInitializeRasterizer.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
