/*
 * XREFs of ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x140133350
 * Callers:
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x140132C48 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140133ED4 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 * Callees:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1401333EC (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 */

void __fastcall xxxEnsureDpiCursorsForSysCur(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _UNICODE_STRING *v3; // rdi
  unsigned int v4; // ebx
  struct tagCURSOR *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = 552LL * (unsigned int)a1;
  v3 = 0LL;
  v4 = 33024;
  v5 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + v2 + 21936);
  if ( *(_QWORD *)(W32GetUserSessionState(v7, v6) + v2 + 21952) )
  {
    v3 = (struct _UNICODE_STRING *)(W32GetUserSessionState(v9, v8) + v2 + 21944);
    if ( ((unsigned __int64)v3->Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
      v4 = 33040;
  }
  xxxEnsureDpiCursors(v5, v3, v4);
}
