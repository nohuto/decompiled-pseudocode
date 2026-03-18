/*
 * XREFs of ?SetConfirmationCookie@CIFlipPresentHistoryTokenFlipManager@@UEAAX_K@Z @ 0x140056250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::SetConfirmationCookie(
        CIFlipPresentHistoryTokenFlipManager *this,
        __int64 a2)
{
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 56LL) = a2;
}
