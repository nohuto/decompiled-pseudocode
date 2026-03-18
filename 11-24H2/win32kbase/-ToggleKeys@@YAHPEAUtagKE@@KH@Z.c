/*
 * XREFs of ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x140109140
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A064 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010A0D4 (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall ToggleKeys(struct tagKE *a1, int a2, int a3)
{
  unsigned __int64 v4; // r14
  int v5; // ebp
  __int64 v8; // rcx
  __int64 UserSessionState; // rdi
  __int64 v10; // rdx
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  char v19; // bl
  __int64 v20; // rcx
  __int64 v21; // rcx

  v4 = *((unsigned __int8 *)a1 + 2);
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  UserSessionState = W32GetUserSessionState(a1);
  switch ( (_DWORD)v4 )
  {
    case 0x14:
      goto LABEL_9;
    case 0x90:
      goto LABEL_15;
    case 0x91:
LABEL_9:
      v12 = *(unsigned int *)(W32GetUserSessionState(v8) + 20972);
      if ( (v12 & 1) != 0 && !v5 )
      {
        v13 = v4 & 3;
        if ( ((unsigned __int8)(1 << (2 * v13)) & *(_BYTE *)((v4 >> 2) + W32GetUserSessionState(v12) + 14336)) == 0 )
        {
          v14 = W32GetUserSessionState((unsigned int)(2 * v13));
          v15 = (unsigned int)(1 << (2 * v13 + 1));
          v16 = 3LL;
          if ( ((unsigned __int8)v15 & *(_BYTE *)(v14 + (v4 >> 2) + 14336)) != 0 )
            v16 = 2LL;
          ApiSetEditionPostRitSound(v16, v15, 0LL);
        }
      }
      return 1LL;
  }
  if ( (_WORD)v4 != *(_WORD *)(W32GetUserSessionState(v8) + 13984) )
  {
    if ( (_WORD)v4 != *(_WORD *)(W32GetUserSessionState(v8) + 13986) )
    {
      v10 = *(_QWORD *)(UserSessionState + 20976);
      if ( v10 )
        ApiSetEditionKillAccessibilityTimer(v8, v10);
      return 1LL;
    }
    goto LABEL_9;
  }
LABEL_15:
  LOBYTE(v8) = *(_BYTE *)(UserSessionState + 21906) | *(_BYTE *)(UserSessionState + 21905) | *(_BYTE *)(UserSessionState + 21901);
  if ( (_BYTE)v8 != 17 || (v8 = *(unsigned int *)(W32GetUserSessionState(v8) + 20636), (v8 & 4) == 0) )
  {
    if ( v5 )
    {
      ApiSetEditionKillAccessibilityTimer(v8, *(_QWORD *)(UserSessionState + 20976));
      *(_QWORD *)(UserSessionState + 20976) = 0LL;
      *(_DWORD *)(W32GetUserSessionState(v17) + 20984) = 0;
      *(_BYTE *)(W32GetUserSessionState(v18) + 20992) = 0;
    }
    else if ( !*(_QWORD *)(UserSessionState + 20976) )
    {
      v8 = *(unsigned int *)(W32GetUserSessionState(v8) + 20972);
      if ( (v8 & 4) != 0 )
      {
        *(_DWORD *)(W32GetUserSessionState(v8) + 20984) = a2;
        v19 = *(_BYTE *)a1;
        *(_BYTE *)(W32GetUserSessionState(v20) + 20992) = v19;
        *(_DWORD *)(W32GetUserSessionState(v21) + 20988) = a3;
        *(_QWORD *)(UserSessionState + 20976) = ApiSetEditionSetAccessibilityTimer(0LL, 5000LL, xxxToggleKeysTimer);
      }
    }
    v8 = *(unsigned int *)(W32GetUserSessionState(v8) + 20636);
    if ( (v8 & 1) == 0 )
      goto LABEL_9;
  }
  return 1LL;
}
