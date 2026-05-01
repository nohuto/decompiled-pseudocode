/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAA_NXZ @ 0x1803C1AB0
 * Callers:
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1803B7C0C (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 *     ?DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ @ 0x1803B7FC0 (-DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B8718 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BE598 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_40979072>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_40979072>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_40979072>::ReportUsage((int *)a1, v5 & 1, 3u, v3);
  return v2;
}
