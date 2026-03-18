/*
 * XREFs of ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FAD40
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1400FB230 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB410 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x14019F990 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1401F6230 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140221FF8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140222058 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 */

__int64 __fastcall xxxStickyKeys(struct tagKE *a1, unsigned int a2, int a3)
{
  char v3; // r14
  int v5; // ebp
  _BYTE *UserSessionState; // rax
  _BYTE *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int8 v14; // dl
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ebp
  int v27; // esi
  char v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int8 v31; // r8
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx

  v3 = 0;
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  UserSessionState = (_BYTE *)W32GetUserSessionState(a1);
  v9 = UserSessionState;
  v10 = (unsigned __int8)UserSessionState[21902];
  if ( (_BYTE)v10 )
  {
    if ( !v5 && ((unsigned __int8)v10 & UserSessionState[21903]) != 0 )
    {
      UserSessionState[21903] = UserSessionState[21901];
      return 1LL;
    }
    v14 = UserSessionState[21901];
    UserSessionState[21903] = v14;
    if ( *((_BYTE *)a1 + 2) != 0xA0 || (v10 = (unsigned int)~(_DWORD)v10, ((unsigned __int8)v10 & v14) != 0) )
    {
      *(_BYTE *)(W32GetUserSessionState(v10) + 14052) = 0;
    }
    else
    {
      v19 = W32GetUserSessionState(v10);
      ++*(_BYTE *)(v19 + 14052);
    }
    if ( *((_BYTE *)a1 + 2) != 0xA1
      || (v15 = ~(unsigned __int8)v9[21902], ((unsigned __int8)~v9[21902] & v9[21901]) != 0) )
    {
      *(_BYTE *)(W32GetUserSessionState(v15) + 14053) = 0;
    }
    else
    {
      v20 = W32GetUserSessionState(v15);
      ++*(_BYTE *)(v20 + 14053);
    }
    if ( *(_BYTE *)(W32GetUserSessionState(v16) + 14052) == 10 || *(_BYTE *)(W32GetUserSessionState(v17) + 14053) == 10 )
    {
      v34 = *(unsigned int *)(W32GetUserSessionState(v17) + 20628);
      if ( (v34 & 4) != 0 )
      {
        v35 = *(unsigned int *)(W32GetUserSessionState(v34) + 20628);
        if ( (v35 & 1) != 0 )
        {
          xxxTurnOffStickyKeys();
          v34 = *(unsigned int *)(W32GetUserSessionState(v36) + 20628);
          if ( (v34 & 0x10) != 0 )
            ApiSetEditionPostRitSound(1LL, v37, 0LL);
        }
        else
        {
          if ( (*(_DWORD *)(W32GetUserSessionState(v35) + 20628) & 0x10) != 0 )
            ApiSetEditionPostRitSound(0LL, v38, 0LL);
          ApiSetEditionPostAccessibilityShortcutNotification(1LL);
        }
      }
      *(_BYTE *)(W32GetUserSessionState(v34) + 14052) = 0;
      *(_BYTE *)(W32GetUserSessionState(v39) + 14053) = 0;
      return 1LL;
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v17) + 20628) & 1) == 0 )
      return 1LL;
    if ( v5 )
    {
      if ( ((unsigned __int8)(v9[21906] | v9[21905]) & v9[21902]) == 0 )
        return 1LL;
    }
    else
    {
      v21 = (unsigned __int8)v9[21902];
      if ( v9[21901] == (_BYTE)v21 )
      {
        v25 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 91;
        if ( *((_WORD *)a1 + 1) == 91
          || (v25 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 92, *((_WORD *)a1 + 1) == 92) )
        {
          v3 = -64;
        }
        else
        {
          v25 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 160;
          if ( *((_WORD *)a1 + 1) == 160
            || (v25 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 161, *((_WORD *)a1 + 1) == 161) )
          {
            v3 = 3;
          }
          else
          {
            v25 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 162;
            if ( *((_WORD *)a1 + 1) == 162
              || (v25 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 163, *((_WORD *)a1 + 1) == 163) )
            {
              v3 = 12;
            }
            else
            {
              v25 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 164;
              if ( (unsigned int)v25 <= 1 )
                v3 = 48;
            }
          }
        }
        LOBYTE(v26) = v9[21906];
        LOBYTE(v27) = v9[21905];
        if ( ((unsigned __int8)v26 & (unsigned __int8)v3) != 0 )
        {
          v28 = ~v3;
          v27 = (unsigned __int8)(v28 & v27);
          v26 = (unsigned __int8)(v28 & v26);
          xxxUpdateModifierState(v26 | v27 | v21, a3);
        }
        else
        {
          if ( ((unsigned __int8)v26 & (unsigned __int8)v21) == 0 )
            LOBYTE(v27) = v21 ^ v27;
          v30 = W32GetUserSessionState(v25);
          v31 = v9[21902];
          LOBYTE(v29) = *(char *)(v30 + 20628) < 0;
          if ( ((((unsigned __int8)(v9[21905] | v9[21906]) & v31) != 0) & (unsigned __int8)v29) != 0 )
            LOBYTE(v26) = v31 ^ v9[21906];
        }
        if ( v9[21905] != (_BYTE)v27 || (v32 = 0, v9[21906] != (_BYTE)v26) )
          v32 = 1;
        v9[21905] = v27;
        v9[21906] = v26;
        if ( v32 )
          ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
        if ( (*(_DWORD *)(W32GetUserSessionState(v29) + 20628) & 0x40) != 0 )
        {
          if ( (v9[21906] & v9[21902]) == 0 )
            ApiSetEditionPostRitSound(2LL, v33, 0LL);
          if ( ((unsigned __int8)(v9[21906] | v9[21905]) & v9[21902]) != 0 )
            ApiSetEditionPostRitSound(3LL, v33, 0LL);
        }
        if ( (v9[21905] & v9[21902]) != 0 )
          return 1LL;
      }
      else
      {
        if ( !(unsigned int)xxxTwoKeysDown(a3) )
          return 1LL;
        if ( v9[21906] || (v22 = 0LL, v9[21905] != v9[21901]) )
          v22 = 1LL;
        v9[21905] = v9[21901];
        v9[21906] = 0;
        if ( (_DWORD)v22 )
          ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
        if ( (*(_DWORD *)(W32GetUserSessionState(v22) + 20628) & 0x40) != 0 )
        {
          ApiSetEditionPostRitSound(2LL, v23, 0LL);
          ApiSetEditionPostRitSound(3LL, v24, 0LL);
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(W32GetUserSessionState(v10) + 14052) = 0;
    *(_BYTE *)(W32GetUserSessionState(v11) + 14053) = 0;
    if ( (*(_DWORD *)(W32GetUserSessionState(v12) + 20628) & 1) == 0 )
      return 1LL;
    if ( v9[21901] && !v5 )
    {
      xxxTwoKeysDown(a3);
      return 1LL;
    }
    if ( (unsigned int)AccessProceduresStream(a1, a2, a3) )
      xxxProcessKeyEvent((_DWORD)a1, a2, 0, 0, 0LL, 0LL);
    xxxUpdateModifierState((unsigned __int8)v9[21906], a3);
    v18 = v9[21905] == 0;
    v9[21905] = 0;
    if ( !v18 )
      ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  }
  return 0LL;
}
