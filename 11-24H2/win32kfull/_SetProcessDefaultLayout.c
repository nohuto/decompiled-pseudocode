/*
 * XREFs of _SetProcessDefaultLayout @ 0x14026C008
 * Callers:
 *     NtUserSetProcessDefaultLayout @ 0x140214790 (NtUserSetProcessDefaultLayout.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall SetProcessDefaultLayout(__int64 a1)
{
  int v1; // ebx
  __int64 CurrentProcessWin32Process; // rax

  v1 = a1;
  if ( (a1 & 0xFFFFFFF8) != 0 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    *(_DWORD *)(CurrentProcessWin32Process + 824) = v1;
    return 1LL;
  }
}
