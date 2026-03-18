/*
 * XREFs of MiFreeLargePageMemory @ 0x14038C050
 * Callers:
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiFreeContiguousPages @ 0x14038B910 (MiFreeContiguousPages.c)
 *     MiDecommitLargePoolVa @ 0x14038BEF0 (MiDecommitLargePoolVa.c)
 *     MiZeroAndReleasePages @ 0x14038C180 (MiZeroAndReleasePages.c)
 *     MiFreeMdlPageRun @ 0x14038C69C (MiFreeMdlPageRun.c)
 *     MiFreeSlabEntry @ 0x1403B6480 (MiFreeSlabEntry.c)
 *     MiFreeLargePages @ 0x1404BB340 (MiFreeLargePages.c)
 *     MiFreeBootDriverPages @ 0x140C54EE4 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiConvertSmallPageRangeToLarge @ 0x1402C541C (MiConvertSmallPageRangeToLarge.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiUpdateLargePageBitMap @ 0x14038D1D8 (MiUpdateLargePageBitMap.c)
 *     MiReadyLargePageToFree @ 0x14038D6BC (MiReadyLargePageToFree.c)
 *     MiFinishLargePageFree @ 0x14038D7E8 (MiFinishLargePageFree.c)
 *     MiChangePageHeatImmediate @ 0x14044039C (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x14044D2E0 (MiColdPageSizeSupported.c)
 */

__int64 __fastcall MiFreeLargePageMemory(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // r12
  __int64 v9; // r8
  ULONG_PTR v10; // rdx
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9

  v3 = a2;
  if ( (a3 & 2) != 0 )
    MiConvertSmallPageRangeToLarge(BugCheckParameter2, a2);
  v6 = MiPageSizes[v3];
  v7 = 1;
  v8 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(48 * BugCheckParameter2 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  if ( (a3 & 1) != 0 )
  {
    v12 = MiPageToNode(BugCheckParameter2);
    if ( (unsigned int)MiColdPageSizeSupported((unsigned int)v3, *(_QWORD *)(v8 + 16) + 57216LL * v12, v13, v14) )
    {
      v7 = 0;
      MiChangePageHeatImmediate(BugCheckParameter2, (unsigned int)v3, 0LL);
    }
  }
  v9 = 512LL;
  v10 = BugCheckParameter2;
  if ( (unsigned int)v3 > 1 )
    v10 = BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL;
  else
    v9 = v6;
  MiUpdateLargePageBitMap(v8, v10, v9, (a3 >> 2) & 4);
  if ( (unsigned int)MiReadyLargePageToFree(BugCheckParameter2, (unsigned int)v3, a3) )
    return MiFinishLargePageFree(48 * BugCheckParameter2 - 0x220000000000LL, (a3 & 1) == 0, v7, a3);
  else
    return 0LL;
}
