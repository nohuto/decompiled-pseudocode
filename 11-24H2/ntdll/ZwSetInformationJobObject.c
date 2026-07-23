/*
 * XREFs of ZwSetInformationJobObject @ 0x180163560
 * Callers:
 *     TppJobpRundownJob @ 0x180085608 (TppJobpRundownJob.c)
 *     TpAllocJobNotification @ 0x1800B6E30 (TpAllocJobNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  NTSTATUS result; // eax

  result = 425;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
