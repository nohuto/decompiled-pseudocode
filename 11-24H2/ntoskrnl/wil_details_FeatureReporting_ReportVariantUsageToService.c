/*
 * XREFs of wil_details_FeatureReporting_ReportVariantUsageToService @ 0x14021DF60
 * Callers:
 *     Feature_AntiStarvationReadyPeriodVariable__private_GetVariant @ 0x1405B1EEC (Feature_AntiStarvationReadyPeriodVariable__private_GetVariant.c)
 *     Feature_AntiStarvationScanPeriodVariable__private_GetVariant @ 0x1405B1F80 (Feature_AntiStarvationScanPeriodVariable__private_GetVariant.c)
 *     Feature_AntiStarvationThreadBoostCountVariable__private_GetVariant @ 0x1405B2014 (Feature_AntiStarvationThreadBoostCountVariable__private_GetVariant.c)
 *     Feature_AntiStarvationThreadScanCountVariable__private_GetVariant @ 0x1405B20A8 (Feature_AntiStarvationThreadScanCountVariable__private_GetVariant.c)
 *     Feature_EffectivePriorityNotAlwaysRankBiased__private_GetVariant @ 0x1405B213C (Feature_EffectivePriorityNotAlwaysRankBiased__private_GetVariant.c)
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x1405D4DBC (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 *     Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant @ 0x1405DC8A0 (Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14021E000 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportVariantUsageToService(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 result; // rax

  v2 = a2;
  result = wil_details_FeatureReporting_ReportUsageToServiceDirect(a1, a2, (((unsigned int)a2 >> 12) & 0x3F) + 320, 1LL);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v2 & 1);
  }
  return result;
}
