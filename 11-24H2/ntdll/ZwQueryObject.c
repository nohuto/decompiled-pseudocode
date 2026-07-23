/*
 * XREFs of ZwQueryObject @ 0x180160250
 * Callers:
 *     PsspWalkHandleTable @ 0x1800BBE1C (PsspWalkHandleTable.c)
 *     RtlpWow64SuspendThread @ 0x1800F3B20 (RtlpWow64SuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x180130618 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 16;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
