/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0220
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A9714 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400BEF44 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C00CC (-VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2210 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400C2240 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2360 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400C2F6C (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400E5800 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM.c)
 *     ?MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010F5CC (-MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct VIDMM_PHYSICAL_ALLOC *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax
  char v6; // r15
  char v7; // r14
  int v8; // ebp
  int v9; // ecx
  int v10; // ecx
  VIDMM_SEGMENT *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int16 v14; // ax
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  bool v21; // cf

  v2 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v5 + 24) = v2;
    *(_QWORD *)(v5 + 32) = *(int *)(v2 + 188);
    WdLogGlobalForLineNumber = 384;
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[3], (struct VIDMM_GLOBAL_ALLOC *)v2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(this[3]) )
  {
    WdLogSingleEntry1(4LL, v2);
    result = 3221226166LL;
    WdLogGlobalForLineNumber = 423;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    if ( (*(_DWORD *)(v2 + 28) & 0x800) == 0 )
    {
      if ( (*(_DWORD *)(v2 + 32) & 2) != 0 )
      {
        v6 = 1;
      }
      else
      {
        v8 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, (struct VIDMM_GLOBAL_ALLOC *)v2);
        if ( v8 < 0 )
          return (unsigned int)v8;
        v7 = 1;
      }
      v8 = VidMmiEnsureSystemCommitMdl((struct VIDMM_SEGMENT *)this, (struct VIDMM_GLOBAL_ALLOC *)v2);
      if ( v8 < 0 )
      {
LABEL_22:
        if ( v7 )
          VIDMM_SEGMENT::UnlockAllocationBackingStore(this[3], (struct VIDMM_GLOBAL_ALLOC *)v2, 0LL);
        return (unsigned int)v8;
      }
      if ( (**(_DWORD **)(v2 + 376) & 0x4000) != 0 )
      {
        v16 = *(_QWORD *)(v2 + 56);
        if ( !((*(_BYTE *)(v16 + 10) & 5) != 0
             ? *(PVOID *)(v16 + 24)
             : MmMapLockedPagesSpecifyCache((PMDL)v16, 0, MmCached, 0LL, 0, 0x40000010u)) )
        {
          WdLogSingleEntry1(1LL, v2);
          WdLogGlobalForLineNumber = 493;
          DxgkLogInternalTriageEvent(v18, 0x40000LL);
          v8 = -1073741801;
          goto LABEL_22;
        }
      }
      if ( *((_BYTE *)this[3] + 40107) )
      {
        v19 = VIDMM_SEGMENT::MapAllocationToIoMmu((VIDMM_SEGMENT *)this, (struct VIDMM_GLOBAL_ALLOC *)v2);
        v8 = v19;
        if ( v19 < 0 )
        {
          _InterlockedIncrement(&dword_14008180C);
          WdLogSingleEntry2(6LL, v2, v19);
          WdLogGlobalForLineNumber = 508;
          DxgkLogInternalTriageEvent(v20, 262145LL);
          goto LABEL_22;
        }
      }
      (*((void (__fastcall **)(VIDMM_GLOBAL **, __int64))*this + 7))(this, v2);
      v9 = **(_DWORD **)(v2 + 376);
      if ( (v9 & 4) == 0 || (v21 = (v9 & 0x800000) != 0, v10 = 1, v21) )
        v10 = 0;
      (*((void (__fastcall **)(VIDMM_GLOBAL **, __int64, _QWORD, __int64, __int64, _QWORD, _DWORD, int))*this + 25))(
        this,
        v2,
        *((_QWORD *)a2 + 2) >> 12,
        *((_QWORD *)a2 + 12) / 4096LL,
        *((_QWORD *)a2 + 12) / 4096LL,
        *(_QWORD *)(v2 + 56),
        0,
        v10);
    }
    v11 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 13);
    v12 = *((_QWORD *)a2 + 12);
    *((_QWORD *)a2 + 8) = v11;
    *((_QWORD *)a2 + 9) = v12;
    *(_WORD *)(*(_QWORD *)(v2 + 376) + 10LL) = VIDMM_SEGMENT::DriverId(v11);
    *(_QWORD *)(*(_QWORD *)(v2 + 376) + 40LL) = *((_QWORD *)a2 + 9) + *(_QWORD *)(*((_QWORD *)a2 + 8) + 48LL);
    *((_QWORD *)a2 + 13) = 0LL;
    *((_QWORD *)a2 + 12) = 0LL;
    *(_DWORD *)(v2 + 32) &= ~8u;
    v13 = *(_QWORD *)(v2 + 48);
    if ( v13 && *(_QWORD *)(v13 + 8) )
      VidMmRecordAlloc(this[3], v2, v13, this, *((_QWORD *)a2 + 2), 0);
    if ( (**(_DWORD **)(v2 + 376) & 0x10000) != 0 )
    {
      v14 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this);
      VIDMM_GLOBAL::NotifyResidency(
        (ADAPTER_RENDER **)this[3],
        (struct VIDMM_GLOBAL_ALLOC *)v2,
        1u,
        v14,
        *((_QWORD *)a2 + 9));
    }
    if ( v6 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(this[3], *((_QWORD *)a2 + 2));
      *(_DWORD *)(v2 + 32) &= ~2u;
    }
    return 0LL;
  }
  return result;
}
