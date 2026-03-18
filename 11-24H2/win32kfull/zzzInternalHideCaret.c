/*
 * XREFs of zzzInternalHideCaret @ 0x1400357EC
 * Callers:
 *     xxxBeginPaint @ 0x140034CB0 (xxxBeginPaint.c)
 *     NtUserHideCaret @ 0x140094FC0 (NtUserHideCaret.c)
 *     zzzInternalDestroyCaret @ 0x140095744 (zzzInternalDestroyCaret.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x140036838 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1400946B8 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void zzzInternalHideCaret()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax

  v0 = *((_QWORD *)PtiCurrent() + 59);
  if ( (*(_DWORD *)(v0 + 352) & 1) != 0 )
    UT_InvertCaret();
  *(_DWORD *)(v0 + 352) &= ~1u;
  if ( ++*(_DWORD *)(v0 + 356) == 1 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 344), (struct tagQ *)v0);
    UserSessionState = W32GetUserSessionState(v2, v1);
    xxxWindowEvent(0x8003u, *(_DWORD *)(UserSessionState + 70856) != 0 ? 2 : 0);
  }
}
