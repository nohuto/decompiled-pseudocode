/*
 * XREFs of UnlockParavirtualizedAllocationOnHost @ 0x14009653C
 * Callers:
 *     ?UnlockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N@Z @ 0x1400EEC00 (-UnlockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ??1VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1400F8510 (--1VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     UnmapFromSystemMemory @ 0x1400FAD18 (UnmapFromSystemMemory.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1401014AC (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall UnlockParavirtualizedAllocationOnHost(__int64 a1)
{
  VIDMM_PROCESS *v2; // rcx

  if ( *(_QWORD *)(a1 + 408) )
  {
    v2 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v2 )
      v2 = (VIDMM_PROCESS *)*((_QWORD *)v2 + 1);
    VIDMM_PROCESS::UnmapHostAddressesFromGuest(
      v2,
      *(void **)(a1 + 408),
      *(_QWORD *)(a1 + 416),
      *(_QWORD *)(a1 + 400),
      0);
    *(_QWORD *)(a1 + 416) = 0LL;
    *(_QWORD *)(a1 + 408) = 0LL;
  }
}
