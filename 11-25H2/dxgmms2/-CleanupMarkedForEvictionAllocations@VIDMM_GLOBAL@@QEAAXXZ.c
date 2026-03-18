/*
 * XREFs of ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F0CC8
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400ACAE4 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1400BBAF4 (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 */

void __fastcall VIDMM_GLOBAL::CleanupMarkedForEvictionAllocations(VIDMM_GLOBAL *this)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int16 i; // dx
  unsigned __int16 v6; // r8
  __int64 v7; // r11
  __int64 v8; // r9
  char v9; // bl

  if ( qword_140081448 )
  {
    v2 = 0x8000000000000000uLL;
    if ( *((_BYTE *)this + 40106) )
    {
      for ( i = 0; (unsigned int)i < *((_DWORD *)this + 1736); ++i )
      {
        v6 = 0;
        v7 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * i);
        while ( (unsigned int)v6 < *(_DWORD *)(v7 + 64) )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(v7 + 1648) + 8LL * v6);
          if ( (*(_DWORD *)(v8 + 104) & 0x1001) != 0 && *(_QWORD *)(v8 + 216) != v8 + 216 )
          {
            *((_QWORD *)this + 880) = *((_QWORD *)this + 570);
            *((_BYTE *)this + 40106) = 0;
            v2 = -qword_140081448;
            goto LABEL_6;
          }
          ++v6;
        }
      }
    }
    else
    {
      v3 = *((_QWORD *)this + 570) - *((_QWORD *)this + 880);
      if ( v3 >= qword_140081448 )
      {
        VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, 0xCFu);
        v9 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(this);
        VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0LL, 0LL, 0LL);
        if ( !v9 )
          *((_BYTE *)this + 40106) = 1;
      }
      else
      {
        v2 = v3 - qword_140081448;
      }
    }
LABEL_6:
    v4 = *(_QWORD *)this;
    if ( v2 > *(_QWORD *)(*(_QWORD *)this + 128LL) )
    {
      *(_QWORD *)(v4 + 128) = v2;
      *(_BYTE *)(v4 + 214) = 2;
    }
  }
}
