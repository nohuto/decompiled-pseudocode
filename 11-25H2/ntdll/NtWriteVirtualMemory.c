/*
 * XREFs of NtWriteVirtualMemory @ 0x180163960
 * Callers:
 *     RtlpHeapPerformCrossProcessQuery @ 0x180098190 (RtlpHeapPerformCrossProcessQuery.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1800C8DE0 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18010EEFC (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlpProcessReflectionStartup @ 0x180134F90 (RtlpProcessReflectionStartup.c)
 *     RtlRemoteCall @ 0x180147F60 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteVirtualMemory()
{
  __int64 result; // rax

  result = 58LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
