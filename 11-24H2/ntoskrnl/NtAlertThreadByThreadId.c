/*
 * XREFs of NtAlertThreadByThreadId @ 0x1409A5CB0
 * Callers:
 *     <none>
 * Callees:
 *     NtAlertThreadByThreadIdEx @ 0x1409A5CD0 (NtAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall NtAlertThreadByThreadId(__int64 a1)
{
  return NtAlertThreadByThreadIdEx(a1, 0LL);
}
