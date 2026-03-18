/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14008AC8C
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x14008AE00 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_IsEnabledFallback @ 0x14008AF60 (wil_details_IsEnabledFallback.c)
 * Callees:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x14008AE00 (wil_details_GetCurrentFeatureEnabledState.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        wil_details_FeatureStateCache *featureState,
        wil_details_FeatureStateCache observedState,
        const wil_details_FeatureDescriptor *descriptor)
{
  unsigned int v3; // ebp
  unsigned int exchange; // edi
  __int16 exchange64; // bx
  unsigned int v8; // eax
  char i; // cl
  unsigned int v10; // esi
  int shouldCacheState; // [rsp+50h] [rbp+8h] BYREF
  wil_details_FeatureStateCache state; // [rsp+58h] [rbp+10h]

  v3 = 0;
  shouldCacheState = 0;
  state.exchange64 = observedState.exchange64;
  exchange = observedState.exchange;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
  exchange64 = wil_details_GetCurrentFeatureEnabledState(descriptor, &shouldCacheState).exchange64;
  if ( !descriptor->changeTime )
    shouldCacheState = v3 != 0 ? shouldCacheState : 0;
  v8 = exchange;
  for ( i = exchange; ; i = v8 )
  {
    v10 = v8;
    state.exchange = v8;
    if ( shouldCacheState )
    {
      state.exchange = v8;
      if ( (i & 2) == 0 )
      {
        v10 = exchange64 & 0x9C1 | v8 & 0xFFFFF63E | 2;
        state.exchange = v10;
      }
    }
    if ( (exchange & 4) == 0 )
    {
      v10 = v10 & 0xFFFFFBFF | exchange64 & 0x400 | 4;
      state.exchange = v10;
    }
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)featureState, v10, exchange);
    if ( exchange == v8 )
      break;
    exchange = v8;
  }
  if ( (exchange & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(
      featureState,
      (wil_FeatureChangeTime)descriptor->changeTime,
      v3);
  if ( !shouldCacheState )
    state.exchange = v10 & 0xFFFFF63E | exchange64 & 0x9C1;
  return state;
}
