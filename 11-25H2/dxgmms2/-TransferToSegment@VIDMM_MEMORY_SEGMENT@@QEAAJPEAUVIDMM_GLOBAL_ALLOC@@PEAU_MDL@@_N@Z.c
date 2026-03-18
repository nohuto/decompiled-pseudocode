/*
 * XREFs of ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C10BC
 * Callers:
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009D300 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0D40 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ @ 0x1400382FC (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x140046284 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x14004E184 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140056480 (memmove.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140090370 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     Use64KbPagesForTransfer @ 0x140091B10 (Use64KbPagesForTransfer.c)
 *     ?ReclaimAllocationForVPRCallback@@YA_NPEAX0@Z @ 0x14009CFB0 (-ReclaimAllocationForVPRCallback@@YA_NPEAX0@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A79DC (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1400A88F0 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIREC.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A9564 (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A9714 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A9808 (-ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400BB478 (-EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400BD198 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400BEF44 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2210 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400C2240 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2ADC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1400C2E50 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400C2F6C (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1400C39D4 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1400C3BF4 (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1400E604C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FCD88 (-VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
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
  __int64 v13; // r10
  unsigned __int16 v15; // ax
  __int64 v16; // rcx
  bool v17; // al
  unsigned __int64 v18; // r8
  unsigned int v19; // edx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned int v22; // eax
  const void *v23; // rax
  struct VIDMM_LOCAL_ALLOC *v24; // rbx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned __int16 v29; // ax
  struct VIDMM_LOCAL_ALLOC *v30; // rdx
  __int64 v31; // rcx
  void (*v32)(void *); // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  struct VIDMM_LOCAL_ALLOC *v36; // r11
  struct VIDMM_GLOBAL_ALLOC *v37; // r10
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rbx
  __int64 *v41; // rdx
  __int64 v42; // r9
  void (*v43)(void *); // r8
  SIZE_T v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  _QWORD *v47; // rax
  bool v48; // [rsp+60h] [rbp-138h] BYREF
  bool v49; // [rsp+61h] [rbp-137h] BYREF
  struct VIDMM_LOCAL_ALLOC *v50; // [rsp+68h] [rbp-130h]
  unsigned int v51; // [rsp+70h] [rbp-128h]
  unsigned int v52; // [rsp+74h] [rbp-124h]
  struct _MDL *v53; // [rsp+78h] [rbp-120h]
  int v54; // [rsp+80h] [rbp-118h]
  int v55; // [rsp+88h] [rbp-110h]
  union _LARGE_INTEGER v56; // [rsp+90h] [rbp-108h] BYREF
  SIZE_T v57; // [rsp+98h] [rbp-100h]
  struct VIDMM_LOCAL_ALLOC *v58; // [rsp+A0h] [rbp-F8h]
  struct VIDMM_GLOBAL_ALLOC *v59; // [rsp+A8h] [rbp-F0h]
  void *v60; // [rsp+B0h] [rbp-E8h] BYREF
  size_t Size; // [rsp+B8h] [rbp-E0h]
  VIDMM_MEMORY_SEGMENT *v62; // [rsp+C0h] [rbp-D8h]
  _QWORD v63[3]; // [rsp+C8h] [rbp-D0h] BYREF
  int v64; // [rsp+E0h] [rbp-B8h]
  __int64 v65; // [rsp+E4h] [rbp-B4h]
  int v66; // [rsp+ECh] [rbp-ACh]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-A8h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v68; // [rsp+120h] [rbp-78h] BYREF

  v49 = a4;
  v53 = a3;
  v62 = this;
  v59 = (struct VIDMM_GLOBAL_ALLOC *)a2;
  v6 = (__int64)*a2;
  v57 = (SIZE_T)*a2;
  v54 = 0;
  v48 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v50 = a2[6];
  v58 = v50;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 3), (struct VIDMM_GLOBAL_ALLOC *)a2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 3)) )
  {
    LODWORD(v9) = -1073741130;
    if ( !v49 )
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
    v24 = v50;
    if ( *((int *)a2 + 47) > 0 )
    {
      VIDMM_GLOBAL::UnlockAllocation(v7, v50, 0LL, *(_QWORD *)(v6 + 16), 0, 0);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 3), *(_QWORD *)(v6 + 16));
      *((_DWORD *)a2 + 8) &= ~2u;
      VidMmiRemoveProbeAndLockReference((struct VIDMM_GLOBAL_ALLOC *)a2);
    }
    v65 = 0LL;
    v66 = 0;
    v63[1] = this;
    v63[2] = *(_QWORD *)(v6 + 96);
    v63[0] = a2;
    v64 = 0;
    KeStackAttachProcess(**((PRKPROCESS **)v24 + 1), &ApcState);
    VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResourcesForAllocation(
      *((VIDMM_PHYSICAL_ADAPTER **)this + 4),
      (struct VIDMM_PHYSICAL_ALLOC *)v6);
    v25 = (*(__int64 (__fastcall **)(struct VIDMM_LOCAL_ALLOC *, _QWORD, struct VIDMM_LOCAL_ALLOC *, _QWORD, struct _MDL *, _QWORD, __int64 (__fastcall *)(struct _MDL *, struct _MDL *, char *), _QWORD *, unsigned int))(*(_QWORD *)a2[28] + 48LL))(
            a2[28],
            *((_QWORD *)this + 3),
            a2[29],
            0LL,
            v53,
            *(_QWORD *)(v6 + 16),
            VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback,
            v63,
            2 * (unsigned int)v49);
    v9 = v25;
    if ( v25 >= 0 )
    {
      v26 = *(_QWORD *)(v6 + 64);
      if ( !v26 )
        v26 = *(_QWORD *)(v6 + 104);
      _InterlockedAdd((volatile signed __int32 *)(v26 + 560), 1u);
    }
    KeUnstackDetachProcess(&ApcState);
    if ( v49 )
    {
      if ( (int)v9 >= 0 )
        goto LABEL_54;
      *((_DWORD *)a2 + 6) |= 0x200000u;
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 3),
        (struct VIDMM_GLOBAL_ALLOC *)a2,
        *(_QWORD *)(v6 + 16),
        v27,
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
        DxgkLogInternalTriageEvent(v28, 0x40000LL);
        return (unsigned int)v9;
      }
      LODWORD(v9) = 0;
    }
    if ( (int)v9 < 0 )
    {
LABEL_55:
      *((_BYTE *)a2 + 43) = 1;
      v48 = 1;
      goto LABEL_10;
    }
LABEL_54:
    *((_BYTE *)a2 + 36) |= 1u;
    goto LABEL_55;
  }
  if ( !*((_BYTE *)a2 + 42) )
  {
    if ( a2[29] )
      (*(void (__fastcall **)(struct VIDMM_LOCAL_ALLOC *))(*(_QWORD *)a2[28] + 136LL))(a2[28]);
    if ( ((_DWORD)a2[3] & 0x100) == 0 && (*((_DWORD *)a2 + 7) & 0x1000) == 0 )
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 3),
        (struct VIDMM_GLOBAL_ALLOC *)a2,
        *(_QWORD *)(v6 + 16),
        v8,
        this,
        (union _LARGE_INTEGER *)(v6 + 96));
    LODWORD(v9) = 0;
    v48 = 1;
  }
  if ( (int)v9 < 0 )
  {
    v49 = 0;
    LODWORD(v9) = VIDMM_MEMORY_SEGMENT::TransferMemory(
                    (VIDMM_PHYSICAL_ADAPTER **)this,
                    (struct VIDMM_GLOBAL_ALLOC *)a2,
                    DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL,
                    *(struct VIDMM_SEGMENT **)(v6 + 104),
                    *(union _LARGE_INTEGER *)(v6 + 96),
                    &v49,
                    &v48);
    if ( v49 )
      VIDMM_PHYSICAL_ADAPTER::ReleaseTemporaryResourcesForAllocation(
        *((VIDMM_GLOBAL ***)this + 4),
        (struct VIDMM_PHYSICAL_ALLOC *)v6);
    if ( (int)v9 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v16);
        WdLogGlobalForLineNumber = 828;
      }
      LODWORD(v9) = 0;
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      if ( (*(_DWORD *)a2[47] & 8) == 0 )
        KeStackAttachProcess(**((PRKPROCESS **)v50 + 1), &ApcState);
      v17 = Use64KbPagesForTransfer(v6, *(_QWORD *)(v6 + 104));
      v18 = *(_QWORD *)(v6 + 16);
      v19 = v17 ? 0x10000 : 4096;
      v51 = v19;
      v20 = v18 >> 12;
      v21 = v18 >> 16;
      if ( !v17 )
        v21 = (unsigned int)v20;
      v53 = (struct _MDL *)v21;
      v55 = v21;
      v56 = *(union _LARGE_INTEGER *)(v6 + 96);
      v22 = 0;
      while ( 1 )
      {
        v52 = v22;
        if ( v22 >= (unsigned int)v21 )
          break;
        v60 = 0LL;
        Size = v19;
        v23 = VidMmMapViewOfAllocation(v50, v22 * v19, v19, &v60, 0);
        if ( v23 )
        {
          memmove(*((void **)this + 37), v23, Size);
          VidMmUnmapViewOfAllocation(v50, v60);
        }
        else
        {
          *((_DWORD *)a2 + 6) |= 0x200000u;
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 3),
          (struct VIDMM_GLOBAL_ALLOC *)a2,
          v51,
          v51 * v52,
          0LL,
          0LL,
          *((struct _MDL **)this + 38),
          this,
          &v56,
          0LL,
          0);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 3), (struct VIDMM_GLOBAL_ALLOC *)a2);
        v19 = v51;
        v56.QuadPart += v51;
        v22 = v52 + 1;
        LODWORD(v21) = (_DWORD)v53;
      }
      v48 = 1;
      if ( (*(_DWORD *)a2[47] & 8) == 0 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( (*(_DWORD *)a2[47] & 0x20000) == 0 )
    goto LABEL_10;
  v50 = *(struct VIDMM_LOCAL_ALLOC **)(v6 + 16);
  memset(&v68, 0, sizeof(v68));
  v68.PhysicalAdapterIndex = *((unsigned __int16 *)this + 210);
  v29 = VIDMM_SEGMENT::DriverId(this);
  v31 = v29;
  v68.SegmentIndex = v29;
  if ( *((_DWORD *)this + 113) )
  {
    v57 = ~*((_QWORD *)this + 55) & *(_QWORD *)(v6 + 96);
    if ( v57 < *((_QWORD *)this + 57) )
    {
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 3)
                                                                                            + 41144LL)) )
      {
        if ( (byte_140081241 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer();
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 3) + 41192LL), Executive, 0, 0, 0LL);
      }
      VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(this, (struct VIDMM_GLOBAL_ALLOC *)a2);
      v35 = *((_QWORD *)this + 55);
      v36 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)this + 57);
      v58 = v36;
      v37 = (struct VIDMM_LOCAL_ALLOC *)((char *)v36 - (~v35 & (v35 + *(_QWORD *)(v6 + 16))));
      v59 = v37;
      v38 = *((_QWORD *)this + 26);
      v39 = *(_QWORD *)(v38 + 88);
      v40 = v38 + 80;
      while ( v39 != v40 )
      {
        v41 = (__int64 *)(v39 - 40);
        v39 = *(_QWORD *)(v39 + 8);
        v42 = *v41;
        if ( *v41 >= (unsigned __int64)v36 || v42 + v41[1] <= (unsigned __int64)v37 )
        {
          if ( v42 + v41[1] <= (unsigned __int64)v37 )
            break;
        }
        else if ( *((_BYTE *)v41 + 56) == 4 )
        {
          if ( !ReclaimAllocationForVPRCallback(0LL, (struct VIDMM_PHYSICAL_ALLOC *)v41[2]) )
            break;
          v37 = v59;
          v36 = v58;
        }
      }
      VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(*((VIDMM_PHYSICAL_ADAPTER **)this + 4));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 3), *((unsigned __int16 *)this + 210), v43);
      v68.CurrentStartOffset = *((_QWORD *)this + 57);
      v68.CurrentSize = *((_QWORD *)this + 59);
      v44 = v57;
      v68.NewStartOffset = v57;
      v68.NewSize = *((_QWORD *)this + 58) - v57;
      *((_QWORD *)this + 59) = v68.NewSize;
      *((_QWORD *)this + 57) = v44;
      LODWORD(v9) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                      *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 3128LL),
                      &v68);
      if ( (int)v9 < 0 && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
      }
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 3) + 24LL),
          v45,
          v46,
          v68.PhysicalAdapterIndex,
          v68.SegmentIndex,
          v68.VprIndex,
          v68.NewStartOffset,
          v68.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 3) + 24LL));
      v30 = v50;
    }
    if ( (int)v9 < 0 )
      goto LABEL_59;
    *((_DWORD *)a2 + 7) |= 0x400u;
    *((_QWORD *)this + 60) += v30;
    if ( g_IsInternalReleaseOrDbg )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v31);
      v47[3] = v50;
      v47[4] = *((_QWORD *)this + 60);
      v47[5] = a2;
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
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 3), *((unsigned __int16 *)this + 210), v32);
    v68.NewStartOffset = *(_QWORD *)(v6 + 96);
    v68.NewSize = (SIZE_T)v50;
    LODWORD(v9) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                    *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 3128LL),
                    &v68);
    if ( (int)v9 < 0 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0qqqxxp_EtwWriteTransfer(
        *(_QWORD *)(*((_QWORD *)this + 3) + 24LL),
        v33,
        v34,
        v68.PhysicalAdapterIndex,
        v68.SegmentIndex,
        v68.VprIndex,
        v68.NewStartOffset,
        v68.NewSize,
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
  *((_WORD *)a2[47] + 5) = VIDMM_SEGMENT::DriverId(v10);
  *((_QWORD *)a2[47] + 5) = *(_QWORD *)(v6 + 72) + *(_QWORD *)(*(_QWORD *)(v6 + 64) + 48LL);
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
  if ( v48 && (v11 & 8) == 0 && !*(_QWORD *)(v6 + 144) )
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 3), (struct VIDMM_GLOBAL_ALLOC *)a2);
  if ( (*(_DWORD *)a2[47] & 0x10000) != 0 )
  {
    v15 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::NotifyResidency(
      *((ADAPTER_RENDER ***)this + 3),
      (struct VIDMM_GLOBAL_ALLOC *)a2,
      1u,
      v15,
      *(_QWORD *)(v6 + 72));
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 41064LL) )
  {
    v12 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::RecordPageMappingHistory(v13, v12);
  }
  return (unsigned int)v9;
}
