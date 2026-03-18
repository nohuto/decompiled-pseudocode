/*
 * XREFs of ?ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x140287260
 * Callers:
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1401E28B8 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     DestroyDpiMetricsCache @ 0x14023D510 (DestroyDpiMetricsCache.c)
 *     EnsureArbitraryDpiServerInfoForDpi @ 0x14028735C (EnsureArbitraryDpiServerInfoForDpi.c)
 *     InvalidateSecondaryDpiServerInfos @ 0x1402877B4 (InvalidateSecondaryDpiServerInfos.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1401CD284 (DeleteMetricsFont.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall ClearDpiServerInfo(struct HLFONT__ **a1)
{
  DeleteMetricsFont(a1[1]);
  DeleteMetricsFont(a1[3]);
  memset_0(a1, 0, 0x68uLL);
}
