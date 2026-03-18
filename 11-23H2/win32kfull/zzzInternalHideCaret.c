/*
 * XREFs of zzzInternalHideCaret @ 0x1C0062CA4
 * Callers:
 *     zzzHideCaret @ 0x1C0006168 (zzzHideCaret.c)
 *     xxxBeginPaint @ 0x1C00606C0 (xxxBeginPaint.c)
 *     zzzInternalDestroyCaret @ 0x1C0062BBC (zzzInternalDestroyCaret.c)
 *     xxxScrollWindowEx @ 0x1C022E570 (xxxScrollWindowEx.c)
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00065F8 (-UT_InvertCaret@@YAXXZ.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0062D2C (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 */

void zzzInternalHideCaret()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( (*(_DWORD *)(v0 + 312) & 1) != 0 )
    UT_InvertCaret();
  *(_DWORD *)(v0 + 312) &= ~1u;
  if ( ++*(_DWORD *)(v0 + 316) == 1 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 304), (struct tagQ *)v0);
    xxxWindowEvent(0x8003u, gdwDeferWinEvent != 0 ? 2 : 0);
  }
}
