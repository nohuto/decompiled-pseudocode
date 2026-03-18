/*
 * XREFs of KeAbIsValidUserModeLockAddress @ 0x140430DD0
 * Callers:
 *     NtSetEventEx @ 0x140995350 (NtSetEventEx.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeAbIsValidUserModeLockAddress(__int64 a1)
{
  return a1 && (a1 & 0x7FFFFFFFFFFFFFFCLL) == a1;
}
