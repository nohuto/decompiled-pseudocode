/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18026BFE8
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@details@wil@@QEAA_NXZ @ 0x18026C998 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@details@wil@@QE.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800C8870 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18026A3BC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@detail.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableInkInVRR>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  __int64 v7; // [rsp+30h] [rbp-28h]
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int16 v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v4 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableInkInVRR>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            v8);
    v11 = v4;
  }
  LODWORD(v7) = 3;
  v9 = 0;
  v10 = 2;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 8),
    0x2FE3210u,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v9,
    v6,
    v7);
}
