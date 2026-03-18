/*
 * XREFs of NtUserRemoteRedrawRectangle @ 0x14029BB30
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawRectangle @ 0x1402AD718 (RemoteRedrawRectangle.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRemoteRedrawRectangle(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF

  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v9 = *(_QWORD *)(W32GetUserGdiSessionState(v8) + 40);
  if ( PsGetCurrentProcess(v10) == v9 )
  {
    *(_QWORD *)&v14 = __PAIR64__(a2, a1);
    *((_QWORD *)&v14 + 1) = __PAIR64__(a4, a3);
    RemoteRedrawRectangle(&v14);
    v12 = 0;
  }
  else
  {
    v12 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
