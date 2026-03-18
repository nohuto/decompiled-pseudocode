/*
 * XREFs of ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400B206C
 * Callers:
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400AC590 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_A.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B2DF0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C16A0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400CE500 (-DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x140102974 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1401050C4 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z @ 0x140038EE4 (-DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_CPU_HOST_APERTURE::UnmapRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2)
{
  __int64 v4; // rdx
  struct VIDMM_CPU_HOST_APERTURE_RANGE **v5; // rax
  UINT64 v6; // rdx
  __int64 v7; // rcx
  _DXGKARG_UNMAPCPUHOSTAPERTURE v8; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_QWORD *)a2;
  if ( *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)(v4 + 8) != a2
    || (v5 = (struct VIDMM_CPU_HOST_APERTURE_RANGE **)*((_QWORD *)a2 + 1), *v5 != a2) )
  {
LABEL_9:
    __fastfail(3u);
  }
  *v5 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  v6 = *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 7));
  v7 = *((_QWORD *)this + 6);
  *(_DWORD *)(&v8.PhysicalAdapterIndex + 1) = 0;
  v8.NumberOfPages = v6;
  v8.pCpuHostAperturePages = (UINT32 *)((char *)a2 + 32);
  if ( (*(_DWORD *)(v7 + 104) & 0x1000) != 0 )
    v8.SegmentId = 0;
  else
    v8.SegmentId = *(_WORD *)(v7 + 40) + 1;
  v8.PhysicalAdapterIndex = *(_WORD *)(v7 + 420);
  if ( (int)ADAPTER_RENDER::DdiUnmapCpuHostAperture(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL) + 3128LL),
              &v8) < 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 46LL, this, a2, &v8);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_9;
  }
  *((_DWORD *)a2 + 8) = -1;
}
