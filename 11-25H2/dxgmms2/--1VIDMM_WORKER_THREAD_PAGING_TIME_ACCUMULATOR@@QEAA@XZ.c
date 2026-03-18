/*
 * XREFs of ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x1400F8D84
 * Callers:
 *     VidMmFlushDeferredEvictions @ 0x1400DEEE0 (VidMmFlushDeferredEvictions.c)
 *     VidMmDemoteAllocationsToFitGlobalAlloc @ 0x1400DF0C0 (VidMmDemoteAllocationsToFitGlobalAlloc.c)
 *     VidMmSuspendDevices @ 0x1400DF9D0 (VidMmSuspendDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
        VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *this)
{
  if ( *((_BYTE *)this + 16) )
    **((_QWORD **)this + 1) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)this;
}
