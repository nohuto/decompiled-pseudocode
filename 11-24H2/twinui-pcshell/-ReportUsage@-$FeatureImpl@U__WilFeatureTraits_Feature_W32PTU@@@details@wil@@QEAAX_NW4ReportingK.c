/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W32PTU@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805E8034
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W32PTU@@@details@wil@@QEAA_NXZ @ 0x1805EC6F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W32PTU@@@details@wil@@QEAA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007F3A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W32PTU@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805E5F34 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W32PTU@@@details@wil@@AE.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W32PTU>::ReportUsage(int *a1, unsigned __int8 a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // edi
  __int64 v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h] BYREF
  __int16 v7; // [rsp+4Ch] [rbp-1Ch]

  v2 = *a1;
  v4 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v5 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_W32PTU>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            &v5);
    v2 = v5;
  }
  v6 = 0;
  v7 = 2;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 2),
    0x3430052u,
    (v2 >> 10) & 1,
    (v2 >> 11) & 1,
    (__int64)&v6,
    v4,
    3);
}
