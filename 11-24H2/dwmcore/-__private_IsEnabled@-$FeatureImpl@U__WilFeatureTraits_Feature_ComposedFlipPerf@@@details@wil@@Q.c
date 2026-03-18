/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180100A78 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x180102DE0 (-GetCompositorClockBoost@CComposition@@QEBA_NXZ.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x1801A6C44 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?SetVBlankDuration@RefreshRateInfo@@QEAA_NI_K@Z @ 0x18020F0F8 (-SetVBlankDuration@RefreshRateInfo@@QEAA_NI_K@Z.c)
 *     ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x180230080 (-s_PowerNotification@CComposition@@KAKPEAXK0@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1802317DC (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x1802330FC (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
 *     ?BoostFrameRate@CDDisplayRenderTarget@@UEAA_N_N@Z @ 0x180234630 (-BoostFrameRate@CDDisplayRenderTarget@@UEAA_N_N@Z.c)
 *     ?BoostFrameRate@CLegacyRenderTarget@@UEAA_N_N@Z @ 0x1802346D0 (-BoostFrameRate@CLegacyRenderTarget@@UEAA_N_N@Z.c)
 *     ?UpdateBatterySaverState@CComposition@@IEAAX_N@Z @ 0x18025C59C (-UpdateBatterySaverState@CComposition@@IEAAX_N@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@111AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180268E88 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18025AA10 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18025C020 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAAX_NW4.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
