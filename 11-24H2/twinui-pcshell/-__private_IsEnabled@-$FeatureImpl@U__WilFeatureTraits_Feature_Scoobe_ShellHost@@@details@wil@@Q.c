/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHost@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803CCE3C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803C914C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebuggi.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellHostPinning@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805E603C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellHostPinning@@@deta.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803C8D2C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHost@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803CB718 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHost@@@details@wil@@QEAAX_NW4.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scoobe_ShellHost>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scoobe_ShellHost>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scoobe_ShellHost>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
