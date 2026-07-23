/*
 * XREFs of BgpGetResolution @ 0x1404D206C
 * Callers:
 *     BgpConsoleInitialize @ 0x140BB30B0 (BgpConsoleInitialize.c)
 *     BgpTxtCreateRegion @ 0x140BB4908 (BgpTxtCreateRegion.c)
 *     GxpReadFrameBufferPixels @ 0x140BB5F2C (GxpReadFrameBufferPixels.c)
 *     LogFwReport @ 0x140BB63FC (LogFwReport.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall BgpGetResolution(_DWORD *a1)
{
  *a1 = DWORD2(BgInternal);
  a1[1] = DWORD1(BgInternal);
  a1[2] = HIDWORD(BgInternal);
  return a1;
}
