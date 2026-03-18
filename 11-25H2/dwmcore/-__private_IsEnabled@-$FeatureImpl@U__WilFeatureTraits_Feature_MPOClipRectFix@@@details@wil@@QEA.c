/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MPOClipRectFix@@@details@wil@@QEAA_NXZ @ 0x1802868F8
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023E0CC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x1802479D0 (-GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?GetMPORects@CBitmapRealization@@IEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x180247C34 (-GetMPORects@CBitmapRealization@@IEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MPOClipRectFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180286658 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MPOClipRectFix@@@details.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MPOClipRectFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180286870 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MPOClipRectFix@@@details@wil@@QEAAX_NW4Re.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MPOClipRectFix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MPOClipRectFix>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MPOClipRectFix>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
