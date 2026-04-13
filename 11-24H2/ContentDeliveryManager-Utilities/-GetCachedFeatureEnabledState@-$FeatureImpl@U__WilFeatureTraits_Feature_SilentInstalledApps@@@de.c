/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SilentInstalledApps@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800503D4
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SilentInstalledApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056834 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SilentInstalledApps@@@details@wil@@QEAAX_.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18002F0DC (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18003BACC (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SilentInstalledApps@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800511F8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SilentInstalledApps@@@d.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SilentInstalledApps>::GetCachedFeatureEnabledState(
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
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SilentInstalledApps>::GetCurrentFeatureEnabledState(
      v7,
      &v15,
      &v14);
    if ( !v6 )
      v14 = 0;
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
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)&wil::details::g_enabledStateManager,
        (volatile signed __int32 *)a1,
        0,
        v6);
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v15 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
