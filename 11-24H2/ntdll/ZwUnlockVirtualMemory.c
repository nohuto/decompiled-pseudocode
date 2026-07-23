/*
 * XREFs of ZwUnlockVirtualMemory @ 0x180163C00
 * Callers:
 *     RtlLockMemoryZone @ 0x1800AA7B0 (RtlLockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x1800AAA30 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x1800F4F10 (RtlLockCurrentThread.c)
 *     RtlUnlockMemoryZone @ 0x180105B00 (RtlUnlockMemoryZone.c)
 *     RtlUnlockCurrentThread @ 0x180108EC0 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x180108F70 (RtlpUnlockStack.c)
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
