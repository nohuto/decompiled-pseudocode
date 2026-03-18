/*
 * XREFs of GetDpiDependentMetric @ 0x1C00E91E0
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0014A64 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     _DrawIconEx @ 0x1C0042310 (_DrawIconEx.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C004A78C (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxCheckFullScreen @ 0x1C00621AC (xxxCheckFullScreen.c)
 *     _SystemParametersInfoForDpi @ 0x1C007BD3C (_SystemParametersInfoForDpi.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0080794 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0089130 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     FindNCHit @ 0x1C008C04C (FindNCHit.c)
 *     xxxCreateWindowSmIcon @ 0x1C00924C8 (xxxCreateWindowSmIcon.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateClassSmIcon @ 0x1C00DE29C (xxxCreateClassSmIcon.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00E10B4 (xxxUpdateSystemIconsFromRegistry.c)
 *     CalcSBStuff @ 0x1C00E1B78 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C00E1FF4 (CalcSBStuff2.c)
 *     xxxDrawCaptionBar @ 0x1C00E2158 (xxxDrawCaptionBar.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00E659C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetWindowNCMetrics @ 0x1C00E8CD4 (GetWindowNCMetrics.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C00E8E10 (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00E8FCC (GetWindowNCMetricsForDpi.c)
 *     GetCaptionHeight @ 0x1C00EA380 (GetCaptionHeight.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00EB23C (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x1C00EB6D0 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     InternalGetRealClientRect @ 0x1C00ECAE8 (InternalGetRealClientRect.c)
 *     xxxCalcClientRect @ 0x1C010BA30 (xxxCalcClientRect.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0116710 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01BEE20 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C035C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01C78C0 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01C87B0 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EE188 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     MNPositionSysMenu @ 0x1C01FED34 (MNPositionSysMenu.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215824 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02173E0 (xxxMNFindWindowFromPoint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0223B2C (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02281B0 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022926C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0229518 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C022A1A0 (xxxSBWndProc.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022B0F4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxCalcCaptionButton @ 0x1C022B520 (xxxCalcCaptionButton.c)
 *     xxxGetMenuBarInfo @ 0x1C02304BC (xxxGetMenuBarInfo.c)
 *     xxxMNInvertItem @ 0x1C0234DB0 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0236080 (xxxRealDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C02375AC (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNCompute @ 0x1C0237FB0 (xxxMNCompute.c)
 * Callees:
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01BEDAC (_EnsureDpiDepSysMetCacheForPlateau.c)
 */

__int64 __fastcall GetDpiDependentMetric(int a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = -1;
  if ( a2 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    v2 = 0;
  }
  else if ( a2 >= 96 && a2 == 24 * (a2 / 0x18u) )
  {
    v2 = (a2 - 72) / 24;
    if ( v2 >= 18 )
      v2 = -1;
  }
  v3 = a1 + 30LL * v2;
  result = *(unsigned int *)(gpsi + 4 * v3 + 2284);
  if ( (_DWORD)result == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau((unsigned int)a2);
    result = *(unsigned int *)(gpsi + 4 * v3 + 2284);
    if ( (_DWORD)result == -1 )
      return 0LL;
  }
  return result;
}
