/*
 * XREFs of xxxInvalidateRect @ 0x1402BD274
 * Callers:
 *     NtUserInvalidateRect @ 0x1402995B0 (NtUserInvalidateRect.c)
 *     xxxMNSetTop @ 0x1402BE960 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1402E0898 (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1402E7E6C (xxxMNSetGapState.c)
 * Callees:
 *     xxxRedrawWindow @ 0x140042630 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxInvalidateRect(struct tagWND *a1, __int64 a2, int a3)
{
  return xxxRedrawWindow(a1, a2, 0LL, a3 != 0 ? 5 : 1);
}
