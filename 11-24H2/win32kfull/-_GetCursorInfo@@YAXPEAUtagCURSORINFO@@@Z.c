/*
 * XREFs of ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x14022F290
 * Callers:
 *     NtUserGetCursorInfo @ 0x140242130 (NtUserGetCursorInfo.c)
 * Callees:
 *     ?IsCursorImageSuppressed@@YA_NXZ @ 0x14027135C (-IsCursorImageSuppressed@@YA_NXZ.c)
 */

void __fastcall _GetCursorInfo(struct tagCURSORINFO *a1)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v3; // rdx
  _BOOL8 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  *(_OWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  *((_QWORD *)a1 + 2) = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  v5 = 0LL;
  if ( IsCursorImageSuppressed() )
  {
    *((_DWORD *)a1 + 1) = 2;
  }
  else
  {
    v4 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 36384) != 0LL;
    *((_DWORD *)a1 + 1) = v4;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 36376) )
    v5 = **(_QWORD **)(W32GetUserSessionState(v7, v6) + 36376);
  *((_QWORD *)a1 + 1) = v5;
}
