/*
 * XREFs of NtLockVirtualMemory @ 0x180163F60
 * Callers:
 *     RtlLockMemoryZone @ 0x180001AA0 (RtlLockMemoryZone.c)
 *     RtlExtendMemoryZone @ 0x1800F7EE0 (RtlExtendMemoryZone.c)
 *     RtlLockCurrentThread @ 0x1800FA1B0 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x1800FA2C0 (RtlpLockStack.c)
 *     RtlpModuleEnumeratorCallback @ 0x1800FB100 (RtlpModuleEnumeratorCallback.c)
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
