/*
 * XREFs of GetWindowNCMetrics @ 0x1C00E8CD4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C004B0D0 (GreExtGetObjectW.c)
 *     GetResizeBorderWidthForDpi @ 0x1C0080754 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00890EC (GetWindowFrameMetricForDpi.c)
 *     GetDPIServerInfo @ 0x1C00899B8 (GetDPIServerInfo.c)
 *     GetDPIMetrics @ 0x1C00D8D88 (GetDPIMetrics.c)
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     GetScaledLogFontForDpi @ 0x1C00E924C (GetScaledLogFontForDpi.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 */

__int64 __fastcall GetWindowNCMetrics(_DWORD *a1, __int64 a2)
{
  unsigned int DpiForSystem; // esi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 DPIServerInfo; // rbx
  __int64 v7; // rcx
  HBRUSH *DPIMetrics; // rdi

  DpiForSystem = GetDpiForSystem(a1, a2);
  a1[5] = GetDpiDependentMetric(13LL, DpiForSystem);
  a1[55] = GetDpiDependentMetric(26LL, DpiForSystem);
  a1[1] = GetResizeBorderWidthForDpi(DpiForSystem);
  a1[2] = GetDpiDependentMetric(0LL, DpiForSystem);
  a1[3] = GetDpiDependentMetric(10LL, DpiForSystem);
  a1[4] = GetDpiDependentMetric(12LL, DpiForSystem);
  a1[29] = GetDpiDependentMetric(23LL, DpiForSystem);
  a1[30] = GetDpiDependentMetric(24LL, DpiForSystem);
  a1[54] = GetDpiDependentMetric(25LL, DpiForSystem);
  a1[125] = GetWindowFrameMetricForDpi(v4, DpiForSystem);
  DPIServerInfo = GetDPIServerInfo(v5);
  DPIMetrics = (HBRUSH *)GetDPIMetrics(v7);
  GreExtGetObjectW(*(HBRUSH *)(DPIServerInfo + 8), 92LL, (__int64)(a1 + 6));
  GreExtGetObjectW(DPIMetrics[4], 92LL, (__int64)(a1 + 31));
  GreExtGetObjectW(*DPIMetrics, 92LL, (__int64)(a1 + 56));
  GreExtGetObjectW(DPIMetrics[7], 92LL, (__int64)(a1 + 79));
  return GetScaledLogFontForDpi(5LL, DpiForSystem);
}
