/*
 * XREFs of Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback @ 0x14004F6AC
 * Callers:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14004F674 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004D570 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_CompositionSwapchainAdvancedSyncSupport__private_descriptor);
}
