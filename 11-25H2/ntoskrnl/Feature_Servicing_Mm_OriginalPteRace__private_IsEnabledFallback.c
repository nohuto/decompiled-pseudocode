/*
 * XREFs of Feature_Servicing_Mm_OriginalPteRace__private_IsEnabledFallback @ 0x14065BE50
 * Callers:
 *     Feature_Servicing_Mm_OriginalPteRace__private_IsEnabledNoReportingNoInline @ 0x14065BE6C (Feature_Servicing_Mm_OriginalPteRace__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D57A0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_Mm_OriginalPteRace__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_Mm_OriginalPteRace__private_descriptor);
}
