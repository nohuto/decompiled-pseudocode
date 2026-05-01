/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803BAA14
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B8E08 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801D4728 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BE944 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56108446@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803C1C94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56108446@@@details@wil@@QEAA_NW4R.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustUndockedSearchApp_Master@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803C1E38 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustUndockedSearchApp_Master.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803C1EF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2@@@details@wil@@QEA.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  unsigned int v6; // r9d
  int v7; // r8d
  int v8; // r8d
  int v9; // eax
  bool v10; // cl
  int v11; // edi
  char v12; // si

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x335B862,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x40) != 0 ? 0x800 : 0) | ((FeatureEnabledState & 0x80) != 0
                                                                                           ? 0x400
                                                                                           : 0);
  *(_DWORD *)a2 = v7;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v9 = 0;
    if ( v6 == 2 )
      v9 = 64;
    v8 = v9 | v7;
  }
  else
  {
    v8 = v7 | 0x40;
  }
  *(_DWORD *)a2 = v8;
  v10 = 0;
  v11 = 1;
  if ( (v8 & 0xC00) == 0xC00 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (v8 & 0x40) == 0 )
      goto LABEL_17;
  }
  v10 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchWebView2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchWebView2>::GetImpl'::`2'::impl) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_54322664>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_54322664>::GetImpl'::`2'::impl);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56108446>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56108446>::GetImpl'::`2'::impl) )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustUndockedSearchApp_Master>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FullTrustUndockedSearchApp_Master>::GetImpl'::`2'::impl) )
        v10 = 1;
    }
  }
  if ( v12 && !v10 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_17:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v10 )
    v11 = 0;
  *(_DWORD *)a2 = v11 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
