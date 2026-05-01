/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18033031C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18032F9C4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801D4728 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_26_02_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803328E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_26_02_NonSec@@@details@wil@@QE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803356A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NW4R.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803356E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NW4R.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  int v5; // edi
  unsigned int FeatureEnabledState; // eax
  unsigned int v7; // r9d
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  char v11; // cl
  char v12; // si

  v5 = 1;
  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x395CE34,
                                        1LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  v8 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x40) != 0 ? 0x800 : 0) | ((FeatureEnabledState & 0x80) != 0
                                                                                           ? 0x400
                                                                                           : 0);
  *(_DWORD *)a2 = v8;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v10 = 0;
    if ( v7 == 2 )
      v10 = 64;
    v9 = v10 | v8;
  }
  else
  {
    v9 = v8 | 0x40;
  }
  *(_DWORD *)a2 = v9;
  v11 = 0;
  if ( (v9 & 0xC00) == 0xC00 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (v9 & 0x40) == 0 )
      goto LABEL_16;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_26_02_NonSec>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_Standalone_26_02_NonSec>::GetImpl'::`2'::impl);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( v12 && !v11 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_16:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v11 )
    v5 = 0;
  *(_DWORD *)a2 = v5 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
