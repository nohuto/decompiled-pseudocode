/*
 * XREFs of ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x14007946C
 * Callers:
 *     GetWindowFrameMetricForDpi @ 0x140079440 (GetWindowFrameMetricForDpi.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x14007AED4 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     GetDpiCacheIndex @ 0x1402F160C (GetDpiCacheIndex.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpiWithCompatFlags2(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = a2;
  if ( (a3 & 0x10000000) != 0 || (a3 & 0x20000000) != 0 )
    return 0LL;
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928);
  if ( v3 == *(unsigned __int16 *)(v6 + 6998) )
    return *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19928) + 2400LL);
  if ( v3 == 96 )
    return *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19928) + 2520LL);
  if ( (unsigned int)GetDpiCacheIndex(v3) == -1 )
    return ScaleSystemMetricForDPIWithoutCache(29LL, v3);
  return GetDpiDependentMetric(29, v3);
}
