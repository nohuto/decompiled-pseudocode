/*
 * XREFs of NtOpenSection @ 0x180163900
 * Callers:
 *     CsrpConnectToServer @ 0x180035EC0 (CsrpConnectToServer.c)
 *     LdrpFindKnownDll @ 0x18006D200 (LdrpFindKnownDll.c)
 *     LdrGetKnownDllSectionHandle @ 0x18010CBD0 (LdrGetKnownDllSectionHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 55;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
