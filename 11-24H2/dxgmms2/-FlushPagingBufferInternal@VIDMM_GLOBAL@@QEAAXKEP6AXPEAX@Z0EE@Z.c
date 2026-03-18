/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660
 * Callers:
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z @ 0x14009E16C (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUV.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400AEA70 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400AF840 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400B2F80 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400B3810 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z @ 0x1400B3DAC (-FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1400B3FB0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1400B4E34 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B5080 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400D7384 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5E04 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400E6660 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1400E8D80 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400EC39C (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400F6658 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14010EC38 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_S.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x14010F48C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140112AB8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140033150 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x140035150 (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x14003827C (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x1400383E8 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidMmAcquireDmaBuffer @ 0x1400B7930 (VidMmAcquireDmaBuffer.c)
 *     VidSchSubmitPagingCommand @ 0x1400E2E98 (VidSchSubmitPagingCommand.c)
 *     VidSchSignalPagingFences @ 0x1400ED550 (VidSchSignalPagingFences.c)
 *     ?CommitPendingTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400F046C (-CommitPendingTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400F25E8 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400FBFBC (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x140110C24 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140111560 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::FlushPagingBufferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int8 a3,
        void (*a4)(void *),
        void *a5,
        char a6,
        char a7)
{
  __int64 v8; // r12
  __int64 v9; // rcx
  unsigned __int8 v10; // bl
  void (*v11)(void *); // rdi
  unsigned __int64 v12; // r13
  __int64 v13; // r9
  _QWORD *v14; // rax
  char v15; // dl
  __int64 v16; // r8
  char v17; // cl
  __int64 v18; // rdi
  _QWORD **v19; // r15
  char v20; // r13
  _QWORD *v21; // rbx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  struct VIDMM_VAD *v24; // rsi
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdx
  unsigned __int16 v28; // ax
  int v29; // r15d
  __int128 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int i; // edi
  __int64 v34; // rcx
  bool v35; // cl
  char *v36; // rdi
  __int64 v37; // rdx
  char *v38; // rdi
  unsigned __int64 v39; // rsi
  struct _VIDSCH_SYNC_OBJECT *v40; // r8
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  bool v46; // zf
  struct DXGK_LOG *v47; // rdi
  _OWORD *VaPagingHistoryEntry; // rax
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  _DWORD *v53; // rbx
  __int64 v54; // r8
  CVirtualAddressAllocator **v55; // [rsp+40h] [rbp-61h]
  __int64 v56; // [rsp+40h] [rbp-61h]
  unsigned __int64 v57; // [rsp+48h] [rbp-59h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v58; // [rsp+50h] [rbp-51h] BYREF
  __int128 v59; // [rsp+60h] [rbp-41h] BYREF
  __int128 v60; // [rsp+70h] [rbp-31h]
  __int128 v61; // [rsp+80h] [rbp-21h]
  __int128 v62; // [rsp+90h] [rbp-11h]
  __int128 v63; // [rsp+A0h] [rbp-1h]
  __int64 v64; // [rsp+B0h] [rbp+Fh]
  unsigned __int8 v65; // [rsp+F0h] [rbp+4Fh]
  bool v66; // [rsp+F8h] [rbp+57h] BYREF
  void (*v67)(void *); // [rsp+108h] [rbp+67h]

  v67 = a4;
  v8 = a2;
  v9 = *((_QWORD *)this + 5029);
  v10 = a3;
  v11 = a4;
  v65 = a3;
  v59 = 0LL;
  v12 = *(_QWORD *)(v9 + 8LL * a2);
  v57 = v12;
  v60 = 0LL;
  v13 = a2;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
    v13 = (unsigned int)v8;
    v14[3] = v10;
    v14[4] = *((unsigned int *)this + v8 + 414);
    v14[5] = *((unsigned int *)this + v8 + 478);
    v9 = *((_QWORD *)this + 5029);
    WdLogGlobalForLineNumber = 15277;
  }
  v15 = *((_BYTE *)this + 40938);
  if ( (v15 & 1) != 0 && v10 )
  {
    v15 |= 2u;
    *((_BYTE *)this + 40938) = v15;
  }
  v16 = *(_QWORD *)(v9 + 8 * v13);
  v17 = v15;
  if ( (*(_BYTE *)(v16 + 476) & 1) != 0 && *((_QWORD *)this + v13 + 143) && *((_DWORD *)this + 2) && (v15 & 1) == 0 )
  {
    *((_BYTE *)this + 40938) = v15 | 1;
    v18 = *((_QWORD *)this + v13 + 5052);
    v19 = (_QWORD **)(v16 + 504);
    v55 = (CVirtualAddressAllocator **)((char *)this + 8 * v13 + 40416);
    while ( 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 == v19 || !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v13 + 740), v21[2]) )
          break;
        v22 = *v21;
        if ( *(_QWORD **)(*v21 + 8LL) != v21 || (v23 = (_QWORD *)v21[1], (_QWORD *)*v23 != v21) )
          __fastfail(3u);
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        *v21 = 0LL;
        v21[1] = 0LL;
        if ( VIDMM_GLOBAL::_Config >= 0 )
        {
          v20 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            *v55,
            (struct VIDMM_MAPPED_VA_RANGE *)(v21 - 4),
            0LL,
            1u);
        }
        v24 = (struct VIDMM_VAD *)*(v21 - 4);
        if ( *(struct _KTHREAD **)(v18 + 64) == KeGetCurrentThread() )
        {
          CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
            (CVirtualAddressAllocator *)v18,
            (struct VIDMM_VAD *)*(v21 - 4));
          v13 = v8;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v18 + 56, 0LL) )
          {
            if ( bTracingEnabled && *(_DWORD *)(v18 + 80) != -1 && (byte_140081241 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer();
            ExAcquirePushLockExclusiveEx(v18 + 56, 0LL);
          }
          *(_QWORD *)(v18 + 64) = KeGetCurrentThread();
          CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v18, v24);
          *(_QWORD *)(v18 + 64) = 0LL;
          ExReleasePushLockExclusiveEx(v18 + 56, 0LL);
          KeLeaveCriticalRegion();
          v13 = v8;
        }
      }
      if ( !v20 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v8, 0, 0LL, 0LL, 0, 0);
      v13 = v8;
    }
    v12 = v57;
    v17 = *((_BYTE *)this + 40938) & 0xFE;
    v10 = v65;
    v11 = v67;
    *((_BYTE *)this + 40938) = v17;
  }
  if ( (v17 & 1) == 0 )
  {
    if ( a6 )
    {
      if ( (v17 & 2) != 0 )
        v10 = 0;
      v65 = v10;
    }
    *((_BYTE *)this + 40938) = v17 & 0xFD;
  }
  if ( *((_DWORD *)this + v8 + 478) == *((_DWORD *)this + v8 + 414)
    && *((_DWORD *)this + v8 + 606) == *((_DWORD *)this + v8 + 542)
    && !v10 )
  {
    VIDMM_PHYSICAL_ADAPTER::CommitPendingTemporaryResources((VIDMM_PHYSICAL_ADAPTER *)v12);
    goto LABEL_41;
  }
  if ( !*((_DWORD *)this + 2) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 33LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400B4E2BLL);
  }
  v25 = *((_QWORD *)this + v8 + 143);
  v26 = *(__int64 **)(v25 + 48);
  if ( !v26 )
  {
    *((_QWORD *)&v30 + 1) = *(_QWORD *)(v25 + 80);
    goto LABEL_51;
  }
  v27 = *v26;
  v56 = *(_QWORD *)(*v26 + 64);
  if ( !v56 )
  {
    *((_QWORD *)&v30 + 1) = 0LL;
LABEL_51:
    v29 = 0;
    goto LABEL_52;
  }
  if ( (*(_DWORD *)(v56 + 104) & 0x1000) != 0 )
    v28 = 0;
  else
    v28 = *(_WORD *)(v56 + 40) + 1;
  v29 = v28;
  *((_QWORD *)&v30 + 1) = *(_QWORD *)(v27 + 72) + *(_QWORD *)(v56 + 48);
