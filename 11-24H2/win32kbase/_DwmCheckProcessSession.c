/*
 * XREFs of _DwmCheckProcessSession @ 0x14013A870
 * Callers:
 *     NtUserCheckProcessSession @ 0x14016B6A0 (NtUserCheckProcessSession.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall DwmCheckProcessSession(int a1)
{
  NTSTATUS v1; // edi
  int ProcessSessionId; // ebx
  PEPROCESS Process; // [rsp+38h] [rbp+10h] BYREF

  Process = 0LL;
  v1 = PsLookupProcessByProcessId((HANDLE)a1, &Process);
  if ( v1 >= 0 )
  {
    ProcessSessionId = PsGetProcessSessionId(Process);
    if ( ProcessSessionId != (unsigned int)W32GetCurrentWin32kSessionId() )
      v1 = -1073741823;
    ObfDereferenceObject(Process);
  }
  return (unsigned int)v1;
}
