/*
 * XREFs of ?GetUseCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x14004FC70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA?BIXZ @ 0x14004FC90 (-GetCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA-BIXZ.c)
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetUseCustomDuration(CIFlipPresentHistoryTokenFlipManager *this)
{
  return CIFlipPresentHistoryTokenFlipManager::GetCustomDuration(this) != 0;
}
