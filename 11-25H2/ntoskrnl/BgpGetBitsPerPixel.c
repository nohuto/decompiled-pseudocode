/*
 * XREFs of BgpGetBitsPerPixel @ 0x140481498
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140473A88 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x140481014 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1404810EC (GxpWriteFrameBufferPixels.c)
 *     BgpClearScreen @ 0x14068CAD8 (BgpClearScreen.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14068D26C (BgpGxProcessQrCodeBitmap.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14068F010 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwConfigureProgressResources @ 0x140BA1CFC (AnFwConfigureProgressResources.c)
 *     AnFwpFadeAnimationTimer @ 0x140BA2F50 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 *     BgpGxReadRectangle @ 0x140BA3D18 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x140BA3F2C (GxpReadFrameBufferPixels.c)
 *     LogFwReport @ 0x140BA43FC (LogFwReport.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140EEFD30 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140EEFD30 == 5 )
    return 32LL;
  return result;
}
