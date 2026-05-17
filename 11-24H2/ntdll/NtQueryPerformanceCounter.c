/*
 * XREFs of NtQueryPerformanceCounter @ 0x1801622B0
 * Callers:
 *     LdrpGenSecurityCookie @ 0x180008DE0 (LdrpGenSecurityCookie.c)
 *     RtlpCallInterceptRoutine @ 0x1800280E0 (RtlpCallInterceptRoutine.c)
 *     RtlQueryPerformanceCounter @ 0x18003A620 (RtlQueryPerformanceCounter.c)
 *     RtlpHeapTrkInterceptor @ 0x18003CA10 (RtlpHeapTrkInterceptor.c)
 *     RtlGetSystemTimePrecise @ 0x18003D900 (RtlGetSystemTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x1800DB220 (RtlGetInterruptTimePrecise.c)
 *     RtlHeapTrkInitialize @ 0x1801134A0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryPerformanceCounter()
{
  __int64 result; // rax

  result = 49LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
