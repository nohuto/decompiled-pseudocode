/*
 * XREFs of SetConnectCompletedState @ 0x14014C390
 * Callers:
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x140041C90 (ReferenceDwmApiPort.c)
 *     IsCurrentSessionInServerSilo @ 0x14014C424 (IsCurrentSessionInServerSilo.c)
 *     PowerConnectionEvent @ 0x14014C44C (PowerConnectionEvent.c)
 *     ??4?$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z @ 0x14019E564 (--4-$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall SetConnectCompletedState(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  SGRDPgbConnectCompleted<int>::operator=(a1, &v9);
  result = (__int64 (*)(void))IsCurrentSessionInServerSilo();
  if ( !(_DWORD)result )
  {
    UserSessionState = W32GetUserSessionState(v2);
    PowerConnectionEvent(*(unsigned int *)(UserSessionState + 69012));
    result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 4184LL);
    if ( result )
    {
      result = (__int64 (*)(void))result();
      if ( (int)result >= 0 )
      {
        v6 = ReferenceDwmApiPort();
        result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v7) + 48) + 4192LL);
        if ( result )
          return (__int64 (*)(void))((__int64 (__fastcall *)(__int64))result)(v6);
      }
    }
  }
  return result;
}
