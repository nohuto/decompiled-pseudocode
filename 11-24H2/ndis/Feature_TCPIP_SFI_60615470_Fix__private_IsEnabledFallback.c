/*
 * XREFs of Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledFallback @ 0x1400C81E8
 * Callers:
 *     Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1400C81B0 (Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140090368 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&wil_details_featureDescriptors_a);
}
