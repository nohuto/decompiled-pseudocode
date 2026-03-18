/*
 * XREFs of BgpGetBitsPerPixel @ 0x1404822C8
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140472A28 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x140481E44 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140481F1C (GxpWriteFrameBufferPixels.c)
 *     BgpClearScreen @ 0x140697E28 (BgpClearScreen.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1406985BC (BgpGxProcessQrCodeBitmap.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069A360 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwConfigureProgressResources @ 0x140BB1CFC (AnFwConfigureProgressResources.c)
 *     AnFwpFadeAnimationTimer @ 0x140BB2F50 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 *     BgpGxReadRectangle @ 0x140BB3D18 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x140BB3F2C (GxpReadFrameBufferPixels.c)
 *     LogFwReport @ 0x140BB43FC (LogFwReport.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140EEFFF0 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140EEFFF0 == 5 )
    return 32LL;
  return result;
}
