/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180316C6C
 * Callers:
 *     ?IsGameModeGame@BroadcastDVRComponent@@AEAA_NPEAUGameConfigInfo@@PEAW4GameModeReason@@@Z @ 0x180317304 (-IsGameModeGame@BroadcastDVRComponent@@AEAA_NPEAUGameConfigInfo@@PEAW4GameModeReason@@@Z.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x180318D44 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x180319E50 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18007F17C (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18010DBEC (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x1803199B8 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // eax
  int v6; // esi
  unsigned int FeatureVariant; // eax
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // eax
  FEATURE_CHANGE_TIME v11; // r10d
  signed __int64 i; // rcx
  int v13; // edx
  int v14; // eax
  signed __int64 v15; // rax
  int *v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF
  FEATURE_CHANGE_TIME v20; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v18 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v19 = 0;
    v20 = FEATURE_CHANGE_TIME_READ;
    v6 = v5;
    FeatureVariant = wil::details::WilApi_GetFeatureVariant(
                       (wil::details *)0xA8161E,
                       0,
                       (enum FEATURE_CHANGE_TIME)&v20,
                       &v19,
                       &v18,
                       v17);
    v8 = FeatureVariant & 0x100;
    v9 = (v19 != 0 ? 0x400 : 0) | (16 * (FeatureVariant & 0x80));
    v10 = FeatureVariant & 0xFFFFFE7F;
    if ( v10 && (v9 ^= (v10 & 0x3F) << 12, v8) )
      v11 = v20;
    else
      v11 = FEATURE_CHANGE_TIME_READ;
    if ( !v6 )
      v18 = 0;
    for ( i = *(_QWORD *)a2; ; i = v15 )
    {
      v13 = i;
      *(_QWORD *)a2 = i;
      if ( (i & 8) == 0 )
      {
        v14 = v18;
        *(_DWORD *)(a2 + 4) = v11;
        v13 = ((v14 != 0 ? 8 : 0) | (i ^ (v9 ^ i) & 0x3F000) & 0xFFFFFFF7) ^ ((unsigned __int16)v9 ^ ((v14 != 0 ? 8 : 0) | ((unsigned __int16)i ^ ((unsigned __int16)v9 ^ (unsigned __int16)i) & 0xF000) & 0xFFF7)) & 0x800;
        *(_DWORD *)a2 = v13;
      }
      if ( (i & 4) == 0 )
        *(_DWORD *)a2 = v13 ^ (v13 ^ v9) & 0x400 | 4;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, *(_QWORD *)a2, i);
      if ( i == v15 )
        break;
    }
    if ( (i & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        &wil::details::g_enabledStateManager,
        (volatile signed __int32 *)a1,
        0,
        v6);
  }
  return a2;
}
