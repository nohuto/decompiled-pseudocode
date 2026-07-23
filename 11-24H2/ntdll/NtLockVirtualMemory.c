/*
 * XREFs of NtLockVirtualMemory @ 0x180162320
 * Callers:
 *     RtlLockMemoryZone @ 0x1800AA7B0 (RtlLockMemoryZone.c)
 *     RtlExtendMemoryZone @ 0x1800F2A50 (RtlExtendMemoryZone.c)
 *     RtlLockCurrentThread @ 0x1800F4F10 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x1800F5020 (RtlpLockStack.c)
 *     RtlpModuleEnumeratorCallback @ 0x1800F6030 (RtlpModuleEnumeratorCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 279;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
