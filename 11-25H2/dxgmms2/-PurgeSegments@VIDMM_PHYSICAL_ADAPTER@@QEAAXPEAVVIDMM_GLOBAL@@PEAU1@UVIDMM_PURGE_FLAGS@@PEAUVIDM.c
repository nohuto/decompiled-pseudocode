/*
 * XREFs of ?PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDMM_PURGE_STATISTICS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400E06B8
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140043E40 (-NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004D130 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004D3B4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z @ 0x1400AB9CC (-FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z.c)
 *     ?ScheduleEvictionTimer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z @ 0x1400E0344 (-ScheduleEvictionTimer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z @ 0x1400E119C (-PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z.c)
 *     ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x140103884 (-ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x140103934 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER::PurgeSegments(
        __int64 a1,
        VIDMM_GLOBAL *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v6; // eax
  unsigned int v7; // edi
  VIDMM_GLOBAL *v10; // r10
  unsigned int i; // r12d
  int v13; // ebp
  __int64 v14; // r9
  _DWORD *v15; // rdx
  _DWORD *v16; // rcx
  char v17; // r14
  char v18; // r15
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // ecx
  VIDMM_MEMORY_SEGMENT *v24; // rcx
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF
  VIDMM_GLOBAL *v26; // [rsp+68h] [rbp+10h]

  v26 = a2;
  v6 = *(_DWORD *)(a1 + 64);
  v7 = 0;
  v10 = a2;
  for ( i = 0; i < v6; ++i )
  {
    v13 = *(_DWORD *)(*((_QWORD *)v10 + 3) + 2468LL) & 0x20000;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 1648) + 8LL * i);
    if ( (*(_DWORD *)(v14 + 104) & 0x1001) != 0 )
    {
      v15 = (_DWORD *)((char *)v10 + 40192);
    }
    else
    {
      v16 = (_DWORD *)((char *)v10 + 40192);
      if ( *((_DWORD *)v10 + 10048) == -1 )
      {
        v15 = (_DWORD *)((char *)v10 + 40192);
      }
      else if ( (a4 & 0x40) == 0
             || (v15 = (_DWORD *)((char *)v10 + 40192), *(_QWORD *)(v14 + 272) <= (unsigned __int64)qword_1400815B8) )
      {
        v15 = (_DWORD *)((char *)v10 + 40192);
        if ( !v13 )
        {
          v17 = 0;
LABEL_46:
          if ( *v16 != -1 && *(_QWORD *)(v14 + 272) <= (unsigned __int64)qword_1400815B8 )
          {
            v18 = 0;
            if ( !v13 )
              goto LABEL_6;
          }
          goto LABEL_5;
        }
      }
    }
    v16 = v15;
    v17 = 1;
    if ( (*(_DWORD *)(v14 + 104) & 0x1001) == 0 )
      goto LABEL_46;
LABEL_5:
    v18 = 1;
LABEL_6:
    v25 = (unsigned int)Feature_DelayedForceEviction__private_featureState;
    if ( (Feature_DelayedForceEviction__private_featureState & 0x10) == 0 )
    {
      LODWORD(v25) = Feature_DelayedForceEviction__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_DelayedForceEviction__private_descriptor,
        v25,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v25,
        3,
        (__int64)&Feature_DelayedForceEviction__private_descriptor);
      v10 = v26;
    }
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 1648) + 8LL * i);
    v20 = *(_DWORD *)(v19 + 104);
    if ( (v20 & 0x1001) == 0
      && (v20 & 0x200000) == 0
      && *((_DWORD *)v10 + 10048) != -1
      && (a4 & 0x80u) == 0
      && *(_QWORD *)(v19 + 272) > (unsigned __int64)qword_1400815B8
      && !v13
      && (v20 & 0x80u) != 0
      && (a4 & 0x20) != 0 )
    {
      VIDMM_GLOBAL::ScheduleEvictionTimer(v10, (struct VIDMM_PHYSICAL_ADAPTER *)a3);
    }
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 1648) + 8LL * i);
    v22 = *(_DWORD *)(v21 + 104);
    if ( ((v22 & 0x80u) == 0 || (a4 & 2) == 0 || !v17)
      && ((v22 & 0x100) == 0 || (a4 & 4) == 0)
      && ((v22 & 0x1001) != 0 || (a4 & 0x10) == 0) )
    {
      if ( (v22 & 0x80u) != 0 && (a4 & 0x20) != 0 && v18 && (a4 & 0x80u) == 0 )
      {
        if ( (v22 & 0x1001) == 0 )
        {
          v25 = 0LL;
          VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v21, a4, &v25);
          *a5 += v25;
        }
      }
      else if ( (v22 & 0x1001) == 0 || (a4 & 0x80u) == 0 )
      {
        v25 = 0LL;
        VIDMM_SEGMENT::PurgeContent(v21, a4, a6, &v25);
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1648) + 8LL * i) + 104LL) & 0x1001) != 0 )
          a5[1] += v25;
        else
          *a5 += v25;
        if ( (a4 & 8) == 0 )
        {
          v23 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 1648) + 8LL * i));
          if ( v23 == *(_DWORD *)(a3 + 96) || v23 == *(_DWORD *)(a3 + 80) )
            *(_BYTE *)(a3 + 477) |= 4u;
          if ( v23 == *(_DWORD *)(a3 + 104) || v23 == *(_DWORD *)(a3 + 88) )
            *(_BYTE *)(a3 + 477) |= 8u;
        }
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1648) + 8LL * i) + 408LL) != -1 )
          VIDMM_GLOBAL::NotifyMemorySegmentHasData(v26);
      }
    }
    v6 = *(_DWORD *)(a1 + 64);
    v10 = v26;
  }
  if ( (a4 & 0x20) != 0 && v6 )
  {
    do
    {
      v24 = *(VIDMM_MEMORY_SEGMENT **)(*(_QWORD *)(a1 + 1648) + 8LL * v7);
      if ( (*((_DWORD *)v24 + 26) & 0x1001) == 0 )
        VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(v24);
      ++v7;
    }
    while ( v7 < *(_DWORD *)(a1 + 64) );
  }
  VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResources((VIDMM_GLOBAL **)a1, 1u, 1);
}
