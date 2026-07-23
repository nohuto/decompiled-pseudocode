/*
 * XREFs of Feature_ETWStackExpandedStackwalks__private_IsEnabledDeviceUsageNoInline @ 0x1403DE574
 * Callers:
 *     EtwpExpandStackAndWalkFrameChain @ 0x1403DD360 (EtwpExpandStackAndWalkFrameChain.c)
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 * Callees:
 *     Feature_ETWStackExpandedStackwalks__private_IsEnabledFallback @ 0x1404F8DAC (Feature_ETWStackExpandedStackwalks__private_IsEnabledFallback.c)
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
