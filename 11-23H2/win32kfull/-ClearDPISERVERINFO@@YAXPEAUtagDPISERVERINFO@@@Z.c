/*
 * XREFs of ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C001B808
 * Callers:
 *     DestroyDpiMetricsCache @ 0x1C001B700 (DestroyDpiMetricsCache.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C001B770 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C001B840 (DeleteMetricsFont.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

void __fastcall ClearDPISERVERINFO(struct tagDPISERVERINFO *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 1));
  DeleteMetricsFont(*((_QWORD *)a1 + 3));
  memset_0(a1, 0, 0x68uLL);
}
