/*
 * XREFs of ?GetIndependentFlipReleaseCount@CIFlipPresentHistoryTokenRedirectedFlip@@UEBAIXZ @ 0x140040BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlipReleaseCount(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return *(_WORD *)(*((_QWORD *)this + 1) + 46LL) & 3;
}
