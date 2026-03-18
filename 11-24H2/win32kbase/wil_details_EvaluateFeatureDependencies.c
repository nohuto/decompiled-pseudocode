/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1402C3E9C
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1402C3E80 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x1402E3C00 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x14013A044 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1402C3EDC (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 *     wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates @ 0x1402C3F14 (wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates.c)
 */

_QWORD *wil_details_EvaluateFeatureDependencies()
{
  int **i; // rcx
  _QWORD *result; // rax
  _QWORD *v2; // rbx

  wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates();
  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(v2 + 7) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v2 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*result, result);
  }
  return result;
}
