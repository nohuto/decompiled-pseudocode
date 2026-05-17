/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1801624B0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1800E9050 (RtlAcquirePrivilege.c)
 *     TppCritSetThread @ 0x1800EEED0 (TppCritSetThread.c)
 *     RtlAdjustPrivilege @ 0x1800F1D00 (RtlAdjustPrivilege.c)
 *     RtlReleasePrivilege @ 0x1800F7A00 (RtlReleasePrivilege.c)
 *     RtlRemovePrivileges @ 0x18010EA30 (RtlRemovePrivileges.c)
 *     RtlpSysVolTakeOwnership @ 0x180144470 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 NtAdjustPrivilegesToken()
{
  __int64 result; // rax

  result = 65LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
