/*
 * XREFs of ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400AF840
 * Callers:
 *     ?TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x140096274 (-TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_D.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1400966D0 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEAU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400ABE20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400AE828 (-FillAllocationInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_L.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400AEA70 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@G_K@Z @ 0x1400AEFCC (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@G_K@Z.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1400AF41C (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400B0558 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1400B07E8 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEG.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B0ADC (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5F04 (-MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_L.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1400E8D80 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x14010F48C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x140110C24 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 * Callees:
 *     LogPagingOperation @ 0x1400AFD10 (LogPagingOperation.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        int a6,
        unsigned __int64 *a7,
        void *a8)
{
  __int64 *v8; // r12
  __int64 v9; // r15
  __int64 v11; // rbp
  int v12; // edi
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  struct _DXGKARG_BUILDPAGINGBUFFER *v21; // rax
  _OWORD *v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // xmm0
  unsigned __int64 v26; // r9
  char v27; // al
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // rcx

  v11 = a2;
  v12 = 0;
  *a7 = -1LL;
  if ( a3 && (**((_DWORD **)a3 + 49) & 0x10000000) != 0 )
    goto LABEL_6;
  v15 = a2;
  v12 = LODWORD(a4->pDmaBuffer) - *((_DWORD *)this + 2 * a2 + 670);
  v16 = LODWORD(a4->pDmaBufferPrivateData) - *((_DWORD *)this + 2 * a2 + 798);
  if ( LODWORD(a4->pDmaBuffer) != *((_DWORD *)this + 2 * v11 + 670) || v16 )
  {
    if ( !*((_DWORD *)this + v11 + 1159) )
    {
      *((_DWORD *)this + v11 + 1159) = 1;
      ++*((_QWORD *)this + v11 + 612);
    }
    v26 = *((_QWORD *)this + v15 + 612);
    *a7 = v26;
    if ( !a3 )
      goto LABEL_22;
    if ( *((_QWORD *)a3 + 11) > v26 )
    {
      v28 = *((_DWORD *)a3 + 6) & 0x3F;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 31LL, a3, v28, v26);
      WdLogGlobalForLineNumber = 195;
    }
    else
    {
      *((_QWORD *)a3 + 11) = v26;
      if ( *((_DWORD *)this + 2) != 206 )
        goto LABEL_22;
      if ( *((_QWORD *)a3 + 10) <= v26 )
      {
        *((_QWORD *)a3 + 10) = v26;
LABEL_22:
        v27 = *((_BYTE *)this + 40938);
        if ( (v27 & 2) != 0 )
          *((_BYTE *)this + 40938) = v27 & 0xFD;
        goto LABEL_4;
      }
    }
    v29 = *((_DWORD *)a3 + 6) & 0x3F;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 31LL, a3, v29, v26);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_34;
  }
LABEL_4:
  *((_DWORD *)this + v11 + 414) += v12;
  if ( *((_DWORD *)this + v11 + 414) > *((_DWORD *)this + v11 + 29) )
  {
LABEL_34:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 18LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_35;
  }
  *((_DWORD *)this + v11 + 542) += v16;
  if ( *((_DWORD *)this + v11 + 542) > *((_DWORD *)this + v11 + 93) )
  {
LABEL_35:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 19LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_36;
  }
LABEL_6:
  v8 = (__int64 *)((char *)this + 24);
  v17 = *a7;
  v9 = a5;
  LogPagingOperation(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + v11 + 143),
    (_DWORD)a3,
    (_DWORD)a4,
    a5 == -1071775743,
    a6 != 0,
    (__int64)a8);
  v19 = *((_QWORD *)this + 976);
  if ( v19 )
  {
    v20 = 360LL * *((unsigned int *)this + 1954);
    if ( a3 )
    {
      *(_QWORD *)(v20 + v19 + 8) = a3;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1954) + *((_QWORD *)this + 976) + 16) = *((_QWORD *)a3 + 1);
    }
    else
    {
      *(_QWORD *)(v20 + v19 + 8) = 0LL;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1954) + *((_QWORD *)this + 976) + 16) = 0LL;
    }
    *(_DWORD *)(360LL * *((unsigned int *)this + 1954) + *((_QWORD *)this + 976)) = v11;
    v21 = a4;
    v22 = (_OWORD *)(360LL * *((unsigned int *)this + 1954) + *((_QWORD *)this + 976) + 24LL);
    v23 = 2LL;
    do
    {
      v22 += 8;
      v24 = *(_OWORD *)&v21->pDmaBuffer;
      v21 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v21 + 128);
      *(v22 - 8) = v24;
      *(v22 - 7) = *(_OWORD *)&v21[-1].Reserved.Reserved[42];
      *(v22 - 6) = *(_OWORD *)&v21[-1].Reserved.Reserved[46];
      *(v22 - 5) = *(_OWORD *)&v21[-1].Reserved.Reserved[50];
      *(v22 - 4) = *(_OWORD *)&v21[-1].Reserved.Reserved[54];
      *(v22 - 3) = *(_OWORD *)&v21[-1].Reserved.Reserved[58];
      *(v22 - 2) = *(_OWORD *)&v21[-1].Reserved.Reserved[62];
      *(v22 - 1) = *(_OWORD *)&v21[-1].DmaBufferGpuVirtualAddress;
      --v23;
    }
    while ( v23 );
    *v22 = *(_OWORD *)&v21->pDmaBuffer;
    v22[1] = *(_OWORD *)&v21->pDmaBufferPrivateData;
    v22[2] = *(_OWORD *)&v21->MultipassOffset;
    v22[3] = *(_OWORD *)&v21->SpecialLockTransfer.TransferOffset;
    *(_DWORD *)(360LL * *((unsigned int *)this + 1954) + *((_QWORD *)this + 976) + 344) = a5;
    v18 = 360LL * *((unsigned int *)this + 1954);
    *(_QWORD *)(v18 + *((_QWORD *)this + 976) + 352) = v17;
    if ( ++*((_DWORD *)this + 1954) >= *((_DWORD *)this + 1950) )
    {
      ++*((_DWORD *)this + 1955);
      v8 = (__int64 *)((char *)this + 24);
      *((_DWORD *)this + 1954) = 0;
    }
  }
  if ( a5 < 0 )
  {
    if ( a5 == -1071775743 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v18);
        WdLogGlobalForLineNumber = 18907;
      }
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v11, 1u, 0LL, 0LL, 1, 0);
      return v12 != 0;
    }
LABEL_36:
    v30 = *v8;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 11LL, a4, v9, v30);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400AFD01LL);
  }
  return v12 != 0;
}
