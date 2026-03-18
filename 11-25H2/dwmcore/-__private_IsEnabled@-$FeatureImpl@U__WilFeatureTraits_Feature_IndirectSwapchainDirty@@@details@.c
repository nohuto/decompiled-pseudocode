/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IndirectSwapchainDirty@@@details@wil@@QEAA_NXZ @ 0x18024F6BC
 * Callers:
 *     ?UpdateTargetDirty@CIndirectSwapchainRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x18024F660 (-UpdateTargetDirty@CIndirectSwapchainRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_IndirectSwapchainDirty@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18024F6F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_IndirectSwapchainDirty@@@details@wil@@QEA.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IndirectSwapchainDirty@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18024F780 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_IndirectSwapchainDirty@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_IndirectSwapchainDirty>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IndirectSwapchainDirty>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IndirectSwapchainDirty>::ReportUsage(a1, v3);
  return v2;
}
