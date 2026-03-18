/*
 * XREFs of ?SetIndependentFlipRequestDwmConfirm@CIFlipPresentHistoryTokenFlipManager@@UEAAX_N@Z @ 0x140059190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetIndependentFlipRequestDwmConfirm(
        CIFlipPresentHistoryTokenFlipManager *this,
        char a2)
{
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 86LL) = a2;
}
