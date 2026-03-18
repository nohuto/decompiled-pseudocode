/*
 * XREFs of ?Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1401027B4
 * Callers:
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x14009EFF4 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400B2188 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400CE500 (-DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x140102974 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1401050C4 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     MapInCpuHostAperture @ 0x14011493C (MapInCpuHostAperture.c)
 *     MapInCpuVisibleSegment @ 0x140114D50 (MapInCpuVisibleSegment.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Rotate(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 result; // rax
  __int64 v11; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, int))(**(_QWORD **)(a2 + 240) + 48LL))(
             *(_QWORD *)(a2 + 240),
             a1,
             *(_QWORD *)(a2 + 248),
             a3,
             a4,
             a5,
             a6,
             a7,
             a8);
  if ( (int)result >= 0 )
  {
    v11 = *(_QWORD *)(a9 + 64);
    if ( !v11 )
      v11 = *(_QWORD *)(a9 + 104);
    if ( a3 > 1 )
      _InterlockedDecrement((volatile signed __int32 *)(v11 + 560));
    else
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 560));
  }
  return result;
}
