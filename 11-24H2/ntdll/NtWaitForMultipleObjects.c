/*
 * XREFs of NtWaitForMultipleObjects @ 0x1801627E0
 * Callers:
 *     WerpWaitForCrashReporting @ 0x180002A54 (WerpWaitForCrashReporting.c)
 *     TpTrimPools @ 0x1800F57E0 (TpTrimPools.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x180113320 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForMultipleObjects()
{
  __int64 result; // rax

  result = 91LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
