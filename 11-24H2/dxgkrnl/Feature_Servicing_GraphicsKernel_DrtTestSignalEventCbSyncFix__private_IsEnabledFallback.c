/*
 * XREFs of Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledFallback @ 0x14006FAF0
 * Callers:
 *     Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledDeviceUsageNoInline @ 0x14006FAB8 (Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledDeviceUsageNoInli.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           &Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_descriptor);
}
