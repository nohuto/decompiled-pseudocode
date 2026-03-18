/*
 * XREFs of ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1400D089C
 * Callers:
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1400CF658 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FBB90 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1401009EC (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimOfferList(__int64 a1, _QWORD **a2, unsigned int a3, __int64 a4, __int64 a5)
{
  VIDMM_GLOBAL *v9; // rcx
  _QWORD *v10; // rdi
  struct VIDMM_GLOBAL_ALLOC *v11; // r8
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // rcx

  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(a1 + 24) + 39904LL));
  v10 = *a2;
  while ( v10 != a2 )
  {
    v11 = (struct VIDMM_GLOBAL_ALLOC *)(v10 - 35);
    v10 = (_QWORD *)*v10;
    if ( *(_WORD *)(*((_QWORD *)v11 + 49) + 8LL) != 1 )
    {
      VIDMM_GLOBAL::RemoveAllocationFromOfferList(v9, v11);
      if ( *(_DWORD *)(v12 + 72) == 2
        && *(_QWORD *)(v13 + 64) == a1
        && *(_WORD *)(*(_QWORD *)(v12 + 392) + 8LL) == 2
        && (int)VIDMM_SEGMENT::TrimAllocation(a1, v13, a3, a4, a5) >= 0 )
      {
        break;
      }
    }
  }
  v14 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v14 + 39912) = 0LL;
  ExReleasePushLockExclusiveEx(v14 + 39904, 0LL);
  KeLeaveCriticalRegion();
  return 3221225473LL;
}
