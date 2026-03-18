/*
 * XREFs of ClearDpiMetrics @ 0x140287298
 * Callers:
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1402129C4 (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     DestroyDpiMetricsCache @ 0x14023D510 (DestroyDpiMetricsCache.c)
 *     EnsureArbitraryDpiMetricsForDpi @ 0x1402872EC (EnsureArbitraryDpiMetricsForDpi.c)
 *     InvalidateSecondaryDpiMetrics @ 0x14028775C (InvalidateSecondaryDpiMetrics.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1401CD284 (DeleteMetricsFont.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void *__fastcall ClearDpiMetrics(struct HLFONT__ **a1)
{
  DeleteMetricsFont(a1[1]);
  DeleteMetricsFont(a1[7]);
  DeleteMetricsFont(a1[8]);
  DeleteMetricsFont(a1[9]);
  DeleteMetricsFont(a1[5]);
  return memset_0(a1, 0, 0x50uLL);
}
