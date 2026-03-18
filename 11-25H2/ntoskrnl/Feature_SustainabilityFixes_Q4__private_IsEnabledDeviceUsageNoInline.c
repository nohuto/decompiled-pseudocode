/*
 * XREFs of Feature_SustainabilityFixes_Q4__private_IsEnabledDeviceUsageNoInline @ 0x1405D3EBC
 * Callers:
 *     PopEsEvaluateNextStateV2 @ 0x140AC3FC4 (PopEsEvaluateNextStateV2.c)
 * Callees:
 *     Feature_SustainabilityFixes_Q4__private_IsEnabledFallback @ 0x1405D3EF4 (Feature_SustainabilityFixes_Q4__private_IsEnabledFallback.c)
 */

__int64 Feature_SustainabilityFixes_Q4__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SustainabilityFixes_Q4__private_featureState & 0x10) != 0 )
    return Feature_SustainabilityFixes_Q4__private_featureState & 1;
  else
    return Feature_SustainabilityFixes_Q4__private_IsEnabledFallback(
             (unsigned int)Feature_SustainabilityFixes_Q4__private_featureState,
             3LL);
}
