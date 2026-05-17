/*
 * XREFs of NtDuplicateToken @ 0x1801624D0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180039A70 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18003BE90 (RtlCheckTokenCapability.c)
 *     RtlRegisterWait @ 0x18006DF00 (RtlRegisterWait.c)
 *     RtlpTpInitializeData @ 0x18006ECC0 (RtlpTpInitializeData.c)
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 *     RtlImpersonateSelfEx @ 0x1800E93A0 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800EEED0 (TppCritSetThread.c)
 *     RtlpIsAppContainer @ 0x180118224 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

__int64 NtDuplicateToken()
{
  __int64 result; // rax

  result = 66LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
