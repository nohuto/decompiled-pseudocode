/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GatePerf@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18026C9D4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxPerfImp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18026BDE0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UxPerfImp@@@details@wil.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2506@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802766D8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2506@@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoDFlip@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180285FC4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoDFlip@@@details@w.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixLerpLayerRenderOpacity@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180286DB0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixLerpLayerRenderOpaci.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowNodeRender@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18029E154 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowNodeRender@@@deta.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802C386C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Suppor.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GatePerf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18026A4E8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GatePerf@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GatePerf@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18026C070 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GatePerf@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GatePerf>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GatePerf>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GatePerf>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
