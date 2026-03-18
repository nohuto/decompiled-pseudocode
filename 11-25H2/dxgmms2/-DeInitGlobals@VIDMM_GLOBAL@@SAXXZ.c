/*
 * XREFs of ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x140092DDC
 * Callers:
 *     ?VidMmDeInitGlobals@@YAXXZ @ 0x140096768 (-VidMmDeInitGlobals@@YAXXZ.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z @ 0x14002869C (--_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     McGenEventUnregister_EtwUnregister @ 0x14004CD98 (McGenEventUnregister_EtwUnregister.c)
 *     ?DeInitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x140092EE8 (-DeInitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 *     TlgUnregisterAggregateProvider @ 0x1400A6BBC (TlgUnregisterAggregateProvider.c)
 */

void VIDMM_GLOBAL::DeInitGlobals(void)
{
  VIDMM_GLOBAL::DeInitPhysicalHeap();
  if ( byte_1400818DB )
    PcwUnregister(GpuPerformanceCounterSetProcessMemory);
  if ( byte_1400818DA )
    PcwUnregister(GpuPerformanceCounterSetAdapterMemory);
  if ( byte_1400818D9 )
    PcwUnregister(GpuPerformanceCounterSetLocalAdapterMemory);
  if ( byte_1400818D8 )
    PcwUnregister(GpuPerformanceCounterSetNonLocalAdapterMemory);
  operator delete(VIDMM_PROCESS::_pDxProcessPerAdapterCount);
  if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
    VIDMM_PROCESS_FENCE_STORAGE::`scalar deleting destructor'(VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage);
  VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage = 0LL;
  if ( Resource )
  {
    ExDeleteResourceLite(Resource);
    operator delete(Resource);
    Resource = 0LL;
  }
  if ( VIDMM_GLOBAL::_RotationHistory )
  {
    operator delete(VIDMM_GLOBAL::_RotationHistory);
    *(_OWORD *)&VIDMM_GLOBAL::_RotationHistory = 0LL;
  }
  TlgUnregisterAggregateProvider();
  McGenEventUnregister_EtwUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
}
