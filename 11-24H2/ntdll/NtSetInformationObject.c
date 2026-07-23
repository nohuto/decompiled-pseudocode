/*
 * XREFs of NtSetInformationObject @ 0x180160BC0
 * Callers:
 *     TppCritSetThread @ 0x1800EA0B0 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x1800F2C18 (TppCritResetThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  NTSTATUS result; // eax

  result = 92;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
