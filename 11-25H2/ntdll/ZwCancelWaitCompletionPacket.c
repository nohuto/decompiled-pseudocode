/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x1801644F0
 * Callers:
 *     TpReleaseWait @ 0x18003C9C0 (TpReleaseWait.c)
 *     TppCancelWait @ 0x18003E2E0 (TppCancelWait.c)
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 *     TppWaitTimerExpiration @ 0x1800D6A74 (TppWaitTimerExpiration.c)
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
