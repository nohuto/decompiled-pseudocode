/*
 * XREFs of Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline @ 0x1800A37E4
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009F824 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     <none>
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
