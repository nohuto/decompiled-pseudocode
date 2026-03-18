/*
 * XREFs of GetDpiServerInfoForCurrentThread @ 0x1402F189C
 * Callers:
 *     xxxDrawState @ 0x14003A7F0 (xxxDrawState.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x140073DDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetWindowNCMetrics @ 0x14007901C (GetWindowNCMetrics.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x14007DB7C (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     GetCharDimensions @ 0x1401CDCAC (GetCharDimensions.c)
 *     CreateCompatiblePublicDC @ 0x1401EE788 (CreateCompatiblePublicDC.c)
 *     IsSysFontAndDefaultMode @ 0x1402179BC (IsSysFontAndDefaultMode.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B5C10 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     GetDpiServerInfoForCurrentProcess @ 0x1402F1860 (GetDpiServerInfoForCurrentProcess.c)
 *     GetDpiServerInfoForDpi @ 0x1402F18D4 (GetDpiServerInfoForDpi.c)
 */

__int64 __fastcall GetDpiServerInfoForCurrentThread(__int64 a1)
{
  unsigned __int16 v1; // ax

  v1 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1) >> 8) & 0x1FF;
  if ( v1 )
    return GetDpiServerInfoForDpi(v1);
  else
    return GetDpiServerInfoForCurrentProcess(511LL);
}
