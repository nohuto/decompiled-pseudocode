/*
 * XREFs of MiPageFreeToZero @ 0x14026ABD0
 * Callers:
 *     MiMoveZeroedPages @ 0x14020B140 (MiMoveZeroedPages.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiFreeListPageContentsChanged @ 0x140269BA8 (MiFreeListPageContentsChanged.c)
 *     MiStopPageAccessor @ 0x14026ADB0 (MiStopPageAccessor.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiColorHasSlists @ 0x1402F6D90 (MiColorHasSlists.c)
 *     MiFreeZeroPageSlistSufficient @ 0x1404299A0 (MiFreeZeroPageSlistSufficient.c)
 *     MiSetFreeZeroPfnCold @ 0x1404319A0 (MiSetFreeZeroPfnCold.c)
 */

__int64 __fastcall MiPageFreeToZero(ULONG_PTR BugCheckParameter2, char a2, int a3)
{
  ULONG_PTR v6; // rbp
  int v7; // esi
  unsigned int v8; // eax
  __int64 v9; // r13
  __int64 v10; // r12
  unsigned int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // r8
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  bool v16; // zf
  signed __int64 v17; // rax
  unsigned __int64 v18; // rcx
  signed __int64 v19; // rtt
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8

  v6 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v7 = 3;
  if ( (*(_QWORD *)(v6 + 40) & 0x10000000000LL) != 0 )
  {
    v7 = 3 - ((*(_DWORD *)(v6 + 36) >> 27) & 3);
    if ( v7 == 3 )
      v7 = 3;
  }
  v8 = MiPageToNode(BugCheckParameter2);
  v9 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
  v10 = *(_QWORD *)(v9 + 16) + 57216LL * v8;
  MiStopPageAccessor(v6);
  if ( (a2 & 2) != 0 )
  {
    MiFreeListPageContentsChanged(v10, BugCheckParameter2);
    return 0LL;
  }
  else
  {
    v11 = 1;
    if ( a3 )
    {
      if ( v7 != 3
        || ((v21 = (unsigned int)MI_PAGE_TO_FULL_COLOR(BugCheckParameter2),
             !(unsigned int)MiColorHasSlists(v21, v22, v23))
         || (unsigned int)MiFreeZeroPageSlistSufficient(v10, (unsigned int)v21, 0LL))
        && *(_QWORD *)(*(_QWORD *)(v10 + 8 * ((v21 >> 18) & 3) + 5120) + 8LL * (unsigned __int8)v21) >= (unsigned __int64)(unsigned int)(4 * *(_DWORD *)(v9 + 16976)) )
      {
        a2 |= 0x80u;
        v11 = 1025;
      }
    }
    v12 = 15200LL;
    v13 = 15200LL;
    if ( v7 == 3 )
      v13 = 15192LL;
    v14 = *(_QWORD *)(v13 + v10);
    do
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v13 + v10),
              (v14 + 1) ^ (v14 ^ (v14 + 1)) & 0xFFFFFFFFFFFF0000uLL,
              v14);
    }
    while ( v15 != v14 );
    MiUnlinkFreeOrZeroedPage(BugCheckParameter2, 0LL, 0LL);
    MiInsertPageInFreeOrZeroedList(BugCheckParameter2, v11);
    v16 = v7 == 3;
    if ( v7 != 3 )
    {
      if ( a2 < 0 )
        MiSetFreeZeroPfnCold(v6, 1LL);
      v16 = v7 == 3;
    }
    if ( v16 )
      v12 = 15192LL;
    v17 = *(_QWORD *)(v12 + v10);
    do
    {
      v18 = (v17 - 1) ^ (v17 ^ (v17 - 1)) & 0xFFFFFFFFFFFF0000uLL;
      if ( (_WORD)v17 == 1 )
        v18 ^= (v18 ^ (v18 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
      v19 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + v10), v18, v17);
    }
    while ( v19 != v17 );
    return v11;
  }
}
