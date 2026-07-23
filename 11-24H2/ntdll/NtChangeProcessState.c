/*
 * XREFs of NtChangeProcessState @ 0x180161340
 * Callers:
 *     RtlWow64ChangeProcessState @ 0x1801303B0 (RtlWow64ChangeProcessState.c)
 *     RtlpWow64SuspendProcess @ 0x180130618 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtChangeProcessState(
        HANDLE ProcessStateChangeHandle,
        HANDLE ProcessHandle,
        PROCESS_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  NTSTATUS result; // eax

  result = 152;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
