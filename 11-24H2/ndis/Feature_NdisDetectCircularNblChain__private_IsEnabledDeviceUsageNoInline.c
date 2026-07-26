/*
 * XREFs of Feature_NdisDetectCircularNblChain__private_IsEnabledDeviceUsageNoInline @ 0x140095990
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     Feature_NdisDetectCircularNblChain__private_IsEnabledFallback @ 0x1400959C8 (Feature_NdisDetectCircularNblChain__private_IsEnabledFallback.c)
 */

__int64 Feature_NdisDetectCircularNblChain__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NdisDetectCircularNblChain__private_featureState & 0x10) != 0 )
    return Feature_NdisDetectCircularNblChain__private_featureState & 1;
  else
    return Feature_NdisDetectCircularNblChain__private_IsEnabledFallback(
             (unsigned int)Feature_NdisDetectCircularNblChain__private_featureState,
             3LL);
}
