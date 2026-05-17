/*
 * XREFs of NtAdjustPrivilegesToken @ 0x180163A40
 * Callers:
 *     RtlAcquirePrivilege @ 0x1800EA3C0 (RtlAcquirePrivilege.c)
 *     TppCritSetThread @ 0x1800F06E0 (TppCritSetThread.c)
 *     RtlAdjustPrivilege @ 0x1800F3870 (RtlAdjustPrivilege.c)
 *     RtlReleasePrivilege @ 0x1800F9660 (RtlReleasePrivilege.c)
 *     RtlRemovePrivileges @ 0x180111500 (RtlRemovePrivileges.c)
 *     RtlpSysVolTakeOwnership @ 0x1801459E0 (RtlpSysVolTakeOwnership.c)
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
