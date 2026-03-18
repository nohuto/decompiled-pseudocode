/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1400D9300
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1400D90C8 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1400D931C (wil_details_UpdateFeatureConfiguredStates.c)
 */

void __fastcall wil_details_ReevaluateOnFeatureConfigurationChange(void *Context)
{
  wil_details_UpdateFeatureConfiguredStates(Context);
  wil_details_EvaluateFeatureDependencies();
}
