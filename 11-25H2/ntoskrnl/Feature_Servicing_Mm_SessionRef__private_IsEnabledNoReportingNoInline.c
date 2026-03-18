/*
 * XREFs of Feature_Servicing_Mm_SessionRef__private_IsEnabledNoReportingNoInline @ 0x1405D9F84
 * Callers:
 *     PsAttachSession @ 0x1405DABA0 (PsAttachSession.c)
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
 *     PspAttachSession @ 0x140AC8888 (PspAttachSession.c)
 * Callees:
 *     Feature_Servicing_Mm_SessionRef__private_IsEnabledFallback @ 0x1405D9F68 (Feature_Servicing_Mm_SessionRef__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Mm_SessionRef__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_Mm_SessionRef__private_featureState & 2) != 0 )
    return Feature_Servicing_Mm_SessionRef__private_featureState & 1;
  else
    return Feature_Servicing_Mm_SessionRef__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Mm_SessionRef__private_featureState,
             0);
}
