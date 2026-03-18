/*
 * XREFs of ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C1A1C
 * Callers:
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009EBB0 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C16A0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ @ 0x140036F6C (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x140044454 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x14004DAF0 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memmove @ 0x140056040 (memmove.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140090368 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     Use64KbPagesForTransfer @ 0x140091AE8 (Use64KbPagesForTransfer.c)
 *     ?ReclaimAllocationForVPRCallback@@YA_NPEAX0@Z @ 0x14009E860 (-ReclaimAllocationForVPRCallback@@YA_NPEAX0@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400ACE60 (-EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400AE7E4 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400B0558 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B1D24 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2B70 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400C2BA0 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C3430 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1400C37A0 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400C38B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1400C4210 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1400C4430 (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D76AC (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D7700 (-ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1400DA13C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1400E57A0 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIREC.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5E04 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FCAC8 (-VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferToSegment(
        VIDMM_MEMORY_SEGMENT *this,
        struct VIDMM_LOCAL_ALLOC **a2,
        struct _MDL *a3,
        bool a4)
{
  __int64 v6; // r15
  VIDMM_GLOBAL *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r12
  VIDMM_SEGMENT *v10; // rcx
  int v11; // eax
  unsigned __int16 v12; // ax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  bool v19; // al
  unsigned __int64 v20; // r8
  unsigned int v21; // edx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned int v24; // eax
  const void *v25; // rax
  struct VIDMM_LOCAL_ALLOC *v26; // rbx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rcx
  unsigned __int16 v31; // ax
  struct VIDMM_LOCAL_ALLOC *v32; // rdx
  __int64 v33; // rcx
  void (*v34)(void *); // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rax
  struct VIDMM_LOCAL_ALLOC *v38; // r11
  struct VIDMM_GLOBAL_ALLOC *v39; // r10
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rbx
  __int64 *v43; // rdx
  __int64 v44; // r9
  void (*v45)(void *); // r8
  SIZE_T v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r8
  _QWORD *v49; // rax
  bool v50; // [rsp+60h] [rbp-138h] BYREF
  bool v51; // [rsp+61h] [rbp-137h] BYREF
  struct VIDMM_LOCAL_ALLOC *v52; // [rsp+68h] [rbp-130h]
  unsigned int v53; // [rsp+70h] [rbp-128h]
  unsigned int v54; // [rsp+74h] [rbp-124h]
  struct _MDL *v55; // [rsp+78h] [rbp-120h]
  int v56; // [rsp+80h] [rbp-118h]
  int v57; // [rsp+88h] [rbp-110h]
  union _LARGE_INTEGER v58; // [rsp+90h] [rbp-108h] BYREF
  SIZE_T v59; // [rsp+98h] [rbp-100h]
  struct VIDMM_LOCAL_ALLOC *v60; // [rsp+A0h] [rbp-F8h]
  struct VIDMM_GLOBAL_ALLOC *v61; // [rsp+A8h] [rbp-F0h]
  void *v62; // [rsp+B0h] [rbp-E8h] BYREF
  size_t Size; // [rsp+B8h] [rbp-E0h]
  VIDMM_MEMORY_SEGMENT *v64; // [rsp+C0h] [rbp-D8h]
  _QWORD v65[3]; // [rsp+C8h] [rbp-D0h] BYREF
  int v66; // [rsp+E0h] [rbp-B8h]
  __int64 v67; // [rsp+E4h] [rbp-B4h]
  int v68; // [rsp+ECh] [rbp-ACh]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-A8h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v70; // [rsp+120h] [rbp-78h] BYREF

  v51 = a4;
  v55 = a3;
  v64 = this;
  v61 = (struct VIDMM_GLOBAL_ALLOC *)a2;
  v6 = (__int64)*a2;
  v59 = (SIZE_T)*a2;
  v56 = 0;
  v50 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v52 = a2[6];
  v60 = v52;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 3), (struct VIDMM_GLOBAL_ALLOC *)a2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 3)) )
  {
    LODWORD(v9) = -1073741130;
    if ( !v51 )
    {
      WdLogSingleEntry1(4LL, a2);
      WdLogGlobalForLineNumber = 604;
      return (unsigned int)v9;
    }
    goto LABEL_10;
  }
  LODWORD(v9) = -1073741823;
  if ( *((_BYTE *)a2 + 40) )
  {
    v26 = v52;
    if ( *((int *)a2 + 47) > 0 )
    {
      VIDMM_GLOBAL::UnlockAllocation(v7, v52, 0LL, *(_QWORD *)(v6 + 16), 0, 0);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 3), *(_QWORD *)(v6 + 16));
      *((_DWORD *)a2 + 8) &= ~2u;
      VidMmiRemoveProbeAndLockReference((struct VIDMM_GLOBAL_ALLOC *)a2);
    }
    v67 = 0LL;
    v68 = 0;
    v65[1] = this;
    v65[2] = *(_QWORD *)(v6 + 96);
    v65[0] = a2;
    v66 = 0;
    KeStackAttachProcess(**((PRKPROCESS **)v26 + 1), &ApcState);
    VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResourcesForAllocation(
      *((VIDMM_PHYSICAL_ADAPTER **)this + 4),
      (struct VIDMM_PHYSICAL_ALLOC *)v6);
    v27 = (*(__int64 (__fastcall **)(struct VIDMM_LOCAL_ALLOC *, _QWORD, struct VIDMM_LOCAL_ALLOC *, _QWORD, struct _MDL *, _QWORD, __int64 (__fastcall *)(struct _MDL *, struct _MDL *, void *), _QWORD *, unsigned int))(*(_QWORD *)a2[30] + 48LL))(
            a2[30],
            *((_QWORD *)this + 3),
            a2[31],
            0LL,
            v55,
            *(_QWORD *)(v6 + 16),
            VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback,
            v65,
            2 * (unsigned int)v51);
    v9 = v27;
    if ( v27 >= 0 )
    {
      v28 = *(_QWORD *)(v6 + 64);
      if ( !v28 )
        v28 = *(_QWORD *)(v6 + 104);
      _InterlockedAdd((volatile signed __int32 *)(v28 + 560), 1u);
    }
    KeUnstackDetachProcess(&ApcState);
    if ( v51 )
    {
      if ( (int)v9 >= 0 )
        goto LABEL_54;
      *((_DWORD *)a2 + 6) |= 0x200000u;
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 3),
        (struct VIDMM_GLOBAL_ALLOC *)a2,
        *(_QWORD *)(v6 + 16),
        v29,
        *(struct VIDMM_SEGMENT **)(v6 + 104),
        (union _LARGE_INTEGER *)(v6 + 96));
    }
    else
    {
      if ( (int)v9 < 0 )
      {
        WdLogSingleEntry1(1LL, v9);
        WdLogGlobalForLineNumber = 726;
LABEL_60:
        DxgkLogInternalTriageEvent(v30, 0x40000LL);
        return (unsigned int)v9;
      }
      LODWORD(v9) = 0;
    }
    if ( (int)v9 < 0 )
    {
LABEL_55:
      *((_BYTE *)a2 + 43) = 1;
      v50 = 1;
      goto LABEL_10;
    }
LABEL_54:
    *((_BYTE *)a2 + 36) |= 1u;
    goto LABEL_55;
  }
  if ( !*((_BYTE *)a2 + 42) )
  {
    if ( a2[31] )
      (*(void (__fastcall **)(struct VIDMM_LOCAL_ALLOC *))(*(_QWORD *)a2[30] + 136LL))(a2[30]);
    if ( ((_DWORD)a2[3] & 0x100) == 0 && (*((_DWORD *)a2 + 7) & 0x1000) == 0 )
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 3),
        (struct VIDMM_GLOBAL_ALLOC *)a2,
        *(_QWORD *)(v6 + 16),
        v8,
        this,
        (union _LARGE_INTEGER *)(v6 + 96));
    LODWORD(v9) = 0;
    v50 = 1;
  }
  if ( (int)v9 < 0 )
  {
    v51 = 0;
    LODWORD(v9) = VIDMM_MEMORY_SEGMENT::TransferMemory(
                    this,
                    (struct VIDMM_GLOBAL_ALLOC *)a2,
                    DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL,
                    *(struct VIDMM_SEGMENT **)(v6 + 104),
                    *(union _LARGE_INTEGER *)(v6 + 96),
                    &v51,
                    &v50);
    if ( v51 )
      VIDMM_PHYSICAL_ADAPTER::ReleaseTemporaryResourcesForAllocation(
        *((VIDMM_PHYSICAL_ADAPTER **)this + 4),
        (struct VIDMM_PHYSICAL_ALLOC *)v6);
    if ( (int)v9 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v18);
        WdLogGlobalForLineNumber = 828;
      }
      LODWORD(v9) = 0;
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      if ( (*(_DWORD *)a2[49] & 8) == 0 )
        KeStackAttachProcess(**((PRKPROCESS **)v52 + 1), &ApcState);
      v19 = Use64KbPagesForTransfer(v6, *(_QWORD *)(v6 + 104));
      v20 = *(_QWORD *)(v6 + 16);
      v21 = v19 ? 0x10000 : 4096;
      v53 = v21;
      v22 = v20 >> 12;
      v23 = v20 >> 16;
      if ( !v19 )
        v23 = (unsigned int)v22;
      v55 = (struct _MDL *)v23;
      v57 = v23;
      v58 = *(union _LARGE_INTEGER *)(v6 + 96);
      v24 = 0;
      while ( 1 )
      {
        v54 = v24;
        if ( v24 >= (unsigned int)v23 )
          break;
        v62 = 0LL;
        Size = v21;
        v25 = VidMmMapViewOfAllocation(v52, v24 * v21, v21, &v62, 0);
        if ( v25 )
        {
          memmove(*((void **)this + 37), v25, Size);
          VidMmUnmapViewOfAllocation(v52, v62);
        }
        else
        {
          *((_DWORD *)a2 + 6) |= 0x200000u;
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 3),
          (struct VIDMM_GLOBAL_ALLOC *)a2,
          v53,
          v53 * v54,
          0LL,
          0LL,
          *((struct _MDL **)this + 38),
          this,
          &v58,
          0LL,
          0);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 3), (struct VIDMM_GLOBAL_ALLOC *)a2);
        v21 = v53;
        v58.QuadPart += v53;
        v24 = v54 + 1;
        LODWORD(v23) = (_DWORD)v55;
      }
      v50 = 1;
      if ( (*(_DWORD *)a2[49] & 8) == 0 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( (*(_DWORD *)a2[49] & 0x20000) == 0 )
    goto LABEL_10;
  v52 = *(struct VIDMM_LOCAL_ALLOC **)(v6 + 16);
  memset(&v70, 0, sizeof(v70));
  v70.PhysicalAdapterIndex = *((unsigned __int16 *)this + 210);
  v31 = VIDMM_SEGMENT::DriverId(this);
  v33 = v31;
  v70.SegmentIndex = v31;
  if ( *((_DWORD *)this + 113) )
  {
    v59 = ~*((_QWORD *)this + 55) & *(_QWORD *)(v6 + 96);
    if ( v59 < *((_QWORD *)this + 57) )
    {
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 3)
                                                                                            + 41144LL)) )
      {
        if ( (byte_140081241 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer();
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 3) + 41192LL), Executive, 0, 0, 0LL);
      }
      VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(this, (struct VIDMM_GLOBAL_ALLOC *)a2);
      v37 = *((_QWORD *)this + 55);
      v38 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)this + 57);
      v60 = v38;
      v39 = (struct VIDMM_LOCAL_ALLOC *)((char *)v38 - (~v37 & (v37 + *(_QWORD *)(v6 + 16))));
      v61 = v39;
      v40 = *((_QWORD *)this + 26);
      v41 = *(_QWORD *)(v40 + 88);
      v42 = v40 + 80;
      while ( v41 != v42 )
      {
        v43 = (__int64 *)(v41 - 40);
        v41 = *(_QWORD *)(v41 + 8);
        v44 = *v43;
        if ( *v43 >= (unsigned __int64)v38 || v44 + v43[1] <= (unsigned __int64)v39 )
        {
          if ( v44 + v43[1] <= (unsigned __int64)v39 )
            break;
        }
        else if ( *((_BYTE *)v43 + 56) == 4 )
        {
          if ( !ReclaimAllocationForVPRCallback(0LL, (struct VIDMM_PHYSICAL_ALLOC *)v43[2]) )
            break;
          v39 = v61;
          v38 = v60;
        }
      }
      VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(*((VIDMM_PHYSICAL_ADAPTER **)this + 4));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 3), *((unsigned __int16 *)this + 210), v45);
      v70.CurrentStartOffset = *((_QWORD *)this + 57);
      v70.CurrentSize = *((_QWORD *)this + 59);
      v46 = v59;
      v70.NewStartOffset = v59;
      v70.NewSize = *((_QWORD *)this + 58) - v59;
      *((_QWORD *)this + 59) = v70.NewSize;
      *((_QWORD *)this + 57) = v46;
      LODWORD(v9) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                      *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 3128LL),
                      &v70);
      if ( (int)v9 < 0 && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
      }
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 3) + 24LL),
          v47,
          v48,
          v70.PhysicalAdapterIndex,
          v70.SegmentIndex,
          v70.VprIndex,
          v70.NewStartOffset,
          v70.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 3) + 24LL));
      v32 = v52;
    }
    if ( (int)v9 < 0 )
      goto LABEL_59;
    *((_DWORD *)a2 + 7) |= 0x400u;
    *((_QWORD *)this + 60) += v32;
    if ( g_IsInternalReleaseOrDbg )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v33);
      v49[3] = v52;
      v49[4] = *((_QWORD *)this + 60);
      v49[5] = a2;
      WdLogGlobalForLineNumber = 1065;
    }
  }
  else
  {
    if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 3)
                                                                                          + 41144LL)) )
    {
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 3) + 41192LL), Executive, 0, 0, 0LL);
    }
    VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(*((VIDMM_PHYSICAL_ADAPTER **)this + 4));
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 3), *((unsigned __int16 *)this + 210), v34);
    v70.NewStartOffset = *(_QWORD *)(v6 + 96);
    v70.NewSize = (SIZE_T)v52;
    LODWORD(v9) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                    *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 3128LL),
                    &v70);
    if ( (int)v9 < 0 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0qqqxxp_EtwWriteTransfer(
        *(_QWORD *)(*((_QWORD *)this + 3) + 24LL),
        v35,
        v36,
        v70.PhysicalAdapterIndex,
        v70.SegmentIndex,
        v70.VprIndex,
        v70.NewStartOffset,
        v70.NewSize,
        *(_QWORD *)(*((_QWORD *)this + 3) + 24LL));
  }
  if ( (int)v9 < 0 )
  {
LABEL_59:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1071;
    goto LABEL_60;
  }
LABEL_10:
  v10 = *(VIDMM_SEGMENT **)(v6 + 104);
  *(_QWORD *)(v6 + 64) = v10;
  *(_QWORD *)(v6 + 72) = *(_QWORD *)(v6 + 96);
  *((_WORD *)a2[49] + 5) = VIDMM_SEGMENT::DriverId(v10);
  *((_QWORD *)a2[49] + 5) = *(_QWORD *)(v6 + 72) + *(_QWORD *)(*(_QWORD *)(v6 + 64) + 48LL);
  *(_QWORD *)(v6 + 104) = 0LL;
  v11 = *((_DWORD *)a2 + 8);
  if ( (v11 & 2) != 0 )
  {
    VIDMM_SEGMENT::UnlockAllocationBackingStore(
      *((struct VIDMM_GLOBAL **)this + 3),
      (struct VIDMM_GLOBAL_ALLOC *)a2,
      0LL);
    VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 3), *(_QWORD *)(v6 + 16));
    *((_DWORD *)a2 + 8) &= ~2u;
    v11 = *((_DWORD *)a2 + 8);
  }
  if ( v50 && (v11 & 8) == 0 && !*(_QWORD *)(v6 + 144) )
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 3), (struct VIDMM_GLOBAL_ALLOC *)a2);
  if ( (*(_DWORD *)a2[49] & 0x10000) != 0 )
  {
    v17 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::NotifyResidency(
      *((ADAPTER_RENDER ***)this + 3),
      (struct VIDMM_GLOBAL_ALLOC *)a2,
      1u,
      v17,
      *(_QWORD *)(v6 + 72));
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 41064LL) )
  {
    v12 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::RecordPageMappingHistory(v15, v12, v13, v14, 3, a2);
  }
  return (unsigned int)v9;
}
