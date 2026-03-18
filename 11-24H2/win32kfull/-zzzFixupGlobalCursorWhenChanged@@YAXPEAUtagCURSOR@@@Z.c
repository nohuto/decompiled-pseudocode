/*
 * XREFs of ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1401347D8
 * Callers:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1401333EC (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1401343B0 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 */

void __fastcall zzzFixupGlobalCursorWhenChanged(struct tagCURSOR *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36376);
  if ( v3 == *((_QWORD *)a1 + 6) )
  {
    *(_QWORD *)(W32GetUserSessionState(v4, v3) + 36376) = 0LL;
    *(_QWORD *)(W32GetUserSessionState(v6, v5) + 36384) = 0LL;
    zzzUpdateCursorImage(v8, v7);
  }
}
