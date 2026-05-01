/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ServicingNormalPri@@@details@wil@@QEAA_NXZ @ 0x18007EBC4
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180029420 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ServicingNormalPri@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18007C414 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ServicingNormalPri@@@det.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ServicingNormalPri@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007E6EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ServicingNormalPri@@@details@wil@@QEAAX_N.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ServicingNormalPri>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ServicingNormalPri>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ServicingNormalPri>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
