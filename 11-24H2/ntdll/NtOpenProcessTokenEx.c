/*
 * XREFs of NtOpenProcessTokenEx @ 0x180160650
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180019CF0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18001C110 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x1800E4740 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800E4A90 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800EA0B0 (TppCritSetThread.c)
 *     AVrfpAppendCurrentUserSid @ 0x18010B6CC (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x180113198 (RtlpIsAppContainer.c)
 *     RtlpSysVolTakeOwnership @ 0x180142820 (RtlpSysVolTakeOwnership.c)
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
