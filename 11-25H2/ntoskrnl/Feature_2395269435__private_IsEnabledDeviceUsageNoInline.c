/*
 * XREFs of Feature_2395269435__private_IsEnabledDeviceUsageNoInline @ 0x1405C87C4
 * Callers:
 *     PoCaptureReasonContext @ 0x140425AF8 (PoCaptureReasonContext.c)
 *     PoStoreRequester @ 0x140425FC4 (PoStoreRequester.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A198D4 (PopPowerRequestStatsGetIdForRequest.c)
 *     PopDiagTracePowerRequestCreate @ 0x140A3277C (PopDiagTracePowerRequestCreate.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x140AC45F4 (PopPowerRequestStatsIsDetailedRequestReason.c)
 * Callees:
 *     Feature_2395269435__private_IsEnabledFallback @ 0x1405C87FC (Feature_2395269435__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2395269435__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2395269435__private_featureState & 0x10) != 0 )
    return Feature_2395269435__private_featureState & 1;
  else
    return Feature_2395269435__private_IsEnabledFallback((unsigned int)Feature_2395269435__private_featureState, 3LL);
}
