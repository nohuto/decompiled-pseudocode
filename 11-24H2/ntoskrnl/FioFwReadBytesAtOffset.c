/*
 * XREFs of FioFwReadBytesAtOffset @ 0x14045DF18
 * Callers:
 *     RaspInitializeGlyphData @ 0x14045DA88 (RaspInitializeGlyphData.c)
 *     FioFwReadUshortAtOffset @ 0x1404F6034 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeCompositeGlyphData @ 0x14069C530 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadBearings @ 0x14069C8A0 (RaspLoadBearings.c)
 *     FioFwReadUlongAtOffset @ 0x14069CFAC (FioFwReadUlongAtOffset.c)
 *     FopGetTableOffsetAndSize @ 0x140C72248 (FopGetTableOffsetAndSize.c)
 *     FopReadCmapTable @ 0x140C724A4 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140C725F4 (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140C727E0 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140C72964 (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x140C73474 (BgpRasInitializeRasterizer.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
