/*
 * XREFs of NtOpenProcess @ 0x180162150
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180045670 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpQueryCriticalSectionOwner @ 0x180045F94 (RtlpQueryCriticalSectionOwner.c)
 *     RtlpWow64SuspendThread @ 0x1800F8F50 (RtlpWow64SuspendThread.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcess()
{
  __int64 result; // rax

  result = 38LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
