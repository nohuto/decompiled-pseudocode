/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0
 * Callers:
 *     ExecutePagingCommand @ 0x14009F260 (ExecutePagingCommand.c)
 *     VidMmSubmitPacket @ 0x1400DCB90 (VidMmSubmitPacket.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140035820 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_DelayedForceEviction__private_IsEnabledPreCheck @ 0x1400430B8 (Feature_DelayedForceEviction__private_IsEnabledPreCheck.c)
 *     ?SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z @ 0x14004BDC0 (-SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z.c)
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x14004CC9C (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x14008FA50 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE.c)
 *     ?ValidateIntegrity@VIDMM_PHYSICAL_ADAPTER@@QEAAJG@Z @ 0x140090D5C (-ValidateIntegrity@VIDMM_PHYSICAL_ADAPTER@@QEAAJG@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400914A4 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?SuspendMemorySegmentAccess@VIDMM_PHYSICAL_ADAPTER@@QEAAJXZ @ 0x140091578 (-SuspendMemorySegmentAccess@VIDMM_PHYSICAL_ADAPTER@@QEAAJXZ.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x140092FE4 (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x140093094 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x140096144 (-TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_D.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A9564 (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400ACAE4 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400B3910 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400B4820 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAllocator@@_K2E@Z @ 0x1400B519C (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAll.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1400B5418 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400B7EF4 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B9DF0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BB638 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400C05B0 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400D65DC (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDMM_PURGE_STATISTICS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400E06B8 (-PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDM.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E0C88 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1400E1744 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E246C (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400E2D80 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E561C (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchSignalPagingFences @ 0x1400F3440 (VidSchSignalPagingFences.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F4748 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F515C (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400FFE50 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z @ 0x140100418 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z.c)
 *     ?RestoreFromPurge@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x140101A3C (-RestoreFromPurge@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140104104 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x140106F84 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x14010C480 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x14010D890 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x140110C84 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011144C (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x140112398 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140114C34 (-OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        bool a3,
        unsigned __int64 a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  bool v5; // r12
  unsigned int v6; // eax
  unsigned int v8; // ebx
  int v9; // r15d
  __int64 v11; // rdx
  void (*v12)(void *); // r8
  void *v13; // r9
  VIDMM_GLOBAL *v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // r12d
  unsigned int i; // ebx
  unsigned int v19; // eax
  unsigned __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // r8
  char v23; // al
  PRKPROCESS *v24; // rcx
  int updated; // eax
  struct VIDMM_DEVICE *v26; // rdx
  __int64 v27; // rax
  CVirtualAddressAllocator *v28; // rbx
  PRKPROCESS *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  PRKPROCESS *v32; // rcx
  VIDMM_GLOBAL *v33; // rcx
  _DWORD *v34; // r14
  struct VIDMM_PHYSICAL_ALLOC *v35; // rbx
  VIDMM_PHYSICAL_ADAPTER *v36; // r12
  int *v37; // rax
  void (*v38)(void *); // r8
  int inited; // eax
  __int64 v40; // rcx
  unsigned __int16 v41; // r12
  __int64 v42; // r13
  VIDMM_DEVICE *v43; // rbx
  struct VIDMM_ALLOC *v44; // rbx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned int v48; // edx
  struct VIDMM_PHYSICAL_ALLOC *v49; // r12
  VIDMM_PHYSICAL_ADAPTER *v50; // rcx
  __int64 v51; // rbx
  VIDMM_PHYSICAL_ADAPTER *v52; // rcx
  struct VIDMM_ALLOC **v54; // [rsp+20h] [rbp-81h]
  bool v55[8]; // [rsp+50h] [rbp-51h] BYREF
  struct VIDMM_ALLOC *v56; // [rsp+58h] [rbp-49h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v57; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 v58; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v59[2]; // [rsp+70h] [rbp-31h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-21h] BYREF

  v57 = a5;
  v5 = a3;
  v6 = *(_DWORD *)a2;
  v55[0] = a3;
  v8 = 0;
  v58 = a4;
  v9 = 0;
  LODWORD(v56) = 0;
  v59[0] = 0LL;
  VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, v6);
  v14 = (VIDMM_GLOBAL *)*(int *)a2;
  if ( (int)v14 > 205 )
  {
    if ( (_DWORD)v14 == 216 )
    {
LABEL_114:
      LOBYTE(v11) = *((_BYTE *)a2 + 48);
      VIDMM_SEGMENT::ProcessUnblockMemoryRanges(*((_QWORD *)a2 + 5), v11, (__int64)v12, (__int64)a2 + 56);
      goto LABEL_59;
    }
    goto LABEL_113;
  }
  if ( (_DWORD)v14 == 205 )
  {
    VIDMM_GLOBAL::EvictOneAllocation(this, *((__int64 ***)a2 + 2), 1);
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 164LL));
    goto LABEL_59;
  }
  if ( (int)v14 > 118 )
  {
    if ( (int)v14 > 128 )
    {
      switch ( (_DWORD)v14 )
      {
        case 0x81:
          v49 = (struct VIDMM_PHYSICAL_ALLOC *)*((_QWORD *)a2 + 5);
          if ( !(unsigned int)Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline() )
          {
            VIDMM_PHYSICAL_ADAPTER::OfferCpuHostApertureRanges(v50, v49);
            goto LABEL_58;
          }
          v51 = *(_QWORD *)v49;
          DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
            (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v59,
            (struct DXGPUSHLOCKFAST *)(*(_QWORD *)v49 + 312LL),
            1);
          if ( !*(_DWORD *)(v51 + 184) )
            VIDMM_PHYSICAL_ADAPTER::OfferCpuHostApertureRanges(v52, v49);
          DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v59);
          goto LABEL_57;
        case 0x82:
          v16 = VIDMM_GLOBAL::EnableIoMmuIsolation((__int64 ***)this);
          goto LABEL_86;
        case 0x83:
          VIDMM_GLOBAL::DisableIoMmuIsolation(this);
          goto LABEL_59;
      }
      if ( (_DWORD)v14 != 132 )
      {
        if ( (_DWORD)v14 == 133 )
        {
          VIDMM_GLOBAL::TransferTransportBufferSystemCommand(
            (__int64)this,
            *((_QWORD *)a2 + 5),
            *((_QWORD **)a2 + 6),
            *((_DWORD *)a2 + 14),
            *((unsigned __int64 **)a2 + 8));
          goto LABEL_59;
        }
        goto LABEL_113;
      }
      v47 = *((unsigned __int16 *)a2 + 20);
      v48 = *((_DWORD *)this + 1736);
      if ( (_WORD)v47 != 0xFFFF )
      {
        if ( (unsigned int)v47 >= v48 )
        {
          v9 = -1073741811;
          goto LABEL_59;
        }
        v16 = VIDMM_PHYSICAL_ADAPTER::ValidateIntegrity(
                *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8 * v47),
                *((unsigned __int16 *)a2 + 21));
        goto LABEL_86;
      }
      if ( v48 )
      {
        do
        {
          v9 = VIDMM_PHYSICAL_ADAPTER::ValidateIntegrity(
                 *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * (unsigned __int16)v8),
                 *((unsigned __int16 *)a2 + 21));
          if ( v9 < 0 )
            break;
          LOWORD(v8) = v8 + 1;
        }
        while ( (unsigned int)(unsigned __int16)v8 < *((_DWORD *)this + 1736) );
      }
      goto LABEL_33;
    }
    if ( (_DWORD)v14 != 128 )
    {
      switch ( (_DWORD)v14 )
      {
        case 'x':
          v16 = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
                  this,
                  *((struct VIDMM_PROCESS **)a2 + 5),
                  *((struct _KTHREAD ***)a2 + 6),
                  *((_QWORD *)a2 + 7),
                  (unsigned __int64)v54,
                  *((_BYTE *)a2 + 72));
          goto LABEL_86;
        case 'y':
          v44 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 2);
          VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                      *(VIDMM_PROCESS **)(*(_QWORD *)v44 + 8LL),
                                      *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                      *(_DWORD *)(**(_QWORD **)v44 + 24LL) & 0x3F);
          CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, v44);
          break;
        case '{':
          v43 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 5);
          if ( *((_BYTE *)a2 + 48) )
          {
            VIDMM_DEVICE::IndefinitelySuspend(v43, *((_BYTE *)a2 + 49));
            VIDMM_DEVICE::FaultAllAllocations(v43);
          }
          else
          {
            VIDMM_DEVICE::EnsureSchedulable(v43, 0);
          }
          break;
        case '|':
          VIDMM_GLOBAL::TrimOfferCommitmentInternal(
            this,
            *((struct VIDMM_PROCESS **)a2 + 5),
            *((struct DXGDECOMMITITERATOR **)a2 + 6),
            *(union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS *)((char *)a2 + 56),
            *((_QWORD *)a2 + 8),
            *((unsigned __int64 **)a2 + 9));
          goto LABEL_59;
        case '~':
          VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
            this,
            *((unsigned int *)a2 + 1),
            *((unsigned int *)a2 + 10),
            *((unsigned int *)a2 + 11));
          goto LABEL_59;
        case '\x7F':
          if ( *((_DWORD *)this + 1736) )
          {
            do
            {
              v41 = 0;
              v42 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * (unsigned __int16)v8);
              if ( *(_DWORD *)(v42 + 64) )
              {
                do
                  VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*(_QWORD *)(v42 + 1648) + 8LL * v41++));
                while ( (unsigned int)v41 < *(_DWORD *)(v42 + 64) );
              }
              LOWORD(v8) = v8 + 1;
            }
            while ( (unsigned int)(unsigned __int16)v8 < *((_DWORD *)this + 1736) );
            v9 = v59[0];
            v8 = (unsigned int)v56;
            goto LABEL_58;
          }
          break;
        default:
          goto LABEL_113;
      }
      goto LABEL_33;
    }
    v46 = *((_QWORD *)a2 + 5);
    if ( *((_DWORD *)a2 + 12) )
      VIDMM_SEGMENT::FreeVPRReserve((VIDMM_LINEAR_POOL **)v46);
    else
      VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
        *(VIDMM_LINEAR_POOL **)(v46 + 208),
        *(void **)(v46 + 496),
        *(_QWORD *)(v46 + 464) - *(_QWORD *)(v46 + 504),
        *(_QWORD *)(v46 + 464));
  }
  else
  {
    if ( (_DWORD)v14 != 118 )
    {
      if ( (int)v14 <= 110 )
      {
        switch ( (_DWORD)v14 )
        {
          case 'n':
            if ( !*((_DWORD *)this + 1736) )
              goto LABEL_59;
            do
            {
              v9 = VIDMM_PHYSICAL_ADAPTER::SuspendMemorySegmentAccess(*(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029)
                                                                                                 + 8LL * v8));
              if ( v9 < 0 )
                break;
              ++v8;
            }
            while ( v8 < *((_DWORD *)this + 1736) );
            break;
          case 'e':
            Feature_DelayedForceEviction__private_IsEnabledPreCheck();
            if ( *((_DWORD *)this + 11218) && KeCancelTimer((PKTIMER)((char *)this + 44808)) )
              VIDMM_GLOBAL::SetDelayedEvictionTimerScheduled(this);
            if ( *((_DWORD *)this + 1736) )
            {
              do
              {
                VIDMM_PHYSICAL_ADAPTER::RestoreFromPurge(*(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * v8));
                v19 = *((_DWORD *)this + 1736);
                ++v8;
              }
              while ( v8 < v19 );
              v20 = 0LL;
              v21 = 0;
              if ( v19 )
              {
                do
                {
                  v22 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v21);
                  v23 = *(_BYTE *)(v22 + 476);
                  if ( v23 < 0 )
                  {
                    v20 |= 1LL << v21;
                    *(_BYTE *)(v22 + 476) = v23 & 0x7F;
                  }
                  ++v21;
                }
                while ( v21 < *((_DWORD *)this + 1736) );
              }
            }
            else
            {
              v20 = 0LL;
            }
            VIDMM_GLOBAL::RecommitGpuVirtualAddresses(this, v20);
            break;
          case 'f':
            v17 = 0;
            for ( i = *((_DWORD *)a2 + 10); v17 < *((_DWORD *)this + 1736); ++v17 )
              VIDMM_PHYSICAL_ADAPTER::PurgeSegments(
                *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v17),
                this,
                *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v17),
                i,
                *((_QWORD *)a2 + 7),
                *((_QWORD *)a2 + 6));
            if ( (i & 8) == 0 )
            {
              VIDMM_GLOBAL::PurgePageTables(this, i);
              v8 = 1;
              VIDMM_GLOBAL::DoDeferredUnlock(this);
LABEL_58:
              v5 = v55[0];
              goto LABEL_59;
            }
