/*
 * XREFs of NtTerminateProcess_0 @ 0x14000EF58
 * Callers:
 *     __report_gsfailure @ 0x14000ED20 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtTerminateProcess_0(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  return NtTerminateProcess(ProcessHandle, ExitStatus);
}
