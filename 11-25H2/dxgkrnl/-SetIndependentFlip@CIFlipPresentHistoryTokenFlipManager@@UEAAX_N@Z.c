/*
 * XREFs of ?SetIndependentFlip@CIFlipPresentHistoryTokenFlipManager@@UEAAX_N@Z @ 0x140054DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetIndependentFlip(
        CIFlipPresentHistoryTokenFlipManager *this,
        char a2)
{
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 28LL) = a2;
}
