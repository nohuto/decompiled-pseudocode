/*
 * XREFs of NtDuplicateToken @ 0x180160890
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180019CF0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18001C110 (RtlCheckTokenCapability.c)
 *     RtlRegisterWait @ 0x18008A7E0 (RtlRegisterWait.c)
 *     RtlpTpInitializeData @ 0x18008B5A0 (RtlpTpInitializeData.c)
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 *     RtlImpersonateSelfEx @ 0x1800E4A90 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800EA0B0 (TppCritSetThread.c)
 *     RtlpIsAppContainer @ 0x180113198 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE Type,
        PHANDLE NewTokenHandle)
{
  NTSTATUS result; // eax

  result = 66;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
