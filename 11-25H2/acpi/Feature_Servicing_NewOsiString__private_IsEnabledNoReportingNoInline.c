/*
 * XREFs of Feature_Servicing_NewOsiString__private_IsEnabledNoReportingNoInline @ 0x14006F5C0
 * Callers:
 *     OSInterface @ 0x140051490 (OSInterface.c)
 * Callees:
 *     Feature_Servicing_NewOsiString__private_IsEnabledFallback @ 0x14006F5A4 (Feature_Servicing_NewOsiString__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_NewOsiString__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_NewOsiString__private_featureState & 2) != 0 )
    return Feature_Servicing_NewOsiString__private_featureState & 1;
  else
    return Feature_Servicing_NewOsiString__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_NewOsiString__private_featureState,
             0);
}
