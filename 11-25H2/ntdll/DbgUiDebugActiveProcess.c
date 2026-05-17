/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1801344D0
 * Callers:
 *     <none>
 * Callees:
 *     DbgUiIssueRemoteBreakin @ 0x180134550 (DbgUiIssueRemoteBreakin.c)
 *     DbgUiStopDebugging @ 0x180134720 (DbgUiStopDebugging.c)
 *     NtDebugActiveProcess @ 0x180164CD0 (NtDebugActiveProcess.c)
 */

__int64 __fastcall DbgUiDebugActiveProcess(HANDLE ProcessHandle)
{
  int active; // ebx

  active = NtDebugActiveProcess(ProcessHandle, NtCurrentTeb()->DbgSsReserved[1]);
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(ProcessHandle);
    if ( active < 0 )
      DbgUiStopDebugging(ProcessHandle);
  }
  return (unsigned int)active;
}
