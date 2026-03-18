/*
 * XREFs of GetDPIMETRICSForDpiUnsafe @ 0x1C00E93E0
 * Callers:
 *     GetDPIMETRICSForDpi @ 0x1C00D8DE0 (GetDPIMETRICSForDpi.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00E8FCC (GetWindowNCMetricsForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C00E924C (GetScaledLogFontForDpi.c)
 * Callees:
 *     ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01BE87C (-EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01BEA78 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

struct tagDpiKMMetricsCacheNode *__fastcall GetDPIMETRICSForDpiUnsafe(__int64 a1)
{
  struct tagDpiKMMetricsCacheNode *result; // rax
  struct tagDpiKMMetricsCacheNode *v2; // rbx

  if ( (_DWORD)a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return (struct tagDpiKMMetricsCacheNode *)GetSessionDpiMetrics(a1);
  if ( (_DWORD)a1 == 96 )
    return (struct tagDpiKMMetricsCacheNode *)Get96DpiMetrics();
  result = EnsureKMDpiMetricsCacheNode(a1);
  v2 = result;
  if ( result )
  {
    RefreshDpiKMMetricsCacheNode(result);
    return (struct tagDpiKMMetricsCacheNode *)((char *)v2 + 16);
  }
  return result;
}
