/*
 * XREFs of ZwFilterTokenEx @ 0x180164FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFilterTokenEx(
        HANDLE ExistingTokenHandle,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        ULONG DisableUserClaimsCount,
        PUNICODE_STRING UserClaimsToDisable,
        ULONG DisableDeviceClaimsCount,
        PUNICODE_STRING DeviceClaimsToDisable,
        PTOKEN_GROUPS DeviceGroupsToDisable,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION RestrictedUserAttributes,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION RestrictedDeviceAttributes,
        PTOKEN_GROUPS RestrictedDeviceGroups,
        PHANDLE NewTokenHandle)
{
  NTSTATUS result; // eax

  result = 238;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
