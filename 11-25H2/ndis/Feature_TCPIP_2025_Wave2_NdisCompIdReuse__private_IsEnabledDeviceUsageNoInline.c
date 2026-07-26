/*
 * XREFs of Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledDeviceUsageNoInline @ 0x1400D2B48
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400D0CC0 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfCreateCompartmentBlock @ 0x1400D18DC (ndisIfCreateCompartmentBlock.c)
 * Callees:
 *     Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledFallback @ 0x1400D2B80 (Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledFallback.c)
 */

__int64 Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_featureState & 0x10) != 0 )
    return Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_featureState & 1;
  else
    return Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledFallback(
             (unsigned int)Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_featureState,
             3LL);
}
