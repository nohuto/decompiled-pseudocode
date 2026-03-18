/*
 * XREFs of GetDpiCacheIndex @ 0x1402F160C
 * Callers:
 *     ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x140073188 (-RealGetSystemMetricsForDpi@@YAHHI@Z.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140073428 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1400735A0 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x14007946C (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     GetOemBitmapInfoForDpi @ 0x14007B544 (GetOemBitmapInfoForDpi.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140204AAC (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x140227310 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     NtUserGetActiveProcessesDpis @ 0x140241620 (NtUserGetActiveProcessesDpis.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 *     GetDpiServerInfoForDpi @ 0x1402F18D4 (GetDpiServerInfoForDpi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiCacheIndex(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // edi
  int v4; // edx

  v2 = a1;
  v3 = -1;
  if ( (_DWORD)a1 == *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 6998LL) )
  {
    return 0;
  }
  else if ( v2 >= 96 && v2 == 24 * (v2 / 0x18u) )
  {
    v4 = (v2 - 72) / 24;
    if ( v4 >= 18 )
      return (unsigned int)-1;
    return (unsigned int)v4;
  }
  return v3;
}
