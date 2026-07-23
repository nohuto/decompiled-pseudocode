/*
 * XREFs of NtSetEvent @ 0x140995330
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140C29E70 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtSetEventEx @ 0x140995350 (NtSetEventEx.c)
 */

NTSTATUS __cdecl NtSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  return NtSetEventEx(EventHandle);
}
