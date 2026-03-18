/*
 * XREFs of MiCompressTbFlushList @ 0x1404C7DF8
 * Callers:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiFlushTbAsNeeded @ 0x140237D10 (MiFlushTbAsNeeded.c)
 *     MiMakePteClean @ 0x140239F0C (MiMakePteClean.c)
 *     MiAgePteWorker @ 0x140248780 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x1402493D0 (MiClearPteAccessed.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiEmptyWorkingSetHelper @ 0x1403808F0 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140380E70 (MiEmptyPte.c)
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
