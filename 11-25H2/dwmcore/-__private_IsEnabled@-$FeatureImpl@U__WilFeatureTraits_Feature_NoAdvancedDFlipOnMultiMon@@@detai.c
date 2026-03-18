/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon@@@details@wil@@QEAA_NXZ @ 0x18024C4DC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180274714 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18024C518 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18024C71C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon@@@details@wil@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon>::ReportUsage(a1, v3);
  return v2;
}
