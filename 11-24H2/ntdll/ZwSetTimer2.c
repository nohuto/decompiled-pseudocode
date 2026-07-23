/*
 * XREFs of ZwSetTimer2 @ 0x180163840
 * Callers:
 *     TppTimerQueueExpiration @ 0x1800882D0 (TppTimerQueueExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x180088FE0 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetTimer2(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PLARGE_INTEGER Period,
        PT2_SET_PARAMETERS Parameters)
{
  NTSTATUS result; // eax

  result = 448;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
