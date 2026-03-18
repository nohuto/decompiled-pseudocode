/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NXZ @ 0x180244CF8
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x180158BE0 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 *     ?RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180214E20 (-RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180244D34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAAX_NW4Report.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180244DBC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::__private_IsEnabled(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::ReportUsage(a1, v3);
  return v2;
}
