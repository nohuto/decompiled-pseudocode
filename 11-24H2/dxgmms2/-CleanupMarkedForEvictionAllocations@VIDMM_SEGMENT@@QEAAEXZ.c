/*
 * XREFs of ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x1400AD588
 * Callers:
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1400AD4C4 (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 * Callees:
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400AD620 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 */

char __fastcall VIDMM_SEGMENT::CleanupMarkedForEvictionAllocations(VIDMM_GLOBAL **this)
{
  _QWORD *v2; // rsi
  char v3; // bl
  _QWORD *v4; // rbp
  VIDMM_GLOBAL *v5; // rdx

  v2 = this + 27;
  v3 = 1;
  while ( 1 )
  {
    v4 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( !VIDMM_GLOBAL::UnderCleanupLimit(this[3]) )
      return v3;
    VIDMM_PHYSICAL_ADAPTER::EvictResources(this[4], (struct VIDMM_PHYSICAL_ALLOC *)*(v4 - 33), 1, 0, 0, 0LL);
    v5 = this[3];
    *((_QWORD *)v5 + 886) += *(_QWORD *)(*(v4 - 33) + 16LL);
    ++*((_DWORD *)v5 + 1774);
  }
  return 0;
}
