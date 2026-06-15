/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStreamHang@@@details@wil@@QEAA_NXZ @ 0x180108A00
 * Callers:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180012670 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStreamHang@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180106598 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStreamH.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStreamHang@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010729C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStreamHang@@@details@wil.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForEachStreamHang>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForEachStreamHang>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForEachStreamHang>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
