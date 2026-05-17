/*
 * XREFs of NtWriteVirtualMemory @ 0x1801623D0
 * Callers:
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800444B0 (RtlpHeapPerformCrossProcessQuery.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18011A228 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011A7DC (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlpProcessReflectionStartup @ 0x1801334B0 (RtlpProcessReflectionStartup.c)
 *     RtlRemoteCall @ 0x1801469B0 (RtlRemoteCall.c)
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
