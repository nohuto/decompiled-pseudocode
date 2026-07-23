/*
 * XREFs of BgpGxRectangleDestroy @ 0x140BB5F04
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14046ECF8 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14047D084 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14047D15C (GxpWriteFrameBufferPixels.c)
 *     BgpGxConvertRectangle @ 0x140699588 (BgpGxConvertRectangle.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14069963C (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxParseBitmap @ 0x140BB20B8 (BgpGxParseBitmap.c)
 *     BgpGxBlendRectangle @ 0x140BB4400 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140BB46EC (BgpGxDrawBitmapImage.c)
 *     BgpTxtCreateRegion @ 0x140BB4908 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x140BB4B5C (BgpTxtDestroyRegion.c)
 *     BgpTxtDisplayString @ 0x140BB4BB0 (BgpTxtDisplayString.c)
 *     AnFwFadeCompletion @ 0x140BB558C (AnFwFadeCompletion.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 *     BgpGxReadRectangle @ 0x140BB5D18 (BgpGxReadRectangle.c)
 *     TxtpDestroyCacheEntry @ 0x140BB63D4 (TxtpDestroyCacheEntry.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
