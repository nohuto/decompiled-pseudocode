/*
 * XREFs of zzzInternalShowCaret @ 0x140035B94
 * Callers:
 *     xxxEndPaint @ 0x140035878 (xxxEndPaint.c)
 *     zzzShowCaret @ 0x1400952E0 (zzzShowCaret.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x140036838 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1400946FC (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void zzzInternalShowCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  int v2; // eax
  unsigned int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  unsigned int v7; // ecx

  v0 = *((_QWORD *)PtiCurrent() + 59);
  v1 = *(_DWORD *)(v0 + 356);
  if ( v1 )
  {
    v2 = v1 - 1;
    *(_DWORD *)(v0 + 356) = v2;
    if ( !v2 )
    {
      v3 = *(_DWORD *)(v0 + 352);
      *(_DWORD *)(v0 + 352) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 >> 1)) & 1;
      if ( (v3 & 2) != 0 )
        UT_InvertCaret();
      CreateCaretTimer(*(struct tagWND **)(v0 + 344), (struct tagQ *)v0);
      UserSessionState = W32GetUserSessionState(v5, v4);
      xxxWindowEvent(0x8002u, *(_DWORD *)(UserSessionState + 70856) != 0 ? 2 : 0);
    }
  }
  else
  {
    v7 = *(_DWORD *)(v0 + 352);
    if ( (v7 & 1) == 0 )
    {
      *(_DWORD *)(v0 + 352) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 >> 1)) & 1;
      if ( (v7 & 2) != 0 )
        UT_InvertCaret();
    }
  }
}
