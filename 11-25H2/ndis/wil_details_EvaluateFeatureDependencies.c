/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x14014254C
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x140142780 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x140196C88 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x14009F738 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x140142604 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

_QWORD *wil_details_EvaluateFeatureDependencies()
{
  int **v0; // rdx
  int v1; // r9d
  int v2; // r10d
  int v3; // r8d
  int v4; // ecx
  _QWORD *i; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // rbx

  v0 = (int **)wil_details_FeatureDescriptors_SkipPadding(&wil_details_featureDescriptors_a);
  if ( v0 )
  {
    v1 = 0;
    v2 = 384;
    do
    {
      v3 = **v0;
      if ( (v3 & 0x200) != 0 )
      {
        v4 = 0;
        if ( (v3 & v2) != 0 )
          LOBYTE(v4) = (v2 & v3) == 256;
        else
          LOBYTE(v4) = *((_BYTE *)v0 + 31) != 0;
        _InterlockedXor(*v0, v1 & 0xFFFFFFBF | (v4 << 6) ^ **v0 & 0x40);
      }
      v0 = (int **)wil_details_FeatureDescriptors_SkipPadding(v0 + 7);
    }
    while ( v0 );
  }
  for ( i = &wil_details_featureDescriptors_a; ; i = v7 + 7 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v7 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*result, result);
  }
  return result;
}
