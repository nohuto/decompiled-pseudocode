/*
 * XREFs of NtOpenProcessTokenEx @ 0x180163820
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1800601A0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18008F880 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x1800EA3C0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800EA710 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800F06E0 (TppCritSetThread.c)
 *     AVrfpAppendCurrentUserSid @ 0x1801131DC (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x18011B2A8 (RtlpIsAppContainer.c)
 *     RtlpSysVolTakeOwnership @ 0x1801459E0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 48;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
