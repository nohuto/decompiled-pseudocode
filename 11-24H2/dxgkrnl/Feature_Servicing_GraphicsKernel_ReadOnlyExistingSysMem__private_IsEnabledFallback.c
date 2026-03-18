/*
 * XREFs of Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledFallback @ 0x140096100
 * Callers:
 *     Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledDeviceUsageNoInline @ 0x1400960C8 (Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           &Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_descriptor);
}
