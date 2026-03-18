/*
 * XREFs of BgpGxRectangleDestroy @ 0x140BB3F04
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140472A28 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x140481E44 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140481F1C (GxpWriteFrameBufferPixels.c)
 *     BgpGxConvertRectangle @ 0x140698508 (BgpGxConvertRectangle.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1406985BC (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxParseBitmap @ 0x140BB00B8 (BgpGxParseBitmap.c)
 *     BgpGxBlendRectangle @ 0x140BB2400 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140BB26EC (BgpGxDrawBitmapImage.c)
 *     BgpTxtCreateRegion @ 0x140BB2908 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x140BB2B5C (BgpTxtDestroyRegion.c)
 *     BgpTxtDisplayString @ 0x140BB2BB0 (BgpTxtDisplayString.c)
 *     AnFwFadeCompletion @ 0x140BB358C (AnFwFadeCompletion.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 *     BgpGxReadRectangle @ 0x140BB3D18 (BgpGxReadRectangle.c)
 *     TxtpDestroyCacheEntry @ 0x140BB43D4 (TxtpDestroyCacheEntry.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
