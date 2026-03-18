/*
 * XREFs of Feature_Servicing_Mm_AweLazyFlush__private_IsEnabledFallback @ 0x14065BD54
 * Callers:
 *     Feature_Servicing_Mm_AweLazyFlush__private_IsEnabledNoReportingNoInline @ 0x14065BD70 (Feature_Servicing_Mm_AweLazyFlush__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D57A0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_Mm_AweLazyFlush__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_Mm_AweLazyFlush__private_descriptor);
}
