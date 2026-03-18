/*
 * XREFs of ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x14010F530
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x140167BB0 (PostWinlogonMessage.c)
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140222058 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 */

__int64 __fastcall HighContrastHotKey(struct tagKE *a1)
{
  _BYTE *UserSessionState; // rax
  char v3; // si
  int v4; // edi
  char v5; // bl
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx

  UserSessionState = (_BYTE *)W32GetUserSessionState(a1);
  v3 = *((_BYTE *)a1 + 2);
  v4 = *((_WORD *)a1 + 1) & 0x8000;
  v5 = UserSessionState[21901] | UserSessionState[21905] | UserSessionState[21906];
  v7 = *(unsigned int *)(W32GetUserSessionState(v6) + 21100);
  if ( (v7 & 1) != 0 )
  {
    v11 = *(unsigned int *)(W32GetUserSessionState(v7) + 21100);
    if ( (v11 & 4) != 0 && v3 == 44 && !v4 && v5 == 17 )
    {
      v12 = W32GetUserSessionState(v11);
      *(_DWORD *)(v12 + 21100) &= ~1u;
      if ( (*(_DWORD *)(W32GetUserSessionState(v13) + 21100) & 0x10) != 0 )
        ApiSetEditionPostRitSound(1LL, v14, 0LL);
      PostWinlogonMessage(1026LL, 9LL);
    }
    return 1LL;
  }
  v8 = *(unsigned int *)(W32GetUserSessionState(v7) + 21100);
  if ( (v8 & 4) == 0 || v3 != 44 || v4 || v5 != 17 )
    return 1LL;
  if ( (*(_DWORD *)(W32GetUserSessionState(v8) + 21100) & 0x10) != 0 )
    ApiSetEditionPostRitSound(0LL, v10, 0LL);
  ApiSetEditionPostAccessibilityShortcutNotification(5LL);
  return 0LL;
}
