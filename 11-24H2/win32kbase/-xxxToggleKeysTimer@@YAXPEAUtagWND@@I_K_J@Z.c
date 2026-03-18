/*
 * XREFs of ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F6080
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB410 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140222058 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall xxxToggleKeysTimer(struct tagWND *a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _OWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(v13, 0, sizeof(v13));
  v1 = *(unsigned int *)(W32GetUserSessionState(a1) + 20972);
  if ( (v1 & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v1);
    *(_DWORD *)(UserSessionState + 20972) &= ~1u;
    v4 = *(unsigned int *)(W32GetUserSessionState(v3) + 20972);
    if ( (v4 & 0x10) != 0 )
      ApiSetEditionPostRitSound(1LL, v4, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(W32GetUserSessionState(v1) + 20972) & 0x10) != 0 )
      ApiSetEditionPostRitSound(0LL, v6, 0LL);
    ApiSetEditionPostAccessibilityShortcutNotification(4LL);
  }
  LOBYTE(v13[0]) = *(_BYTE *)(W32GetUserSessionState(v5) + 20992);
  LOBYTE(v7) = v13[0];
  WORD1(v13[0]) = *(_WORD *)(W32GetUserSessionState(v7) + 13984) | 0x8000;
  v8 = W32GetUserSessionState(WORD1(v13[0]));
  v10 = W32GetUserSessionState(v9);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v13, *(_DWORD *)(v8 + 20984), *(_DWORD *)(v10 + 20988)) )
    xxxProcessKeyEvent((unsigned __int16 *)v13, (struct _CLIPOBJ *)*(unsigned int *)(v8 + 20984), 0, 0, 0LL, 0LL);
  WORD1(v13[0]) = *(_WORD *)(W32GetUserSessionState(v11) + 13984);
  v12 = W32GetUserSessionState(WORD1(v13[0]));
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v13, *(_DWORD *)(v8 + 20984), *(_DWORD *)(v12 + 20988)) )
    xxxProcessKeyEvent((unsigned __int16 *)v13, (struct _CLIPOBJ *)*(unsigned int *)(v8 + 20984), 0, 0, 0LL, 0LL);
}
