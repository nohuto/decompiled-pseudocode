/*
 * XREFs of ?GetIndependentFlipDoNotFlip@CIFlipPresentHistoryTokenRedirectedFlip@@UEBA_NXZ @ 0x1400426C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlipDoNotFlip(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x4000000) != 0;
}
