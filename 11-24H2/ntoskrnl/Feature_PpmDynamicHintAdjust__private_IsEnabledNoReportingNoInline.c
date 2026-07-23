/*
 * XREFs of Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline @ 0x1405CB1C0
 * Callers:
 *     PpmEstimateIdleDuration @ 0x1404BC1F4 (PpmEstimateIdleDuration.c)
 *     PpmIdleSelectStates @ 0x1404E1498 (PpmIdleSelectStates.c)
 * Callees:
 *     Feature_PpmDynamicHintAdjust__private_IsEnabledFallback @ 0x1405CB1A4 (Feature_PpmDynamicHintAdjust__private_IsEnabledFallback.c)
 */

__int64 Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_PpmDynamicHintAdjust__private_featureState & 2) != 0 )
    return Feature_PpmDynamicHintAdjust__private_featureState & 1;
  else
    return Feature_PpmDynamicHintAdjust__private_IsEnabledFallback(
             (unsigned int)Feature_PpmDynamicHintAdjust__private_featureState,
             0);
}
