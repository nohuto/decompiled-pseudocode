/*
 * XREFs of Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline @ 0x14064F2D0
 * Callers:
 *     EtwpThreadRundownApc @ 0x14064F010 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14064F0A4 (EtwpTraceThreadRundownWithStack.c)
 * Callees:
 *     Feature_EtwThreadStackRundownPriority__private_IsEnabledFallback @ 0x14064F308 (Feature_EtwThreadStackRundownPriority__private_IsEnabledFallback.c)
 */

__int64 Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EtwThreadStackRundownPriority__private_featureState & 0x10) != 0 )
    return Feature_EtwThreadStackRundownPriority__private_featureState & 1;
  else
    return Feature_EtwThreadStackRundownPriority__private_IsEnabledFallback(
             (unsigned int)Feature_EtwThreadStackRundownPriority__private_featureState,
             3LL);
}
