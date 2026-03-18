/*
 * XREFs of ?SetIndependentFlipReleaseCount@CIFlipPresentHistoryTokenFlipManager@@UEAAXI@Z @ 0x140054E70
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
