/*
 * XREFs of ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C00DEDF4
 * Callers:
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C00630B4 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00DEC0C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 * Callees:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00DEE44 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 */

void __fastcall xxxEnsureDpiCursorsForSysCur(unsigned int a1)
{
  struct _UNICODE_STRING *v1; // rdx
  __int64 v2; // r9
  unsigned int v3; // r8d

  v1 = 0LL;
  v2 = 69LL * a1;
  v3 = 33024;
  if ( *(_QWORD *)(v2 * 8 + gasyscur[0] + 24) )
  {
    v1 = (struct _UNICODE_STRING *)&gasyscur[v2 + 2];
    if ( ((unsigned __int64)v1->Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
      v3 = 33040;
  }
  xxxEnsureDpiCursors((struct tagCURSOR *)gasyscur[v2 + 1], v1, v3);
}
