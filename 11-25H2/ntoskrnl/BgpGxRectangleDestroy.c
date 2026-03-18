/*
 * XREFs of BgpGxRectangleDestroy @ 0x140BA3F04
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140473A88 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x140481014 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1404810EC (GxpWriteFrameBufferPixels.c)
 *     BgpGxConvertRectangle @ 0x14068D1B8 (BgpGxConvertRectangle.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14068D26C (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxParseBitmap @ 0x140BA00B8 (BgpGxParseBitmap.c)
 *     BgpGxBlendRectangle @ 0x140BA2400 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140BA26EC (BgpGxDrawBitmapImage.c)
 *     BgpTxtCreateRegion @ 0x140BA2908 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x140BA2B5C (BgpTxtDestroyRegion.c)
 *     BgpTxtDisplayString @ 0x140BA2BB0 (BgpTxtDisplayString.c)
 *     AnFwFadeCompletion @ 0x140BA358C (AnFwFadeCompletion.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 *     BgpGxReadRectangle @ 0x140BA3D18 (BgpGxReadRectangle.c)
 *     TxtpDestroyCacheEntry @ 0x140BA43D4 (TxtpDestroyCacheEntry.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
