/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport_v2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800373F8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport_v2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180036A38 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupp.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x180039A64 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc02@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180039BF4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc02@@@details@wil@@QEAA_NW4.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport_v2>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  unsigned int v6; // r9d
  _QWORD *v7; // rcx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // edi
  char v12; // si
  char IsEnabled; // al

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x3A9BE89, (unsigned int)a2, a3, a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = a2;
  v8 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v8;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v9 = 0;
    if ( v6 == 2 )
      v9 = 64;
  }
  else
  {
    v9 = 64;
  }
  v10 = v9 | v8;
  *(_DWORD *)a2 = v10;
  LOBYTE(v7) = 0;
  v11 = 1;
  if ( (v10 & 0xC00) == 0xC00 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (v10 & 0x40) == 0 )
    {
LABEL_13:
      v11 = 0;
      goto LABEL_14;
    }
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc02>::__private_IsEnabled(v7);
  v10 = *(_DWORD *)a2;
  if ( v12 && !IsEnabled )
    v10 &= ~0x400u;
  if ( (v10 & 0x40) == 0 || !IsEnabled )
    goto LABEL_13;
LABEL_14:
  *(_DWORD *)a2 = v11 | v10 & 0xFFFFFFFE;
  return a2;
}
