/*
 * XREFs of NtOpenProcessToken @ 0x1801642E0
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x1800C6760 (RtlpValidOwnerSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800C6F30 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800C8C40 (RtlpGetDefaultsSubjectContext.c)
 *     WerEscalationLazyInit @ 0x1800E2D10 (WerEscalationLazyInit.c)
 *     RtlAdjustPrivilege @ 0x1800F1D00 (RtlAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessToken()
{
  __int64 result; // rax

  result = 307LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
