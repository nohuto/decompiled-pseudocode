/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1806987C8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18068E808 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePin.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803212F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@d.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18032239C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAAX.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::ReportUsage((int *)a1, v5 & 1, 0, v3);
  return v2;
}
