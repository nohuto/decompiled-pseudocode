/*
 * XREFs of NtSetEvent @ 0x14098A760
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140C3B150 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtSetEventEx @ 0x14098A780 (NtSetEventEx.c)
 */

__int64 __fastcall NtSetEvent(void *a1)
{
  return NtSetEventEx(a1);
}
