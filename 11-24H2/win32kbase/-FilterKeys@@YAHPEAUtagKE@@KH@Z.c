/*
 * XREFs of ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x140109C60
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A064 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010A0D4 (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall FilterKeys(struct tagKE *a1, int a2, int a3)
{
  char v4; // si
  int v5; // ebp
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int128 v29; // xmm0
  _OWORD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned int v39; // eax
  __int128 v40; // [rsp+30h] [rbp-28h]

  v4 = *((_BYTE *)a1 + 2);
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  UserSessionState = W32GetUserSessionState(a1);
  v10 = UserSessionState;
  if ( v4 == -95 )
  {
    if ( v5 )
    {
      v35 = *(_QWORD *)(UserSessionState + 20544);
      if ( v35 )
      {
        ApiSetEditionKillAccessibilityTimer(v9, v35);
        *(_QWORD *)(v10 + 20544) = 0LL;
      }
      *(_DWORD *)(W32GetUserSessionState(v9) + 20568) = 0;
    }
    else if ( *(_BYTE *)(UserSessionState + 21901) == 2 )
    {
      v9 = *(unsigned int *)(W32GetUserSessionState(v9) + 20524);
      if ( (v9 & 4) != 0 && !*(_QWORD *)(v10 + 20544) && *(_DWORD *)(W32GetUserSessionState(v9) + 20568) != 8 )
      {
        *(_DWORD *)(W32GetUserSessionState(v9) + 20568) = 1;
        *(_QWORD *)(v10 + 20544) = ApiSetEditionSetAccessibilityTimer(0LL, 4000LL, FKActivationTimer);
      }
    }
  }
  else if ( *(_QWORD *)(UserSessionState + 20544) )
  {
    *(_DWORD *)(W32GetUserSessionState(v9) + 20568) = 0;
    ApiSetEditionKillAccessibilityTimer(v21, *(_QWORD *)(v10 + 20544));
    *(_QWORD *)(v10 + 20544) = 0LL;
  }
  v11 = *(unsigned int *)(W32GetUserSessionState(v9) + 20524);
  if ( (v11 & 1) == 0 )
    return 1LL;
  v13 = *(_BYTE *)(v10 + 21904);
  if ( v5 )
  {
    if ( v4 != v13 )
      return 1LL;
    ApiSetEditionKillAccessibilityTimer(v11, *(_QWORD *)(v10 + 20552));
    *(_QWORD *)(v10 + 20552) = 0LL;
    *(_BYTE *)(v10 + 21904) = 0;
    v15 = *(_QWORD *)(v10 + 20560);
    if ( v15 )
    {
      ApiSetEditionKillAccessibilityTimer(v14, v15);
      *(_QWORD *)(v10 + 20560) = 0LL;
      if ( (*(_DWORD *)(W32GetUserSessionState(v16) + 67056) & 0x800) == 0 )
        return 0LL;
      v18 = W32GetUserSessionState(v17);
      *(_DWORD *)(v18 + 67056) &= ~0x800u;
    }
    v19 = *(unsigned int *)(v10 + 20540);
    if ( !(_DWORD)v19 )
      return 1LL;
    *(_BYTE *)(v10 + 21900) = v4;
    *(_QWORD *)(v10 + 20552) = ApiSetEditionSetAccessibilityTimer(0LL, v19, FKBounceKeyTimer);
    if ( (*(_DWORD *)(W32GetUserSessionState(v20) + 67056) & 0x400) == 0 )
      return 1LL;
  }
  else if ( v4 != v13 )
  {
    *(_BYTE *)(v10 + 21904) = v4;
    v22 = *(_BYTE *)(v10 + 21900);
    if ( v22 )
    {
      if ( v4 == v22 )
      {
        v36 = W32GetUserSessionState(v11);
        *(_DWORD *)(v36 + 67056) |= 0x400u;
        return 0LL;
      }
      v37 = *(_QWORD *)(v10 + 20552);
      if ( v37 )
      {
        ApiSetEditionKillAccessibilityTimer(v11, v37);
        *(_QWORD *)(v10 + 20552) = 0LL;
      }
      *(_BYTE *)(v10 + 21900) = 0;
    }
    v23 = W32GetUserSessionState(v11);
    *(_DWORD *)(v23 + 67056) &= ~0x400u;
    v25 = *(unsigned int *)(W32GetUserSessionState(v24) + 20524);
    if ( (v25 & 0x40) != 0 )
      ApiSetEditionPostRitSound(4LL, v25, 0LL);
    v27 = *(_QWORD *)(v10 + 20560);
    if ( v27 )
    {
      ApiSetEditionKillAccessibilityTimer(v26, v27);
      *(_QWORD *)(v10 + 20560) = 0LL;
    }
    v28 = *(_QWORD *)(v10 + 20552);
    if ( v28 )
    {
      ApiSetEditionKillAccessibilityTimer(v26, v28);
      *(_QWORD *)(v10 + 20552) = 0LL;
    }
    v40 = *((_OWORD *)a1 + 1);
    v29 = *(_OWORD *)a1;
    v30 = *(_OWORD **)(W32GetUserSessionState(v26) + 20608);
    *v30 = v29;
    v30[1] = v40;
    *(_DWORD *)(W32GetUserSessionState(v30) + 20616) = a2;
    *(_DWORD *)(W32GetUserSessionState(v31) + 20620) = a3;
    v32 = *(unsigned int *)(v10 + 20528);
    if ( !(_DWORD)v32 )
    {
      v38 = *(unsigned int *)(v10 + 20536);
      if ( (_DWORD)v38 )
      {
        v39 = *(_DWORD *)(v10 + 20532);
        if ( v39 )
          v38 = v39;
        *(_QWORD *)(v10 + 20552) = ApiSetEditionSetAccessibilityTimer(0LL, v38, xxxFKRepeatRateTimer);
      }
      return 1LL;
    }
    *(_QWORD *)(v10 + 20560) = ApiSetEditionSetAccessibilityTimer(0LL, v32, xxxFKAcceptanceDelayTimer);
    v34 = W32GetUserSessionState(v33);
    *(_DWORD *)(v34 + 67056) &= ~0x800u;
  }
  return 0LL;
}
