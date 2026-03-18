/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18026C8AC
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18026D2E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wi.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAA_NXZ @ 0x18026D328 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo_ea_18026D328.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18009A8B0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18026A360 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@d.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::ReportUsage(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  unsigned int v7; // esi
  __int64 v8; // [rsp+30h] [rbp-28h]
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int16 v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v12 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::GetCachedFeatureEnabledState(
             (wil::details *)a1,
             v9);
    v6 = v12;
  }
  LODWORD(v8) = v4;
  v10 = 0;
  v11 = 2;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 2),
    0x335B6C8u,
    (v6 >> 10) & 1,
    (v6 >> 11) & 1,
    (__int64)&v10,
    v7,
    v8);
}
