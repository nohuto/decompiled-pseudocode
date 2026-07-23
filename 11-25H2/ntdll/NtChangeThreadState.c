/*
 * XREFs of NtChangeThreadState @ 0x180164530
 * Callers:
 *     RtlpWow64SuspendThread @ 0x1800FAB70 (RtlpWow64SuspendThread.c)
 *     RtlWow64ChangeThreadState @ 0x180115610 (RtlWow64ChangeThreadState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtChangeThreadState(
        HANDLE ThreadStateChangeHandle,
        HANDLE ThreadHandle,
        THREAD_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  NTSTATUS result; // eax

  result = 153;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
