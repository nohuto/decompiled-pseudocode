/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x180161A80
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x180089E18 (TppInitializeTimerSubQueue.c)
 *     TpAllocWait @ 0x18008B0C0 (TpAllocWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 210;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
