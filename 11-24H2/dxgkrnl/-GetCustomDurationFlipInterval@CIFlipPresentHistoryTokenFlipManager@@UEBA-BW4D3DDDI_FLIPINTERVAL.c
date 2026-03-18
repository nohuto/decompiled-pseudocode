/*
 * XREFs of ?GetCustomDurationFlipInterval@CIFlipPresentHistoryTokenFlipManager@@UEBA?BW4D3DDDI_FLIPINTERVAL_TYPE@@XZ @ 0x140041E90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFlipInterval@CIFlipPresentHistoryTokenFlipManager@@UEBA?BW4D3DDDI_FLIPINTERVAL_TYPE@@XZ @ 0x140041EB0 (-GetFlipInterval@CIFlipPresentHistoryTokenFlipManager@@UEBA-BW4D3DDDI_FLIPINTERVAL_TYPE@@XZ.c)
 */

enum D3DDDI_FLIPINTERVAL_TYPE __fastcall CIFlipPresentHistoryTokenFlipManager::GetCustomDurationFlipInterval(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return CIFlipPresentHistoryTokenFlipManager::GetFlipInterval(this);
}
