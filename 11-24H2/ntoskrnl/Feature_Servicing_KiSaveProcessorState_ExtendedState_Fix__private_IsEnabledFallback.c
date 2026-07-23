/*
 * XREFs of Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledFallback @ 0x1405B5D20
 * Callers:
 *     Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledNoReportingNoInline @ 0x1405B5D3C (Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_descriptor);
}
