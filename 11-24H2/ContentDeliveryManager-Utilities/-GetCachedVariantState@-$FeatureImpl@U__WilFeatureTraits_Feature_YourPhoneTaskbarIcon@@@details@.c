/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180030F5C
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x180039D90 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA?AW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x18003DEE4 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@w.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18002F0DC (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180031704 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18003BACC (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int64 i; // rcx
  int v8; // eax
  int v9; // r9d
  signed __int64 v10; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+3Ch] [rbp+14h]

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v12 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCurrentVariantState(v6, &v13, &v12);
    if ( !v5 )
      v12 = 0;
    for ( i = *(_QWORD *)a2; ; i = v10 )
    {
      v8 = v13;
      v9 = i;
      *(_QWORD *)a2 = i;
      if ( (i & 8) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v14;
        v9 = v8 & 0x800 | (v12 != 0 ? 8 : 0) | i & 0xFFFC07F7 | v8 & 0x3F000;
        *(_DWORD *)a2 = v9;
      }
      if ( (i & 4) == 0 )
        *(_DWORD *)a2 = v8 & 0x400 | v9 & 0xFFFFFBFF | 4;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, *(_QWORD *)a2, i);
      if ( i == v10 )
        break;
    }
    if ( (i & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        &wil::details::g_enabledStateManager,
        a1,
        0LL,
        v5);
  }
  return a2;
}
