/*
 * XREFs of ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1401F5EB0
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401099A0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 *     ??B?$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ @ 0x1401F519C (--B-$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1401F55A0 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1401F5A40 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140221FF8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

_BOOL8 __fastcall xxxMKToggleMouseKeys(__int64 a1)
{
  BOOL v1; // ebp
  __int64 v2; // rcx
  __int64 UserSessionState; // rdi
  __int64 v4; // rcx
  char v5; // bl
  __int64 v6; // rcx
  char v7; // bl
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int16 v22; // bx
  __int64 v23; // rcx
  __int64 v24; // rcx

  v1 = 1;
  if ( (*(_DWORD *)(W32GetUserSessionState(a1) + 67056) & 0x2000) == 0 )
  {
    UserSessionState = W32GetUserSessionState(v2);
    v5 = *(_BYTE *)(W32GetUserSessionState(v4) + 21905);
    v7 = *(_BYTE *)(UserSessionState + 21901) | *(_BYTE *)(W32GetUserSessionState(v6) + 21906) | v5;
    v9 = W32GetUserSessionState(v8);
    if ( v7 == 17 )
    {
      v11 = *(unsigned int *)(v9 + 20636);
      if ( (v11 & 4) != 0 )
      {
        v1 = SGACCESSIBILITYgbMKMouseMode<unsigned char>::operator bool(v11);
        TurnOffMouseKeys(v12);
      }
    }
    else
    {
      v13 = v9;
      v14 = (unsigned __int64)*(unsigned __int8 *)(W32GetUserSessionState(v10) + 13984) >> 2;
      v16 = W32GetUserSessionState(v15);
      v17 = *(unsigned __int8 *)(v13 + v14 + 14336) & (1 << (2 * (*(_WORD *)(v16 + 13984) & 3) + 1));
      v18 = (*(_DWORD *)(W32GetUserSessionState(2 * (*(_WORD *)(v16 + 13984) & 3u) + 1) + 20636) >> 7) & 1;
      if ( (_DWORD)v18 == (v17 != 0) )
      {
        *(_BYTE *)(W32GetUserSessionState(v18) + 20943) = 1;
        ApiSetEditionPostRitSound(3LL, v19, 0LL);
      }
      else
      {
        *(_BYTE *)(W32GetUserSessionState(v18) + 20943) = 0;
        ApiSetEditionPostRitSound(2LL, v20, 0LL);
        v22 = *(_WORD *)(W32GetUserSessionState(v21) + 20662);
        *(_WORD *)(W32GetUserSessionState(v23) + 20662) = 3;
        xxxMKButtonSetState(1LL);
        *(_WORD *)(W32GetUserSessionState(v24) + 20662) = v22;
      }
      ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
    }
  }
  return v1;
}
