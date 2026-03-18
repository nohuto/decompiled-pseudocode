/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1407D6110
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1406F9684 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140AA4B68 (wil_details_UpdateFeatureConfiguredStates.c)
 */

__int64 (__fastcall **wil_details_ReevaluateOnFeatureConfigurationChange())()
{
  wil_details_UpdateFeatureConfiguredStates();
  return wil_details_EvaluateFeatureDependencies();
}
