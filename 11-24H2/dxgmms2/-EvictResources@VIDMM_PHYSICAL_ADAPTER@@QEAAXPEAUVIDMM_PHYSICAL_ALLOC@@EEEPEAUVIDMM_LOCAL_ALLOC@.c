/*
 * XREFs of ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020
 * Callers:
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x140090AD0 (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x140090F78 (-TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z.c)
 *     ?OldDefragment@VIDMM_SEGMENT@@QEAAXXZ @ 0x14009E7B4 (-OldDefragment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x14009EFF4 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400AB7F0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     EvictAllReclaimedMemoryAllocation @ 0x1400ACEA8 (EvictAllReclaimedMemoryAllocation.c)
 *     EvictAllReclaimedSysmemAllocation @ 0x1400ACF64 (EvictAllReclaimedSysmemAllocation.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x1400AD588 (-CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1400CF658 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400D7384 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400D758C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D7B70 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400ECFEC (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010FD30 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x140110258 (-TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140033150 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140034220 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1400356B0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400B0558 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400D98E4 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1400DF6F0 (-GetAllocationPriorityClassFromPriority@@YA-AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z @ 0x1400EA868 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140102FF4 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140111560 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4VIDMM_OPERATION@@@Z @ 0x140113F78 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PHYSICAL_ADAPTER::EvictResources(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        char a3,
        char a4,
        char a5,
        struct VIDMM_LOCAL_ALLOC *a6)
{
  __int64 v6; // rdi
  unsigned __int16 *v8; // r14
  __int64 v10; // rax
  _QWORD *v11; // r13
  bool v12; // zf
  _QWORD *VaPagingHistoryEntry; // rax
  _QWORD *v14; // rdx
  int v15; // eax
  VIDMM_GLOBAL *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct VIDMM_LOCAL_ALLOC *v19; // rbx
  unsigned __int8 (__fastcall *v20)(unsigned __int16 *, struct VIDMM_PHYSICAL_ALLOC *, __int64, __int64, _DWORD, struct VIDMM_LOCAL_ALLOC *); // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  _BOOL8 v26; // rcx
  _QWORD *i; // r13
  __int64 v28; // r8
  __int64 v29; // rcx
  struct VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v31; // r10
  unsigned __int8 AllocationPriorityClassFromPriority; // al
  __int64 v33; // rcx
  signed __int32 v34[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int64 v35; // [rsp+20h] [rbp-50h]
  __int64 v36; // [rsp+40h] [rbp-30h] BYREF
  char v37; // [rsp+48h] [rbp-28h]
  _BYTE v38[16]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v39; // [rsp+60h] [rbp-10h] BYREF
  char v40; // [rsp+68h] [rbp-8h]

  v6 = *(_QWORD *)a2;
  v8 = (unsigned __int16 *)*((_QWORD *)a2 + 8);
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v10 + 24) = v6;
    *(_QWORD *)(v10 + 32) = *(int *)(v6 + 188);
    WdLogGlobalForLineNumber = 2454;
  }
  if ( *(_DWORD *)(v6 + 76) && (*(_DWORD *)(v6 + 24) & 0x40000000) == 0 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  v11 = (_QWORD *)*((_QWORD *)this + 6);
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || v11[5124] )
  {
    v39 = v11 + 5126;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11 + 5126, 0LL);
    v12 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    v11[5127] = KeGetCurrentThread();
    v40 = 1;
    if ( v12 )
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(v11, 13LL, 32LL);
    else
      VaPagingHistoryEntry = operator new(32, (struct DXGK_LOG *)(v11 + 5129), 0xDu, 0);
    v14 = VaPagingHistoryEntry;
    if ( VaPagingHistoryEntry )
    {
      VaPagingHistoryEntry[1] = v6;
      VaPagingHistoryEntry[2] = *(_QWORD *)(*(_QWORD *)(v6 + 392) + 48LL);
      v15 = *(_DWORD *)(v6 + 24) & 0x3F;
      *((_BYTE *)v14 + 24) = 0;
      *(_DWORD *)v14 = v15;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v39);
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v36,
    (struct DXGPUSHLOCKFAST *)(v6 + 328),
    0);
  if ( (*((_DWORD *)v8 + 26) & 0x1001) == 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v36, 0LL);
    v37 = 1;
    *(_QWORD *)(v36 + 8) = KeGetCurrentThread();
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, (struct DXGFASTMUTEX *const)(v6 + 136), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
  v19 = a6;
  if ( !a6 )
    v19 = *(struct VIDMM_LOCAL_ALLOC **)(v6 + 48);
  if ( *(_DWORD *)(*((_QWORD *)this + 6) + 40096LL) )
  {
    if ( (*(_DWORD *)(v6 + 24) & 0x10000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v16, (struct VIDMM_GLOBAL_ALLOC *)v6);
    if ( (**(_DWORD **)(v6 + 392) & 0x10000) != 0 )
      VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 6), (struct VIDMM_GLOBAL_ALLOC *)v6, 0, 0, 0LL);
  }
  LOBYTE(v18) = a4;
  LOBYTE(v17) = a3;
  v20 = *(unsigned __int8 (__fastcall **)(unsigned __int16 *, struct VIDMM_PHYSICAL_ALLOC *, __int64, __int64, _DWORD, struct VIDMM_LOCAL_ALLOC *))(*(_QWORD *)v8 + 48LL);
  LOBYTE(v35) = a5;
  if ( v20(v8, a2, v17, v18, v35, a6) )
  {
    if ( *((_QWORD *)a2 + 10) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21);
        v22[3] = *((_QWORD *)a2 + 10);
        v22[4] = *((int *)a2 + 19);
        v22[5] = *((unsigned int *)a2 + 18);
        WdLogGlobalForLineNumber = 2524;
      }
      (*(void (__fastcall **)(unsigned __int16 *, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 24LL))(
        v8,
        v6,
        *((_QWORD *)a2 + 10),
        *((_QWORD *)a2 + 2),
        **(_QWORD **)(v6 + 352));
      *((_QWORD *)a2 + 10) = 0LL;
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v21);
      WdLogGlobalForLineNumber = 2530;
    }
    *(_WORD *)(*(_QWORD *)(v6 + 392) + 10LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v6 + 392) + 40LL) = 0LL;
    v23 = (_QWORD *)(v6 + 264);
    *((_QWORD *)a2 + 8) = 0LL;
    v24 = *(_QWORD *)(v6 + 264);
    if ( *(_QWORD *)(v24 + 8) != v6 + 264 || (v25 = *(_QWORD **)(v6 + 272), (_QWORD *)*v25 != v23) )
      __fastfail(3u);
    *v25 = v24;
    *(_QWORD *)(v24 + 8) = v25;
    *v23 = 0LL;
    *(_QWORD *)(v6 + 272) = 0LL;
    v26 = (*((_DWORD *)v8 + 26) & 0x1001) != 0;
    *((_QWORD *)this + v26 + 203) -= *((_QWORD *)a2 + 2);
    for ( i = *(_QWORD **)(v6 + 112); i != (_QWORD *)(v6 + 112); i = (_QWORD *)*i )
    {
      v28 = 38LL * *((unsigned __int16 *)this + 28) + ((*((_DWORD *)v8 + 26) & 0x1001) != 0) + 29LL;
      v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(i - 5) + 16LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 240LL))
                      + 16LL);
      *(_QWORD *)(v29 + 8 * v28 + 8) -= *((_QWORD *)a2 + 2);
      CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                                (VIDMM_PROCESS *)*(i - 5),
                                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 240LL),
                                *((_WORD *)this + 28),
                                v8[20]);
      VidMmRecordEviction(
        v31 + 7112,
        (char *)CommitmentInformation + 56,
        *((_QWORD *)a2 + 2),
        *(unsigned int *)(v31 + 8));
    }
    *((_QWORD *)v8 + 44) += *((_QWORD *)a2 + 2);
    AllocationPriorityClassFromPriority = GetAllocationPriorityClassFromPriority(*((unsigned int *)a2 + 12));
    *(_QWORD *)&v8[4 * AllocationPriorityClassFromPriority + 184] += *((_QWORD *)a2 + 2);
    *(_DWORD *)(v6 + 72) = 0;
    *((_DWORD *)a2 + 14) &= 0xFFFFFFC0;
    *(_DWORD *)(v6 + 24) &= ~0x1000000u;
    if ( v19 && *((_QWORD *)v19 + 1) && (*(_DWORD *)(v6 + 32) & 4) == 0 )
      VidMmRecordAlloc(*((_QWORD *)this + 6), v6, v19, v8, *((_QWORD *)a2 + 2), 1);
    v33 = *((_QWORD *)this + 6);
    _InterlockedOr(v34, 0);
    ++*(_QWORD *)(v33 + 40);
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v38);
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v36);
}
