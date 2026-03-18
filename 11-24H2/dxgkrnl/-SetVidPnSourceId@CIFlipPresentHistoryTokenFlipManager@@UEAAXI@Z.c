/*
 * XREFs of ?SetVidPnSourceId@CIFlipPresentHistoryTokenFlipManager@@UEAAXI@Z @ 0x140055F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetVidPnSourceId(
        CIFlipPresentHistoryTokenFlipManager *this,
        int a2)
{
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 64LL) = a2;
}
