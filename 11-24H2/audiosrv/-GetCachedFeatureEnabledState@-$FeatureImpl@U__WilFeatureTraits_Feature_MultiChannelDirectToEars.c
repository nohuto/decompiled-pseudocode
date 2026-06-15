/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiChannelDirectToEars@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009BC5C
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiChannelDirectToEars@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180129644 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiChannelDirectToEars@@@details@wil@@Q.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800A8C00 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800AA068 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiChannelDirectToEars@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801283A4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiChannelDirectToEar.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiChannelDirectToEars>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int32 i; // r8d
  __int16 v8; // ax
  bool v9; // zf
  signed __int32 v10; // edx
  signed __int32 v11; // eax
  int v13; // [rsp+38h] [rbp+10h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)Feature_MultiChannelDirectToEars__descriptor;
  *(_DWORD *)a2 = *(_DWORD *)Feature_MultiChannelDirectToEars__descriptor;
  if ( (v3 & 6) != 6 )
  {
    v4 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v13 = 0;
    v5 = v4;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiChannelDirectToEars>::GetCurrentFeatureEnabledState(
      v6,
      &v14,
      &v13);
    if ( !v5 )
      v13 = 0;
    for ( i = *(_DWORD *)a2; ; i = v11 )
    {
      v8 = v14;
      v9 = v13 == 0;
      v10 = i | 0x40000;
      *(_DWORD *)a2 = i | 0x40000;
      if ( !v9 && (i & 2) == 0 )
      {
        v10 = v8 & 0x9C1 | i & 0xFFFBF63E | 0x40000 | 2;
        *(_DWORD *)a2 = v10;
      }
      if ( (i & 4) == 0 )
      {
        v10 = v8 & 0x400 | v10 & 0xFFFFFBFF | 4;
        *(_DWORD *)a2 = v10;
      }
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)Feature_MultiChannelDirectToEars__descriptor, v10, i);
      if ( i == v11 )
        break;
    }
    if ( (i & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        &wil::details::g_enabledStateManager,
        Feature_MultiChannelDirectToEars__descriptor,
        0LL,
        v5);
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v14 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
