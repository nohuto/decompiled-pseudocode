/*
 * XREFs of ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1400CF658
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400CE7B0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z @ 0x1400CF1C8 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400CF608 (-TrimOfferLists@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1400D089C (-TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimOfferLists(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v8; // esi
  _QWORD *i; // rbx

  v8 = VIDMM_SEGMENT::TrimOfferList(a1, a1 + 320, a2, a3, a4);
  if ( v8 < 0 )
    v8 = VIDMM_SEGMENT::TrimOfferList(a1, a1 + 336, a2, a3, a4);
  if ( (a2 & 8) != 0 )
  {
    for ( i = (_QWORD *)(a1 + 216);
          (_QWORD *)*i != i;
          VIDMM_PHYSICAL_ADAPTER::EvictResources(
            *(VIDMM_PHYSICAL_ADAPTER **)(a1 + 32),
            *(struct VIDMM_PHYSICAL_ALLOC **)(*i - 264LL),
            1,
            0,
            0,
            0LL) )
    {
      ;
    }
  }
  return (unsigned int)v8;
}
