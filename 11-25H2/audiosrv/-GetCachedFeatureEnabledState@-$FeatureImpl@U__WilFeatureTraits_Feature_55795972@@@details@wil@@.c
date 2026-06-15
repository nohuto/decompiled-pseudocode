/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55795972@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D5C14
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55795972@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DAD9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55795972@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55795972@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800DD938 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55795972@@@details@wil@@QEAA_NW4R.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800BCCEC (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800C0630 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55795972@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800D69F8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55795972@@@details@wil@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55795972>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v5; // eax
  int v6; // esi
  __int64 v7; // rcx
  signed __int32 i; // r8d
  bool v9; // zf
  unsigned int v10; // edx
  __int16 v11; // ax
  signed __int32 v12; // eax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)a1;
  *(_DWORD *)a2 = *(_DWORD *)a1;
  if ( (v3 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v14 = 0;
    v6 = v5;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_55795972>::GetCurrentFeatureEnabledState(v7, &v15, &v14);
    for ( i = *(_DWORD *)a2; ; i = v12 )
    {
      v9 = v14 == 0;
      v10 = i;
      v11 = v15;
      *(_DWORD *)a2 = i;
      if ( !v9 && (i & 2) == 0 )
      {
        v10 = v11 & 0x9C1 | i & 0xFFFFF63E | 2;
        *(_DWORD *)a2 = v10;
      }
      if ( (i & 4) == 0 )
      {
        v10 = v11 & 0x400 | v10 & 0xFFFFFBFF | 4;
        *(_DWORD *)a2 = v10;
      }
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v10, i);
      if ( i == v12 )
        break;
    }
    if ( (i & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 3, v6);
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v15 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
