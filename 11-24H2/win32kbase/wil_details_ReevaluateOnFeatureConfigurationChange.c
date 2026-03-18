/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1402C3E80
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1402C3E9C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1402C3FA4 (wil_details_UpdateFeatureConfiguredStates.c)
 */

__int64 wil_details_ReevaluateOnFeatureConfigurationChange()
{
  wil_details_UpdateFeatureConfiguredStates();
  return wil_details_EvaluateFeatureDependencies();
}
