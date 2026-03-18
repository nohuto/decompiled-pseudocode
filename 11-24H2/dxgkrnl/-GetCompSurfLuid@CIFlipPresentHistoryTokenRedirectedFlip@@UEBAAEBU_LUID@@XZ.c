/*
 * XREFs of ?GetCompSurfLuid@CIFlipPresentHistoryTokenRedirectedFlip@@UEBAAEBU_LUID@@XZ @ 0x14003DA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct _LUID *__fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetCompSurfLuid(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (const struct _LUID *)(*((_QWORD *)this + 1) + 56LL);
}
