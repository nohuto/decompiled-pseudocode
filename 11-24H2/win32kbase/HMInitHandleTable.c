/*
 * XREFs of HMInitHandleTable @ 0x1402E23C8
 * Callers:
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x140111A54 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMInitHandleTable(__int64 a1)
{
  _QWORD *UserSessionState; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserSessionState + 2468;
  UserSessionState[2468] = 0LL;
  UserSessionState[2470] = 0LL;
  UserSessionState[2469] = 0LL;
  v5 = *(_QWORD **)(W32GetUserSessionState(v4) + 19888);
  v3[25] = a1;
  *((_DWORD *)v3 + 52) = 32;
  v7 = *(_QWORD *)(W32GetUserSessionState(v6) + 19928);
  *(_QWORD *)(v7 + 8) = 0LL;
  v8 = *(_QWORD *)(W32GetUserSessionState(v7) + 19928);
  *(_DWORD *)(v8 + 864) = 0;
  result = HMGrowHandleTable(v8);
  if ( (_DWORD)result )
  {
    *v5 = 0LL;
    result = 1LL;
    *(_WORD *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 24) = 0;
    v3[1] = 2LL;
  }
  else
  {
    v3[25] = 0LL;
  }
  return result;
}
