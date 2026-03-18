/*
 * XREFs of ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400B1FBC
 * Callers:
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400AC590 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_A.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B2DF0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@.c)
 *     ?DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400CE500 (-DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM.c)
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400EC39C (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x140102974 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1401050C4 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     MapInCpuHostAperture @ 0x14011493C (MapInCpuHostAperture.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::ReleaseRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2)
{
  int v2; // r9d
  __int64 v3; // rax
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rcx

  v2 = *((_DWORD *)a2 + 6);
  v3 = *((unsigned int *)a2 + 7);
  if ( v2 == -1 || (_DWORD)v3 == -1 )
  {
    WdLogSingleEntry1(1LL, this);
    WdLogGlobalForLineNumber = 583;
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
  }
  else
  {
    v6 = *((_QWORD *)this + 5);
    v7 = *(_DWORD *)(v6 + 4 * v3);
    *(_DWORD *)(v6 + 4LL * (unsigned int)v3) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 15) += v7;
    *((_DWORD *)this + 16) = v2;
    *((_DWORD *)a2 + 6) = -1;
    *((_DWORD *)a2 + 7) = -1;
  }
  ExFreePoolWithTag(a2, 0);
}
