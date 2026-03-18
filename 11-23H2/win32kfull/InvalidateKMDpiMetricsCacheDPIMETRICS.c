/*
 * XREFs of InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00D2224
 * Callers:
 *     DestroyDpiMetricsCache @ 0x1C001B700 (DestroyDpiMetricsCache.c)
 *     xxxSetNCFonts @ 0x1C00CFFDC (xxxSetNCFonts.c)
 *     SetIconMetrics @ 0x1C00D1B34 (SetIconMetrics.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C71A4 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C001B840 (DeleteMetricsFont.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 InvalidateKMDpiMetricsCacheDPIMETRICS()
{
  __int64 result; // rax
  __int64 i; // rdi

  result = gpDpiKernelModeMetricsCache;
  for ( i = gpDpiKernelModeMetricsCache; i; i = *(_QWORD *)(i + 8) )
  {
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 16));
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 64));
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 72));
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 80));
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 48));
    memset_0((void *)(i + 16), 0, 0x48uLL);
    result = 1LL;
    *(_WORD *)(i + 2) = 1;
  }
  return result;
}