LABEL_57:
            v8 = 0;
            goto LABEL_58;
          case 'g':
            VIDMM_GLOBAL::CleanupPrimaryAllocation(this, *((struct VIDMM_GLOBAL_ALLOC **)a2 + 5));
            goto LABEL_59;
          case 'h':
            v15 = *((_QWORD *)a2 + 2);
            v55[0] = 0;
            v56 = 0LL;
            v16 = VIDMM_GLOBAL::PageInOneAllocation(this, v15, 4LL, 0LL, v55, &v56, 0, -1LL);
LABEL_86:
            v9 = v16;
            goto LABEL_59;
          case 'i':
            VIDMM_GLOBAL::EvictOneAllocation(this, *((__int64 ***)a2 + 2), 0);
            goto LABEL_59;
          case 'j':
            VIDMM_GLOBAL::ReportVidMmStateWorker(this);
            goto LABEL_59;
          default:
            goto LABEL_113;
        }
LABEL_33:
        v8 = 0;
        goto LABEL_59;
      }
      switch ( (_DWORD)v14 )
      {
        case 'p':
          v34 = (_DWORD *)*((_QWORD *)a2 + 5);
          v35 = *(struct VIDMM_PHYSICAL_ALLOC **)v34;
          v36 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * (v34[6] & 0x3F));
          if ( *(_QWORD *)(*(_QWORD *)v34 + 64LL) )
          {
            VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF, v12);
            VIDMM_PHYSICAL_ADAPTER::EvictResources(v36, v35, 0, 0, 0, 0LL);
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, v34[6] & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResourcesForAllocation(v36, v35);
          goto LABEL_57;
        case 'q':
          v56 = 0LL;
          v16 = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                  v14,
                  (struct _VIDMM_SYSTEM_COMMAND *)((char *)a2 + 40),
                  &v56);
          goto LABEL_86;
        case 'r':
          v32 = (PRKPROCESS *)*((_QWORD *)this + 5048);
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(*v32, &ApcState);
          *((_QWORD *)a2 + 5) = *((_QWORD *)this + 5048);
          updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v33, a2);
          goto LABEL_52;
        case 's':
          v27 = *((_QWORD *)a2 + 6);
          v28 = *(CVirtualAddressAllocator **)(v27 + 184);
          if ( v28 )
          {
            if ( *((_QWORD *)a2 + 5) )
            {
              v29 = (PRKPROCESS *)*((_QWORD *)this + 5048);
              memset(&ApcState, 0, sizeof(ApcState));
              KeStackAttachProcess(*v29, &ApcState);
              CVirtualAddressAllocator::DestroyVaAllocator(v28, v30, v31);
              KeUnstackDetachProcess(&ApcState);
            }
            else
            {
              CVirtualAddressAllocator::DestroyVaAllocator(
                *(CVirtualAddressAllocator **)(v27 + 184),
                (unsigned int)((_DWORD)v14 - 115),
                (__int64)v12);
            }
            *(_QWORD *)(*((_QWORD *)a2 + 6) + 184LL) = 0LL;
          }
          goto LABEL_33;
        case 't':
          v26 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 3);
          v55[0] = 0;
          v56 = 0LL;
          v16 = VIDMM_GLOBAL::PageInDeviceInternal(this, v26, 0, v55, &v56);
          goto LABEL_86;
        case 'u':
          v24 = (PRKPROCESS *)*((_QWORD *)this + 5048);
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(*v24, &ApcState);
          updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                      this,
                      *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                      1u);
LABEL_52:
          v9 = updated;
          KeUnstackDetachProcess(&ApcState);
          goto LABEL_59;
      }
LABEL_113:
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 23LL, -1073741811LL, this, v14);
      WdLogGlobalForLineNumber = 195;
      goto LABEL_114;
    }
    inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((_DWORD *)a2 + 1), 0);
    v9 = inited;
    if ( inited < 0 )
    {
      WdLogSingleEntry1(1LL, inited);
      WdLogGlobalForLineNumber = 9842;
      DxgkLogInternalTriageEvent(v40, 0x40000LL);
    }
  }
LABEL_59:
  v37 = (int *)*((_QWORD *)a2 + 4);
  if ( v37 )
    *v37 = v9;
  if ( v8 )
  {
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0LL, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF, v38);
    VIDMM_GLOBAL::UnmapAllPagingBuffers(this);
    if ( v5 )
      VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v57, &v58);
    else
      KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  }
  else
  {
    LOBYTE(v13) = v5;
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, *((struct _KEVENT **)a2 + 1), v13, (_DWORD *)v58, v57);
  }
  return (unsigned int)v9;
}
