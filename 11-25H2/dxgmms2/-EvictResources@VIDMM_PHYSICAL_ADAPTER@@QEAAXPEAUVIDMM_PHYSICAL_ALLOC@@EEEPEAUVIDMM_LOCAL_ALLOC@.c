/*
 * XREFs of ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BB638
 * Callers:
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x140090AD8 (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x140090F80 (-TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z.c)
 *     ?OldDefragment@VIDMM_SEGMENT@@QEAAXXZ @ 0x14009CF04 (-OldDefragment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x14009D74C (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B9DF0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     EvictAllReclaimedMemoryAllocation @ 0x1400BB4C0 (EvictAllReclaimedMemoryAllocation.c)
 *     EvictAllReclaimedSysmemAllocation @ 0x1400BB57C (EvictAllReclaimedSysmemAllocation.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x1400BBBB8 (-CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1400D3A18 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400E1624 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E182C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F1E14 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FDCE0 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011144C (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x140111974 (-TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140033EB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140034800 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140036068 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140036D60 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400BEF44 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1400DB390 (-GetAllocationPriorityClassFromPriority@@YA-AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z @ 0x1400DFC78 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400E5800 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140104DC4 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140112778 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4VIDMM_OPERATION@@@Z @ 0x1401141C4 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
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
  __int64 v6; // rbx
  unsigned __int16 *v8; // rsi
  __int64 v10; // rax
  _QWORD *v11; // r13
  bool v12; // zf
  _QWORD *VaPagingHistoryEntry; // rax
  _QWORD *v14; // rdx
  int v15; // eax
  VIDMM_GLOBAL *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct VIDMM_LOCAL_ALLOC *v19; // r15
  unsigned __int8 (__fastcall *v20)(unsigned __int16 *, struct VIDMM_PHYSICAL_ALLOC *, __int64, __int64, _DWORD, struct VIDMM_LOCAL_ALLOC *); // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  _BOOL8 v29; // rcx
  _QWORD *i; // r13
  __int64 v31; // rax
  __int64 v32; // rdx
  struct VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v34; // r10
  unsigned __int8 AllocationPriorityClassFromPriority; // al
  __int64 v36; // rcx
  signed __int32 v37[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int64 v38; // [rsp+20h] [rbp-50h]
  __int64 v39; // [rsp+40h] [rbp-30h] BYREF
  char v40; // [rsp+48h] [rbp-28h]
  _BYTE v41[16]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v42; // [rsp+60h] [rbp-10h] BYREF
  char v43; // [rsp+68h] [rbp-8h]

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
    v42 = v11 + 5126;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11 + 5126, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v12 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    v11[5127] = KeGetCurrentThread();
    v43 = 1;
    if ( v12 )
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(v11, 13LL, 32LL);
    else
      VaPagingHistoryEntry = operator new(32, (struct DXGK_LOG *)(v11 + 5129), 0xDu, 0);
    v14 = VaPagingHistoryEntry;
    if ( VaPagingHistoryEntry )
    {
      VaPagingHistoryEntry[1] = v6;
      VaPagingHistoryEntry[2] = *(_QWORD *)(*(_QWORD *)(v6 + 376) + 48LL);
      v15 = *(_DWORD *)(v6 + 24) & 0x3F;
      *((_BYTE *)v14 + 24) = 0;
      *(_DWORD *)v14 = v15;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v42);
  }
  v12 = (*((_DWORD *)v8 + 26) & 0x1001) == 0;
  v39 = v6 + 312;
  v40 = 0;
  if ( v12 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6 + 312, 0LL);
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
      *(_QWORD *)(v39 + 8) = KeGetCurrentThread();
    else
      *(_QWORD *)(v6 + 320) = KeGetCurrentThread();
    v40 = 1;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v41, (struct DXGFASTMUTEX *const)(v6 + 136), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
  v19 = a6;
  if ( !a6 )
    v19 = *(struct VIDMM_LOCAL_ALLOC **)(v6 + 48);
  if ( *(_DWORD *)(*((_QWORD *)this + 6) + 40096LL) )
  {
    if ( (*(_DWORD *)(v6 + 24) & 0x10000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v16, (struct VIDMM_GLOBAL_ALLOC *)v6);
    if ( (**(_DWORD **)(v6 + 376) & 0x10000) != 0 )
      VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 6), (struct VIDMM_GLOBAL_ALLOC *)v6, 0, 0, 0LL);
  }
  LOBYTE(v18) = a4;
  LOBYTE(v17) = a3;
  v20 = *(unsigned __int8 (__fastcall **)(unsigned __int16 *, struct VIDMM_PHYSICAL_ALLOC *, __int64, __int64, _DWORD, struct VIDMM_LOCAL_ALLOC *))(*(_QWORD *)v8 + 48LL);
  LOBYTE(v38) = a5;
  if ( v20(v8, a2, v17, v18, v38, a6) )
  {
    if ( *((_QWORD *)a2 + 10) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v21);
        v24[3] = *((_QWORD *)a2 + 10);
        v24[4] = *((int *)a2 + 19);
        v24[5] = *((unsigned int *)a2 + 18);
        WdLogGlobalForLineNumber = 2524;
      }
      (*(void (__fastcall **)(unsigned __int16 *, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 24LL))(
        v8,
        v6,
        *((_QWORD *)a2 + 10),
        *((_QWORD *)a2 + 2),
        **(_QWORD **)(v6 + 336));
      *((_QWORD *)a2 + 10) = 0LL;
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v21);
      WdLogGlobalForLineNumber = 2530;
    }
    *(_WORD *)(*(_QWORD *)(v6 + 376) + 10LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v6 + 376) + 40LL) = 0LL;
    v25 = (_QWORD *)(v6 + 248);
    *((_QWORD *)a2 + 8) = 0LL;
    v26 = *(_QWORD *)(v6 + 248);
    if ( *(_QWORD *)(v26 + 8) != v6 + 248 || (v27 = *(_QWORD **)(v6 + 256), (_QWORD *)*v27 != v25) )
      __fastfail(3u);
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
    *v25 = 0LL;
    *(_QWORD *)(v6 + 256) = 0LL;
    v28 = *((_QWORD *)a2 + 2);
    v29 = (*((_DWORD *)v8 + 26) & 0x1001) != 0;
    *((_QWORD *)this + v29 + 203) -= v28;
    for ( i = *(_QWORD **)(v6 + 112); i != (_QWORD *)(v6 + 112); i = (_QWORD *)*i )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(i - 5) + 16LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 240LL))
                      + 16LL);
      v32 = 38LL * *((unsigned __int16 *)this + 28) + ((*((_DWORD *)v8 + 26) & 0x1001) != 0) + 29LL;
      *(_QWORD *)(v31 + 8 * v32 + 8) -= *((_QWORD *)a2 + 2);
      CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                                (VIDMM_PROCESS *)*(i - 5),
                                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 240LL),
                                *((_WORD *)this + 28),
                                v8[20]);
      VidMmRecordEviction(
        v34 + 7112,
        (char *)CommitmentInformation + 56,
        *((_QWORD *)a2 + 2),
        *(unsigned int *)(v34 + 8));
    }
    *((_QWORD *)v8 + 44) += *((_QWORD *)a2 + 2);
    AllocationPriorityClassFromPriority = GetAllocationPriorityClassFromPriority(
                                            *((unsigned int *)a2 + 12),
                                            v28,
                                            v22,
                                            v23);
    *(_QWORD *)&v8[4 * AllocationPriorityClassFromPriority + 184] += *((_QWORD *)a2 + 2);
    *(_DWORD *)(v6 + 72) = 0;
    *((_DWORD *)a2 + 14) &= 0xFFFFFFC0;
    *(_DWORD *)(v6 + 24) &= ~0x1000000u;
    if ( v19 && *((_QWORD *)v19 + 1) && (*(_DWORD *)(v6 + 32) & 4) == 0 )
      VidMmRecordAlloc(*((_QWORD *)this + 6), v6, v19, v8, *((_QWORD *)a2 + 2), 1);
    v36 = *((_QWORD *)this + 6);
    _InterlockedOr(v37, 0);
    ++*(_QWORD *)(v36 + 40);
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v41);
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v39);
}
