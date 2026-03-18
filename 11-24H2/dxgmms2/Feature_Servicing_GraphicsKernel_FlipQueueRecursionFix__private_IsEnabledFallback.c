/*
 * XREFs of Feature_Servicing_GraphicsKernel_FlipQueueRecursionFix__private_IsEnabledFallback @ 0x1400509F8
 * Callers:
 *     Feature_Servicing_GraphicsKernel_FlipQueueRecursionFix__private_IsEnabledDeviceUsageNoInline @ 0x1400509C0 (Feature_Servicing_GraphicsKernel_FlipQueueRecursionFix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004CE2C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_GraphicsKernel_FlipQueueRecursionFix__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_GraphicsKernel_FlipQueueRecursionFix__private_descriptor);
}
