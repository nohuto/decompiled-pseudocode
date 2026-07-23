/*
 * XREFs of DbgUiDebugActiveProcess @ 0x180130C20
 * Callers:
 *     <none>
 * Callees:
 *     DbgUiIssueRemoteBreakin @ 0x180130CA0 (DbgUiIssueRemoteBreakin.c)
 *     DbgUiStopDebugging @ 0x180130E70 (DbgUiStopDebugging.c)
 *     NtDebugActiveProcess @ 0x180161B00 (NtDebugActiveProcess.c)
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
