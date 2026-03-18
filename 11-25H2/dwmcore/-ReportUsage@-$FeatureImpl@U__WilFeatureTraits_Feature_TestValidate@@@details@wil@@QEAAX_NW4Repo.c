/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestValidate@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180262E5C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectHash@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18024ACF0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectHash@@@details@wi.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_FBR@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18024D188 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_FBR@@@details@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18024E088 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFram.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800C8870 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestValidate@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180262AAC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestValidate@@@details@w.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestValidate>::ReportUsage(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r8d
  __int64 v6; // [rsp+30h] [rbp-28h]
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v10 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestValidate>::GetCachedFeatureEnabledState(
             (wil::details *)a1,
             v7);
    v4 = v10;
  }
  v9 = 3;
  LODWORD(v6) = 0;
  v8 = 0;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 2),
    0x3039059u,
    (v4 >> 10) & 1,
    (v4 >> 11) & 1,
    (__int64)&v8,
    1u,
    v6);
}
