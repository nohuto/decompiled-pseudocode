/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UexTest7@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18003790C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UexTest7@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800372C0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UexTest7@@@details@wil@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_26_03_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180036B70 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_26_03_NonSec@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180036F18 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@A.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x180039A64 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_UexTest7>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  unsigned int v6; // r9d
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // edi
  wil::details *v11; // rcx
  wil::details *v12; // rcx
  _QWORD *result; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v14 = a1;
  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x38419DD, (unsigned int)a2, a3, a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x40) != 0 ? 0x800 : 0) | ((FeatureEnabledState & 0x80) != 0
                                                                                           ? 0x400
                                                                                           : 0);
  *(_DWORD *)a2 = v7;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v8 = 0;
    if ( v6 == 2 )
      v8 = 64;
  }
  else
  {
    v8 = 64;
  }
  v9 = v8 | v7;
  *(_DWORD *)a2 = v9;
  v10 = 1;
  if ( (v9 & 0xC00) != 0xC00 && (v9 & 0x40) == 0 )
    goto LABEL_12;
  v11 = (wil::details *)*(unsigned int *)Feature_Ten2Loc__descriptor;
  if ( ((unsigned __int8)v11 & 4) == 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Ten2Loc>::GetCachedFeatureEnabledState(v11, &v14);
    v9 = *(_DWORD *)a2;
  }
  v12 = (wil::details *)*(unsigned int *)Feature_Standalone_26_03_NonSec__descriptor;
  if ( ((unsigned __int8)v12 & 4) == 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_26_03_NonSec>::GetCachedFeatureEnabledState(
      v12,
      &v15);
    v9 = *(_DWORD *)a2;
  }
  if ( (v9 & 0x40) == 0 )
LABEL_12:
    v10 = 0;
  result = a2;
  *(_DWORD *)a2 = v10 | v9 & 0xFFFFFFFE;
  return result;
}
