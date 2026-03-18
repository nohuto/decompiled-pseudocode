/*
 * XREFs of _UnregisterUserApiHook @ 0x1C003AA40
 * Callers:
 *     NtUserUnregisterUserApiHook @ 0x1C01DEA70 (NtUserUnregisterUserApiHook.c)
 * Callees:
 *     RemoveHmodDependency @ 0x1C003D358 (RemoveHmodDependency.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterUserApiHook(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( CurrentProcessWin32Process == gppiUserApiHook )
  {
    gppiUserApiHook = 0LL;
    if ( gihmodUserApiHook >= 0 )
    {
      ((void (*)(void))RemoveHmodDependency)();
      gihmodUserApiHook = -1;
      RemoveHmodDependency((unsigned int)gihmodUserApiHookWOW);
      gihmodUserApiHookWOW = -1;
    }
    _InterlockedAnd(gpsi, 0xFFFFFFEF);
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
}
