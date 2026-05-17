/*
 * XREFs of ZwSetTimer2 @ 0x180165480
 * Callers:
 *     TppTimerQueueExpiration @ 0x18006B9F0 (TppTimerQueueExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x18006C700 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetTimer2()
{
  __int64 result; // rax

  result = 448LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
