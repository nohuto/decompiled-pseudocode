/*
 * XREFs of ?GetIndependentFlipTrueImmediate@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x14004C0B0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x140073484 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetIndependentFlipTrueImmediate(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  char v2; // bl
  __int64 v3; // rdx

  v2 = 0;
  if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 8LL);
    if ( v3 )
      return *(_BYTE *)(v3 + 14) != 0;
  }
  return v2;
}
