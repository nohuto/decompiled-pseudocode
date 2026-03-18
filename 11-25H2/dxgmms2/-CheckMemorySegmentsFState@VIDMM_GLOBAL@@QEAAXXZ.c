/*
 * XREFs of ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400A75A0
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140043E40 (-NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400A9270 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400ACAE4 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CheckMemorySegmentsFState(VIDMM_GLOBAL *this)
{
  __int64 i; // rsi
  __int64 v3; // rbx
  __int64 j; // rbp
  __int64 v5; // rax
  VIDMM_SEGMENT *v6; // r14

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
                VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, i);
                VIDMM_GLOBAL::StartPreparation(this, (unsigned int)i, 0LL, 0LL, 121);
                VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, i);
                VIDMM_GLOBAL::EndPreparation(this, i, 0LL, 0, 0LL, 0LL);
              }
              VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, i);
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
