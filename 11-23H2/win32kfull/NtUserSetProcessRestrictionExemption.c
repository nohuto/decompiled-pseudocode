/*
 * XREFs of NtUserSetProcessRestrictionExemption @ 0x1C01DBF30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetProcessRestrictionExemption(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 0LL);
  v3 = 0LL;
  if ( (unsigned __int8)ExQueryFastCacheDevLicense() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( CurrentProcessWin32Process )
    {
      v6 = -*(_QWORD *)CurrentProcessWin32Process;
      v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v5;
    }
    v3 = 1LL;
    *(_DWORD *)(CurrentProcessWin32Process + 824) ^= (*(_DWORD *)(CurrentProcessWin32Process + 824) ^ (a1 << 8)) & 0x100;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v3;
}
