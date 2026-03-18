/*
 * XREFs of ?SetIndependentFlipRequestDwmConfirm@CIFlipPresentHistoryTokenRedirectedFlip@@UEAAX_N@Z @ 0x1400420D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetIndependentFlipRequestDwmConfirm(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        unsigned __int8 a2)
{
  *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0xFFEFFFFF | (a2 << 20);
}
