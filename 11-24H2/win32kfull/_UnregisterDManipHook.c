/*
 * XREFs of _UnregisterDManipHook @ 0x140284F10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x140083EF8 (RemoveHmodDependency.c)
 */

__int64 __fastcall UnregisterDManipHook(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v7; // rcx

  v2 = W32GetUserSessionState(a1, a2) + 64224;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  if ( CurrentProcessWin32Process )
  {
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v5;
  }
  if ( CurrentProcessWin32Process == *(_QWORD *)v2 )
  {
    *(_QWORD *)v2 = 0LL;
    v7 = *(unsigned int *)(v2 + 1080);
    if ( (int)v7 >= 0 )
    {
      RemoveHmodDependency(v7);
      *(_DWORD *)(v2 + 1080) = -1;
    }
    _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v7, v5) + 19928), 0xFFFFFFEF);
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
