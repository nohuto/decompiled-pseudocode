/*
 * XREFs of ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400A9D88
 * Callers:
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009D460 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AA9F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ @ 0x1400382FC (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x14003F394 (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x140046284 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x14004E184 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x14004F1A8 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140056480 (memmove.c)
 *     Use64KbPagesForTransfer @ 0x140091B10 (Use64KbPagesForTransfer.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x14009C764 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A79DC (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1400A88F0 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIREC.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A9564 (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A9808 (-ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1400ACA84 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400BB478 (-EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@G_K@Z @ 0x1400BBD68 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@G_K@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2210 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400C2240 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2360 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2ADC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1400C2E50 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400C2F6C (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1400C39D4 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1400C3BF4 (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400D5A74 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400FE430 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x140103044 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140103C94 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEA.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x14010D890 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
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
  __int64 v10; // r10
  int v11; // ecx
  _DWORD *v12; // rdx
  char v13; // r13
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v15; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  unsigned __int16 v24; // ax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // r13d
  bool v28; // al
  unsigned __int64 v29; // rdx
  unsigned int v30; // r9d
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned int v33; // r8d
  VIDMM_GLOBAL *v34; // rcx
  unsigned int v35; // ebx
  unsigned __int64 v36; // rdx
  struct VIDMM_LOCAL_ALLOC *v37; // rbx
  void *v38; // rax
  char v39; // bl
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  struct VIDMM_LOCAL_ALLOC *v44; // rcx
  __int64 v45; // rbx
  _QWORD *v46; // rax
  void *v47; // r13
  void (*v48)(void *); // r8
  void *v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  union _LARGE_INTEGER *v52; // [rsp+28h] [rbp-180h]
  bool v53; // [rsp+60h] [rbp-148h] BYREF
  _BYTE v54[3]; // [rsp+61h] [rbp-147h] BYREF
  unsigned int v55; // [rsp+64h] [rbp-144h]
  struct VIDMM_LOCAL_ALLOC *v56; // [rsp+68h] [rbp-140h] BYREF
  __int64 (__fastcall *v57)(struct _MDL *, struct _MDL *, char *); // [rsp+70h] [rbp-138h]
  int v58; // [rsp+78h] [rbp-130h]
  union _LARGE_INTEGER v59; // [rsp+80h] [rbp-128h] BYREF
  void *v60; // [rsp+88h] [rbp-120h] BYREF
  struct VIDMM_PARTITION ***v61; // [rsp+90h] [rbp-118h] BYREF
  void *v62; // [rsp+98h] [rbp-110h] BYREF
  size_t Size; // [rsp+A0h] [rbp-108h]
  __int64 v64; // [rsp+A8h] [rbp-100h] BYREF
  _QWORD v65[4]; // [rsp+B0h] [rbp-F8h] BYREF
  unsigned __int64 v66; // [rsp+D0h] [rbp-D8h]
  __int128 v67; // [rsp+D8h] [rbp-D0h]
  __int128 v68; // [rsp+E8h] [rbp-C0h]
  __int64 v69; // [rsp+F8h] [rbp-B0h]
  _DXGKARG_SETVIDEOPROTECTEDREGION v70; // [rsp+100h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+130h] [rbp-78h] BYREF

  v56 = a4;
  v65[3] = this;
  v61 = a2;
  v65[1] = a4;
  v8 = (__int64)*a2;
  v65[2] = *a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v53 = 0;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 3), (struct VIDMM_GLOBAL_ALLOC *)a2, 0);
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 41064LL) )
  {
    v9 = VIDMM_SEGMENT::DriverId(this);
    HIDWORD(v52) = HIDWORD(a2);
    VIDMM_GLOBAL::RecordPageMappingHistory(v10, v9);
  }
  v11 = *((_DWORD *)a2 + 6);
  if ( (v11 & 0x100) != 0 || (*((_DWORD *)a2 + 7) & 0x800) != 0 )
    a3 = 0;
  v12 = a2[47];
  if ( (*v12 & 0x20000) != 0 && (*((_DWORD *)this + 26) & 0x40000) == 0 )
    *((_DWORD *)a2 + 6) = v11 | 0x200000;
  if ( (*v12 & 0x20000000) == 0 && (unsigned __int8)PsIsProcessCommitRelinquished(**((_QWORD **)a4 + 1)) )
    *((_DWORD *)a2 + 6) |= 0x200000u;
  v13 = 0;
  if ( ((_DWORD)a2[3] & 0x200000) == 0 )
    v13 = a3;
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 3)) )
  {
    WdLogSingleEntry1(4LL, a2);
    WdLogGlobalForLineNumber = 1428;
    v13 = 0;
  }
  if ( (VIDMM_GLOBAL::_Config & 8) == 0 && ((_DWORD)a2[4] & 8) != 0 )
    *((_BYTE *)a2 + 43) = 1;
  if ( v13 && ((_DWORD)a2[4] & 8) != 0 && !*((_BYTE *)a2 + 43) && a4 )
  {
    KeStackAttachProcess(**((PRKPROCESS **)a4 + 1), &ApcState);
    v62 = 0LL;
    v65[0] = VidMmMapViewOfAllocation(a4, 0LL, *(_QWORD *)(v8 + 16), &v62, 1);
    if ( v65[0] )
    {
      v64 = *(_QWORD *)(v8 + 16);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      LODWORD(v52) = 4;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, __int64 *, int, union _LARGE_INTEGER *))VirtualMemoryInterface)(
              -1LL,
              v65,
              0LL,
              &v64,
              0x1000000,
              v52);
      VidMmUnmapViewOfAllocation(v56, v62);
      if ( v15 < 0 )
      {
        *((_BYTE *)a2 + 43) = 1;
        IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
        v18 = *((_QWORD *)this + 3) + 7368LL;
      }
      else
      {
        IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
        v18 = *((_QWORD *)this + 3) + 7352LL;
      }
      v19 = *(_QWORD *)(v8 + 16);
      if ( IsEnabledDeviceUsageNoInline )
      {
        _InterlockedAdd((volatile signed __int32 *)v18, 1u);
        _InterlockedAdd64((volatile signed __int64 *)(v18 + 8), v19);
      }
      else
      {
        ++*(_DWORD *)v18;
        *(_QWORD *)(v18 + 8) += v19;
      }
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0pqqt_EtwWriteTransfer(v18, v19, v17, a2);
    }
    KeUnstackDetachProcess(&ApcState);
  }
  LOBYTE(v20) = *((_BYTE *)a2 + 43) != 0 ? v13 : 0;
  v21 = *((unsigned int *)a2 + 8);
  if ( (v21 & 8) == 0
    && (*((_DWORD *)a2 + 7) & 0x40000) != 0
    && (*((_BYTE *)a2 + 36) & 1) == 0
    && (v21 & 2) == 0
    && !*(_QWORD *)(v8 + 144) )
  {
    if ( ((_DWORD)a2[3] & 0x8000000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1546;
      DxgkLogInternalTriageEvent(v22, 0x40000LL);
    }
    if ( !(_BYTE)v20 )
    {
LABEL_50:
      if ( (*((_BYTE *)a2 + 36) & 1) == 0 )
        goto LABEL_61;
      goto LABEL_51;
    }
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 3), (struct VIDMM_GLOBAL_ALLOC *)a2);
  }
  if ( !(_BYTE)v20 || (*(_DWORD *)a2[47] & 0x8000000) == 0 )
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
    WdLogNewEntry5_WdTrace(v21);
    WdLogGlobalForLineNumber = 1601;
  }
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v57 = 0LL;
  if ( (_BYTE)v20 )
  {
    VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResourcesForAllocation(
      *((VIDMM_PHYSICAL_ADAPTER **)this + 4),
      (struct VIDMM_PHYSICAL_ALLOC *)v8);
    *(_QWORD *)&v67 = a2;
    *((_QWORD *)&v67 + 1) = this;
    *(_QWORD *)&v68 = *(_QWORD *)(v8 + 72);
    DWORD2(v68) = 0;
    v57 = VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
    v20 = 2;
  }
  else
  {
    v20 = 3;
  }
  KeStackAttachProcess(**((PRKPROCESS **)v56 + 1), &ApcState);
  v23 = VIDMM_GLOBAL::Rotate(*((_QWORD *)this + 3), a2, v20);
  if ( v23 == -1073741558 )
  {
    *((_DWORD *)a2 + 6) |= 0x200000u;
LABEL_58:
    *((_BYTE *)a2 + 36) &= ~1u;
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_114;
  }
  if ( v23 >= 0 )
    goto LABEL_58;
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 4LL, v20, v23, 0LL);
  WdLogGlobalForLineNumber = 195;
LABEL_61:
  if ( (_BYTE)v20 )
  {
    if ( (int)VIDMM_MEMORY_SEGMENT::TransferMemory(
                (VIDMM_PHYSICAL_ADAPTER **)this,
                (struct VIDMM_GLOBAL_ALLOC *)a2,
                DXGK_MEMORY_TRANSFER_LOCAL_TO_SYSTEM,
                *(struct VIDMM_SEGMENT **)(v8 + 64),
                *(union _LARGE_INTEGER *)(v8 + 72),
                &v53,
                0LL) < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v26);
        WdLogGlobalForLineNumber = 1718;
      }
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      v27 = 0;
      if ( (*(_DWORD *)a2[47] & 8) == 0 && v56 )
      {
        KeStackAttachProcess(**((PRKPROCESS **)v56 + 1), &ApcState);
        v27 = 1;
      }
      v58 = v27;
      v28 = Use64KbPagesForTransfer(v8, *(_QWORD *)(v8 + 64));
      v29 = *(_QWORD *)(v8 + 16);
      v30 = v28 ? 0x10000 : 4096;
      LODWORD(v57) = v30;
      v31 = v29 >> 12;
      v32 = v29 >> 16;
      if ( !v28 )
        v32 = (unsigned int)v31;
      v66 = v32;
      v59 = *(union _LARGE_INTEGER *)(v8 + 72);
      v33 = 0;
      while ( 1 )
      {
        v55 = v33;
        if ( v33 >= (unsigned int)v32 )
          break;
        v34 = (VIDMM_GLOBAL *)*((_QWORD *)this + 3);
        v35 = v33 * v30;
        Size = v30;
        VIDMM_GLOBAL::MemoryTransfer(
          v34,
          (struct VIDMM_GLOBAL_ALLOC *)a2,
          v30,
          v33 * v30,
          this,
          &v59,
          0LL,
          0LL,
          0LL,
          *((struct _MDL **)this + 38),
          0);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 3), (struct VIDMM_GLOBAL_ALLOC *)a2);
        v59.QuadPart += Size;
        v60 = 0LL;
        v36 = v35;
        v37 = v56;
        v38 = VidMmMapViewOfAllocation(v56, v36, Size, &v60, 0);
        if ( v38 )
        {
          memmove(v38, *((const void **)this + 37), Size);
          VidMmUnmapViewOfAllocation(v37, v60);
        }
        else
        {
          *((_DWORD *)a2 + 6) |= 0x200000u;
        }
        v33 = v55 + 1;
        LODWORD(v32) = v66;
        v30 = (unsigned int)v57;
      }
      if ( v27 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v21);
      WdLogGlobalForLineNumber = 1673;
    }
    if ( ((_DWORD)a2[3] & 0x100) == 0 )
    {
      v24 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v8 + 64));
      VIDMM_GLOBAL::DiscardAllocation(
        *((VIDMM_GLOBAL **)this + 3),
        (struct VIDMM_GLOBAL_ALLOC *)a2,
        v24,
        *(_QWORD *)(v8 + 72) + *(_QWORD *)(v25 + 48));
    }
  }
  if ( (*(_DWORD *)a2[47] & 0x20000) != 0 && *(_QWORD *)(v8 + 80) )
  {
    memset(&v70, 0, sizeof(v70));
    v70.PhysicalAdapterIndex = *((unsigned __int16 *)this + 210);
    v70.SegmentIndex = VIDMM_SEGMENT::DriverId(this);
    v39 = 1;
    if ( *((_DWORD *)this + 113) )
    {
      v39 = 0;
      v56 = 0LL;
      v61 = 0LL;
      v54[0] = 0;
      if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                           *((_QWORD *)this + 26),
                           *((_QWORD *)this + 57),
                           *((_QWORD *)this + 58),
                           0,
                           (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                           (__int64)this,
                           (__int64)&v56,
                           (__int64)&v61,
                           (__int64)v54) == -1073741823
        && v56 == *(struct VIDMM_LOCAL_ALLOC **)(v8 + 72) )
      {
        v40 = *((_QWORD *)this + 58);
        v41 = *(_QWORD *)(v8 + 80);
        v42 = *(_QWORD *)v41 + *(_QWORD *)(v41 + 8);
        if ( v42 >= v40 )
        {
LABEL_94:
          v42 = *((_QWORD *)this + 58);
        }
        else
        {
          while ( 1 )
          {
            v43 = *(_QWORD *)(v41 + 40);
            if ( v43 == *((_QWORD *)this + 26) + 80LL )
              break;
            v41 = v43 - 40;
            if ( *(_BYTE *)(v41 + 56) != 2 )
              break;
            v42 = *(_QWORD *)v41 + *(_QWORD *)(v41 + 8);
            if ( v42 >= v40 )
              goto LABEL_94;
          }
        }
        v44 = (struct VIDMM_LOCAL_ALLOC *)(v42 & ~*((_QWORD *)this + 55));
        v56 = v44;
        if ( (unsigned __int64)v44 > *((_QWORD *)this + 57) )
        {
          v70.CurrentStartOffset = *((_QWORD *)this + 57);
          v70.CurrentSize = *((_QWORD *)this + 59);
          v70.NewStartOffset = (SIZE_T)v44;
          v70.NewSize = v40 - (_QWORD)v44;
          *((_QWORD *)this + 59) = v40 - (_QWORD)v44;
          *((_QWORD *)this + 57) = v44;
          v39 = 1;
        }
      }
    }
    else
    {
      v70.CurrentStartOffset = *(_QWORD *)(v8 + 72);
      v70.CurrentSize = ~*((_QWORD *)this + 55) & (*((_QWORD *)this + 55) + *(_QWORD *)(v8 + 16));
    }
    if ( v39 )
    {
      v45 = operator new(104LL, 0x31356956u, 256LL);
      v46 = (_QWORD *)operator new(48LL, 0x38356956u, 256LL);
      v47 = v46;
      if ( v45 )
      {
        if ( v46 )
        {
          *(_QWORD *)(v45 + 16) = DeferredSetVprCallback;
          *(_QWORD *)(v45 + 32) = DeferredSetVprCompletionCallback;
          *(_DXGKARG_SETVIDEOPROTECTEDREGION *)(v45 + 56) = v70;
          *(_QWORD *)(v45 + 40) = *((_QWORD *)this + 3);
          *(_QWORD *)(v45 + 48) = v46;
          v46[2] = this;
          v46[3] = *(_QWORD *)(v8 + 80);
          v46[4] = *(_QWORD *)(v8 + 16);
          v46[5] = *a2[42];
          *(_QWORD *)(v45 + 24) = v45;
          VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(*((VIDMM_PHYSICAL_ADAPTER **)this + 4));
          VIDMM_GLOBAL::FlushPagingBuffer(*((VIDMM_GLOBAL **)this + 3), 0, v48, v49);
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
            *((VIDMM_LINEAR_POOL **)this + 26),
            *(void **)(v8 + 80),
            v70.CurrentStartOffset,
            v70.NewStartOffset);
          DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
            (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 3) + 41144LL),
            (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v45);
          *(_QWORD *)(v8 + 80) = 0LL;
          if ( *((_DWORD *)a2 + 18) != 1 )
          {
            VIDMM_SEGMENT::DecrementBytesCommitted(this, *a2[42], *(_QWORD *)(v8 + 16));
            --*((_DWORD *)this + 90);
          }
          goto LABEL_114;
        }
        operator delete((void *)v45);
      }
      if ( v47 )
        operator delete(v47);
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 3)
                                                                                            + 41144LL)) )
      {
        if ( (byte_140081241 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer();
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 3) + 41192LL), Executive, 0, 0, 0LL);
      }
      VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(*((VIDMM_PHYSICAL_ADAPTER **)this + 4));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 3), *((unsigned __int16 *)this + 210));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v70);
      if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 3128LL),
                  &v70) < 0
        && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
      }
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 3) + 24LL),
          v50,
          v51,
          v70.PhysicalAdapterIndex,
          v70.SegmentIndex,
          v70.VprIndex,
          v70.NewStartOffset,
          v70.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 3) + 24LL));
    }
  }
LABEL_114:
  *((_DWORD *)a2 + 6) &= ~0x8000000u;
  if ( v53 )
    VIDMM_PHYSICAL_ADAPTER::ReleaseTemporaryResourcesForAllocation(
      *((VIDMM_GLOBAL ***)this + 4),
      (struct VIDMM_PHYSICAL_ALLOC *)v8);
}
