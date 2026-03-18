/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280
 * Callers:
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z @ 0x14009C8BC (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUV.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A79DC (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A804C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400A9270 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400AAB80 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z @ 0x1400AB9CC (-FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1400ABBD0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1400ACA84 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400ACCD0 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400BC5E0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400BD424 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400BF1DC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400E1624 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1400EE210 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400F11A0 (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400F8690 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140110E58 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_S.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140034800 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1400366A0 (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x140039538 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140039718 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidMmAcquireDmaBuffer @ 0x1400AF580 (VidMmAcquireDmaBuffer.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400B6400 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400D00E0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     VidSchSubmitPagingCommand @ 0x1400E35C0 (VidSchSubmitPagingCommand.c)
 *     VidSchSignalPagingFences @ 0x1400F3440 (VidSchSignalPagingFences.c)
 *     ?CommitPendingTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400F4BAC (-CommitPendingTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x140111EAC (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140112778 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
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
  __int64 v26; // rax
  int v27; // esi
  __int128 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int i; // edi
  __int64 v32; // rcx
  bool v33; // cl
  char *v34; // rdi
  __int64 v35; // rdx
  char *v36; // r15
  unsigned __int64 v37; // rdi
  struct _VIDSCH_SYNC_OBJECT *v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  bool v44; // zf
  _OWORD *VaPagingHistoryEntry; // rax
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  _DWORD *v50; // rbx
  __int64 v51; // r8
  CVirtualAddressAllocator **v52; // [rsp+40h] [rbp-61h]
  __int64 v53; // [rsp+40h] [rbp-61h]
  unsigned __int64 v54; // [rsp+48h] [rbp-59h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v55; // [rsp+50h] [rbp-51h] BYREF
  __int128 v56; // [rsp+60h] [rbp-41h] BYREF
  __int128 v57; // [rsp+70h] [rbp-31h]
  __int128 v58; // [rsp+80h] [rbp-21h]
  __int128 v59; // [rsp+90h] [rbp-11h]
  __int128 v60; // [rsp+A0h] [rbp-1h]
  __int64 v61; // [rsp+B0h] [rbp+Fh]
  unsigned __int8 v62; // [rsp+F0h] [rbp+4Fh]
  bool v63; // [rsp+F8h] [rbp+57h] BYREF
  void (*v64)(void *); // [rsp+108h] [rbp+67h]

  v64 = a4;
  v8 = a2;
  v9 = *((_QWORD *)this + 5029);
  v10 = a3;
  v11 = a4;
  v62 = a3;
  v56 = 0LL;
  v12 = *(_QWORD *)(v9 + 8LL * a2);
  v54 = v12;
  v57 = 0LL;
  v13 = a2;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
    v13 = (unsigned int)v8;
    v14[3] = v10;
    v14[4] = *((unsigned int *)this + v8 + 414);
    v14[5] = *((unsigned int *)this + v8 + 478);
    v9 = *((_QWORD *)this + 5029);
    WdLogGlobalForLineNumber = 15143;
  }
  v15 = *((_BYTE *)this + 40938);
  if ( (v15 & 1) != 0 && v10 )
  {
    v15 |= 2u;
    *((_BYTE *)this + 40938) = v15;
  }
  v16 = *(_QWORD *)(v9 + 8 * v13);
  v17 = v15;
  if ( (*(_BYTE *)(v16 + 476) & 1) == 0 || !*((_QWORD *)this + v13 + 143) || !*((_DWORD *)this + 2) || (v15 & 1) != 0 )
    goto LABEL_33;
  *((_BYTE *)this + 40938) = v15 | 1;
  v18 = *((_QWORD *)this + v13 + 5052);
  v19 = (_QWORD **)(v16 + 504);
  v52 = (CVirtualAddressAllocator **)((char *)this + 8 * v13 + 40416);
  while ( 2 )
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
        CVirtualAddressAllocator::UncommitVirtualAddressRange(*v52, (struct VIDMM_MAPPED_VA_RANGE *)(v21 - 4), 0LL, 1u);
      }
      v24 = (struct VIDMM_VAD *)*(v21 - 4);
      if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( *(struct _KTHREAD **)(v18 + 64) != KeGetCurrentThread() )
          goto LABEL_22;
LABEL_20:
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v18, v24);
        v13 = v8;
      }
      else
      {
        if ( *(struct _KTHREAD **)(v18 + 64) == KeGetCurrentThread() )
          goto LABEL_20;
LABEL_22:
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v18 + 56, 0LL) )
        {
          if ( bTracingEnabled && *(_DWORD *)(v18 + 80) != -1 && (byte_140081241 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer();
          ExAcquirePushLockExclusiveEx(v18 + 56, 0LL);
        }
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *(_QWORD *)(v18 + 64) = KeGetCurrentThread();
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v18, v24);
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *(_QWORD *)(v18 + 64) = 0LL;
        ExReleasePushLockExclusiveEx(v18 + 56, 0LL);
        KeLeaveCriticalRegion();
        v13 = v8;
      }
    }
    if ( v20 )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v8, 0, 0LL, 0LL, 0, 0);
      v13 = v8;
      continue;
    }
    break;
  }
  v12 = v54;
  v17 = *((_BYTE *)this + 40938) & 0xFE;
  v10 = v62;
  v11 = v64;
  *((_BYTE *)this + 40938) = v17;
