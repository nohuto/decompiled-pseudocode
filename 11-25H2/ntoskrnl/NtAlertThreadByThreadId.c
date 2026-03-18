/*
 * XREFs of NtAlertThreadByThreadId @ 0x1409A4E10
 * Callers:
 *     <none>
 * Callees:
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall NtAlertThreadByThreadId(__int64 a1)
{
  return NtAlertThreadByThreadIdEx(a1, 0LL);
}
