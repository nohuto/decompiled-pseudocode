/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x1401B06A0
 * Callers:
 *     ?InitializePowerWatchdogTimeoutDefaults@@YAXXZ @ 0x140140064 (-InitializePowerWatchdogTimeoutDefaults@@YAXXZ.c)
 *     Feature_MonitorPowerOnWatchdogTimeout__private_GetVariant @ 0x1401AED28 (Feature_MonitorPowerOnWatchdogTimeout__private_GetVariant.c)
 * Callees:
 *     wil_details_GetCurrentVariantState @ 0x1401B07A8 (wil_details_GetCurrentVariantState.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

signed __int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedVariantState(
        __int64 a1,
        signed __int64 a2,
        __int64 a3)
{
  unsigned int v3; // esi
  int v5; // ecx
  unsigned int v6; // r9d
  signed __int64 v7; // rdi
  unsigned int v8; // r8d
  signed __int64 v9; // rax
  __int64 CurrentVariantState; // [rsp+30h] [rbp+8h]
  unsigned __int64 v12; // [rsp+30h] [rbp+8h]
  int v13; // [rsp+40h] [rbp+18h] BYREF
  int v14; // [rsp+44h] [rbp+1Ch]

  v14 = HIDWORD(a3);
  v3 = 0;
  v13 = 0;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
  CurrentVariantState = wil_details_GetCurrentVariantState(a1, &v13);
  v5 = CurrentVariantState;
  v6 = HIDWORD(CurrentVariantState);
  while ( 1 )
  {
    HIDWORD(v12) = HIDWORD(a2);
    v7 = a2;
    if ( (a2 & 8) != 0 )
    {
      v8 = a2;
    }
    else
    {
      v8 = (v13 != 0 ? 8 : 0) | v5 & 0x3F800 | a2 & 0xFFFC07F7;
      v12 = __PAIR64__(v6, v8);
      v7 = __PAIR64__(v6, v8);
    }
    if ( (a2 & 4) == 0 )
    {
      LODWORD(v12) = v8 & 0xFFFFFBFF | v5 & 0x400 | 4;
      v7 = v12;
    }
    v9 = _InterlockedCompareExchange64(&Feature_MonitorPowerOnWatchdogTimeout__private_featureState, v7, a2);
    if ( a2 == v9 )
      break;
    a2 = v9;
  }
  if ( (a2 & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(
      &Feature_MonitorPowerOnWatchdogTimeout__private_featureState,
      3LL,
      v3);
  return v7;
}
