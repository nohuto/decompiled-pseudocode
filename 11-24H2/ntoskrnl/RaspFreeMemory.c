/*
 * XREFs of RaspFreeMemory @ 0x14045EC60
 * Callers:
 *     RaspInitializeGlyphData @ 0x14045DA88 (RaspInitializeGlyphData.c)
 *     RaspScanConvert @ 0x14045E04C (RaspScanConvert.c)
 *     RaspDestroySegmentList @ 0x14045EB24 (RaspDestroySegmentList.c)
 *     BgpRasPrintGlyph @ 0x14046EF8C (BgpRasPrintGlyph.c)
 *     RaspRectangleDestroy @ 0x1404F8680 (RaspRectangleDestroy.c)
 *     RaspGetCompositeGlyphList @ 0x14069BF4C (RaspGetCompositeGlyphList.c)
 *     RaspGetUnscaledGlyphData @ 0x14069C27C (RaspGetUnscaledGlyphData.c)
 *     RaspGetXExtent @ 0x14069C374 (RaspGetXExtent.c)
 *     RaspInitializeCompositeGlyphData @ 0x14069C530 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x14069CA14 (RaspLoadCompositeGlyphData.c)
 *     RaspRasterize @ 0x14069CE9C (RaspRasterize.c)
 *     RaspDestroyCachedBitmap @ 0x140BB7CE8 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory();
  return result;
}
