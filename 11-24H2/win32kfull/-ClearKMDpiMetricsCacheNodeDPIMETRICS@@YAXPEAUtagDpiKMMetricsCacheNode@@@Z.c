/*
 * XREFs of ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1402129C4
 * Callers:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x140212988 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 * Callees:
 *     ClearDpiMetrics @ 0x140287298 (ClearDpiMetrics.c)
 */

void __fastcall ClearKMDpiMetricsCacheNodeDPIMETRICS(struct tagDpiKMMetricsCacheNode *a1)
{
  ClearDpiMetrics((char *)a1 + 16);
  *((_WORD *)a1 + 1) = 1;
}
