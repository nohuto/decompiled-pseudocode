/*
 * XREFs of SetConsoleSwitchInProgress @ 0x140141A70
 * Callers:
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

int __fastcall SetConsoleSwitchInProgress(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  struct _KEVENT *v10; // rcx
  __int64 v11; // rdx

  v1 = a1;
  *(_DWORD *)(W32GetUserGdiSessionState(a1) + 36) = a1;
  v3 = *(_DWORD *)(W32GetUserGdiSessionState(v2) + 36);
  *(_DWORD *)(W32GetUserSessionState(v4) + 324) = v3;
  v6 = PtiCurrent(v5);
  if ( v6 )
  {
    v11 = 0LL;
    if ( v1 == 1 )
      v11 = 2LL;
    v7 = *((_QWORD *)v6 + 170) & 0xFFFFFFFFFFFFFFFDuLL;
    *((_QWORD *)v6 + 170) = v7 | v11;
  }
  UserSessionState = W32GetUserSessionState(v7);
  if ( *(_QWORD *)(UserSessionState + 68656) )
  {
    v10 = *(struct _KEVENT **)(W32GetUserSessionState(v9) + 68656);
    if ( v1 )
      LODWORD(UserSessionState) = KeResetEvent(v10);
    else
      LODWORD(UserSessionState) = KeSetEvent(v10, 1, 0);
  }
  return UserSessionState;
}
