/*
 * XREFs of Feature_ETWStackExpandedStackwalks__private_IsEnabledDeviceUsageNoInline @ 0x1404F0BC4
 * Callers:
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x140348E10 (EtwpExpandStackAndWalkFrameChain.c)
 * Callees:
 *     Feature_ETWStackExpandedStackwalks__private_IsEnabledFallback @ 0x1404F8E30 (Feature_ETWStackExpandedStackwalks__private_IsEnabledFallback.c)
 */

__int64 Feature_ETWStackExpandedStackwalks__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ETWStackExpandedStackwalks__private_featureState & 0x10) != 0 )
    return Feature_ETWStackExpandedStackwalks__private_featureState & 1;
  else
    return Feature_ETWStackExpandedStackwalks__private_IsEnabledFallback(
             (unsigned int)Feature_ETWStackExpandedStackwalks__private_featureState,
             3LL);
}
