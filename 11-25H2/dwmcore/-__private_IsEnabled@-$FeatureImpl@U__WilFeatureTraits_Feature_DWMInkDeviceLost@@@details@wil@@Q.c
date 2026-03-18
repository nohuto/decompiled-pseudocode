/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMInkDeviceLost@@@details@wil@@QEAA_NXZ @ 0x1802507EC
 * Callers:
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x180224664 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 *     ?CleanupComputeScribble@CLegacyRenderTarget@@UEAAX_N@Z @ 0x180280D60 (-CleanupComputeScribble@CLegacyRenderTarget@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMInkDeviceLost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180250828 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMInkDeviceLost@@@details@wil@@QEAAX_NW4.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMInkDeviceLost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802508B0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMInkDeviceLost@@@detai.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMInkDeviceLost>::__private_IsEnabled(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMInkDeviceLost>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMInkDeviceLost>::ReportUsage(a1, v3);
  return v2;
}
