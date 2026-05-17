/*
 * XREFs of ZwSetInformationJobObject @ 0x1801651A0
 * Callers:
 *     TppJobpRundownJob @ 0x180069A78 (TppJobpRundownJob.c)
 *     TpAllocJobNotification @ 0x1800BF070 (TpAllocJobNotification.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationJobObject()
{
  __int64 result; // rax

  result = 425LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