LABEL_52:
  if ( v11 )
    ((void (__fastcall *)(void *))v11)(a5);
  v31 = *((_QWORD *)this + v8 + 143);
  if ( *(_DWORD *)(*(_QWORD *)(v31 + 128) + 32LL) )
  {
    v32 = *(_QWORD *)(**(_QWORD **)(v31 + 48) + 64LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 56LL))(v32);
  }
  for ( i = 0; i < *(_DWORD *)(v12 + 64); ++i )
  {
    v34 = *(_QWORD *)(*(_QWORD *)(v12 + 1648) + 8LL * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 152LL))(v34);
  }
  v35 = *((_DWORD *)this + v8 + 414) == *((_DWORD *)this + v8 + 478)
     && *((_DWORD *)this + v8 + 542) == *((_DWORD *)this + v8 + 606);
  v36 = (char *)this + 4 * v8;
  if ( !*((_DWORD *)v36 + 1159) && v35 )
    goto LABEL_89;
  if ( (*(_BYTE *)(v12 + 477) & 2) != 0 )
  {
    WdLogSingleEntry1(3LL, v8);
    WdLogGlobalForLineNumber = 15413;
  }
  if ( !*((_DWORD *)v36 + 1159) )
  {
    *((_DWORD *)v36 + 1159) = 1;
    ++*((_QWORD *)this + v8 + 612);
  }
  v37 = *((_QWORD *)this + 2);
  v38 = (char *)this + 8 * v8;
  v39 = *((_QWORD *)v38 + 612);
  v40 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v38 + 740);
  v66 = *(_BYTE *)(*(_QWORD *)(v37 + 744) + 55LL);
  v58 = v40;
  v57 = v39;
  if ( v66 && !*(_BYTE *)(*(_QWORD *)(v37 + 744) + 58LL) )
    VIDMM_GLOBAL::SignalMonitoredFence(this, v8, v40, v39, &v66);
  v41 = *((_QWORD *)v38 + 740);
  *(_QWORD *)&v59 = 256LL;
  *(_QWORD *)&v60 = v39;
  *(_QWORD *)&v30 = *(_QWORD *)(v41 + 72);
  *((_QWORD *)&v60 + 1) = *((_QWORD *)this + v8 + 804);
  *((_QWORD *)&v59 + 1) = *((_QWORD *)this + v8 + 143);
  v61 = v30;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 32LL));
  LODWORD(v41) = *((_DWORD *)this + v8 + 414) - *((_DWORD *)this + v8 + 478);
  DWORD1(v62) = *((_DWORD *)this + v8 + 478);
  HIDWORD(v62) = *((_DWORD *)this + v8 + 606);
  DWORD2(v62) = v41;
  LODWORD(v41) = *((_DWORD *)this + v8 + 542) - HIDWORD(v62);
  LODWORD(v62) = v29;
  v42 = *((_QWORD *)this + 3);
  LODWORD(v63) = v41;
  v43 = *(_QWORD *)(v42 + 2992) + 344 * v8;
  v44 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
  if ( a7 )
  {
    v45 = VidSchiDriverNodeEngineToSchedulerNode(v44, *(_DWORD *)(v43 + 20), v8);
    BYTE8(v63) = 1;
  }
  else
  {
    v45 = VidSchiDriverNodeEngineToSchedulerNode(v44, *(unsigned __int16 *)(v43 + 2), v8);
    BYTE8(v63) = 0;
  }
  v46 = (*((_BYTE *)this + 40936) & 2) == 0;
  DWORD1(v63) = v45;
  if ( !v46 )
  {
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
    {
      v47 = (VIDMM_GLOBAL *)((char *)this + 41032);
      if ( *((_QWORD *)this + 5129) )
        goto LABEL_80;
    }
    else if ( *((_QWORD *)this + 5124) )
    {
      v47 = (VIDMM_GLOBAL *)((char *)this + 41032);
LABEL_80:
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41008, 0LL);
      v46 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
      *((_QWORD *)this + 5127) = KeGetCurrentThread();
      if ( v46 )
        VaPagingHistoryEntry = (_OWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 8LL, 88LL);
      else
        VaPagingHistoryEntry = operator new(88, v47, 8u, 0);
      if ( VaPagingHistoryEntry )
      {
        v49 = v60;
        *VaPagingHistoryEntry = v59;
        v50 = v61;
        VaPagingHistoryEntry[1] = v49;
        v51 = v62;
        VaPagingHistoryEntry[2] = v50;
        v52 = v63;
        VaPagingHistoryEntry[3] = v51;
        *(_QWORD *)&v51 = v64;
        VaPagingHistoryEntry[4] = v52;
        *((_QWORD *)VaPagingHistoryEntry + 10) = v51;
        *((_DWORD *)VaPagingHistoryEntry + 20) = v8;
      }
      *((_QWORD *)this + 5127) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41008, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  VidSchSubmitPagingCommand(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v59);
  if ( !v66 )
    VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v58, &v57);
  *((_QWORD *)this + v8 + 676) = v39;
LABEL_89:
  v53 = (_DWORD *)((char *)this + 4 * v8);
  v53[478] = v53[414];
  v53[606] = v53[542];
  VIDMM_PHYSICAL_ADAPTER::CommitPendingTemporaryResources((VIDMM_PHYSICAL_ADAPTER *)v12);
  v53[946] = 1;
  v53[1159] = 0;
  if ( v65 )
  {
    VidMmReleaseDmaBuffer(*((struct VIDMM_DMA_BUFFER **)this + v8 + 143), 1);
    LOBYTE(v54) = 1;
    VidMmAcquireDmaBuffer(*((_QWORD *)this + v8 + 79), 0LL, v54, (char *)this + 8 * v8 + 1144);
    *(_DWORD *)(*((_QWORD *)this + v8 + 143) + 32LL) = 1;
    *((_DWORD *)this + v8 + 414) = 0;
    *((_DWORD *)this + v8 + 478) = 0;
    v53[542] = 0;
    v53[606] = 0;
  }
LABEL_41:
  *(_QWORD *)(v12 + 488) = 0LL;
}
