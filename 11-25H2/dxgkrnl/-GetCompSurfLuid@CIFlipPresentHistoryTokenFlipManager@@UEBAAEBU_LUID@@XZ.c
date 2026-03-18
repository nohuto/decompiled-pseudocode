/*
 * XREFs of ?GetCompSurfLuid@CIFlipPresentHistoryTokenFlipManager@@UEBAAEBU_LUID@@XZ @ 0x140051920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct _LUID *__fastcall CIFlipPresentHistoryTokenFlipManager::GetCompSurfLuid(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 32LL);
}
