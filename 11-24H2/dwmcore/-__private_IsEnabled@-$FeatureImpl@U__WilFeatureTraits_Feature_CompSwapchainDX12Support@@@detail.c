/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@QEAA_NXZ @ 0x1802BB160
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180198210 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180198BE0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z @ 0x1802BA50C (-InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802BC94C (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802BA100 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802BADF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@Q.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
