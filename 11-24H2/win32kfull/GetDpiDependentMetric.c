/*
 * XREFs of GetDpiDependentMetric @ 0x140074FC4
 * Callers:
 *     CalcWindowFullScreen @ 0x14002DB70 (CalcWindowFullScreen.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1400370A0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     xxxMNCompute @ 0x14006A318 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14006AC70 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     FindNCHit @ 0x14006C5C4 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x14006DE80 (xxxMNFindWindowFromPoint.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     xxxCalcClientRect @ 0x1400712A8 (xxxCalcClientRect.c)
 *     GetCaptionHeight @ 0x140073078 (GetCaptionHeight.c)
 *     ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x140073188 (-RealGetSystemMetricsForDpi@@YAHHI@Z.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140073428 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1400735A0 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x140073DDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x140074CFC (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x140075714 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     _DrawIconEx @ 0x140078A10 (_DrawIconEx.c)
 *     GetWindowNCMetrics @ 0x14007901C (GetWindowNCMetrics.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x14007946C (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     SetTiledRect @ 0x140079510 (SetTiledRect.c)
 *     InternalGetRealClientRect @ 0x140079644 (InternalGetRealClientRect.c)
 *     GetWindowNCMetricsForDpi @ 0x140079A10 (GetWindowNCMetricsForDpi.c)
 *     _SystemParametersInfoForDpi @ 0x140079DCC (_SystemParametersInfoForDpi.c)
 *     xxxCreateWindowSmIcon @ 0x14007AC48 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x14007ADE4 (xxxCreateClassSmIcon.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x14007AED4 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1400F7E44 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxCalcCaptionButton @ 0x14010B4E8 (xxxCalcCaptionButton.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14012C850 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x14012C9E4 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x14013495C (xxxUpdateSystemIconsFromRegistry.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z @ 0x14018B1A8 (-UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     xxxGetMenuBarInfo @ 0x1401B04B0 (xxxGetMenuBarInfo.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1401CA23C (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1401FFBD8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     MNPositionSysMenu @ 0x140202B2C (MNPositionSysMenu.c)
 *     GetWndScrollBarInfoCrossProcess @ 0x1402149C4 (GetWndScrollBarInfoCrossProcess.c)
 *     CheckFullScreen @ 0x14022E334 (CheckFullScreen.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x140248C08 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x140257BE8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     CalcSBStuff @ 0x140258028 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1402582D8 (CalcSBStuff2.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z @ 0x1402A6960 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DDA44 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E0EC8 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402E2D6C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1402E30EC (DrawSize.c)
 * Callees:
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x140227310 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     Feature_DpiMetricsFixes__private_IsEnabledDeviceUsageNoInline @ 0x140287708 (Feature_DpiMetricsFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     GetDpiCacheIndex @ 0x1402F160C (GetDpiCacheIndex.c)
 */

__int64 __fastcall GetDpiDependentMetric(int a1, unsigned int a2)
{
  __int64 v2; // r14
  int DpiCacheIndex; // ebx
  char v5; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx

  v2 = a1;
  DpiCacheIndex = GetDpiCacheIndex(a2);
  v5 = 0;
  if ( (unsigned int)Feature_DpiMetricsFixes__private_IsEnabledDeviceUsageNoInline() && DpiCacheIndex == -1 )
  {
    DpiCacheIndex = 1;
    v5 = 1;
  }
  v8 = v2 + 30LL * DpiCacheIndex;
  v9 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19928) + 4 * v8 + 2284);
  if ( v9 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(a2);
    v9 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 19928) + 4 * v8 + 2284);
    if ( v9 == -1 )
      v9 = 0;
  }
  if ( (unsigned int)Feature_DpiMetricsFixes__private_IsEnabledDeviceUsageNoInline() && v5 )
  {
    v12 = (int)((unsigned __int64)(715827883LL * (int)(a2 * v9 + 48)) >> 32) >> 4;
    return (v12 >> 31) + v12;
  }
  return v9;
}
