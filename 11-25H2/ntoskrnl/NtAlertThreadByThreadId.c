/*
 * XREFs of NtAlertThreadByThreadId @ 0x1409A4E10
 * Callers:
 *     <none>
 * Callees:
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 */

NTSTATUS __cdecl NtAlertThreadByThreadId(HANDLE ThreadId)
{
  return NtAlertThreadByThreadIdEx(ThreadId, 0LL);
}
