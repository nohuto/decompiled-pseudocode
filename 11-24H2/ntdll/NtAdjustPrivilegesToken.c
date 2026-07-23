/*
 * XREFs of NtAdjustPrivilegesToken @ 0x180160870
 * Callers:
 *     RtlAcquirePrivilege @ 0x1800E4740 (RtlAcquirePrivilege.c)
 *     TppCritSetThread @ 0x1800EA0B0 (TppCritSetThread.c)
 *     RtlAdjustPrivilege @ 0x1800EC980 (RtlAdjustPrivilege.c)
 *     RtlReleasePrivilege @ 0x1800F2570 (RtlReleasePrivilege.c)
 *     RtlRemovePrivileges @ 0x180109980 (RtlRemovePrivileges.c)
 *     RtlpSysVolTakeOwnership @ 0x180142820 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 65;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
