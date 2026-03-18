/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MinMPOSize@@@details@wil@@QEAA_NXZ @ 0x1802862F8
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800829B0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ @ 0x18023DE28 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MinMPOSize@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180285C74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MinMPOSize@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MinMPOSize@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802861E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MinMPOSize@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MinMPOSize>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MinMPOSize>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MinMPOSize>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
