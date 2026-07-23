/*
 * XREFs of NtWaitForMultipleObjects @ 0x180160BA0
 * Callers:
 *     TpTrimPools @ 0x18005E2D0 (TpTrimPools.c)
 *     WerpWaitForCrashReporting @ 0x1800AC754 (WerpWaitForCrashReporting.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x18010E570 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlCreateProcessReflection @ 0x180131140 (RtlCreateProcessReflection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForMultipleObjects(
        ULONG Count,
        HANDLE Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 91;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
