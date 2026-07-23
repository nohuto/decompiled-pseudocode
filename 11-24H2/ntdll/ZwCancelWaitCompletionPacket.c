/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x180161320
 * Callers:
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     TppWaitTimerExpiration @ 0x180086C50 (TppWaitTimerExpiration.c)
 *     TppCancelWait @ 0x1800876C0 (TppCancelWait.c)
 *     TpReleaseWait @ 0x18008ADA0 (TpReleaseWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax

  result = 151;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
