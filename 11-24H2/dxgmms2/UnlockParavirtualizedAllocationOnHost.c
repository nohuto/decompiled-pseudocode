/*
 * XREFs of UnlockParavirtualizedAllocationOnHost @ 0x14009666C
 * Callers:
 *     ?UnlockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N@Z @ 0x1400E9320 (-UnlockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ??1VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1400F5BA4 (--1VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     UnmapFromSystemMemory @ 0x1400F9C18 (UnmapFromSystemMemory.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140023720 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1400A8B60 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall UnlockParavirtualizedAllocationOnHost(__int64 a1)
{
  VIDMM_PROCESS *v2; // rcx

  if ( *(_QWORD *)(a1 + 424) )
  {
    v2 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v2 )
      v2 = (VIDMM_PROCESS *)*((_QWORD *)v2 + 1);
    VIDMM_PROCESS::UnmapHostAddressesFromGuest(
      v2,
      *(void **)(a1 + 424),
      *(_QWORD *)(a1 + 432),
      *(_QWORD *)(a1 + 416),
      0);
    *(_QWORD *)(a1 + 432) = 0LL;
    *(_QWORD *)(a1 + 424) = 0LL;
  }
}
