/*
 * XREFs of Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x1405CFA88
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     PopSessionConnected @ 0x140ACB088 (PopSessionConnected.c)
 *     PopSessionConnectionChange @ 0x140ACB140 (PopSessionConnectionChange.c)
 * Callees:
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledFallback @ 0x1405CFAC0 (Feature_Servicing_PDCAgentSessions__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_PDCAgentSessions__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PDCAgentSessions__private_featureState & 1;
  else
    return Feature_Servicing_PDCAgentSessions__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PDCAgentSessions__private_featureState,
             3LL);
}
