/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18002A19C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180029614 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wi.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_04_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C0B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_04_NonSec@@@details@wil@@QE.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18002D234 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18002D720 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil@@QEAA_NW.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestGateImp>::GetCurrentFeatureEnabledState(
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
  char v10; // cl
  int v11; // edi
  char v12; // si

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x33B9B24, 3u, a3, a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
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
  v10 = 0;
  v11 = 1;
  if ( (v9 & 0xC00) == 0xC00 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (v9 & 0x40) == 0 )
      goto LABEL_14;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLabVal>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TestLabVal>::GetImpl'::`2'::impl) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_04_NonSec>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_04_NonSec>::GetImpl'::`2'::impl);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( v12 && !v10 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_14:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v10 )
    v11 = 0;
  *(_DWORD *)a2 = v11 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
