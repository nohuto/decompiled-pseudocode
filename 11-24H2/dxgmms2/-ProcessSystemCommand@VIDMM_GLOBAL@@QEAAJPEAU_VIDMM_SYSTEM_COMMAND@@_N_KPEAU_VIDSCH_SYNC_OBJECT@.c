/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548
 * Callers:
 *     ExecutePagingCommand @ 0x1400A0AE0 (ExecutePagingCommand.c)
 *     VidMmSubmitPacket @ 0x1400E0D40 (VidMmSubmitPacket.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140034220 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_DelayedForceEviction__private_IsEnabledPreCheck @ 0x140041AA8 (Feature_DelayedForceEviction__private_IsEnabledPreCheck.c)
 *     ?SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z @ 0x14004B4D0 (-SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z.c)
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x14004C4B0 (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x14008FA50 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE.c)
 *     ?ValidateIntegrity@VIDMM_PHYSICAL_ADAPTER@@QEAAJG@Z @ 0x140090D54 (-ValidateIntegrity@VIDMM_PHYSICAL_ADAPTER@@QEAAJG@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x14009149C (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?SuspendMemorySegmentAccess@VIDMM_PHYSICAL_ADAPTER@@QEAAJXZ @ 0x140091570 (-SuspendMemorySegmentAccess@VIDMM_PHYSICAL_ADAPTER@@QEAAJXZ.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x140093110 (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400931C0 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x140096274 (-TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_D.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400A9800 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400AB7F0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B0CC8 (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400B15E0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400B3810 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400B4E94 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400BB8F0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400C0F10 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400D2258 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDMM_PURGE_STATISTICS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400D644C (-PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDM.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400D6A1C (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1400D74A4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D76AC (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     VidSchSignalPagingFences @ 0x1400ED550 (VidSchSignalPagingFences.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400F71BC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAllocator@@_K2E@Z @ 0x1400FBBC4 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAll.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1400FBE4C (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400FF9C0 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z @ 0x1400FFCC0 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z.c)
 *     ?RestoreFromPurge@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x140100764 (-RestoreFromPurge@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x140100EC8 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1401050C4 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x14010A030 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x14010B628 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x14010EA64 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010FD30 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x140111178 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1401117CC (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140114340 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140114EBC (-OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
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
  _DWORD *v15; // rdx
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
  PRKPROCESS *v30; // rcx
  VIDMM_GLOBAL *v31; // rcx
  _DWORD *v32; // r14
  struct VIDMM_PHYSICAL_ALLOC *v33; // rbx
  VIDMM_PHYSICAL_ADAPTER *v34; // r12
  int *v35; // rax
  void (*v36)(void *); // r8
  int inited; // eax
  __int64 v38; // rcx
  unsigned __int16 v39; // r12
  __int64 v40; // r13
  VIDMM_DEVICE *v41; // rbx
  struct VIDMM_ALLOC *v42; // rbx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  unsigned int v46; // edx
  struct VIDMM_PHYSICAL_ALLOC *v47; // r12
  VIDMM_PHYSICAL_ADAPTER *v48; // rcx
  __int64 v49; // rbx
  VIDMM_PHYSICAL_ADAPTER *v50; // rcx
  struct VIDMM_ALLOC **v52; // [rsp+20h] [rbp-81h]
  bool v53[8]; // [rsp+50h] [rbp-51h] BYREF
  struct VIDMM_ALLOC *v54; // [rsp+58h] [rbp-49h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v55; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 v56; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v57[2]; // [rsp+70h] [rbp-31h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-21h] BYREF

  v55 = a5;
  v5 = a3;
  v6 = *(_DWORD *)a2;
  v53[0] = a3;
  v8 = 0;
  v56 = a4;
  v9 = 0;
  LODWORD(v54) = 0;
  v57[0] = 0LL;
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
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 180LL));
    goto LABEL_59;
  }
  if ( (int)v14 > 118 )
  {
    if ( (int)v14 > 128 )
    {
      switch ( (_DWORD)v14 )
      {
        case 0x81:
          v47 = (struct VIDMM_PHYSICAL_ALLOC *)*((_QWORD *)a2 + 5);
          if ( !(unsigned int)Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline() )
          {
            VIDMM_PHYSICAL_ADAPTER::OfferCpuHostApertureRanges(v48, v47);
            goto LABEL_58;
          }
          v49 = *(_QWORD *)v47;
          DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
            (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v57,
            (struct DXGPUSHLOCKFAST *)(*(_QWORD *)v47 + 328LL),
            1);
          if ( !*(_DWORD *)(v49 + 184) )
            VIDMM_PHYSICAL_ADAPTER::OfferCpuHostApertureRanges(v50, v47);
          DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v57);
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
      v45 = *((unsigned __int16 *)a2 + 20);
      v46 = *((_DWORD *)this + 1736);
      if ( (_WORD)v45 != 0xFFFF )
      {
        if ( (unsigned int)v45 >= v46 )
        {
          v9 = -1073741811;
          goto LABEL_59;
        }
        v16 = VIDMM_PHYSICAL_ADAPTER::ValidateIntegrity(
                *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8 * v45),
                *((unsigned __int16 *)a2 + 21));
        goto LABEL_86;
      }
      if ( v46 )
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
                  *((struct CVirtualAddressAllocator **)a2 + 6),
                  *((_QWORD *)a2 + 7),
                  (unsigned __int64)v52,
                  *((_BYTE *)a2 + 72));
          goto LABEL_86;
        case 'y':
          v42 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 2);
          VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                      *(VIDMM_PROCESS **)(*(_QWORD *)v42 + 8LL),
                                      *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                      *(_DWORD *)(**(_QWORD **)v42 + 24LL) & 0x3F);
          CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, v42);
          break;
        case '{':
          v41 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 5);
          if ( *((_BYTE *)a2 + 48) )
          {
            VIDMM_DEVICE::IndefinitelySuspend(v41, *((_BYTE *)a2 + 49));
            VIDMM_DEVICE::FaultAllAllocations(v41);
          }
          else
          {
            VIDMM_DEVICE::EnsureSchedulable(v41, 0);
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
              v39 = 0;
              v40 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * (unsigned __int16)v8);
              if ( *(_DWORD *)(v40 + 64) )
              {
                do
                  VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*(_QWORD *)(v40 + 1648) + 8LL * v39++));
                while ( (unsigned int)v39 < *(_DWORD *)(v40 + 64) );
              }
              LOWORD(v8) = v8 + 1;
            }
            while ( (unsigned int)(unsigned __int16)v8 < *((_DWORD *)this + 1736) );
            v9 = v57[0];
            v8 = (unsigned int)v54;
            goto LABEL_58;
          }
          break;
        default:
          goto LABEL_113;
      }
      goto LABEL_33;
    }
    v44 = *((_QWORD *)a2 + 5);
    if ( *((_DWORD *)a2 + 12) )
      VIDMM_SEGMENT::FreeVPRReserve((VIDMM_LINEAR_POOL **)v44);
    else
      VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
        *(VIDMM_LINEAR_POOL **)(v44 + 208),
        *(void **)(v44 + 496),
        *(_QWORD *)(v44 + 464) - *(_QWORD *)(v44 + 504),
        *(_QWORD *)(v44 + 464));
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
                *((_QWORD **)a2 + 7),
                *((_QWORD *)a2 + 6));
            if ( (i & 8) == 0 )
            {
              VIDMM_GLOBAL::PurgePageTables(this, i);
              v8 = 1;
              VIDMM_GLOBAL::DoDeferredUnlock(this);
LABEL_58:
              v5 = v53[0];
              goto LABEL_59;
            }
