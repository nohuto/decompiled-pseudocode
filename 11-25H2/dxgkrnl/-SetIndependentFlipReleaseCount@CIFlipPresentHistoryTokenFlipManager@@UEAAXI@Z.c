/*
 * XREFs of ?SetIndependentFlipReleaseCount@CIFlipPresentHistoryTokenFlipManager@@UEAAXI@Z @ 0x1400555B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetIndependentFlipReleaseCount(
        CIFlipPresentHistoryTokenFlipManager *this,
        int a2)
{
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 88LL) = a2;
}
