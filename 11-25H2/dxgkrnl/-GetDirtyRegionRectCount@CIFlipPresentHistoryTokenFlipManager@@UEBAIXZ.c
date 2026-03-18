/*
 * XREFs of ?GetDirtyRegionRectCount@CIFlipPresentHistoryTokenFlipManager@@UEBAIXZ @ 0x14005DE30
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140073430 (Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CIFlipPresentHistoryTokenFlipManager::GetDirtyRegionRectCount(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
    return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 24LL);
  else
    return 0LL;
}
