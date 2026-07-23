/*
 * XREFs of KeAbIsValidUserModeLockAddress @ 0x14041D6A0
 * Callers:
 *     NtSetEventEx @ 0x140973E70 (NtSetEventEx.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409892F0 (NtAlertThreadByThreadIdEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeAbIsValidUserModeLockAddress(__int64 a1)
{
  return a1 && (a1 & 0x7FFFFFFFFFFFFFFCLL) == a1;
}
