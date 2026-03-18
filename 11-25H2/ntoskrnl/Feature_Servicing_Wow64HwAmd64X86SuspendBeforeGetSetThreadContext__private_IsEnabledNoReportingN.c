/*
 * XREFs of Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_IsEnabledNoReportingNoInline @ 0x1405DADC0
 * Callers:
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 * Callees:
 *     Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_IsEnabledFallback @ 0x1405DADA4 (Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_featureState & 2) != 0 )
    return Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_featureState & 1;
  else
    return Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_featureState,
             0);
}
