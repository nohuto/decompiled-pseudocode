/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinsoundHKCURead@@@details@wil@@QEAA_NXZ @ 0x1801460DC
 * Callers:
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x1800916C8 (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinsoundHKCURead@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180145EB4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinsoundHKCURe.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinsoundHKCURead@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180146054 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinsoundHKCURead@@@details@wil@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinsoundHKCURead>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinsoundHKCURead>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinsoundHKCURead>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
