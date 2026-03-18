/*
 * XREFs of LockProcessByClientId @ 0x1401202C8
 * Callers:
 *     ProcessInfoFromPID @ 0x140120264 (ProcessInfoFromPID.c)
 *     Win32ProcessFromPID @ 0x14019DCC4 (Win32ProcessFromPID.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall LockProcessByClientId(void *a1, PEPROCESS *a2)
{
  NTSTATUS v3; // esi
  int ProcessSessionId; // ebx

  *a2 = 0LL;
  v3 = PsLookupProcessByProcessId(a1, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  ProcessSessionId = PsGetProcessSessionId(*a2);
  if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId() )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  *a2 = 0LL;
  return 3221225473LL;
}
