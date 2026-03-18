/*
 * XREFs of ?GetDirtyRegionRects@CIFlipPresentHistoryTokenFlipManager@@UEBAPEBUtagRECT@@XZ @ 0x14005DE60
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140073430 (Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 */

const struct tagRECT *__fastcall CIFlipPresentHistoryTokenFlipManager::GetDirtyRegionRects(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
    return *(const struct tagRECT **)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 16LL);
  else
    return 0LL;
}
