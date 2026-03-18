/*
 * XREFs of Get96DpiServerInfo @ 0x1402F15E0
 * Callers:
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1400735A0 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetWindowNCMetricsForDpi @ 0x140079A10 (GetWindowNCMetricsForDpi.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x14007AED4 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14011138C (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     FinalUserInit @ 0x1401CD2B4 (FinalUserInit.c)
 *     UserSetFont @ 0x1401CD7E8 (UserSetFont.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Get96DpiServerInfo(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 5200LL;
}
