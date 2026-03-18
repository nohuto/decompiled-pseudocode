/*
 * XREFs of Feature_FixDPIRecursionDoubleFault__private_IsEnabledDeviceUsageNoInline @ 0x140280CC0
 * Callers:
 *     GetCharDimensions @ 0x1401CDCAC (GetCharDimensions.c)
 * Callees:
 *     Feature_FixDPIRecursionDoubleFault__private_IsEnabledFallback @ 0x140280CF8 (Feature_FixDPIRecursionDoubleFault__private_IsEnabledFallback.c)
 */

__int64 Feature_FixDPIRecursionDoubleFault__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixDPIRecursionDoubleFault__private_featureState & 0x10) != 0 )
    return Feature_FixDPIRecursionDoubleFault__private_featureState & 1;
  else
    return Feature_FixDPIRecursionDoubleFault__private_IsEnabledFallback(
             (unsigned int)Feature_FixDPIRecursionDoubleFault__private_featureState,
             3LL);
}
