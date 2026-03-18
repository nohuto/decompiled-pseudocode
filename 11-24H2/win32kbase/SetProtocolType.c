/*
 * XREFs of SetProtocolType @ 0x140144520
 * Callers:
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140013900 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x14006B090 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     RetrieveCurrentDisplayState @ 0x140156F58 (RetrieveCurrentDisplayState.c)
 *     ??4?$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z @ 0x14019E4F8 (--4-$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z.c)
 */

__int64 __fastcall SetProtocolType(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int16 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v1 = (unsigned __int16)a1;
  SGRDPgProtocolType<unsigned short>::operator=(a1, &v10);
  *(_DWORD *)(W32GetUserSessionState(v2) + 316) = v1;
  if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection() )
  {
    UserSessionState = W32GetUserSessionState(v3);
    v3 = 0LL;
    *(_QWORD *)(UserSessionState + 68952) = 0LL;
  }
  result = W32GetUserSessionState(v3);
  if ( !*(_WORD *)(result + 69008) )
  {
    RetrieveCurrentDisplayState();
    v7 = W32GetUserSessionState(v6);
    CInputGlobals::UpdateLastInputTime(
      *(struct W32_PUSH_LOCK **)(v7 + 3064),
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      9u);
    v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    result = W32GetUserSessionState(v9);
    *(_DWORD *)(result + 2792) = v8;
  }
  return result;
}
