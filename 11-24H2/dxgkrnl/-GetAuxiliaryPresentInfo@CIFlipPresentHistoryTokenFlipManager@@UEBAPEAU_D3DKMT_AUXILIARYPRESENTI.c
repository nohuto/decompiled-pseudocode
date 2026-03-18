/*
 * XREFs of ?GetAuxiliaryPresentInfo@CIFlipPresentHistoryTokenFlipManager@@UEBAPEAU_D3DKMT_AUXILIARYPRESENTINFO@@XZ @ 0x140054D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _D3DKMT_AUXILIARYPRESENTINFO *__fastcall CIFlipPresentHistoryTokenFlipManager::GetAuxiliaryPresentInfo(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return *(struct _D3DKMT_AUXILIARYPRESENTINFO **)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 104LL);
}
