/*
 * XREFs of UpdateToggleKeyAndLights @ 0x140214380
 * Callers:
 *     ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x1401083D0 (-ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z.c)
 *     UpdateKeyLights @ 0x140189CD0 (UpdateKeyLights.c)
 * Callees:
 *     IsRemoteConnection @ 0x1400C88B4 (IsRemoteConnection.c)
 *     IoControl @ 0x140212EF0 (IoControl.c)
 */

void __fastcall UpdateToggleKeyAndLights(__int64 a1)
{
  char v1; // di
  __int64 UserSessionState; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int16 v22; // ax
  __int16 v23; // ax

  v1 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  v3 = UserSessionState + 12832;
  *(_WORD *)(UserSessionState + 12862) = 0;
  if ( (*(_BYTE *)(W32GetUserSessionState(v4) + 14341) & 2) != 0 )
  {
    *(_WORD *)(v3 + 30) |= 4u;
    v6 = W32GetUserSessionState(v5);
    *(_BYTE *)(v6 + 14405) |= 2u;
  }
  else
  {
    v8 = W32GetUserSessionState(v5);
    *(_BYTE *)(v8 + 14405) &= ~2u;
  }
  if ( (*(_BYTE *)(W32GetUserSessionState(v7) + 14372) & 2) != 0 )
  {
    *(_WORD *)(v3 + 30) |= 2u;
    v10 = W32GetUserSessionState(v9);
    *(_BYTE *)(v10 + 14436) |= 2u;
  }
  else
  {
    v12 = W32GetUserSessionState(v9);
    *(_BYTE *)(v12 + 14436) &= ~2u;
  }
  if ( (*(_BYTE *)(W32GetUserSessionState(v11) + 14372) & 8) != 0 )
  {
    *(_WORD *)(v3 + 30) |= 1u;
    v14 = W32GetUserSessionState(v13);
    *(_BYTE *)(v14 + 14436) |= 8u;
  }
  else
  {
    v17 = W32GetUserSessionState(v13);
    *(_BYTE *)(v17 + 14436) &= ~8u;
  }
  if ( *(_BYTE *)v3 == 7
    || (unsigned int)IsRemoteConnection(v16, v15) && *(_DWORD *)(W32GetUserSessionState(v16) + 69096) == 7 )
  {
    if ( (*(_BYTE *)(W32GetUserSessionState(v16) + 14341) & 8) != 0 )
    {
      *(_WORD *)(v3 + 30) |= 8u;
      v20 = W32GetUserSessionState(v19);
      *(_BYTE *)(v20 + 14405) |= 8u;
    }
    else
    {
      v21 = W32GetUserSessionState(v19);
      *(_BYTE *)(v21 + 14405) &= ~8u;
    }
  }
  if ( (unsigned int)IsRemoteConnection(v16, v18) )
  {
    v22 = *(_WORD *)(v3 + 30);
    if ( (v1 & 1) != 0 )
      v23 = v22 | 0x8000;
    else
      v23 = v22 & 0x7FFF;
    *(_WORD *)(v3 + 30) = v23;
  }
  IoControl((v1 & 2 | 4u) >> 1);
}
