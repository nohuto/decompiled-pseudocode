/*
 * XREFs of ZwUnlockVirtualMemory @ 0x180165840
 * Callers:
 *     RtlUnlockMemoryZone @ 0x1800018E0 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x180001AA0 (RtlLockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x180001D20 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x1800FA1B0 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x18010DFE0 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x18010E090 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

__int64 ZwUnlockVirtualMemory()
{
  __int64 result; // rax

  result = 478LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
