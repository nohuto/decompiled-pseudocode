/*
 * XREFs of _BlockInput @ 0x1401F8AF0
 * Callers:
 *     NtUserBlockInput @ 0x1401F8AA0 (NtUserBlockInput.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall BlockInput(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rdi
  const struct tagUIPI_INFO *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD v16[4]; // [rsp+20h] [rbp-28h] BYREF

  v16[1] = -1;
  v16[2] = 0;
  v2 = a1;
  v16[0] = 12288;
  v4 = PtiCurrent(a1, a2);
  if ( v2 )
  {
    v6 = *(_QWORD *)(W32GetUserGdiSessionState(v3) + 40);
    if ( PsGetCurrentProcess(v7) != v6
      && (*((_QWORD *)v4 + 62) != *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19200)
       || !RtlAreAllAccessesGranted(*((_DWORD *)v4 + 234), 0x20u)) )
    {
      SetLastNtError(-1073741790);
      return 0LL;
    }
  }
  if ( !UIPrivilegeIsolation::CheckAccess(
          (UIPrivilegeIsolation *)(*((_QWORD *)v4 + 58) + 872LL),
          (const struct tagUIPI_INFO *)v16,
          v5) )
  {
    SetLastNtError(-1073741790);
    EtwTraceUIPISystemError(*((_QWORD *)v4 + 58), 0LL, 2LL);
    return 0LL;
  }
  UserSessionState = W32GetUserSessionState(v11, v10);
  if ( v2 )
  {
    if ( !*(_QWORD *)(UserSessionState + 19000)
      && (_InterlockedCompareExchange((volatile signed __int32 *)v4 + 132, 0, 0) & 1) == 0 )
    {
      *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19000) = v4;
      return 1LL;
    }
    return 0LL;
  }
  if ( *(struct tagTHREADINFO **)(UserSessionState + 19000) != v4 )
    return 0LL;
  *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19000) = 0LL;
  return 1LL;
}
