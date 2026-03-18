/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_RequestFrameAPI@@@details@wil@@QEAA_NXZ @ 0x18024E1E8
 * Callers:
 *     ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1800C28E0 (-Present@CCaptureRenderTarget@@MEAAJXZ.c)
 *     ?IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ @ 0x1800C4CC0 (-IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_RequestFrameAPI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18024E224 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_RequestFrameAPI@@@details@wil@@QE.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_RequestFrameAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18024E2AC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_RequestFrameAPI@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_RequestFrameAPI>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_RequestFrameAPI>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_RequestFrameAPI>::ReportUsage(a1, v3);
  return v2;
}
