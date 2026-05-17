/*
 * XREFs of ZwContinueEx @ 0x180163120
 * Callers:
 *     RtlContinueLongJump @ 0x1800E9FF0 (RtlContinueLongJump.c)
 *     KiUserApcDispatcher @ 0x180165B80 (KiUserApcDispatcher.c)
 * Callees:
 *     <none>
 */

__int64 ZwContinueEx()
{
  __int64 result; // rax

  result = 165LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
