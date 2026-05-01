/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling@@@details@wil@@QEAA_NXZ @ 0x180669B0C
 * Callers:
 *     ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180668F00 (-GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180668BCC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ImprovedLockScr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806699CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
