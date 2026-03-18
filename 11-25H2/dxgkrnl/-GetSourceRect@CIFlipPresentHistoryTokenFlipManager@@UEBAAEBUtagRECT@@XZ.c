/*
 * XREFs of ?GetSourceRect@CIFlipPresentHistoryTokenFlipManager@@UEBAAEBUtagRECT@@XZ @ 0x1400733A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct tagRECT *__fastcall CIFlipPresentHistoryTokenFlipManager::GetSourceRect(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return (const struct tagRECT *)(**(_QWORD **)(*((_QWORD *)this + 1) + 80LL) + 4LL);
}
