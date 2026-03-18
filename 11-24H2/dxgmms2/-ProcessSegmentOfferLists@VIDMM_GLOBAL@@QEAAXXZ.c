/*
 * XREFs of ?ProcessSegmentOfferLists@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400CF570
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400B3810 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400B4E94 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?TrimOfferLists@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400CF608 (-TrimOfferLists@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessSegmentOfferLists(VIDMM_GLOBAL *this)
{
  unsigned __int16 i; // di

  if ( (*((_DWORD *)this + 1746) & 0x8000) != 0 )
  {
    VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, 0x3EBu);
    for ( i = 0; (unsigned int)i < *((_DWORD *)this + 1736); ++i )
      VIDMM_PHYSICAL_ADAPTER::TrimOfferLists(*(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * i));
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0LL, 0LL, 0LL);
  }
}
