/*
 * XREFs of NtSetEvent @ 0x140973E50
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140C3D2A8 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtSetEventEx @ 0x140973E70 (NtSetEventEx.c)
 */

NTSTATUS __cdecl NtSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  return NtSetEventEx(EventHandle);
}
