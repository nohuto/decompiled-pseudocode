/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1400D90C8
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1400D9300 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x1400E50AC (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140085EF4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1400D9180 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

const wil_details_FeatureDescriptor *wil_details_EvaluateFeatureDependencies()
{
  const wil_details_FeatureDescriptor *v0; // rdx
  int v1; // r9d
  int v2; // r10d
  unsigned int exchange; // r8d
  int v4; // ecx
  const wil_details_FeatureDescriptor *i; // rcx
  const wil_details_FeatureDescriptor *result; // rax
  const wil_details_FeatureDescriptor *v7; // rbx

  v0 = wil_details_FeatureDescriptors_SkipPadding(wil_details_featureDescriptors_a);
  if ( v0 )
  {
    v1 = 0;
    v2 = 384;
    do
    {
      exchange = v0->featureStateCache->exchange;
      if ( (exchange & 0x200) != 0 )
      {
        v4 = 0;
        if ( (exchange & v2) != 0 )
          LOBYTE(v4) = (v2 & exchange) == 256;
        else
          LOBYTE(v4) = v0->isEnabledByDefault != 0;
        _InterlockedXor(
          (volatile signed __int32 *)v0->featureStateCache,
          v1 & 0xFFFFFFBF | (v4 << 6) ^ v0->featureStateCache->exchange64 & 0x40);
      }
      v0 = wil_details_FeatureDescriptors_SkipPadding(v0 + 1);
    }
    while ( v0 );
  }
  for ( i = wil_details_featureDescriptors_a; ; i = v7 + 1 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v7 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(result->featureStateCache, result);
  }
  return result;
}
