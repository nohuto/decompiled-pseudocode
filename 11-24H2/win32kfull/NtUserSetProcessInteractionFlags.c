/*
 * XREFs of NtUserSetProcessInteractionFlags @ 0x14029E200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserSetProcessInteractionFlags(char a1, char a2, char a3)
{
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx

  EnterCrit(0LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  *(_BYTE *)(CurrentProcessWin32Process + 1025) = a1;
  *(_BYTE *)(CurrentProcessWin32Process + 1024) = a2;
  *(_BYTE *)(CurrentProcessWin32Process + 1026) = a3;
  UserSessionSwitchLeaveCrit(v8);
  return 1LL;
}