LABEL_33:
  if ( (v17 & 1) == 0 )
  {
    if ( a6 )
    {
      if ( (v17 & 2) != 0 )
        v10 = 0;
      v62 = v10;
    }
    *((_BYTE *)this + 40938) = v17 & 0xFD;
  }
  if ( *((_DWORD *)this + v8 + 478) == *((_DWORD *)this + v8 + 414)
    && *((_DWORD *)this + v8 + 606) == *((_DWORD *)this + v8 + 542)
    && !v10 )
  {
    VIDMM_PHYSICAL_ADAPTER::CommitPendingTemporaryResources((VIDMM_PHYSICAL_ADAPTER *)v12);
    goto LABEL_43;
  }
  if ( !*((_DWORD *)this + 2) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 33LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400ACA7BLL);
  }
  v25 = *((_QWORD *)this + v8 + 143);
  v26 = *(_QWORD *)(v25 + 48);
  if ( v26 )
  {
    v53 = *(_QWORD *)(*(_QWORD *)v26 + 64LL);
    if ( v53 )
    {
      if ( (*(_DWORD *)(v53 + 104) & 0x1000) != 0 )
        v27 = 0;
      else
        v27 = (unsigned __int16)(*(_WORD *)(v53 + 40) + 1);
      *((_QWORD *)&v28 + 1) = *(_QWORD *)(*(_QWORD *)v26 + 72LL) + *(_QWORD *)(v53 + 48);
      goto LABEL_54;
    }
    *((_QWORD *)&v28 + 1) = 0LL;
  }
  else
  {
    *((_QWORD *)&v28 + 1) = *(_QWORD *)(v25 + 80);
  }
  v27 = 0;
