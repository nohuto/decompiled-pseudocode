/*
 * XREFs of ?GetFlipInterval@CIFlipPresentHistoryTokenFlipManager@@UEBA?BW4D3DDDI_FLIPINTERVAL_TYPE@@XZ @ 0x140039730
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x140073484 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CIFlipPresentHistoryTokenFlipManager::GetFlipInterval(CIFlipPresentHistoryTokenFlipManager *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 1;
  if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 8LL);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 15) || *(_BYTE *)(v3 + 14) )
        return 0;
    }
  }
  return v2;
}
