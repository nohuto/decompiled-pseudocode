/*
 * XREFs of NtQueryPerformanceCounter @ 0x180163840
 * Callers:
 *     LdrpGenSecurityCookie @ 0x180022600 (LdrpGenSecurityCookie.c)
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 *     RtlQueryPerformanceCounter @ 0x18008E010 (RtlQueryPerformanceCounter.c)
 *     RtlpHeapTrkInterceptor @ 0x180090400 (RtlpHeapTrkInterceptor.c)
 *     RtlGetSystemTimePrecise @ 0x1800912F0 (RtlGetSystemTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x1800D85B0 (RtlGetInterruptTimePrecise.c)
 *     RtlHeapTrkInitialize @ 0x180116430 (RtlHeapTrkInitialize.c)
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
