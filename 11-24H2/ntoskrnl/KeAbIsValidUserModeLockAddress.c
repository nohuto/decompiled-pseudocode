/*
 * XREFs of KeAbIsValidUserModeLockAddress @ 0x140429550
 * Callers:
 *     NtSetEventEx @ 0x14098A780 (NtSetEventEx.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A5CD0 (NtAlertThreadByThreadIdEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeAbIsValidUserModeLockAddress(__int64 a1)
{
  return a1 && (a1 & 0x7FFFFFFFFFFFFFFCLL) == a1;
}
