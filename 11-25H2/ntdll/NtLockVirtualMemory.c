/*
 * XREFs of NtLockVirtualMemory @ 0x1801654F0
 * Callers:
 *     RtlLockMemoryZone @ 0x1800F0040 (RtlLockMemoryZone.c)
 *     RtlExtendMemoryZone @ 0x1800F9A70 (RtlExtendMemoryZone.c)
 *     RtlLockCurrentThread @ 0x1800FC0B0 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x1800FC1C0 (RtlpLockStack.c)
 *     RtlpModuleEnumeratorCallback @ 0x1800FD330 (RtlpModuleEnumeratorCallback.c)
 * Callees:
 *     <none>
 */

__int64 NtLockVirtualMemory()
{
  __int64 result; // rax

  result = 279LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
