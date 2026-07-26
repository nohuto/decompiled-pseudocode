/*
 * XREFs of Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline @ 0x1400D3D64
 * Callers:
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1401768B0 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x1401770E0 (ndisNsiGetInterfaceRodInformation.c)
 * Callees:
 *     Feature_NDPCyberEO2508__private_IsEnabledFallback @ 0x1400D3D9C (Feature_NDPCyberEO2508__private_IsEnabledFallback.c)
 */

__int64 Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NDPCyberEO2508__private_featureState & 0x10) != 0 )
    return Feature_NDPCyberEO2508__private_featureState & 1;
  else
    return Feature_NDPCyberEO2508__private_IsEnabledFallback(
             (unsigned int)Feature_NDPCyberEO2508__private_featureState,
             3LL);
}
