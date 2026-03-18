/*
 * XREFs of RaspFreeMemory @ 0x140467304
 * Callers:
 *     RaspInitializeGlyphData @ 0x14046612C (RaspInitializeGlyphData.c)
 *     RaspScanConvert @ 0x1404666F0 (RaspScanConvert.c)
 *     RaspDestroySegmentList @ 0x1404671C8 (RaspDestroySegmentList.c)
 *     BgpRasPrintGlyph @ 0x140472CBC (BgpRasPrintGlyph.c)
 *     RaspRectangleDestroy @ 0x1404FADA0 (RaspRectangleDestroy.c)
 *     RaspGetCompositeGlyphList @ 0x14069AECC (RaspGetCompositeGlyphList.c)
 *     RaspGetUnscaledGlyphData @ 0x14069B1FC (RaspGetUnscaledGlyphData.c)
 *     RaspGetXExtent @ 0x14069B2F4 (RaspGetXExtent.c)
 *     RaspInitializeCompositeGlyphData @ 0x14069B4B0 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x14069B994 (RaspLoadCompositeGlyphData.c)
 *     RaspRasterize @ 0x14069BE1C (RaspRasterize.c)
 *     RaspDestroyCachedBitmap @ 0x140BB5CE8 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1);
}