LABEL_57:
            v8 = 0;
            goto LABEL_58;
          case 'g':
            VIDMM_GLOBAL::CleanupPrimaryAllocation(this, *((struct VIDMM_GLOBAL_ALLOC **)a2 + 5));
            goto LABEL_59;
          case 'h':
            v15 = (_DWORD *)*((_QWORD *)a2 + 2);
            v53[0] = 0;
            v54 = 0LL;
            v16 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, v15, 4u, 0, v53, &v54, 0, -1LL);
LABEL_86:
            v9 = v16;
            goto LABEL_59;
          case 'i':
            VIDMM_GLOBAL::EvictOneAllocation(this, *((__int64 ***)a2 + 2), 0);
            goto LABEL_59;
          case 'j':
            VIDMM_GLOBAL::ReportVidMmStateWorker(this, 1LL, (__int64)v12);
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
          v32 = (_DWORD *)*((_QWORD *)a2 + 5);
          v33 = *(struct VIDMM_PHYSICAL_ALLOC **)v32;
          v34 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * (v32[6] & 0x3F));
          if ( *(_QWORD *)(*(_QWORD *)v32 + 64LL) )
          {
            VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF, v12);
            VIDMM_PHYSICAL_ADAPTER::EvictResources(v34, v33, 0, 0, 0, 0LL);
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, v32[6] & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResourcesForAllocation(v34, v33);
          goto LABEL_57;
        case 'q':
          v54 = 0LL;
          v16 = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                  v14,
                  (struct _VIDMM_SYSTEM_COMMAND *)((char *)a2 + 40),
                  &v54);
          goto LABEL_86;
        case 'r':
          v30 = (PRKPROCESS *)*((_QWORD *)this + 5048);
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(*v30, &ApcState);
          *((_QWORD *)a2 + 5) = *((_QWORD *)this + 5048);
          updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v31, a2);
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
              CVirtualAddressAllocator::DestroyVaAllocator(v28);
              KeUnstackDetachProcess(&ApcState);
            }
            else
            {
              CVirtualAddressAllocator::DestroyVaAllocator(*(CVirtualAddressAllocator **)(v27 + 184));
            }
            *(_QWORD *)(*((_QWORD *)a2 + 6) + 184LL) = 0LL;
          }
          goto LABEL_33;
        case 't':
          v26 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 3);
          v53[0] = 0;
          v54 = 0LL;
          v16 = VIDMM_GLOBAL::PageInDeviceInternal(this, v26, 0, v53, &v54);
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
      WdLogGlobalForLineNumber = 9942;
      DxgkLogInternalTriageEvent(v38, 0x40000LL);
    }
  }
LABEL_59:
  v35 = (int *)*((_QWORD *)a2 + 4);
  if ( v35 )
    *v35 = v9;
  if ( v8 )
  {
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0LL, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF, v36);
    VIDMM_GLOBAL::UnmapAllPagingBuffers(this);
    if ( v5 )
      VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v55, &v56);
    else
      KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  }
  else
  {
    LOBYTE(v13) = v5;
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, *((struct _KEVENT **)a2 + 1), v13, (_DWORD *)v56, v55);
  }
  return (unsigned int)v9;
}
