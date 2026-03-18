/*
 * XREFs of InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x140212988
 * Callers:
 *     xxxSetNCFonts @ 0x140112490 (xxxSetNCFonts.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x140112FC8 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     DestroyDpiMetricsCache @ 0x14023D510 (DestroyDpiMetricsCache.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x14028FA28 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1402129C4 (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

void __fastcall InvalidateKMDpiMetricsCacheDPIMETRICS(__int64 a1, __int64 a2)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 66304); i; i = *(_QWORD *)(i + 8) )
    ClearKMDpiMetricsCacheNodeDPIMETRICS((struct tagDpiKMMetricsCacheNode *)i);
}
