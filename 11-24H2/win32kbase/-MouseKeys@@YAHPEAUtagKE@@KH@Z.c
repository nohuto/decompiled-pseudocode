/*
 * XREFs of ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401099A0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A064 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 *     ??8?$SGACCESSIBILITYgMKPreviousVk@E@@QEBA_NAEBE@Z @ 0x1401F516C (--8-$SGACCESSIBILITYgMKPreviousVk@E@@QEBA_NAEBE@Z.c)
 *     ??B?$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ @ 0x1401F519C (--B-$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ.c)
 *     ?MKButtonSelect@@YAHG@Z @ 0x1401F54B0 (-MKButtonSelect@@YAHG@Z.c)
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x1401F59D0 (-xxxMKButtonClick@@YAHG@Z.c)
 *     ?xxxMKButtonDoubleClick@@YAHG@Z @ 0x1401F5A20 (-xxxMKButtonDoubleClick@@YAHG@Z.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1401F5A40 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1401F5AF0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1401F5EB0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140222058 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MouseKeys(struct tagKE *a1)
{
  __int16 v1; // si
  __int16 v3; // r13
  int v4; // r13d
  unsigned __int8 *UserSessionState; // rax
  __int64 v6; // rcx
  int v7; // r15d
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int16 v12; // bp
  unsigned int v13; // ebx
  int v14; // r14d
  __int64 i; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  char v31; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((unsigned __int8 *)a1 + 2);
  v3 = *((_WORD *)a1 + 1);
  v31 = *((_BYTE *)a1 + 2);
  v4 = v3 & 0x8000;
  UserSessionState = (unsigned __int8 *)W32GetUserSessionState(a1);
  v6 = UserSessionState[21905];
  v7 = UserSessionState[21901] | v6 | UserSessionState[21906];
  v8 = *(unsigned int *)(W32GetUserSessionState(v6) + 20636);
  if ( (v8 & 1) == 0 )
  {
    v9 = *(unsigned int *)(W32GetUserSessionState(v8) + 20636);
    if ( (v9 & 4) != 0 && v1 == *(_WORD *)(W32GetUserSessionState(v9) + 13984) && !v4 && v7 == 17 )
    {
      *(_BYTE *)(W32GetUserSessionState(v10) + 20942) = v1;
      if ( (*(_DWORD *)(W32GetUserSessionState(v24) + 20636) & 0x10) != 0 )
        ApiSetEditionPostRitSound(0LL, v25, 0LL);
      ApiSetEditionPostAccessibilityShortcutNotification(3LL);
      return 0LL;
    }
    return 1LL;
  }
  v12 = v1 | *((_WORD *)a1 + 1) & 0x100;
  v13 = 0;
  v14 = 0;
  for ( i = 0LL; i < 32; i += 2LL )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v8) + 14200);
    if ( v12 == *(_WORD *)(i + v8) )
      break;
    ++v14;
  }
  if ( v14 == 16
    || !(unsigned __int8)SGACCESSIBILITYgbMKMouseMode<unsigned char>::operator bool()
    && v1 != *(_WORD *)(W32GetUserSessionState(v16) + 13984) )
  {
    return 1LL;
  }
  if ( (_BYTE)v1 == 46 )
  {
    LOBYTE(v16) = (v7 & 0x30) != 0;
    if ( ((unsigned __int8)v16 & ((v7 & 0xC) != 0)) != 0 )
      return 1LL;
  }
  v17 = W32GetUserSessionState(v16);
  v19 = SGACCESSIBILITYgMKPreviousVk<unsigned char>::operator==(v18, &v31);
  if ( v4 )
  {
    if ( v19 )
    {
      v21 = *(_QWORD *)(v17 + 20664);
      if ( v21 )
      {
        ApiSetEditionKillAccessibilityTimer(v20, v21);
        *(_QWORD *)(v17 + 20664) = 0LL;
      }
      v22 = W32GetUserSessionState(v20);
      *(_DWORD *)(v22 + 67056) &= ~0x2000u;
      *(_BYTE *)(W32GetUserSessionState(v23) + 20942) = 0;
    }
    LOBYTE(v13) = v1 == *(_WORD *)(W32GetUserSessionState(v20) + 13984);
    return v13;
  }
  else
  {
    if ( v19 )
    {
      v26 = W32GetUserSessionState(v20);
      *(_DWORD *)(v26 + 67056) |= 0x2000u;
    }
    else
    {
      v28 = W32GetUserSessionState(v20);
      *(_DWORD *)(v28 + 67056) &= ~0x2000u;
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v27) + 67056) & 0x2000) == 0 )
    {
      v30 = *(_QWORD *)(v17 + 20664);
      if ( v30 )
      {
        ApiSetEditionKillAccessibilityTimer(v29, v30);
        *(_QWORD *)(v17 + 20664) = 0LL;
      }
    }
    *(_BYTE *)(W32GetUserSessionState(v29) + 20942) = v1;
    return funcs_140109C48[v14](word_14026FA80[v14]);
  }
}
