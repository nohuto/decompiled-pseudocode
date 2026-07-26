/*
 * XREFs of Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1400C81B0
 * Callers:
 *     ?ndisNsiSetThreadInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x140087D20 (-ndisNsiSetThreadInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledFallback @ 0x1400C81E8 (Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TCPIP_SFI_60615470_Fix__private_featureState & 0x10) != 0 )
    return Feature_TCPIP_SFI_60615470_Fix__private_featureState & 1;
  else
    return Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledFallback(
             (unsigned int)Feature_TCPIP_SFI_60615470_Fix__private_featureState,
             3LL);
}
