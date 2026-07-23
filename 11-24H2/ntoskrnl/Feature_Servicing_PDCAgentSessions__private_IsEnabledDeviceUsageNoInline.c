/*
 * XREFs of Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x1405CD1FC
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     PopSessionConnected @ 0x140AC8C44 (PopSessionConnected.c)
 *     PopSessionConnectionChange @ 0x140AC8CFC (PopSessionConnectionChange.c)
 * Callees:
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledFallback @ 0x1405CD234 (Feature_Servicing_PDCAgentSessions__private_IsEnabledFallback.c)
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
