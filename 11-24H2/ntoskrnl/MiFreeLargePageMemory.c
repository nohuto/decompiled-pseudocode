/*
 * XREFs of MiFreeLargePageMemory @ 0x1403A3588
 * Callers:
 *     MiFreeSlabEntry @ 0x1402D2150 (MiFreeSlabEntry.c)
 *     MiZeroAndReleasePages @ 0x1403A0C10 (MiZeroAndReleasePages.c)
 *     MiCreateSlabEntry @ 0x1403A112C (MiCreateSlabEntry.c)
 *     MiFreeMdlPageRun @ 0x1403A1D8C (MiFreeMdlPageRun.c)
 *     MiDecommitLargePoolVa @ 0x1403A3F50 (MiDecommitLargePoolVa.c)
 *     MiFreeContiguousPages @ 0x1403A95E8 (MiFreeContiguousPages.c)
 *     MiFreeLargePages @ 0x1403CC4F0 (MiFreeLargePages.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
 * Callees:
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1402EE2CC (MiConvertSmallPageRangeToLarge.c)
 *     MiUpdateLargePageBitMap @ 0x1403A29EC (MiUpdateLargePageBitMap.c)
 *     MiReadyLargePageToFree @ 0x1403A36B8 (MiReadyLargePageToFree.c)
 *     MiFinishLargePageFree @ 0x1403A3D48 (MiFinishLargePageFree.c)
 *     MiChangePageHeatImmediate @ 0x14043F808 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x14044D5AC (MiColdPageSizeSupported.c)
 */

__int64 __fastcall MiFreeLargePageMemory(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // r12
  unsigned __int64 v9; // r8
  ULONG_PTR v10; // rdx
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9

  v3 = a2;
  if ( (a3 & 2) != 0 )
    MiConvertSmallPageRangeToLarge(BugCheckParameter2, a2);
  v6 = MiPageSizes[v3];
  v7 = 1;
  v8 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(48 * BugCheckParameter2 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
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
