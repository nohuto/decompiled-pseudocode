/*
 * XREFs of GetDPIServerInfoForDpi @ 0x1C001BA00
 * Callers:
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C001B770 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InitProcessSystemDpi @ 0x1C001B870 (InitProcessSystemDpi.c)
 *     GetProcessDpiServerInfo @ 0x1C00899EC (GetProcessDpiServerInfo.c)
 *     GetScaledLogFontForDpi @ 0x1C00E924C (GetScaledLogFontForDpi.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01BEE20 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     xxxDrawMenuItem @ 0x1C02343FC (xxxDrawMenuItem.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C02373E0 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C02375AC (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00EB0D0 (GetDpiCacheSlot.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01BE94C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 */

__int64 __fastcall GetDPIServerInfoForDpi(__int64 a1)
{
  int DpiCacheSlot; // eax
  int v3; // r10d
  __int64 v4; // r11
  int v5; // ecx
  struct tagDPISERVERINFO *v6; // rbx

  if ( (_DWORD)a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  if ( (_DWORD)a1 == 96 )
    return Get96DpiServerInfo();
  DpiCacheSlot = GetDpiCacheSlot(a1);
  v5 = 0;
  if ( DpiCacheSlot != -1 )
    v5 = DpiCacheSlot;
  v6 = (struct tagDPISERVERINFO *)(v4 + 104 * (v5 + 49LL));
  EnsureServerInfoForDpi(v6, v3);
  return (__int64)v6;
}
