/*
 * XREFs of EtwpCloseLogger @ 0x140347D90
 * Callers:
 *     NtTraceEvent @ 0x140325D10 (NtTraceEvent.c)
 *     EtwTraceEvent @ 0x140346CD0 (EtwTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x14064F090 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x14064F1FC (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140A15E44 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

__int64 __fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 704) + 8LL * a1), 1u);
    return KeLeaveCriticalRegionThread();
  }
  return result;
}
