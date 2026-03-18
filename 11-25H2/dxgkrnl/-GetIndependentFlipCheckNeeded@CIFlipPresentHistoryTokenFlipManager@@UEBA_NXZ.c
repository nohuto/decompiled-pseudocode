/*
 * XREFs of ?GetIndependentFlipCheckNeeded@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x1400528B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetIndependentFlipCheckNeeded(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return (***(_BYTE ***)(*((_QWORD *)this + 1) + 80LL) & 4) != 0;
}
