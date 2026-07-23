/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x180164450
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x18003BC48 (TppInitializeTimerSubQueue.c)
 *     TppTimerQueueExpiration @ 0x18003F290 (TppTimerQueueExpiration.c)
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 *     TppSetupNextWait @ 0x1800D70F0 (TppSetupNextWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  NTSTATUS result; // eax

  result = 146;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
