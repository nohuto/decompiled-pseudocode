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
