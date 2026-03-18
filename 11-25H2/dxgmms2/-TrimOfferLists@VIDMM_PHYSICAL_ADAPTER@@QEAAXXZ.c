/*
 * XREFs of ?TrimOfferLists@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400D39C8
 * Callers:
 *     ?ProcessSegmentOfferLists@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400D3930 (-ProcessSegmentOfferLists@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1400D3A18 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER::TrimOfferLists(VIDMM_PHYSICAL_ADAPTER *this)
{
  unsigned __int16 i; // bx

  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 16); ++i )
    VIDMM_SEGMENT::TrimOfferLists(*(_QWORD *)(*((_QWORD *)this + 206) + 8LL * i), 12LL, 0LL, 0LL);
}
