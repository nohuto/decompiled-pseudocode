/*
 * XREFs of NtOpenProcessToken @ 0x180165870
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x180060DC0 (RtlpGetDefaultsSubjectContext.c)
 *     WerEscalationLazyInit @ 0x1800DF9C0 (WerEscalationLazyInit.c)
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800E8934 (RtlpValidOwnerSubjectContext.c)
 *     RtlAdjustPrivilege @ 0x1800F3870 (RtlAdjustPrivilege.c)
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
