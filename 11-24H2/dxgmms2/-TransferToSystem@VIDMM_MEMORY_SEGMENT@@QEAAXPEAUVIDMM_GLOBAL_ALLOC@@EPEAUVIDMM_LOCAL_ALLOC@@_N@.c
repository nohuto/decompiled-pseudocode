/*
 * XREFs of ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400B2188
 * Callers:
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009ED10 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B2DF0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ @ 0x140036F6C (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x14003D2FC (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x140044454 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004C558 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x14004DAF0 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x14004EB38 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memmove @ 0x140056040 (memmove.c)
 *     Use64KbPagesForTransfer @ 0x140091AE8 (Use64KbPagesForTransfer.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x14009E014 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400ACE60 (-EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@G_K@Z @ 0x1400AEFCC (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@G_K@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1400B4E34 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2B70 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400C2BA0 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2CB4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C3430 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1400C37A0 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400C38B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1400C4210 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1400C4430 (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400D16B4 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D76AC (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D7700 (-ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1400E57A0 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIREC.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5E04 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400FE3B0 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x140101FA4 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1401027B4 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEA.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x14010B628 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_MEMORY_SEGMENT::TransferToSystem(
        VIDMM_MEMORY_SEGMENT *this,
        struct VIDMM_PARTITION ***a2,
        char a3,
        struct VIDMM_LOCAL_ALLOC *a4)
{
  __int64 v8; // r15
  unsigned __int16 v9; // ax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // ecx
  _DWORD *v14; // rdx
  char v15; // r13
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v17; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // r13d
  bool v30; // al
  unsigned __int64 v31; // rdx
  unsigned int v32; // r9d
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned int v35; // r8d
  VIDMM_GLOBAL *v36; // rcx
  unsigned int v37; // ebx
  unsigned __int64 v38; // rdx
  struct VIDMM_LOCAL_ALLOC *v39; // rbx
  void *v40; // rax
  char v41; // bl
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  struct VIDMM_LOCAL_ALLOC *v46; // rcx
  __int64 v47; // rbx
  _QWORD *v48; // rax
  void *v49; // r13
  void (*v50)(void *); // r8
  void *v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  bool v54; // [rsp+60h] [rbp-148h] BYREF
  _BYTE v55[3]; // [rsp+61h] [rbp-147h] BYREF
  unsigned int v56; // [rsp+64h] [rbp-144h]
  struct VIDMM_LOCAL_ALLOC *v57; // [rsp+68h] [rbp-140h] BYREF
  __int64 (__fastcall *v58)(struct _MDL *, struct _MDL *, void *); // [rsp+70h] [rbp-138h]
  int v59; // [rsp+78h] [rbp-130h]
  union _LARGE_INTEGER v60; // [rsp+80h] [rbp-128h] BYREF
  void *v61; // [rsp+88h] [rbp-120h] BYREF
  struct VIDMM_PARTITION ***v62; // [rsp+90h] [rbp-118h] BYREF
  void *v63; // [rsp+98h] [rbp-110h] BYREF
  size_t Size; // [rsp+A0h] [rbp-108h]
  __int64 v65; // [rsp+A8h] [rbp-100h] BYREF
  _QWORD v66[4]; // [rsp+B0h] [rbp-F8h] BYREF
  unsigned __int64 v67; // [rsp+D0h] [rbp-D8h]
  __int128 v68; // [rsp+D8h] [rbp-D0h]
  __int128 v69; // [rsp+E8h] [rbp-C0h]
  __int64 v70; // [rsp+F8h] [rbp-B0h]
  _DXGKARG_SETVIDEOPROTECTEDREGION v71; // [rsp+100h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+130h] [rbp-78h] BYREF

  v57 = a4;
  v66[3] = this;
  v62 = a2;
  v66[1] = a4;
  v8 = (__int64)*a2;
  v66[2] = *a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v54 = 0;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 3), (struct VIDMM_GLOBAL_ALLOC *)a2, 0);
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 41064LL) )
  {
    v9 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::RecordPageMappingHistory(v12, v9, v10, v11, 4, a2);
  }
  v13 = *((_DWORD *)a2 + 6);
  if ( (v13 & 0x100) != 0 || (*((_DWORD *)a2 + 7) & 0x800) != 0 )
    a3 = 0;
  v14 = a2[49];
  if ( (*v14 & 0x20000) != 0 && (*((_DWORD *)this + 26) & 0x40000) == 0 )
    *((_DWORD *)a2 + 6) = v13 | 0x200000;
  if ( (*v14 & 0x20000000) == 0 && (unsigned __int8)PsIsProcessCommitRelinquished(**((_QWORD **)a4 + 1)) )
    *((_DWORD *)a2 + 6) |= 0x200000u;
  v15 = 0;
  if ( ((_DWORD)a2[3] & 0x200000) == 0 )
    v15 = a3;
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 3)) )
  {
    WdLogSingleEntry1(4LL, a2);
    WdLogGlobalForLineNumber = 1428;
    v15 = 0;
  }
  if ( (VIDMM_GLOBAL::_Config & 8) == 0 && ((_DWORD)a2[4] & 8) != 0 )
    *((_BYTE *)a2 + 43) = 1;
  if ( v15 && ((_DWORD)a2[4] & 8) != 0 && !*((_BYTE *)a2 + 43) && a4 )
  {
    KeStackAttachProcess(**((PRKPROCESS **)a4 + 1), &ApcState);
    v63 = 0LL;
    v66[0] = VidMmMapViewOfAllocation(a4, 0LL, *(_QWORD *)(v8 + 16), &v63, 1);
    if ( v66[0] )
    {
      v65 = *(_QWORD *)(v8 + 16);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, __int64 *, int, int))VirtualMemoryInterface)(
              -1LL,
              v66,
              0LL,
              &v65,
              0x1000000,
              4);
      VidMmUnmapViewOfAllocation(v57, v63);
      if ( v17 < 0 )
      {
        *((_BYTE *)a2 + 43) = 1;
        IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
        v20 = *((_QWORD *)this + 3) + 7368LL;
      }
      else
      {
        IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
        v20 = *((_QWORD *)this + 3) + 7352LL;
      }
      v21 = *(_QWORD *)(v8 + 16);
      if ( IsEnabledDeviceUsageNoInline )
      {
        _InterlockedAdd((volatile signed __int32 *)v20, 1u);
        _InterlockedAdd64((volatile signed __int64 *)(v20 + 8), v21);
      }
      else
      {
        ++*(_DWORD *)v20;
        *(_QWORD *)(v20 + 8) += v21;
      }
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0pqqt_EtwWriteTransfer(v20, v21, v19, a2);
    }
    KeUnstackDetachProcess(&ApcState);
  }
  LOBYTE(v22) = *((_BYTE *)a2 + 43) != 0 ? v15 : 0;
  v23 = *((unsigned int *)a2 + 8);
  if ( (v23 & 8) == 0
    && (*((_DWORD *)a2 + 7) & 0x40000) != 0
    && (*((_BYTE *)a2 + 36) & 1) == 0
    && (v23 & 2) == 0
    && !*(_QWORD *)(v8 + 144) )
  {
    if ( ((_DWORD)a2[3] & 0x8000000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1546;
      DxgkLogInternalTriageEvent(v24, 0x40000LL);
    }
    if ( !(_BYTE)v22 )
    {
LABEL_50:
      if ( (*((_BYTE *)a2 + 36) & 1) == 0 )
        goto LABEL_61;
      goto LABEL_51;
    }
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 3), (struct VIDMM_GLOBAL_ALLOC *)a2);
  }
  if ( !(_BYTE)v22 || (*(_DWORD *)a2[49] & 0x8000000) == 0 )
    goto LABEL_50;
  if ( (*((_BYTE *)a2 + 36) & 1) == 0 )
  {
    if ( ((_DWORD)a2[4] & 2) == 0
      && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 3), *(_QWORD *)(v8 + 16)) >= 0 )
    {
      if ( (int)VIDMM_SEGMENT::LockAllocationBackingStore(this, (struct VIDMM_GLOBAL_ALLOC *)a2) < 0 )
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 3), *(_QWORD *)(v8 + 16));
      else
        *((_DWORD *)a2 + 8) |= 2u;
    }
    goto LABEL_50;
  }
LABEL_51:
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v23);
    WdLogGlobalForLineNumber = 1601;
  }
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v58 = 0LL;
  if ( (_BYTE)v22 )
  {
    VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResourcesForAllocation(
      *((VIDMM_PHYSICAL_ADAPTER **)this + 4),
      (struct VIDMM_PHYSICAL_ALLOC *)v8);
    *(_QWORD *)&v68 = a2;
    *((_QWORD *)&v68 + 1) = this;
    *(_QWORD *)&v69 = *(_QWORD *)(v8 + 72);
    DWORD2(v69) = 0;
    v58 = VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
    v22 = 2;
  }
  else
  {
    v22 = 3;
  }
  KeStackAttachProcess(**((PRKPROCESS **)v57 + 1), &ApcState);
  v25 = VIDMM_GLOBAL::Rotate(*((_QWORD *)this + 3), a2, v22);
  if ( v25 == -1073741558 )
  {
    *((_DWORD *)a2 + 6) |= 0x200000u;
LABEL_58:
    *((_BYTE *)a2 + 36) &= ~1u;
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_114;
  }
  if ( v25 >= 0 )
    goto LABEL_58;
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 4LL, v22, v25, 0LL);
  WdLogGlobalForLineNumber = 195;
LABEL_61:
  if ( (_BYTE)v22 )
  {
    if ( (int)VIDMM_MEMORY_SEGMENT::TransferMemory(
                this,
                (struct VIDMM_GLOBAL_ALLOC *)a2,
                DXGK_MEMORY_TRANSFER_LOCAL_TO_SYSTEM,
                *(struct VIDMM_SEGMENT **)(v8 + 64),
                *(union _LARGE_INTEGER *)(v8 + 72),
                &v54,
                0LL) < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v28);
        WdLogGlobalForLineNumber = 1718;
      }
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      v29 = 0;
      if ( (*(_DWORD *)a2[49] & 8) == 0 && v57 )
      {
        KeStackAttachProcess(**((PRKPROCESS **)v57 + 1), &ApcState);
        v29 = 1;
      }
      v59 = v29;
      v30 = Use64KbPagesForTransfer(v8, *(_QWORD *)(v8 + 64));
      v31 = *(_QWORD *)(v8 + 16);
      v32 = v30 ? 0x10000 : 4096;
      LODWORD(v58) = v32;
      v33 = v31 >> 12;
      v34 = v31 >> 16;
      if ( !v30 )
        v34 = (unsigned int)v33;
      v67 = v34;
      v60 = *(union _LARGE_INTEGER *)(v8 + 72);
      v35 = 0;
      while ( 1 )
      {
        v56 = v35;
        if ( v35 >= (unsigned int)v34 )
          break;
        v36 = (VIDMM_GLOBAL *)*((_QWORD *)this + 3);
        v37 = v35 * v32;
        Size = v32;
        VIDMM_GLOBAL::MemoryTransfer(
          v36,
          (struct VIDMM_GLOBAL_ALLOC *)a2,
          v32,
          v35 * v32,
          this,
          &v60,
          0LL,
          0LL,
          0LL,
          *((struct _MDL **)this + 38),
          0);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 3), (struct VIDMM_GLOBAL_ALLOC *)a2);
        v60.QuadPart += Size;
        v61 = 0LL;
        v38 = v37;
        v39 = v57;
        v40 = VidMmMapViewOfAllocation(v57, v38, Size, &v61, 0);
        if ( v40 )
        {
          memmove(v40, *((const void **)this + 37), Size);
          VidMmUnmapViewOfAllocation(v39, v61);
        }
        else
        {
          *((_DWORD *)a2 + 6) |= 0x200000u;
        }
        v35 = v56 + 1;
        LODWORD(v34) = v67;
        v32 = (unsigned int)v58;
      }
      if ( v29 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v23);
      WdLogGlobalForLineNumber = 1673;
    }
    if ( ((_DWORD)a2[3] & 0x100) == 0 )
    {
      v26 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v8 + 64));
      VIDMM_GLOBAL::DiscardAllocation(
        *((ADAPTER_RENDER ***)this + 3),
        (struct VIDMM_GLOBAL_ALLOC *)a2,
        v26,
        *(_QWORD *)(v8 + 72) + *(_QWORD *)(v27 + 48));
    }
  }
  if ( (*(_DWORD *)a2[49] & 0x20000) != 0 && *(_QWORD *)(v8 + 80) )
  {
    memset(&v71, 0, sizeof(v71));
    v71.PhysicalAdapterIndex = *((unsigned __int16 *)this + 210);
    v71.SegmentIndex = VIDMM_SEGMENT::DriverId(this);
    v41 = 1;
    if ( *((_DWORD *)this + 113) )
    {
      v41 = 0;
      v57 = 0LL;
      v62 = 0LL;
      v55[0] = 0;
      if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                           *((_QWORD *)this + 26),
                           *((_QWORD *)this + 57),
                           *((_QWORD *)this + 58),
                           0,
                           (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                           (__int64)this,
                           (__int64)&v57,
                           (__int64)&v62,
                           (__int64)v55) == -1073741823
        && v57 == *(struct VIDMM_LOCAL_ALLOC **)(v8 + 72) )
      {
        v42 = *((_QWORD *)this + 58);
        v43 = *(_QWORD *)(v8 + 80);
        v44 = *(_QWORD *)v43 + *(_QWORD *)(v43 + 8);
        if ( v44 >= v42 )
        {
LABEL_94:
          v44 = *((_QWORD *)this + 58);
        }
        else
        {
          while ( 1 )
          {
            v45 = *(_QWORD *)(v43 + 40);
            if ( v45 == *((_QWORD *)this + 26) + 80LL )
              break;
            v43 = v45 - 40;
            if ( *(_BYTE *)(v43 + 56) != 2 )
              break;
            v44 = *(_QWORD *)v43 + *(_QWORD *)(v43 + 8);
            if ( v44 >= v42 )
              goto LABEL_94;
          }
        }
        v46 = (struct VIDMM_LOCAL_ALLOC *)(v44 & ~*((_QWORD *)this + 55));
        v57 = v46;
        if ( (unsigned __int64)v46 > *((_QWORD *)this + 57) )
        {
          v71.CurrentStartOffset = *((_QWORD *)this + 57);
          v71.CurrentSize = *((_QWORD *)this + 59);
          v71.NewStartOffset = (SIZE_T)v46;
          v71.NewSize = v42 - (_QWORD)v46;
          *((_QWORD *)this + 59) = v42 - (_QWORD)v46;
          *((_QWORD *)this + 57) = v46;
          v41 = 1;
        }
      }
    }
    else
    {
      v71.CurrentStartOffset = *(_QWORD *)(v8 + 72);
      v71.CurrentSize = ~*((_QWORD *)this + 55) & (*((_QWORD *)this + 55) + *(_QWORD *)(v8 + 16));
    }
    if ( v41 )
    {
      v47 = operator new(104LL, 0x31356956u, 256LL);
      v48 = (_QWORD *)operator new(48LL, 0x38356956u, 256LL);
      v49 = v48;
      if ( v47 )
      {
        if ( v48 )
        {
          *(_QWORD *)(v47 + 16) = DeferredSetVprCallback;
          *(_QWORD *)(v47 + 32) = DeferredSetVprCompletionCallback;
          *(_DXGKARG_SETVIDEOPROTECTEDREGION *)(v47 + 56) = v71;
          *(_QWORD *)(v47 + 40) = *((_QWORD *)this + 3);
          *(_QWORD *)(v47 + 48) = v48;
          v48[2] = this;
          v48[3] = *(_QWORD *)(v8 + 80);
          v48[4] = *(_QWORD *)(v8 + 16);
          v48[5] = *a2[44];
          *(_QWORD *)(v47 + 24) = v47;
          VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(*((VIDMM_PHYSICAL_ADAPTER **)this + 4));
          VIDMM_GLOBAL::FlushPagingBuffer(*((VIDMM_GLOBAL **)this + 3), 0, v50, v51);
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
            *((VIDMM_LINEAR_POOL **)this + 26),
            *(void **)(v8 + 80),
            v71.CurrentStartOffset,
            v71.NewStartOffset);
          DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
            (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 3) + 41144LL),
            (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v47);
          *(_QWORD *)(v8 + 80) = 0LL;
          if ( *((_DWORD *)a2 + 18) != 1 )
          {
            VIDMM_SEGMENT::DecrementBytesCommitted(this, *a2[44], *(_QWORD *)(v8 + 16));
            --*((_DWORD *)this + 90);
          }
          goto LABEL_114;
        }
        operator delete((void *)v47);
      }
      if ( v49 )
        operator delete(v49);
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 3)
                                                                                            + 41144LL)) )
      {
        if ( (byte_140081241 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer();
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 3) + 41192LL), Executive, 0, 0, 0LL);
      }
      VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(*((VIDMM_PHYSICAL_ADAPTER **)this + 4));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 3), *((unsigned __int16 *)this + 210));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v71);
      if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 3128LL),
                  &v71) < 0
        && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
      }
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 3) + 24LL),
          v52,
          v53,
          v71.PhysicalAdapterIndex,
          v71.SegmentIndex,
          v71.VprIndex,
          v71.NewStartOffset,
          v71.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 3) + 24LL));
    }
  }
LABEL_114:
  *((_DWORD *)a2 + 6) &= ~0x8000000u;
  if ( v54 )
    VIDMM_PHYSICAL_ADAPTER::ReleaseTemporaryResourcesForAllocation(
      *((VIDMM_PHYSICAL_ADAPTER **)this + 4),
      (struct VIDMM_PHYSICAL_ALLOC *)v8);
}
