/*
 * XREFs of UpdatePerUserKeyboardIndicators @ 0x14020A510
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 */

__int64 __fastcall UpdatePerUserKeyboardIndicators(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 UserSessionState; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // [rsp+48h] [rbp+10h] BYREF

  v26 = 0x80000000;
  v3 = *((_QWORD *)PtiCurrent(a1, a2) + 59);
  result = IsRemoteConnection(v5, v4);
  if ( !(_DWORD)result )
  {
    FastGetProfileIntW(a1, 13LL, L"InitialKeyboardIndicators", 0x80000000LL, &v26, 0);
    v9 = v26 & 0x80000002;
    v26 = v9;
    if ( v9 == 0x80000000 )
    {
      v9 = *(unsigned __int16 *)(W32GetUserSessionState(v8, v7) + 12866);
      v26 = v9;
    }
    LOBYTE(v8) = *(_BYTE *)(v3 + 316);
    if ( (v9 & 2) != 0 )
    {
      LOBYTE(v8) = v8 | 2;
      *(_BYTE *)(v3 + 316) = v8;
      UserSessionState = W32GetUserSessionState(v8, v7);
      *(_BYTE *)(UserSessionState + 14372) |= 2u;
      v25 = W32GetUserSessionState(v24, v23);
      *(_BYTE *)(v25 + 14436) |= 2u;
    }
    else
    {
      LOBYTE(v8) = v8 & 0xFD;
      *(_BYTE *)(v3 + 316) = v8;
      v10 = W32GetUserSessionState(v8, v7);
      *(_BYTE *)(v10 + 14372) &= ~2u;
      v13 = W32GetUserSessionState(v12, v11);
      *(_BYTE *)(v13 + 14436) &= ~2u;
    }
    *(_BYTE *)(W32GetUserSessionState(v15, v14) + 14332) = 0;
    *(_BYTE *)(v3 + 285) &= ~8u;
    v18 = W32GetUserSessionState(v17, v16);
    *(_BYTE *)(v18 + 14341) &= ~8u;
    v21 = W32GetUserSessionState(v20, v19);
    *(_BYTE *)(v21 + 14405) &= ~8u;
    return UpdateKeyLights(0LL);
  }
  return result;
}
