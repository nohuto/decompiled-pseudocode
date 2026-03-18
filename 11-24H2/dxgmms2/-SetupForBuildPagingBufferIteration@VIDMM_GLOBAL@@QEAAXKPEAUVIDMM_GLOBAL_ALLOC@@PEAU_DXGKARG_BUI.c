/*
 * XREFs of ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400AF2C0
 * Callers:
 *     ?TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x140096274 (-TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_D.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1400966D0 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400AE828 (-FillAllocationInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_L.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400AEA70 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@G_K@Z @ 0x1400AEFCC (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@G_K@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400B0558 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1400B07E8 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEG.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B0ADC (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5F04 (-MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_L.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x14010F48C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x140110C24 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4)
{
  struct _DXGKARG_BUILDPAGINGBUFFER *v4; // r11
  __int64 v5; // r10
  __int64 v6; // r9
  _QWORD *v7; // rdx
  __int64 v8; // rdx
  _DWORD *v9; // r9
  void *v10; // rdx
  void *v11; // r8

  v4 = a4;
  if ( a3 )
    goto LABEL_7;
  while ( 1 )
  {
    v5 = a2;
    v6 = *((_QWORD *)this + a2 + 79);
    if ( (*(_DWORD *)(v6 + 28) & 4) != 0 )
      break;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 29LL, v6, a3, 0LL);
    WdLogGlobalForLineNumber = 195;
LABEL_7:
    if ( (**((_DWORD **)a3 + 49) & 0x10000000) != 0 )
    {
      a4->pDmaBuffer = 0LL;
      a4->pDmaBufferPrivateData = 0LL;
      a4->DmaSize = 0;
      a4->DmaBufferPrivateDataSize = 0;
      *((_QWORD *)this + a2 + 335) = 0LL;
      *((_QWORD *)this + a2 + 399) = 0LL;
      return;
    }
  }
  v7 = (_QWORD *)*((_QWORD *)this + a2 + 143);
  if ( *(_DWORD *)(v7[16] + 32LL) )
    v8 = *(_QWORD *)(v7[6] + 232LL);
  else
    v8 = v7[8];
  v9 = (_DWORD *)((char *)this + 4 * v5);
  v10 = (void *)((unsigned int)v9[414] + v8);
  *((_QWORD *)this + v5 + 335) = v10;
  v4->pDmaBuffer = v10;
  v11 = (void *)((unsigned int)v9[542] + *(_QWORD *)(*((_QWORD *)this + v5 + 143) + 120LL));
  *((_QWORD *)this + v5 + 399) = v11;
  v4->pDmaBufferPrivateData = v11;
  v4->DmaSize = v9[29] - v9[414];
  v4->DmaBufferPrivateDataSize = v9[93] - v9[542];
  v4->DmaBufferGpuVirtualAddress = *(_QWORD *)(*((_QWORD *)this + v5 + 143) + 88LL);
  v4->DmaBufferWriteOffset = v9[414];
}
