/*
 * XREFs of ?ResetFeedbackTarget@DragData@@UEAAXXZ @ 0x180533ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DragData::ResetFeedbackTarget(DragData *this)
{
  *((_QWORD *)this + 12) = 0xFFFFFFFF00000000uLL;
}
