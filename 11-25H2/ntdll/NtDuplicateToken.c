/*
 * XREFs of NtDuplicateToken @ 0x180163A60
 * Callers:
 *     RtlRegisterWait @ 0x18003C400 (RtlRegisterWait.c)
 *     RtlpTpInitializeData @ 0x18003D1C0 (RtlpTpInitializeData.c)
 *     RtlCheckTokenMembershipEx @ 0x1800601A0 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180061400 (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x18008F880 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x1800EA710 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800F06E0 (TppCritSetThread.c)
 *     RtlpIsAppContainer @ 0x18011B2A8 (RtlpIsAppContainer.c)
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
