/*
 * XREFs of ZwUnlockVirtualMemory @ 0x180166DD0
 * Callers:
 *     RtlLockMemoryZone @ 0x1800F0040 (RtlLockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x1800F02C0 (RtlUnlockModuleSection.c)
 *     RtlUnlockMemoryZone @ 0x1800F05F0 (RtlUnlockMemoryZone.c)
 *     RtlLockCurrentThread @ 0x1800FC0B0 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180110AB0 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x180110B60 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 478;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
