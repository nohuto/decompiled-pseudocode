/*
 * XREFs of ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400EC39C
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400B15E0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14000DB70 (McTemplateK0pq_EtwWriteTransfer.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004C9EC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004CC70 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_PHYSICAL_ADAPTER@@QEAAX_K@Z @ 0x140091000 (-TrimMarkedForEvictionAllocations@VIDMM_PHYSICAL_ADAPTER@@QEAAX_K@Z.c)
 *     ?TrimResidentBytes@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x14009D404 (-TrimResidentBytes@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400ACE60 (-EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400B1FBC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z @ 0x1400B3DAC (-FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2B70 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     CancelAllReclaimedAllocationsInList @ 0x1400CD9FC (CancelAllReclaimedAllocationsInList.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DED20 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E0788 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     AcquireGpuResources @ 0x1400E6D08 (AcquireGpuResources.c)
 *     ?CommitResources@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400E9640 (-CommitResources@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400F655C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400F6658 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400F6AC0 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::PageInAllocation(
        __int64 a1,
        __int64 *a2,
        int a3,
        char a4,
        bool *a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  const signed __int32 *v12; // rsi
  __int64 v13; // r15
  int v14; // eax
  int i; // esi
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdi
  unsigned __int16 *v20; // rsi
  VIDMM_GLOBAL *v21; // rcx
  __int64 v22; // rcx
  unsigned __int16 j; // di
  int v24; // eax
  __int64 v25; // rcx
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v26; // rdx
  __int64 v27; // rcx
  bool v28; // r8
  __int64 v29; // rcx
  bool v30; // r8
  __int64 v31; // rcx
  __int64 v33; // rcx
  __int64 v34; // [rsp+80h] [rbp+8h]

  *(_QWORD *)a6 = 0LL;
  v10 = (_QWORD *)*a2;
  v11 = *(_QWORD *)(a1 + 48);
  v12 = (const signed __int32 *)(*a2 + 24);
  v13 = *(_QWORD *)*a2;
  if ( *(_WORD *)(*(_QWORD *)(*a2 + 392) + 8LL) )
    *v12 &= ~0x2000000u;
  v14 = *((_DWORD *)v10 + 18);
  if ( v14 )
  {
    if ( v14 == 1 && !_bittest(v12, 0x19u) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL) + 24) = v10;
        WdLogGlobalForLineNumber = 3547;
      }
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0pq_EtwWriteTransfer();
      *(_QWORD *)(v11 + 7248) += *(_QWORD *)(v13 + 16);
      ++*(_DWORD *)(v11 + 7240);
      VIDMM_SEGMENT::ReclaimResource(*(VIDMM_SEGMENT **)(v13 + 64), *(unsigned __int64 ***)v13);
    }
    if ( !_bittest((const signed __int32 *)v10 + 6, 0x19u) )
    {
      LODWORD(v19) = 0;
      goto LABEL_64;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL) + 24) = v10;
      WdLogGlobalForLineNumber = 3570;
    }
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0pq_EtwWriteTransfer();
    *(_QWORD *)(v11 + 7264) += *(_QWORD *)(v13 + 16);
    ++*(_DWORD *)(v11 + 7256);
    *((_DWORD *)v10 + 6) |= 0x4000000u;
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
    VIDMM_GLOBAL::EvictAllocation((VIDMM_GLOBAL *)v11, (struct VIDMM_GLOBAL_ALLOC *)v10);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL) + 24) = v13;
      WdLogGlobalForLineNumber = 3523;
    }
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0pq_EtwWriteTransfer();
    *(_QWORD *)(v11 + 7312) += *(_QWORD *)(v13 + 16);
    ++*(_DWORD *)(v11 + 7304);
    if ( (*v12 & 0x2000000) != 0 )
      *v12 |= 0x4000000u;
  }
  for ( i = a3; ; i = 2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10 + 41, 0LL);
    v10[42] = KeGetCurrentThread();
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v16);
      WdLogGlobalForLineNumber = 3851;
    }
    VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResources((VIDMM_GLOBAL **)a1, i == 0, 0);
    if ( *(_QWORD *)a6 )
      VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResources(
        *(VIDMM_GLOBAL ***)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 40232LL)
                          + 8LL * (*(_DWORD *)(***(_QWORD ***)a6 + 24LL) & 0x3F)),
        i == 0,
        0);
    LOBYTE(v17) = a4;
    LODWORD(v19) = AcquireGpuResources(a1, a2, (_QWORD *)(unsigned int)i, v17, a7, a8);
    if ( (int)v19 >= 0 )
      break;
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v18);
      WdLogGlobalForLineNumber = 3973;
    }
LABEL_42:
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = v10;
      WdLogGlobalForLineNumber = 3990;
    }
    v25 = a2[13];
    if ( v25 )
    {
      v26 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a2[24];
      if ( v26 )
      {
        VIDMM_CPU_HOST_APERTURE::ReleaseRange(*(VIDMM_CPU_HOST_APERTURE **)(v25 + 552), v26);
        a2[24] = 0LL;
      }
      (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64, _QWORD))(*(_QWORD *)a2[13] + 24LL))(
        a2[13],
        v10,
        a2[11],
        a2[2],
        *(_QWORD *)v10[44]);
      a2[13] = 0LL;
      a2[11] = 0LL;
    }
    v10[42] = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 41, 0LL);
    KeLeaveCriticalRegion();
    CancelAllReclaimedAllocationsInList(v27, (_QWORD **)(a1 + 1672), v28);
    CancelAllReclaimedAllocationsInList(v29, (_QWORD **)(a1 + 1656), v30);
    WdLogSingleEntry2(3LL, v10, i);
    WdLogGlobalForLineNumber = 4027;
    if ( i || (v10[3] & 0x40) == 0 || a4 )
      goto LABEL_55;
    a3 = 2;
    VIDMM_PHYSICAL_ADAPTER::TrimMarkedForEvictionAllocations(
      (VIDMM_PHYSICAL_ADAPTER *)a1,
      a2[2] + ((unsigned __int64)a2[2] >> 2));
  }
  v20 = (unsigned __int16 *)a2[13];
  VIDMM_SEGMENT::TrimResidentBytes((VIDMM_SEGMENT *)v20, (const struct VIDMM_PARTITION_ADAPTER_INFO *)v10[44]);
  if ( !VIDMM_GLOBAL::VerifyGlobalResidentLimit(v21, (const struct VIDMM_PARTITION_ADAPTER_INFO *)v10[44]) )
  {
    v22 = *(_QWORD *)(a1 + 48);
    for ( j = 0; (unsigned int)j < *(_DWORD *)(v22 + 6944); ++j )
    {
      VIDMM_PHYSICAL_ADAPTER::TrimResidentBytes(
        *(VIDMM_PHYSICAL_ADAPTER **)(*(_QWORD *)(v22 + 40232) + 8LL * j),
        (const struct VIDMM_PARTITION_ADAPTER_INFO *)v10[44]);
      v22 = *(_QWORD *)(a1 + 48);
    }
  }
  VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation((VIDMM_PHYSICAL_ADAPTER *)a1);
  if ( (*(_DWORD *)(344LL * v20[210] + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 2992LL) + 16) & 4) != 0 )
    VIDMM_SEGMENT::ProcessPendingMoves((VIDMM_SEGMENT *)v20);
  v24 = VIDMM_PHYSICAL_ADAPTER::CommitResources((VIDMM_PHYSICAL_ADAPTER *)a1, (struct VIDMM_PHYSICAL_ALLOC *)a2);
  v19 = v24;
  if ( v24 < 0 )
  {
    v34 = (unsigned int)Feature_CommitPagetableInstrumentation__private_featureState;
    if ( (Feature_CommitPagetableInstrumentation__private_featureState & 0x10) == 0 )
    {
      LODWORD(v34) = Feature_CommitPagetableInstrumentation__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_CommitPagetableInstrumentation__private_descriptor,
        v34,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v34,
        3,
        (__int64)&Feature_CommitPagetableInstrumentation__private_descriptor);
    }
    WdLogSingleEntry2(3LL, v10, v19);
    WdLogGlobalForLineNumber = 3946;
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v18);
      WdLogGlobalForLineNumber = 3968;
    }
    i = a3;
    goto LABEL_42;
  }
  VIDMM_GLOBAL::FlushPagingBufferInternal(*(VIDMM_GLOBAL **)(a1 + 48), v10[3] & 0x3F, 0, 0LL, 0LL, 0, 0);
  v10[42] = 0LL;
  LODWORD(v19) = 0;
  ExReleasePushLockExclusiveEx(v10 + 41, 0LL);
  KeLeaveCriticalRegion();
  v31 = **(_QWORD **)(a1 + 48);
  *(_QWORD *)(v31 + 280) += a2[2];
LABEL_55:
  if ( (v10[3] & 0x200000) != 0 )
  {
    *a5 = 0;
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v31) + 24) = v10;
      WdLogGlobalForLineNumber = 4055;
    }
    return 3223191830LL;
  }
  if ( !VIDMM_GLOBAL::IsTdrPending(*(VIDMM_GLOBAL **)(a1 + 48)) )
  {
LABEL_64:
    *a5 = (int)v19 < 0;
    return (unsigned int)v19;
  }
  *a5 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v33) + 24) = v10;
    WdLogGlobalForLineNumber = 4062;
  }
  return 3221226166LL;
}
