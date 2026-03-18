/*
 * XREFs of Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledFallback @ 0x1404F1B1C
 * Callers:
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x1404F1AE4 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D57A0 (wil_details_IsEnabledFallback.c)
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
