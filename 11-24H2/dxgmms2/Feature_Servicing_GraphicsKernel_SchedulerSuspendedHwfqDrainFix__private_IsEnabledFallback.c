/*
 * XREFs of Feature_Servicing_GraphicsKernel_SchedulerSuspendedHwfqDrainFix__private_IsEnabledFallback @ 0x140050AA0
 * Callers:
 *     Feature_Servicing_GraphicsKernel_SchedulerSuspendedHwfqDrainFix__private_IsEnabledDeviceUsageNoInline @ 0x140050A68 (Feature_Servicing_GraphicsKernel_SchedulerSuspendedHwfqDrainFix__private_IsEnabledDeviceUsageNoI.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004CE2C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_GraphicsKernel_SchedulerSuspendedHwfqDrainFix__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_GraphicsKernel_SchedulerSuspendedHwfqDrainFix__private_descriptor);
}
