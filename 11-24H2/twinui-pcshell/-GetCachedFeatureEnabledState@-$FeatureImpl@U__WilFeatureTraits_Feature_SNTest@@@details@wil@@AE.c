/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802CFD5C
 * Callers:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801DD530 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEA.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18007F17C (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18010DBEC (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180270368 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@A.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v5; // eax
  int v6; // esi
  __int64 v7; // rcx
  int *v8; // r9
  signed __int32 i; // r8d
  bool v10; // zf
  unsigned int v11; // edx
  __int16 v12; // ax
  signed __int32 v13; // eax
  int v15; // [rsp+30h] [rbp+8h] BYREF
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)a1;
  *(_DWORD *)a2 = *(_DWORD *)a1;
  if ( (v3 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v15 = 0;
    v6 = v5;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::GetCurrentFeatureEnabledState(
      v7,
      &v16,
      (__int64)&v15,
      v8);
    for ( i = *(_DWORD *)a2; ; i = v13 )
    {
      v10 = v15 == 0;
      v11 = i;
      v12 = v16;
      *(_DWORD *)a2 = i;
      if ( !v10 && (i & 2) == 0 )
      {
        v11 = v12 & 0x9C1 | i & 0xFFFFF63E | 2;
        *(_DWORD *)a2 = v11;
      }
      if ( (i & 4) == 0 )
      {
        v11 = v12 & 0x400 | v11 & 0xFFFFFBFF | 4;
        *(_DWORD *)a2 = v11;
      }
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v11, i);
      if ( i == v13 )
        break;
    }
    if ( (i & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        &wil::details::g_enabledStateManager,
        (volatile signed __int32 *)a1,
        3,
        v6);
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v16 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
