/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x180162F60
 * Callers:
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     TppWaitTimerExpiration @ 0x18006A560 (TppWaitTimerExpiration.c)
 *     TppCancelWait @ 0x18006ADE0 (TppCancelWait.c)
 *     TpReleaseWait @ 0x18006E4C0 (TpReleaseWait.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelWaitCompletionPacket()
{
  __int64 result; // rax

  result = 151LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
