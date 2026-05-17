/*
 * XREFs of NtWaitForMultipleObjects @ 0x180163D70
 * Callers:
 *     WerpWaitForCrashReporting @ 0x1800CFB70 (WerpWaitForCrashReporting.c)
 *     TpTrimPools @ 0x1800F7360 (TpTrimPools.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1801162B0 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlCreateProcessReflection @ 0x1801349F0 (RtlCreateProcessReflection.c)
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
