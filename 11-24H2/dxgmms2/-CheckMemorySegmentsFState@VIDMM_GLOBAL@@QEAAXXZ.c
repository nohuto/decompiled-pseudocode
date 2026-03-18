/*
 * XREFs of ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E6508
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140042930 (-NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400B3810 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400B4E94 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400E6660 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CheckMemorySegmentsFState(VIDMM_GLOBAL *this)
{
  __int64 i; // rsi
  __int64 v3; // rbx
  __int64 j; // rbp
  __int64 v5; // rax
  VIDMM_SEGMENT *v6; // r14
  void (*v7)(void *); // r8

  if ( *((_BYTE *)this + 40942) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1736); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8 * i);
      if ( !*(_DWORD *)(v3 + 472) && (*(_BYTE *)(v3 + 477) & 2) == 0 )
      {
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v3 + 64); j = (unsigned int)(j + 1) )
        {
          v5 = *(_QWORD *)(v3 + 1648);
          v6 = *(VIDMM_SEGMENT **)(v5 + 8 * j);
          if ( *((_DWORD *)v6 + 102) != -1 )
          {
            if ( (*(_BYTE *)(v3 + 477) & 2) == 0
              && (VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v5 + 8 * j)) == *(_DWORD *)(v3 + 100)
               || VIDMM_SEGMENT::DriverId(v6) == *(_DWORD *)(v3 + 84)) )
            {
              if ( *(_QWORD *)(v3 + 504) != v3 + 504 )
              {
                VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, i, v7);
                VIDMM_GLOBAL::StartPreparation((__int64)this, i, 0LL, 0LL, 0x79u);
                VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, i);
                VIDMM_GLOBAL::EndPreparation(this, i, 0LL, 0LL, 0LL, 0LL);
              }
              VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, i, v7);
              *(_BYTE *)(v3 + 477) |= 2u;
            }
            VIDMM_GLOBAL::NotifyMemorySegmentHasData(this);
          }
        }
      }
    }
    *((_BYTE *)this + 40942) = 0;
  }
}
