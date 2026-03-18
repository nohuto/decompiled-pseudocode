/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@details@wil@@QEAA_NXZ @ 0x1802435B8
 * Callers:
 *     ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18005EBA0 (-IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?IsOverlayRequired@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180222A50 (-IsOverlayRequired@CDxHandleYUVBitmapRealization@@UEBA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18009A8B0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180243658 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestric.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::__private_IsEnabled(
        int *a1)
{
  unsigned int v2; // r8d
  unsigned __int8 v3; // di
  __int64 v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int16 v7; // [rsp+54h] [rbp+Ch]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  char v9; // [rsp+60h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::GetCachedFeatureEnabledState(
    a1,
    &v8);
  v2 = *a1;
  v3 = v8 & 1;
  if ( (*a1 & 4) == 0 )
  {
    v8 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::GetCachedFeatureEnabledState(
                      a1,
                      &v9);
    v2 = v8;
  }
  v6 = 0;
  LODWORD(v5) = 3;
  v7 = 1;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 2),
    0x2FB7FEFu,
    (v2 >> 10) & 1,
    (v2 >> 11) & 1,
    (__int64)&v6,
    v3,
    v5);
  return v3;
}
