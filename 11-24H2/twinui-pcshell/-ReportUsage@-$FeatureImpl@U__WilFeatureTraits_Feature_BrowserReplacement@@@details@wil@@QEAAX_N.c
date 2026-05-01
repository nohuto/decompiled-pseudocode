/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806945FC
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18068ED6C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007F3A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18068E2A0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@det.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::ReportUsage(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  int v3; // edi
  unsigned int v5; // r8d
  unsigned int v6; // esi
  __int64 v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h] BYREF
  __int16 v9; // [rsp+4Ch] [rbp-1Ch]

  v3 = a3;
  v5 = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v7 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            &v7);
    v5 = v7;
  }
  v8 = 0;
  v9 = 3;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 2),
    0x142FEC4u,
    (v5 >> 10) & 1,
    (v5 >> 11) & 1,
    (__int64)&v8,
    v6,
    v3);
}
