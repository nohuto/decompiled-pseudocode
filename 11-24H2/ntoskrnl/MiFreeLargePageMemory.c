/*
 * XREFs of MiFreeLargePageMemory @ 0x14021B56C
 * Callers:
 *     MiZeroAndReleasePages @ 0x140217770 (MiZeroAndReleasePages.c)
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiFreeMdlPageRun @ 0x1402189BC (MiFreeMdlPageRun.c)
 *     MiDecommitLargePoolVa @ 0x14021BCD4 (MiDecommitLargePoolVa.c)
 *     MiFreeLargePages @ 0x1402666C0 (MiFreeLargePages.c)
 *     MiFreeSlabEntry @ 0x1403533C8 (MiFreeSlabEntry.c)
 *     MiFreeContiguousPages @ 0x140398278 (MiFreeContiguousPages.c)
 *     MiFreeBootDriverPages @ 0x140C68CE8 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiReadyLargePageToFree @ 0x14021B69C (MiReadyLargePageToFree.c)
 *     MiFinishLargePageFree @ 0x14021B7C8 (MiFinishLargePageFree.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14034F90C (MiConvertSmallPageRangeToLarge.c)
 *     MiChangePageHeatImmediate @ 0x140435AC8 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1404444AC (MiColdPageSizeSupported.c)
 */

__int64 __fastcall MiFreeLargePageMemory(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v6; // r13
  unsigned int v7; // r15d
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r8
  ULONG_PTR v10; // rdx
  unsigned int v12; // eax

  v3 = a2;
  v4 = a3;
  if ( (a3 & 2) != 0 )
    MiConvertSmallPageRangeToLarge(BugCheckParameter2, a2, a3);
  v6 = MiPageSizes[v3];
  v7 = 1;
  v8 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(48 * BugCheckParameter2 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  if ( (v4 & 1) != 0 )
  {
    v12 = MiPageToNode(BugCheckParameter2);
    if ( (unsigned int)MiColdPageSizeSupported((unsigned int)v3, *(_QWORD *)(v8 + 16) + 57216LL * v12) )
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
  MiUpdateLargePageBitMap(v8, v10, v9, (v4 >> 2) & 4);
  if ( (unsigned int)MiReadyLargePageToFree(BugCheckParameter2, (unsigned int)v3, v4) )
    return MiFinishLargePageFree(48 * BugCheckParameter2 - 0x220000000000LL, (v4 & 1) == 0, v7, v4);
  else
    return 0LL;
}
