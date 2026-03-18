/*
 * XREFs of Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline @ 0x1405CDA50
 * Callers:
 *     PpmEstimateIdleDuration @ 0x1404C0C0C (PpmEstimateIdleDuration.c)
 *     PpmIdleSelectStates @ 0x1404EA518 (PpmIdleSelectStates.c)
 * Callees:
 *     Feature_PpmDynamicHintAdjust__private_IsEnabledFallback @ 0x1405CDA34 (Feature_PpmDynamicHintAdjust__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (Feature_PpmDynamicHintAdjust__private_featureState & 2) != 0 )
    return Feature_PpmDynamicHintAdjust__private_featureState & 1;
  else
    return Feature_PpmDynamicHintAdjust__private_IsEnabledFallback(
             (unsigned int)Feature_PpmDynamicHintAdjust__private_featureState,
             0,
             a3,
             a4);
}
