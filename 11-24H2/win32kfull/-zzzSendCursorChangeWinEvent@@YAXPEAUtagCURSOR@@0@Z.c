/*
 * XREFs of ?zzzSendCursorChangeWinEvent@@YAXPEAUtagCURSOR@@0@Z @ 0x1402715E0
 * Callers:
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 * Callees:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 */

void __fastcall zzzSendCursorChangeWinEvent(struct tagCURSOR *a1, struct tagCURSOR *a2)
{
  char v4; // si
  __int64 UserSessionState; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // edx

  v4 = a2 != 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  LOBYTE(v7) = a1 != 0LL;
  v8 = *(_QWORD *)(UserSessionState + 19200);
  if ( v8 )
  {
    v6 = *(unsigned int *)(v8 + 48);
    LODWORD(v6) = v6 | 0x800;
    if ( !a2 )
      v6 = *(_DWORD *)(v8 + 48) & 0xFFFFF7FF;
    v7 = *(_DWORD *)(v8 + 48) >> 11;
    LOBYTE(v7) = (*(_DWORD *)(v8 + 48) & 0x800) != 0;
    *(_DWORD *)(v8 + 48) = v6 & 0xFFFFEFFF;
    if ( (v6 & 0x1000) != 0 )
      goto LABEL_8;
  }
  if ( v4 != (_BYTE)v7 )
  {
LABEL_8:
    v9 = 32771 - (a2 != 0LL);
  }
  else
  {
    if ( a2 == a1 )
      return;
    v9 = 32780;
  }
  v10 = W32GetUserSessionState(v6, v7);
  v11 = 3;
  if ( !*(_DWORD *)(v10 + 70856) )
    v11 = 1;
  xxxWindowEvent(v9, 0LL, -9, 0, v11);
}
