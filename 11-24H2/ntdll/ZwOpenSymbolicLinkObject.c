/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x180162740
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 312;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
