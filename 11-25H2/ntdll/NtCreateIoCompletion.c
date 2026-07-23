/*
 * XREFs of NtCreateIoCompletion @ 0x180164850
 * Callers:
 *     TpAllocPoolInternal @ 0x18003A970 (TpAllocPoolInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Count)
{
  NTSTATUS result; // eax

  result = 178;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
