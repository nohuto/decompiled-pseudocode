/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x180162EC0
 * Callers:
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     TppSetupNextWait @ 0x18006A8C0 (TppSetupNextWait.c)
 *     TppTimerQueueExpiration @ 0x18006B9F0 (TppTimerQueueExpiration.c)
 *     TppInitializeTimerSubQueue @ 0x18006D538 (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

__int64 ZwAssociateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 146LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
