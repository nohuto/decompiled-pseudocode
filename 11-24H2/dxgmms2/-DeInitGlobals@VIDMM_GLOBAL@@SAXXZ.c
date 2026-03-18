/*
 * XREFs of ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x140092EEC
 * Callers:
 *     ?VidMmDeInitGlobals@@YAXXZ @ 0x140096898 (-VidMmDeInitGlobals@@YAXXZ.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z @ 0x14001D23C (--_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     McGenEventUnregister_EtwUnregister @ 0x14004C654 (McGenEventUnregister_EtwUnregister.c)
 *     ?DeInitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x140093014 (-DeInitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 *     TlgUnregisterAggregateProvider @ 0x1400A843C (TlgUnregisterAggregateProvider.c)
 */

void VIDMM_GLOBAL::DeInitGlobals(void)
{
  VIDMM_GLOBAL::DeInitPhysicalHeap();
  if ( byte_14008195B )
    PcwUnregister(GpuPerformanceCounterSetProcessMemory);
  if ( byte_14008195A )
    PcwUnregister(GpuPerformanceCounterSetAdapterMemory);
  if ( byte_140081959 )
    PcwUnregister(GpuPerformanceCounterSetLocalAdapterMemory);
  if ( byte_140081958 )
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
  if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
    ExDeleteLookasideListEx(&g_VaRangeLookasideList);
}
