/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1801344D0
 * Callers:
 *     <none>
 * Callees:
 *     DbgUiIssueRemoteBreakin @ 0x180134550 (DbgUiIssueRemoteBreakin.c)
 *     DbgUiStopDebugging @ 0x180134720 (DbgUiStopDebugging.c)
 *     NtDebugActiveProcess @ 0x180164CD0 (NtDebugActiveProcess.c)
 */

NTSTATUS __cdecl DbgUiDebugActiveProcess(HANDLE Process)
{
  int active; // ebx

  active = NtDebugActiveProcess(Process, NtCurrentTeb()->DbgSsReserved[1]);
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(Process);
    if ( active < 0 )
      DbgUiStopDebugging(Process);
  }
  return active;
}
