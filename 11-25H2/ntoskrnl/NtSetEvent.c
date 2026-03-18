/*
 * XREFs of NtSetEvent @ 0x140995330
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140C29E70 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtSetEventEx @ 0x140995350 (NtSetEventEx.c)
 */

__int64 __fastcall NtSetEvent(void *a1)
{
  return NtSetEventEx(a1);
}
