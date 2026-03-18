/*
 * XREFs of ?zzzShowCursor@@YAH_N@Z @ 0x140092F08
 * Callers:
 *     NtUserShowCursor @ 0x1400926F0 (NtUserShowCursor.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxDragObject @ 0x1402DF924 (xxxDragObject.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x14009347C (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall zzzShowCursor(char a1)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  unsigned int v13; // ebx

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v3 = *((_QWORD *)CurrentLogicalCursorThread + 59);
  UserSessionState = W32GetUserSessionState(v5, v4);
  ++*(_DWORD *)(UserSessionState + 70856);
  v8 = *((_DWORD *)CurrentLogicalCursorThread + 198);
  v9 = *((_QWORD *)CurrentLogicalCursorThread + 59);
  if ( a1 )
  {
    *((_DWORD *)CurrentLogicalCursorThread + 198) = v8 + 1;
    ++*(_DWORD *)(v9 + 432);
    if ( v3 != *(_QWORD *)(W32GetUserSessionState(v9, v7) + 19232) )
      goto LABEL_6;
    v12 = *(_DWORD *)(v3 + 432) == 0;
  }
  else
  {
    *((_DWORD *)CurrentLogicalCursorThread + 198) = v8 - 1;
    --*(_DWORD *)(v9 + 432);
    if ( v3 != *(_QWORD *)(W32GetUserSessionState(v9, v7) + 19232) )
      goto LABEL_6;
    v12 = *(_DWORD *)(v3 + 432) == -1;
  }
  if ( v12 )
    zzzUpdateCursorImage(v11, v10);
LABEL_6:
  v13 = *(_DWORD *)(v3 + 432);
  zzzEndDeferWinEventNotify();
  return v13;
}
