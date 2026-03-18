/*
 * XREFs of Feature_Servicing_PrmSaveRestoreS4__private_IsEnabledFallback @ 0x14054A1D8
 * Callers:
 *     Feature_Servicing_PrmSaveRestoreS4__private_IsEnabledNoReportingNoInline @ 0x14054A1F4 (Feature_Servicing_PrmSaveRestoreS4__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D57A0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_PrmSaveRestoreS4__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_PrmSaveRestoreS4__private_descriptor);
}
