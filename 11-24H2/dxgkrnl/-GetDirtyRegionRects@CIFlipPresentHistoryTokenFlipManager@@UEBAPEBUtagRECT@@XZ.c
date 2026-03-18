/*
 * XREFs of ?GetDirtyRegionRects@CIFlipPresentHistoryTokenFlipManager@@UEBAPEBUtagRECT@@XZ @ 0x14005DD00
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140073F20 (Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 */

const struct tagRECT *__fastcall CIFlipPresentHistoryTokenFlipManager::GetDirtyRegionRects(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
    return *(const struct tagRECT **)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 16LL);
  else
    return 0LL;
}
