/*
 * XREFs of NtUserDisableProcessWindowsGhosting @ 0x1C009FBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserDisableProcessWindowsGhosting()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterCrit(0LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
  if ( CurrentProcessWin32Process )
  {
    v3 = -*(_QWORD *)CurrentProcessWin32Process;
    v2 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v2;
  }
  *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x8000000u;
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return 1LL;
}
