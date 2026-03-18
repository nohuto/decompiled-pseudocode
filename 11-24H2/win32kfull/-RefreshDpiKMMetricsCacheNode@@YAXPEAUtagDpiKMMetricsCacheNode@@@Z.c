/*
 * XREFs of ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1401B216C
 * Callers:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1401B2108 (GetDPIMETRICSForDpiUnsafe.c)
 * Callees:
 *     EnsureDpiMetricsForDpi @ 0x1402873CC (EnsureDpiMetricsForDpi.c)
 */

void __fastcall RefreshDpiKMMetricsCacheNode(struct tagDpiKMMetricsCacheNode *a1)
{
  if ( *((_WORD *)a1 + 1) )
  {
    EnsureDpiMetricsForDpi((char *)a1 + 16, *(unsigned __int16 *)a1);
    *((_WORD *)a1 + 1) = 0;
  }
}
