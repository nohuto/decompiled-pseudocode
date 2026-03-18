/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInkWait@@@details@wil@@QEAA_NXZ @ 0x1802503CC
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x180175264 (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x180293CC4 (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInkWait@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180250408 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInkWait@@@details@wil@@QEAAX_NW4R.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInkWait@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180250490 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInkWait@@@detail.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuperWetInkWait>::__private_IsEnabled(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuperWetInkWait>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuperWetInkWait>::ReportUsage(a1, v3);
  return v2;
}
