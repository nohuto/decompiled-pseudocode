/*
 * XREFs of Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline @ 0x14068B7B8
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407FC8EC (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     Feature_Arm64XMatching__private_IsEnabledFallback @ 0x14068B7F0 (Feature_Arm64XMatching__private_IsEnabledFallback.c)
 */

__int64 Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Arm64XMatching__private_featureState & 0x10) != 0 )
    return Feature_Arm64XMatching__private_featureState & 1;
  else
    return Feature_Arm64XMatching__private_IsEnabledFallback(
             (unsigned int)Feature_Arm64XMatching__private_featureState,
             3LL);
}
