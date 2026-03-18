/*
 * XREFs of GetWindowNCMetrics @ 0x14007901C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetScaledLogFontForDpi @ 0x14007915C (GetScaledLogFontForDpi.c)
 *     GetResizeBorderWidthForDpi @ 0x140079418 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x140079440 (GetWindowFrameMetricForDpi.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 *     GetDpiServerInfoForCurrentThread @ 0x1402F189C (GetDpiServerInfoForCurrentThread.c)
 */

__int64 __fastcall GetWindowNCMetrics(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int DpiForSystem; // esi
  __int64 v6; // rcx
  __int64 DpiServerInfoForCurrentThread; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  Gre::Base **DpiMetricsForCurrentThread; // rdi

  DpiForSystem = GetDpiForSystem(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 20) = GetDpiDependentMetric(13, DpiForSystem);
  *(_DWORD *)(a1 + 220) = GetDpiDependentMetric(26, DpiForSystem);
  *(_DWORD *)(a1 + 4) = GetResizeBorderWidthForDpi(DpiForSystem);
  *(_DWORD *)(a1 + 8) = GetDpiDependentMetric(0, DpiForSystem);
  *(_DWORD *)(a1 + 12) = GetDpiDependentMetric(10, DpiForSystem);
  *(_DWORD *)(a1 + 16) = GetDpiDependentMetric(12, DpiForSystem);
  *(_DWORD *)(a1 + 116) = GetDpiDependentMetric(23, DpiForSystem);
  *(_DWORD *)(a1 + 120) = GetDpiDependentMetric(24, DpiForSystem);
  *(_DWORD *)(a1 + 216) = GetDpiDependentMetric(25, DpiForSystem);
  *(_DWORD *)(a1 + 500) = GetWindowFrameMetricForDpi(v6, DpiForSystem);
  DpiServerInfoForCurrentThread = GetDpiServerInfoForCurrentThread();
  DpiMetricsForCurrentThread = (Gre::Base **)GetDpiMetricsForCurrentThread(v9, v8);
  GreExtGetObjectW(*(Gre::Base **)(DpiServerInfoForCurrentThread + 8), 92LL, (_WORD *)(a1 + 24));
  GreExtGetObjectW(DpiMetricsForCurrentThread[5], 92LL, (_WORD *)(a1 + 124));
  GreExtGetObjectW(DpiMetricsForCurrentThread[1], 92LL, (_WORD *)(a1 + 224));
  GreExtGetObjectW(DpiMetricsForCurrentThread[8], 92LL, (_WORD *)(a1 + 316));
  return GetScaledLogFontForDpi(5LL, DpiForSystem, a1 + 408);
}
