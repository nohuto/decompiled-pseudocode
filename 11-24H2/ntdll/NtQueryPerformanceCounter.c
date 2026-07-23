/*
 * XREFs of NtQueryPerformanceCounter @ 0x180160670
 * Callers:
 *     RtlQueryPerformanceCounter @ 0x18001A8A0 (RtlQueryPerformanceCounter.c)
 *     RtlpHeapTrkInterceptor @ 0x18001CC90 (RtlpHeapTrkInterceptor.c)
 *     RtlGetSystemTimePrecise @ 0x18001DB80 (RtlGetSystemTimePrecise.c)
 *     LdrpGenSecurityCookie @ 0x1800357E0 (LdrpGenSecurityCookie.c)
 *     RtlpCallInterceptRoutine @ 0x180054AE0 (RtlpCallInterceptRoutine.c)
 *     RtlGetInterruptTimePrecise @ 0x1800D5780 (RtlGetInterruptTimePrecise.c)
 *     RtlHeapTrkInitialize @ 0x18010E7A0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter, PLARGE_INTEGER PerformanceFrequency)
{
  NTSTATUS result; // eax

  result = 49;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
