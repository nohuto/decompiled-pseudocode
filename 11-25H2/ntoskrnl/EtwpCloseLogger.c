/*
 * XREFs of EtwpCloseLogger @ 0x14030BE80
 * Callers:
 *     NtTraceEvent @ 0x14030A680 (NtTraceEvent.c)
 *     EtwTraceEvent @ 0x14030FA90 (EtwTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x1406430F0 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x14064325C (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140A11A68 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

__int64 __fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8LL * a1), 1u);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
