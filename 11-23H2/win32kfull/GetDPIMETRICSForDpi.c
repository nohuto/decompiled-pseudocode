/*
 * XREFs of GetDPIMETRICSForDpi @ 0x1C00D8DE0
 * Callers:
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00D8484 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     GetDPIMetrics @ 0x1C00D8D88 (GetDPIMetrics.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C00E8E10 (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     ?xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C013CC80 (-xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01BEE20 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0224F44 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C02255B0 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C0232F10 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C02343FC (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C02375AC (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNCompute @ 0x1C0237FB0 (xxxMNCompute.c)
 * Callees:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C00E93E0 (GetDPIMETRICSForDpiUnsafe.c)
 */

__int64 GetDPIMETRICSForDpi()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rcx

  result = GetDPIMETRICSForDpiUnsafe();
  if ( !result )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v1) & 0xF) != 0 )
      return GetSessionDpiMetrics(v2);
    else
      return Get96DpiMetrics();
  }
  return result;
}
