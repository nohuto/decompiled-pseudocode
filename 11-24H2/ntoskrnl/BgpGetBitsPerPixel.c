/*
 * XREFs of BgpGetBitsPerPixel @ 0x14047D508
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14046ECF8 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14047D084 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14047D15C (GxpWriteFrameBufferPixels.c)
 *     BgpClearScreen @ 0x140698EA8 (BgpClearScreen.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14069963C (BgpGxProcessQrCodeBitmap.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069B3E0 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwConfigureProgressResources @ 0x140BB3CFC (AnFwConfigureProgressResources.c)
 *     AnFwpFadeAnimationTimer @ 0x140BB4F50 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 *     BgpGxReadRectangle @ 0x140BB5D18 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x140BB5F2C (GxpReadFrameBufferPixels.c)
 *     LogFwReport @ 0x140BB63FC (LogFwReport.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140EF0210 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140EF0210 == 5 )
    return 32LL;
  return result;
}
