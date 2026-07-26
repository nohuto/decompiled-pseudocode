/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x140142780
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x14014254C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14014279C (wil_details_UpdateFeatureConfiguredStates.c)
 */

void __fastcall wil_details_ReevaluateOnFeatureConfigurationChange(PVOID a1)
{
  wil_details_UpdateFeatureConfiguredStates(a1);
  wil_details_EvaluateFeatureDependencies();
}
