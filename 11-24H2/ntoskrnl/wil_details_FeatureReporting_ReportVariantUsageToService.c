/*
 * XREFs of wil_details_FeatureReporting_ReportVariantUsageToService @ 0x1403A4AA8
 * Callers:
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x1405DB0A0 (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1403A4B50 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportVariantUsageToService(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 result; // rax

  v2 = a2;
  result = wil_details_FeatureReporting_ReportUsageToServiceDirect(
             &Feature_AdaptiveHibernateEnhancements__private_descriptor,
             a2,
             (((unsigned int)a2 >> 12) & 0x3F) + 320,
             1LL);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return guard_dispatch_icall_no_overrides(
               48709785LL,
               &Feature_CompatPreallocatedVelocity55922077_logged_traits,
               0LL,
               v2 & 1);
  }
  return result;
}
