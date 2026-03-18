/*
 * XREFs of ?SetIndependentFlipRequestDwmExit@CIFlipPresentHistoryTokenFlipManager@@UEAAX_N@Z @ 0x1400733F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetIndependentFlipRequestDwmExit(
        CIFlipPresentHistoryTokenFlipManager *this,
        char a2)
{
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 84LL) = a2;
}
