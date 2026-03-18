/*
 * XREFs of GetDpiMetricsForDpi @ 0x1402F16E0
 * Callers:
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x14006A318 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14006AC70 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     GetScaledLogFontForDpi @ 0x14007915C (GetScaledLogFontForDpi.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x14007AED4 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z @ 0x14018B1A8 (-UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1401EA0E8 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x140255950 (-xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     NtUserEnsureDpiMetricsForDpi @ 0x1402947F0 (NtUserEnsureDpiMetricsForDpi.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 *     GetDpiMetricsForWindow @ 0x1402F1798 (GetDpiMetricsForWindow.c)
 * Callees:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1401B2108 (GetDPIMETRICSForDpiUnsafe.c)
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x14027A000 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 *     EnsureArbitraryDpiMetricsForDpi @ 0x1402872EC (EnsureArbitraryDpiMetricsForDpi.c)
 *     EnsureDpiMetricsForDpi @ 0x1402873CC (EnsureDpiMetricsForDpi.c)
 *     Get96DpiMetrics @ 0x1402F1598 (Get96DpiMetrics.c)
 *     GetDpiCacheIndex @ 0x1402F160C (GetDpiCacheIndex.c)
 *     GetSessionDpiMetrics @ 0x1402F1988 (GetSessionDpiMetrics.c)
 */

struct tagDpiKMMetricsCacheNode *__fastcall GetDpiMetricsForDpi(unsigned __int16 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  struct tagDpiKMMetricsCacheNode *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int DpiCacheIndex; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rbx

  v2 = a1;
  if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
  {
    DpiCacheIndex = GetDpiCacheIndex(v2, v3);
    v10 = DpiCacheIndex;
    if ( DpiCacheIndex == -1 )
    {
      return (struct tagDpiKMMetricsCacheNode *)EnsureArbitraryDpiMetricsForDpi(a1, v8);
    }
    else
    {
      v11 = 80LL * DpiCacheIndex + *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19928);
      if ( v10 >= 2 && !*(_DWORD *)(v11 + 7656) )
        EnsureDpiMetricsForDpi(v11 + 7656, a1);
      return (struct tagDpiKMMetricsCacheNode *)(v11 + 7656);
    }
  }
  else
  {
    result = GetDPIMETRICSForDpiUnsafe(v2, v3);
    if ( !result )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v5) & 0xF) != 0 )
        return (struct tagDpiKMMetricsCacheNode *)GetSessionDpiMetrics(v6);
      else
        return (struct tagDpiKMMetricsCacheNode *)Get96DpiMetrics();
    }
  }
  return result;
}
