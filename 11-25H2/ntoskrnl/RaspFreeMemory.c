/*
 * XREFs of RaspFreeMemory @ 0x140468C54
 * Callers:
 *     RaspInitializeGlyphData @ 0x140467A7C (RaspInitializeGlyphData.c)
 *     RaspScanConvert @ 0x140468040 (RaspScanConvert.c)
 *     RaspDestroySegmentList @ 0x140468B18 (RaspDestroySegmentList.c)
 *     BgpRasPrintGlyph @ 0x140473D1C (BgpRasPrintGlyph.c)
 *     RaspRectangleDestroy @ 0x1404F8970 (RaspRectangleDestroy.c)
 *     RaspGetCompositeGlyphList @ 0x14068FB7C (RaspGetCompositeGlyphList.c)
 *     RaspGetUnscaledGlyphData @ 0x14068FEAC (RaspGetUnscaledGlyphData.c)
 *     RaspGetXExtent @ 0x14068FFA4 (RaspGetXExtent.c)
 *     RaspInitializeCompositeGlyphData @ 0x140690160 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x140690644 (RaspLoadCompositeGlyphData.c)
 *     RaspRasterize @ 0x140690ACC (RaspRasterize.c)
 *     RaspDestroyCachedBitmap @ 0x140BA5CE8 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory();
  return result;
}
