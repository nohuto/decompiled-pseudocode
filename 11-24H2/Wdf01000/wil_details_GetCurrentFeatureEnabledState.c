/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x14008AE00
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14008AC8C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14008AC8C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1400D93D0 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_GetCurrentFeatureEnabledState(
        const wil_details_FeatureDescriptor *descriptor,
        int *cacheFeatureState)
{
  unsigned int featureId; // edx
  BOOL v5; // r8d
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // ebx
  const wil_details_FeatureDescriptor *const *requiresFeatures; // rdi
  const wil_details_FeatureDescriptor *v12; // rcx
  unsigned int exchange; // eax
  BOOL v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  wil_FeatureState state; // [rsp+20h] [rbp-28h] BYREF
  wil_details_FeatureStateCache result; // [rsp+50h] [rbp+8h]
  wil_details_FeatureStateCache observedState; // [rsp+58h] [rbp+10h]

  featureId = descriptor->featureId;
  v5 = (unsigned __int8)(descriptor->changeTime - 2) <= 1u;
  *cacheFeatureState = 1;
  memset(&state, 0, sizeof(state));
  v6 = wil_RtlStagingConfig_QueryFeatureState(&state, featureId, v5, cacheFeatureState);
  result.payloadId = 0;
  v7 = state.enabledState & (unsigned __int8)-(v6 != 0) & 3;
  if ( v7 )
  {
    v8 = 0;
    if ( state.enabledState == wil_FeatureEnabledState_Enabled )
      v8 = 64;
  }
  else
  {
    v8 = descriptor->isEnabledByDefault != 0 ? 0x40 : 0;
  }
  v9 = v8 | (state.hasNotification != 0 ? 0x400 : 0) | (state.isWexpConfiguration != 0 ? 0x800 : 0) | (v7 << 7);
  v10 = v9 ^ (v9 >> 6) & 1;
  result.exchange = v10;
  if ( (v8 & 0x40) != 0 )
  {
    requiresFeatures = descriptor->requiresFeatures;
    if ( requiresFeatures )
    {
      result.exchange = v9 ^ (v9 >> 6) & 1;
      do
      {
        v12 = *requiresFeatures;
        if ( !*requiresFeatures )
          break;
        if ( v12->isAlwaysEnabled || v12->isAlwaysDisabled )
        {
          v15 = (v10 & 1) != 0 && v12->isEnabledByDefault;
          v16 = v10 & 0xFFFFFFFE;
        }
        else
        {
          observedState.exchange64 = v12->featureStateCache->exchange64;
          if ( (observedState.exchange64 & 2) != 0 )
            exchange = v12->featureStateCache->exchange;
          else
            LOBYTE(exchange) = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
                                 v12->featureStateCache,
                                 observedState,
                                 v12).exchange64;
          v14 = ((unsigned __int8)v10 & (unsigned __int8)exchange & 1) != 0;
          v15 = v10 & 0xFFFFFFFE;
          v16 = v14;
        }
        v10 = v15 | v16;
        ++requiresFeatures;
        result.exchange = v10;
      }
      while ( (v10 & 1) != 0 );
    }
  }
  return result;
}
