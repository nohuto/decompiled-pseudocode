/*
 * XREFs of ?SetConfirmationCookie@CIFlipPresentHistoryTokenRedirectedFlip@@UEAAX_K@Z @ 0x140043480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetConfirmationCookie(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        __int64 a2)
{
  *(_QWORD *)(*((_QWORD *)this + 1) + 64LL) = a2;
}
