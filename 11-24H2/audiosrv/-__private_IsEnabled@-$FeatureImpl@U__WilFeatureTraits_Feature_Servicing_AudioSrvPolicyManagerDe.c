/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock@@@details@wil@@QEAA_NXZ @ 0x1800C2FF4
 * Callers:
 *     ?GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x180077970 (-GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C1860 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrvPolicy.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C28D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
