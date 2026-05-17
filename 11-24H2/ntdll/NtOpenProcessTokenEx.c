/*
 * XREFs of NtOpenProcessTokenEx @ 0x180162290
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180039A70 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18003BE90 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x1800E9050 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800E93A0 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800EEED0 (TppCritSetThread.c)
 *     AVrfpAppendCurrentUserSid @ 0x18011040C (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x180118224 (RtlpIsAppContainer.c)
 *     RtlpSysVolTakeOwnership @ 0x180144470 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessTokenEx()
{
  __int64 result; // rax

  result = 48LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
