/*
 * XREFs of FioFwReadBytesAtOffset @ 0x140467F0C
 * Callers:
 *     RaspInitializeGlyphData @ 0x140467A7C (RaspInitializeGlyphData.c)
 *     FioFwReadUshortAtOffset @ 0x1404F5FA0 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeCompositeGlyphData @ 0x140690160 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadBearings @ 0x1406904D0 (RaspLoadBearings.c)
 *     FioFwReadUlongAtOffset @ 0x140690BDC (FioFwReadUlongAtOffset.c)
 *     FopGetTableOffsetAndSize @ 0x140C5ED08 (FopGetTableOffsetAndSize.c)
 *     FopReadCmapTable @ 0x140C5EF64 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140C5F0B4 (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140C5F2A0 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140C5F424 (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x140C5FF34 (BgpRasInitializeRasterizer.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
