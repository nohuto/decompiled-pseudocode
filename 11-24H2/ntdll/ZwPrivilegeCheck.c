/*
 * XREFs of ZwPrivilegeCheck @ 0x1801644C0
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x1800C6760 (RtlpValidOwnerSubjectContext.c)
 *     RtlpValidLabelSubjectContext @ 0x1800C6DA4 (RtlpValidLabelSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x180133A40 (RtlNewSecurityGrantedAccess.c)
 * Callees:
 *     <none>
 */

__int64 ZwPrivilegeCheck()
{
  __int64 result; // rax

  result = 322LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
