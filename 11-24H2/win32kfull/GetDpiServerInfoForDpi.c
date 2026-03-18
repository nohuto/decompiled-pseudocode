/*
 * XREFs of GetDpiServerInfoForDpi @ 0x1402F18D4
 * Callers:
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x14006A118 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14006AC70 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     GetScaledLogFontForDpi @ 0x14007915C (GetScaledLogFontForDpi.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x14007AED4 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1401E28B8 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InitProcessSystemDpi @ 0x14023DBD0 (InitProcessSystemDpi.c)
 *     NtUserEnsureDpiServerInfoForDpi @ 0x140294870 (NtUserEnsureDpiServerInfoForDpi.c)
 *     GetDpiServerInfoForCurrentProcess @ 0x1402F1860 (GetDpiServerInfoForCurrentProcess.c)
 *     GetDpiServerInfoForCurrentThread @ 0x1402F189C (GetDpiServerInfoForCurrentThread.c)
 * Callees:
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x14027A000 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 *     EnsureArbitraryDpiServerInfoForDpi @ 0x14028735C (EnsureArbitraryDpiServerInfoForDpi.c)
 *     EnsureDpiServerInfoForDpi @ 0x140287514 (EnsureDpiServerInfoForDpi.c)
 *     EnsureDpiServerInfoForDpiOld @ 0x1402875D0 (EnsureDpiServerInfoForDpiOld.c)
 *     GetDpiCacheIndex @ 0x1402F160C (GetDpiCacheIndex.c)
 */

__int64 __fastcall GetDpiServerInfoForDpi(unsigned __int16 a1, __int64 a2)
{
  int DpiCacheIndex; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v10; // rbx

  DpiCacheIndex = GetDpiCacheIndex(a1, a2);
  v6 = DpiCacheIndex;
  if ( DpiCacheIndex == -1 )
  {
    if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
      return EnsureArbitraryDpiServerInfoForDpi(a1, v7);
    else
      return *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19928) + 5096LL;
  }
  else
  {
    v10 = (_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19928) + 104 * (DpiCacheIndex + 49LL));
    if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v6 > 1 && !*v10 )
        EnsureDpiServerInfoForDpi((__int64)v10, a1);
    }
    else if ( v6 > 1 )
    {
      EnsureDpiServerInfoForDpiOld((__int64)v10, a1);
    }
    return (__int64)v10;
  }
}
