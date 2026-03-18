/*
 * XREFs of Feature_HwndSwapchainSkippedToken__private_IsEnabledDeviceUsageNoInline @ 0x14009A338
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14000C8FC (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     Feature_HwndSwapchainSkippedToken__private_IsEnabledFallback @ 0x14009A370 (Feature_HwndSwapchainSkippedToken__private_IsEnabledFallback.c)
 */

__int64 Feature_HwndSwapchainSkippedToken__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HwndSwapchainSkippedToken__private_featureState & 0x10) != 0 )
    return Feature_HwndSwapchainSkippedToken__private_featureState & 1;
  else
    return Feature_HwndSwapchainSkippedToken__private_IsEnabledFallback(
             (unsigned int)Feature_HwndSwapchainSkippedToken__private_featureState,
             3LL);
}
