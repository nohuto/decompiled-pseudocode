/*
 * XREFs of Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledFallback @ 0x1404F85A0
 * Callers:
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x1402ABB08 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_descriptor);
}
