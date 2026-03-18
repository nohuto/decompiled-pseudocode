/*
 * XREFs of Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledFallback @ 0x14004DFA0
 * Callers:
 *     Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledDeviceUsageNoInline @ 0x14004DF68 (Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004D570 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_descriptor);
}
