/*
 * XREFs of NtUserRegisterServicesProcess @ 0x1C01D8FD0
 * Callers:
 *     <none>
 * Callees:
 *     IsPrivileged @ 0x1C0084A60 (IsPrivileged.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterServicesProcess(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( *(_DWORD *)(gpsi + 2280LL) || !(unsigned int)IsPrivileged(psTcb) )
  {
    UserSetLastError(5);
  }
  else
  {
    v2 = 1LL;
    v6 = gpsi;
    *(_DWORD *)(gpsi + 2280LL) = a1;
  }
  UserSessionSwitchLeaveCrit(v6, v3, v4, v5);
  return v2;
}
