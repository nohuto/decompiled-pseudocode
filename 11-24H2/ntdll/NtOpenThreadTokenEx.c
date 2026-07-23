/*
 * XREFs of NtOpenThreadTokenEx @ 0x180160630
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180019CF0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18001C110 (RtlCheckTokenCapability.c)
 *     RtlpOpenThreadToken @ 0x1800E4BCC (RtlpOpenThreadToken.c)
 *     RtlpIsAppContainer @ 0x180113198 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 47;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
