/*
 * XREFs of wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1400D91B8
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1400D9180 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1400D9180 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        wil_details_FeatureStateCache *featureState,
        wil_details_FeatureStateCache observedState,
        const wil_details_FeatureDescriptor *descriptor)
{
  unsigned int exchange; // ebx
  int v5; // edi
  const wil_details_FeatureDescriptor *const *requiresFeatures; // rsi
  const wil_details_FeatureDescriptor *v7; // rax
  signed __int32 v8; // eax
  signed __int32 v9; // ecx
  signed __int32 i; // edx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  wil_details_FeatureStateCache result; // [rsp+48h] [rbp+10h]

  result.payloadId = 0;
  exchange = observedState.exchange;
  v5 = (observedState.exchange >> 6) & 1;
  if ( v5 )
  {
    requiresFeatures = descriptor->requiresFeatures;
    if ( requiresFeatures )
    {
      while ( 1 )
      {
        v7 = *requiresFeatures;
        if ( !*requiresFeatures )
          break;
        if ( v7->isAlwaysEnabled || v7->isAlwaysDisabled )
        {
          if ( !v7->isEnabledByDefault )
          {
            v5 = 0;
            break;
          }
          v5 = 1;
          ++requiresFeatures;
        }
        else
        {
          v5 = (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                  v7->featureStateCache,
                  *requiresFeatures++).exchange64 & 1) != 0;
          if ( !v5 )
            break;
        }
      }
    }
  }
  LOBYTE(v8) = exchange;
  v9 = exchange;
  for ( i = exchange; ; i = v8 )
  {
    v11 = v8 & 1;
    v12 = v5 | exchange & 0xFFFFFFFE;
    if ( v11 == v5 )
      i = v9;
    v13 = v12 & 0xFFFFFFCF;
    if ( v11 == v5 )
      v13 = v12;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)featureState, v13 & 0xFFFFFDFF, i);
    if ( i == v8 )
      break;
    exchange = v8;
    v9 = v8;
  }
  result.exchange = v13 & 0xFFFFFDFF;
  return result;
}
