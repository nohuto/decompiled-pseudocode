/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_52926939@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180590AE4
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_52926939@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180590550 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_52926939@@@details@wil@@.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801D4728 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ValLabTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802EB1B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ValLabTest@@@details@wil@@QEAAX_NW4Report.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50284773@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180592960 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50284773@@@details@wil@@QEAA_NW4R.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_52926939>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  int v5; // edi
  unsigned int FeatureEnabledState; // eax
  __int64 v7; // r9
  int v8; // edx
  __int64 v9; // rdx
  int v10; // eax
  bool v11; // cl
  char v12; // si
  char IsEnabled; // al

  v5 = 1;
  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x32799DB,
                                        1LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  v8 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v8;
  if ( (_DWORD)v7 )
  {
    v10 = 0;
    if ( (_DWORD)v7 == 2 )
      v10 = 64;
    v9 = v10 | (unsigned int)v8;
  }
  else
  {
    v9 = v8 | 0x40u;
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
      goto LABEL_12;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ValLabTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ValLabTest>::GetImpl'::`2'::impl,
    v9,
    3072LL,
    v7);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_50284773>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_50284773>::GetImpl'::`2'::impl);
  v11 = IsEnabled != 0;
  if ( v12 && !IsEnabled )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_12:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v11 )
    v5 = 0;
  *(_DWORD *)a2 = v5 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
