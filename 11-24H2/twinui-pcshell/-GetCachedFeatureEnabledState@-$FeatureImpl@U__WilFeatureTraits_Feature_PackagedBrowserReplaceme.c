/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedBrowserReplacement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18068E3AC
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedBrowserReplacement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806946A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedBrowserReplacement@@@details@wil@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18007F17C (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18010DBEC (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedBrowserReplacement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18068E784 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedBrowserReplacem.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedBrowserReplacement>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  int v5; // esi
  __int64 v6; // rcx
  signed __int32 i; // r8d
  bool v8; // zf
  unsigned int v9; // edx
  __int16 v10; // ax
  signed __int32 v11; // eax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)a1;
  *(_DWORD *)a2 = *(_DWORD *)a1;
  if ( (v3 & 6) != 6 )
  {
    v14 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedBrowserReplacement>::GetCurrentFeatureEnabledState(
      v6,
      &v13,
      &v14);
    if ( !v5 )
      v14 = 0;
    for ( i = *(_DWORD *)a2; ; i = v11 )
    {
      v8 = v14 == 0;
      v9 = i;
      v10 = v13;
      *(_DWORD *)a2 = i;
      if ( !v8 && (i & 2) == 0 )
      {
        v9 = v10 & 0x9C1 | i & 0xFFFFF63E | 2;
        *(_DWORD *)a2 = v9;
      }
      if ( (i & 4) == 0 )
      {
        v9 = v10 & 0x400 | v9 & 0xFFFFFBFF | 4;
        *(_DWORD *)a2 = v9;
      }
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v9, i);
      if ( i == v11 )
        break;
    }
    if ( (i & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        &wil::details::g_enabledStateManager,
        (volatile signed __int32 *)a1,
        0,
        v5);
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v13 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
