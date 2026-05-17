/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x180165150
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180040FB0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180042680 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 NtGetCompleteWnfStateSubscription()
{
  __int64 result; // rax

  result = 250LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
