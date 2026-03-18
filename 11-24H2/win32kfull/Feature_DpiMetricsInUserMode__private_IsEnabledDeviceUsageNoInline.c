/*
 * XREFs of Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x14027A000
 * Callers:
 *     GetScaledLogFontForDpi @ 0x14007915C (GetScaledLogFontForDpi.c)
 *     xxxSetNCFonts @ 0x140112490 (xxxSetNCFonts.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x140112FC8 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x140152AA8 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     DestroyDpiMetricsCache @ 0x14023D510 (DestroyDpiMetricsCache.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x14028FA28 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     NtUserEnsureDpiMetricsForDpi @ 0x1402947F0 (NtUserEnsureDpiMetricsForDpi.c)
 *     NtUserEnsureDpiServerInfoForDpi @ 0x140294870 (NtUserEnsureDpiServerInfoForDpi.c)
 *     Get96DpiMetrics @ 0x1402F1598 (Get96DpiMetrics.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 *     GetDpiServerInfoForDpi @ 0x1402F18D4 (GetDpiServerInfoForDpi.c)
 *     GetSessionDpiMetrics @ 0x1402F1988 (GetSessionDpiMetrics.c)
 * Callees:
 *     Feature_DpiMetricsInUserMode__private_IsEnabledFallback @ 0x14027A038 (Feature_DpiMetricsInUserMode__private_IsEnabledFallback.c)
 */

__int64 Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DpiMetricsInUserMode__private_featureState & 0x10) != 0 )
    return Feature_DpiMetricsInUserMode__private_featureState & 1;
  else
    return Feature_DpiMetricsInUserMode__private_IsEnabledFallback(
             (unsigned int)Feature_DpiMetricsInUserMode__private_featureState,
             3LL);
}
