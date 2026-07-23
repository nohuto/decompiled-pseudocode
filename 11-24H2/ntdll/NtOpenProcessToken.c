/*
 * XREFs of NtOpenProcessToken @ 0x1801626A0
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x1800BE320 (RtlpValidOwnerSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800BEAF0 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800C0800 (RtlpGetDefaultsSubjectContext.c)
 *     WerEscalationLazyInit @ 0x1800DE2E0 (WerEscalationLazyInit.c)
 *     RtlAdjustPrivilege @ 0x1800EC980 (RtlAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 307;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
