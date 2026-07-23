/*
 * XREFs of NtAlertThreadByThreadId @ 0x1409892D0
 * Callers:
 *     <none>
 * Callees:
 *     NtAlertThreadByThreadIdEx @ 0x1409892F0 (NtAlertThreadByThreadIdEx.c)
 */

NTSTATUS __cdecl NtAlertThreadByThreadId(HANDLE ThreadId)
{
  return NtAlertThreadByThreadIdEx(ThreadId, 0LL);
}
