/*
 * XREFs of ?GetIndependentFlip@CIFlipPresentHistoryTokenFlipManager@@UEBA?B_NXZ @ 0x140073340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetIndependentFlip(CIFlipPresentHistoryTokenFlipManager *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 28LL);
}
