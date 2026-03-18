/*
 * XREFs of IsPointerInputTypeRedirected @ 0x14028C7C0
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerInputRedirected @ 0x14019FCC4 (IsPointerInputRedirected.c)
 */

__int64 __fastcall IsPointerInputTypeRedirected(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax

  v2 = a1;
  v3 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19200) + 8LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  return IsPointerInputRedirected(CurrentProcessWin32Process, v3, v2, 0LL);
}
