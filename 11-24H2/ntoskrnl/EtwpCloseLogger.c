/*
 * XREFs of EtwpCloseLogger @ 0x140326790
 * Callers:
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     EtwTraceEvent @ 0x140325740 (EtwTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x14064D790 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x14064D8FC (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
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
