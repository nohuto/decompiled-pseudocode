/*
 * XREFs of Feature_EtwThreadStackRundownAvoidTimeout__private_IsEnabledDeviceUsageNoInline @ 0x140644BC8
 * Callers:
 *     EtwpTraceThreadRundownWithStack @ 0x140644A5C (EtwpTraceThreadRundownWithStack.c)
 * Callees:
 *     Feature_EtwThreadStackRundownAvoidTimeout__private_IsEnabledFallback @ 0x140644C00 (Feature_EtwThreadStackRundownAvoidTimeout__private_IsEnabledFallback.c)
 */

__int64 Feature_EtwThreadStackRundownAvoidTimeout__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EtwThreadStackRundownAvoidTimeout__private_featureState & 0x10) != 0 )
    return Feature_EtwThreadStackRundownAvoidTimeout__private_featureState & 1;
  else
    return Feature_EtwThreadStackRundownAvoidTimeout__private_IsEnabledFallback(
             (unsigned int)Feature_EtwThreadStackRundownAvoidTimeout__private_featureState,
             3LL);
}
