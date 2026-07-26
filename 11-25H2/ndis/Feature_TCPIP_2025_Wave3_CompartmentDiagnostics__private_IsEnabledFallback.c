/*
 * XREFs of Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledFallback @ 0x1400D2BD4
 * Callers:
 *     Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x1400D2B9C (Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14009FF00 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_descriptor);
}
