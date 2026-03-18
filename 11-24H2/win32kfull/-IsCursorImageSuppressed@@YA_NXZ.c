/*
 * XREFs of ?IsCursorImageSuppressed@@YA_NXZ @ 0x14027135C
 * Callers:
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x14022F290 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 * Callees:
 *     UsingPenCursors @ 0x140178AF4 (UsingPenCursors.c)
 */

char __fastcall IsCursorImageSuppressed(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // bl

  UserSessionState = W32GetUserSessionState(a1, a2);
  switch ( *(_DWORD *)(UserSessionState + 36396) )
  {
    case 1:
      return 1;
    case 2:
      return 1;
    case 3:
      return 1;
  }
  v4 = (unsigned int)(*(_DWORD *)(UserSessionState + 36396) - 5);
  if ( (unsigned int)v4 < 2 )
    return 1;
  v7 = 0;
  if ( (unsigned int)UsingPenCursors(v3, v4) )
    return *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 36368) + 80LL) == 0;
  return v7;
}
