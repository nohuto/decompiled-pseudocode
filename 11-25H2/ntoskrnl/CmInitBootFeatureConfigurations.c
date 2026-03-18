/*
 * XREFs of CmInitBootFeatureConfigurations @ 0x140C33BDC
 * Callers:
 *     KiInitializeBootStructures @ 0x140B48120 (KiInitializeBootStructures.c)
 * Callees:
 *     Feature_Servicing_Mm_AweLazyFlush__private_IsEnabledNoReportingNoInline @ 0x14065BD70 (Feature_Servicing_Mm_AweLazyFlush__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_Mm_NumLockedPagesFanOut__private_IsEnabledNoReportingNoInline @ 0x14065BDC4 (Feature_Servicing_Mm_NumLockedPagesFanOut__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_Mm_NumLockedPages__private_IsEnabledNoReportingNoInline @ 0x14065BE18 (Feature_Servicing_Mm_NumLockedPages__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_Mm_OriginalPteRace__private_IsEnabledNoReportingNoInline @ 0x14065BE6C (Feature_Servicing_Mm_OriginalPteRace__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_Mm_VadEventBlocks__private_IsEnabledNoReportingNoInline @ 0x14065BEC0 (Feature_Servicing_Mm_VadEventBlocks__private_IsEnabledNoReportingNoInline.c)
 *     CmFcInitSystem0 @ 0x140C38E74 (CmFcInitSystem0.c)
 */

__int64 CmInitBootFeatureConfigurations()
{
  __int64 result; // rax

  CmFcInitSystem0();
  if ( (unsigned int)Feature_Servicing_Mm_AweLazyFlush__private_IsEnabledNoReportingNoInline() )
    MmAweLazyFlushFixEnabled = 1;
  if ( (unsigned int)Feature_Servicing_Mm_NumLockedPages__private_IsEnabledNoReportingNoInline() )
    MmNumLockedPagesFixEnabled = 1;
  if ( (unsigned int)Feature_Servicing_Mm_VadEventBlocks__private_IsEnabledNoReportingNoInline() )
    MmVadEventBlockFixEnabled = 1;
  if ( (unsigned int)Feature_Servicing_Mm_NumLockedPagesFanOut__private_IsEnabledNoReportingNoInline() )
    MmNumLockedPagesFanOutEnabled = 1;
  result = Feature_Servicing_Mm_OriginalPteRace__private_IsEnabledNoReportingNoInline();
  if ( (_DWORD)result )
    MmOriginalPteRaceFixEnabled = 1;
  return result;
}
