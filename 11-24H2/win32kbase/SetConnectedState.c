/*
 * XREFs of SetConnectedState @ 0x14014C310
 * Callers:
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     PowerConnectionEvent @ 0x14014C44C (PowerConnectionEvent.c)
 *     ??4?$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z @ 0x14019E564 (--4-$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z.c)
 */

__int64 __fastcall SetConnectedState(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  *(_DWORD *)(W32GetUserSessionState(a1) + 69012) = a1;
  W32GetUserSessionState(v3);
  result = W32GetUserSessionState(v4);
  if ( a2 != *(_DWORD *)(result + 69016) )
  {
    SGRDPgbConnectCompleted<int>::operator=(v6, &v9);
    UserSessionState = W32GetUserSessionState(v7);
    return PowerConnectionEvent(*(unsigned int *)(UserSessionState + 69012));
  }
  return result;
}
