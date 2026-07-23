/*
 * XREFs of MiCompressTbFlushList @ 0x140215218
 * Callers:
 *     MiMakePteClean @ 0x140200C78 (MiMakePteClean.c)
 *     MiFlushTbAsNeeded @ 0x140207BE0 (MiFlushTbAsNeeded.c)
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiEmptyWorkingSetHelper @ 0x140296F20 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x1402976F0 (MiEmptyPte.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiAgePteWorker @ 0x1403040A0 (MiAgePteWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall MiCompressTbFlushList(__int64 a1)
{
  int v1; // r11d
  unsigned __int64 *v2; // r8
  unsigned int v3; // ebx
  unsigned __int64 v4; // r10
  __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned int v7; // eax

  v1 = 0;
  v2 = (unsigned __int64 *)(a1 + 40);
  v3 = 1;
  if ( *(_DWORD *)(a1 + 28) > 1u )
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 8LL * v3 + 40);
      v5 = 4096LL << (9 * ((unsigned __int8)(v4 >> 10) & 3u));
      if ( ((v4 >> 10) & 3) == ((*v2 >> 10) & 3)
        && (v6 = *v2 & 0x3FF, (v4 & 0xFFFFFFFFFFFFF000uLL) - v5 * (v6 + 1) == (*v2 & 0xFFFFFFFFFFFFF000uLL))
        && v6 != 1023 )
      {
        if ( v6 + (v4 & 0x3FF) + 1 > 0x3FF )
        {
          *(_QWORD *)(a1 + 8LL * v3 + 40) = (1023 - v6) * v5
                                          + ((v4 - (1023 - v6)) ^ (v4 ^ (v4 - (1023 - v6))) & 0xFFFFFFFFFFFFFC00uLL);
          *v2++ |= 0x3FFuLL;
          *v2 = *(_QWORD *)(a1 + 8LL * v3 + 40);
        }
        else
        {
          *v2 = (v4 + *v2 + 1) ^ (*v2 ^ (v4 + *v2 + 1)) & 0xFFFFFFFFFFFFFC00uLL;
          ++v1;
        }
      }
      else
      {
        *++v2 = v4;
      }
      v7 = *(_DWORD *)(a1 + 28);
      ++v3;
    }
    while ( v3 < v7 );
    if ( v1 )
      *(_DWORD *)(a1 + 28) = v7 - v1;
  }
}
