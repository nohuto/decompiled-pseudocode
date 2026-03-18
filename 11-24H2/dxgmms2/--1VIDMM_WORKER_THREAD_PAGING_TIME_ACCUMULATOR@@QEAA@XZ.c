/*
 * XREFs of ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x1400F6C1C
 * Callers:
 *     VidMmFlushDeferredEvictions @ 0x1400E9AD4 (VidMmFlushDeferredEvictions.c)
 *     VidMmDemoteAllocationsToFitGlobalAlloc @ 0x1400E9CB0 (VidMmDemoteAllocationsToFitGlobalAlloc.c)
 *     VidMmSuspendDevices @ 0x1400EA5C0 (VidMmSuspendDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
        VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *this)
{
  if ( *((_BYTE *)this + 16) )
    **((_QWORD **)this + 1) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)this;
}