LABEL_54:
  if ( v11 )
    ((void (__fastcall *)(void *))v11)(a5);
  v29 = *((_QWORD *)this + v8 + 143);
  if ( *(_DWORD *)(*(_QWORD *)(v29 + 128) + 32LL) )
  {
    v30 = *(_QWORD *)(**(_QWORD **)(v29 + 48) + 64LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 56LL))(v30);
  }
  for ( i = 0; i < *(_DWORD *)(v12 + 64); ++i )
  {
    v32 = *(_QWORD *)(*(_QWORD *)(v12 + 1648) + 8LL * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 152LL))(v32);
  }
  v33 = *((_DWORD *)this + v8 + 414) == *((_DWORD *)this + v8 + 478)
     && *((_DWORD *)this + v8 + 542) == *((_DWORD *)this + v8 + 606);
  v34 = (char *)this + 4 * v8;
  if ( *((_DWORD *)v34 + 1159) || !v33 )
  {
    if ( (*(_BYTE *)(v12 + 477) & 2) != 0 )
    {
      WdLogSingleEntry1(3LL, v8);
      WdLogGlobalForLineNumber = 15279;
    }
    if ( !*((_DWORD *)v34 + 1159) )
    {
      *((_DWORD *)v34 + 1159) = 1;
      ++*((_QWORD *)this + v8 + 612);
    }
    v35 = *((_QWORD *)this + 2);
    v36 = (char *)this + 8 * v8;
    v37 = *((_QWORD *)v36 + 612);
    v38 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v36 + 740);
    v63 = *(_BYTE *)(*(_QWORD *)(v35 + 744) + 55LL);
    v55 = v38;
    v54 = v37;
    if ( v63 && !*(_BYTE *)(*(_QWORD *)(v35 + 744) + 58LL) )
      VIDMM_GLOBAL::SignalMonitoredFence(this, v8, v38, v37, &v63);
    *(_QWORD *)&v57 = v37;
    *(_QWORD *)&v56 = 0LL;
    v39 = *((_QWORD *)v36 + 740);
    LODWORD(v56) = 256;
    *(_QWORD *)&v28 = *(_QWORD *)(v39 + 72);
    *((_QWORD *)&v57 + 1) = *((_QWORD *)this + v8 + 804);
    *((_QWORD *)&v56 + 1) = *((_QWORD *)this + v8 + 143);
    v58 = v28;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v56 + 1) + 32LL));
    LODWORD(v39) = *((_DWORD *)this + v8 + 414) - *((_DWORD *)this + v8 + 478);
    DWORD1(v59) = *((_DWORD *)this + v8 + 478);
    HIDWORD(v59) = *((_DWORD *)this + v8 + 606);
    DWORD2(v59) = v39;
    LODWORD(v39) = *((_DWORD *)this + v8 + 542) - HIDWORD(v59);
    LODWORD(v59) = v27;
    v40 = *((_QWORD *)this + 3);
    LODWORD(v60) = v39;
    v41 = *(_QWORD *)(v40 + 2992) + 344 * v8;
    v42 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
    if ( a7 )
    {
      v43 = VidSchiDriverNodeEngineToSchedulerNode(v42, *(_DWORD *)(v41 + 20), v8);
      BYTE8(v60) = 1;
    }
    else
    {
      v43 = VidSchiDriverNodeEngineToSchedulerNode(v42, *(unsigned __int16 *)(v41 + 2), v8);
      BYTE8(v60) = 0;
    }
    v44 = (*((_BYTE *)this + 40936) & 2) == 0;
    DWORD1(v60) = v43;
    if ( !v44 )
    {
      v44 = VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled
          ? *((_QWORD *)this + 5129) == 0LL
          : *((_QWORD *)this + 5124) == 0LL;
      if ( !v44 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)this + 41008, 0LL);
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        v44 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
        *((_QWORD *)this + 5127) = KeGetCurrentThread();
        if ( v44 )
          VaPagingHistoryEntry = (_OWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 8LL, 88LL);
        else
          VaPagingHistoryEntry = operator new(88, (VIDMM_GLOBAL *)((char *)this + 41032), 8u, 0);
        if ( VaPagingHistoryEntry )
        {
          v46 = v57;
          *VaPagingHistoryEntry = v56;
          v47 = v58;
          VaPagingHistoryEntry[1] = v46;
          v48 = v59;
          VaPagingHistoryEntry[2] = v47;
          v49 = v60;
          VaPagingHistoryEntry[3] = v48;
          *(_QWORD *)&v48 = v61;
          VaPagingHistoryEntry[4] = v49;
          *((_QWORD *)VaPagingHistoryEntry + 10) = v48;
          *((_DWORD *)VaPagingHistoryEntry + 20) = v8;
        }
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *((_QWORD *)this + 5127) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 41008, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    VidSchSubmitPagingCommand(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v56);
    if ( !v63 )
      VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v55, &v54);
    *((_QWORD *)this + v8 + 676) = v37;
  }
  v50 = (_DWORD *)((char *)this + 4 * v8);
  v50[478] = v50[414];
  v50[606] = v50[542];
  VIDMM_PHYSICAL_ADAPTER::CommitPendingTemporaryResources((VIDMM_PHYSICAL_ADAPTER *)v12);
  v50[946] = 1;
  v50[1159] = 0;
  if ( v62 )
  {
    VidMmReleaseDmaBuffer(*((struct VIDMM_DMA_BUFFER **)this + v8 + 143), 1);
    LOBYTE(v51) = 1;
    VidMmAcquireDmaBuffer(*((_QWORD *)this + v8 + 79), 0LL, v51, (char *)this + 8 * v8 + 1144);
    *(_DWORD *)(*((_QWORD *)this + v8 + 143) + 32LL) = 1;
    *((_DWORD *)this + v8 + 414) = 0;
    *((_DWORD *)this + v8 + 478) = 0;
    v50[542] = 0;
    v50[606] = 0;
  }
LABEL_43:
  *(_QWORD *)(v12 + 488) = 0LL;
}
