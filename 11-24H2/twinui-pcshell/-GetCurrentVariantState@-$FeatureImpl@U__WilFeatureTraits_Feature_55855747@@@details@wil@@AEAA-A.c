/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803BBAC8
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803BA2E0 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA-AT.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802EDBC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x1803199B8 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::GetCurrentVariantState(
        __int64 a1,
        int *a2,
        int *a3)
{
  int FeatureVariant; // eax
  int v5; // esi
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = HIDWORD(a1);
  v9 = 0;
  v11 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant((wil::details *)0x3544A83, 3LL, (__int64)&v11, &v9, a3);
  *(_QWORD *)a2 = 0LL;
  v5 = FeatureVariant & 0x100;
  v6 = FeatureVariant & 0xFFFFFE7F;
  *a2 = (v9 != 0 ? 0x400 : 0) | (16 * (FeatureVariant & 0x80));
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxAccOptimization>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_UxAccOptimization>::GetImpl'::`2'::impl) )
  {
    v7 = *a2;
    if ( v6 )
    {
      *a2 = v7 ^ (v7 ^ (v6 << 12)) & 0x3F000;
      a2[1] = v5 != 0 ? v11 : 0;
    }
    else
    {
      a2[1] = 0;
      *a2 = v7 & 0xFFFC0FFF | 0x4000;
    }
  }
  else
  {
    a2[1] = 0;
    *a2 &= 0xFFFC0FFF;
  }
  return a2;
}
