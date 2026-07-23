/*
 * XREFs of MiInsertPossiblyBadPage @ 0x14068461C
 * Callers:
 *     MiFinishLargePageFree @ 0x14021B7C8 (MiFinishLargePageFree.c)
 *     MiFreeLargePageChain @ 0x1402648B8 (MiFreeLargePageChain.c)
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     MiObtainedPageIsGood @ 0x1402F0004 (MiObtainedPageIsGood.c)
 *     MiRebuildLargePage @ 0x1403F7120 (MiRebuildLargePage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14049DD64 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiEnableNewPfns @ 0x14066DC8C (MiEnableNewPfns.c)
 *     MiTransferPartitionPageRun @ 0x14068C62C (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiInsertDemotedPages @ 0x1402EF010 (MiInsertDemotedPages.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiInsertPossiblyBadPage(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned __int64 v4; // rax
  ULONG_PTR v5; // rbx
  __int64 v6; // rbp
  _BOOL8 v7; // rdi
  __int64 v8; // rdi
  __int64 *v9; // rcx
  int v11; // [rsp+40h] [rbp+8h]
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v4) = MI_PAGE_TO_FULL_COLOR(BugCheckParameter2);
  v5 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v6 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL)) + 16LL)
     + 57216 * ((v4 >> 9) & 0x3F);
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  if ( (*(_QWORD *)(v5 + 40) & 0x10000000000LL) != 0 )
  {
    v8 = MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(48 * BugCheckParameter2 - 0x220000000000LL)];
    if ( (*(_QWORD *)(v5 + 40) & 0x20000000000LL) != 0 )
    {
      v9 = (__int64 *)(v5 + 16);
      v11 = *(_DWORD *)(v5 + 32);
      BYTE2(v11) = BYTE2(v11) & 0xF8 | 5;
      *(_DWORD *)(v5 + 32) = v11;
      if ( a2 == 1 )
        *(_QWORD *)(v5 + 16) = *v9 & 0xFFFFFFFFFFFFFC1FuLL;
      else
        MiSetOriginalPtePfnFromFreeList(v9);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return MiInsertDemotedPages(v6, 48 * BugCheckParameter2 - 0x220000000000LL, 0LL, 3u);
    }
    else
    {
      MiInsertPageInFreeOrZeroedList(BugCheckParameter2, a2);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    v7 = (*(_DWORD *)(v5 + 32) & 0x40000000) != 0;
    MiInsertPageInFreeOrZeroedList(BugCheckParameter2, a2);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return !v7;
  }
  return v8;
}
