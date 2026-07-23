/*
 * XREFs of ZwPrivilegeCheck @ 0x180165A50
 * Callers:
 *     RtlpNewSecurityObject @ 0x180061400 (RtlpNewSecurityObject.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E831C (RtlpValidLabelSubjectContext.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800E8934 (RtlpValidOwnerSubjectContext.c)
 *     RtlNewSecurityGrantedAccess @ 0x180135520 (RtlNewSecurityGrantedAccess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  NTSTATUS result; // eax

  result = 322;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
