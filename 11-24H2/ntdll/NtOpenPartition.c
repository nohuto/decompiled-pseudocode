/*
 * XREFs of NtOpenPartition @ 0x180162660
 * Callers:
 *     LdrpInitializeProcessHeap @ 0x18002385C (LdrpInitializeProcessHeap.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 305;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
