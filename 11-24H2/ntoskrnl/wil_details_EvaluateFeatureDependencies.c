/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1406F72C4
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1407D6650 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     CmFcInitSystem0 @ 0x140C4C294 (CmFcInitSystem0.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1404B90F4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x140AAB544 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 *wil_details_EvaluateFeatureDependencies()
{
  __int64 *v0; // rdx
  int v1; // r9d
  int v2; // r10d
  int v3; // r8d
  int v4; // ecx
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v7; // rbx

  v0 = wil_details_FeatureDescriptors_SkipPadding((__int64 *)&wil_details_featureDescriptors_a);
  if ( v0 )
  {
    v1 = 0;
    v2 = 384;
    do
    {
      v3 = *(_DWORD *)*v0;
      if ( (v3 & 0x200) != 0 )
      {
        v4 = 0;
        if ( (v3 & v2) != 0 )
          LOBYTE(v4) = (v2 & v3) == 256;
        else
          LOBYTE(v4) = *((_BYTE *)v0 + 31) != 0;
        _InterlockedXor((volatile signed __int32 *)*v0, v1 & 0xFFFFFFBF | (v4 << 6) ^ *(_DWORD *)*v0 & 0x40);
      }
      v0 = wil_details_FeatureDescriptors_SkipPadding(v0 + 7);
    }
    while ( v0 );
  }
  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = v7 + 7 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v7 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*result, result);
  }
  return result;
}
