/*
 * XREFs of NtQueryEvent @ 0x180160B10
 * Callers:
 *     PsspDumpObject_Event @ 0x180105560 (PsspDumpObject_Event.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryEvent(
        HANDLE EventHandle,
        EVENT_INFORMATION_CLASS EventInformationClass,
        PVOID EventInformation,
        ULONG EventInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 86;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
