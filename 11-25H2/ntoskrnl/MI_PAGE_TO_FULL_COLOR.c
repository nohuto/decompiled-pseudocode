/*
 * XREFs of MI_PAGE_TO_FULL_COLOR @ 0x140344980
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPageFreeToZero @ 0x1403478B0 (MiPageFreeToZero.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiCompleteSecureProcessFault @ 0x1403F3164 (MiCompleteSecureProcessFault.c)
 *     MiFreeListPageContentsChanged @ 0x140434170 (MiFreeListPageContentsChanged.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiReuseUltraPageTable @ 0x140450BD4 (MiReuseUltraPageTable.c)
 *     MiDeleteUltraMapContext @ 0x140450D20 (MiDeleteUltraMapContext.c)
 *     MiFinalizeImageHeaderPage @ 0x1404A1818 (MiFinalizeImageHeaderPage.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MiInsertPossiblyBadPage @ 0x140677C6C (MiInsertPossiblyBadPage.c)
 * Callees:
 *     MiPageToChannel @ 0x14023EDC0 (MiPageToChannel.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

int __fastcall MI_PAGE_TO_FULL_COLOR(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v2; // rdx
  ULONG_PTR v3; // rsi
  int v4; // ecx
  char *v5; // rbx
  int i; // r8d
  int v7; // eax
  int v8; // ebx
  char v9; // r9
  int v10; // r8d
  int result; // eax

  v2 = 48 * BugCheckParameter2;
  v3 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v4 = dword_140E2D884;
  if ( dword_140E2D880 > (unsigned int)dword_140E2D884
    || (v5 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, BugCheckParameter2 < *(_QWORD *)v5)
    || dword_140E2D880 != dword_140E2D884 && BugCheckParameter2 >= *((_QWORD *)v5 + 2) )
  {
    for ( i = 0; ; i = v7 + 1 )
    {
      while ( 1 )
      {
        if ( v4 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v7 = (i + v4) >> 1;
        v5 = (char *)qword_140E2D8E0 + 16 * v7;
        if ( BugCheckParameter2 >= *(_QWORD *)v5 )
          break;
        if ( !v7 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)v5, 0LL);
        v4 = v7 - 1;
      }
      if ( v7 == dword_140E2D884 || BugCheckParameter2 < *((_QWORD *)v5 + 2) )
        break;
    }
    dword_140E2D880 = (i + v4) >> 1;
  }
  v8 = *((_DWORD *)v5 + 2);
  if ( qword_140E2D8E8 )
    v9 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * (v2 >> 4));
  else
    v9 = 0;
  v10 = 3;
  if ( (*(_QWORD *)(v3 + 40) & 0x10000000000LL) != 0 )
  {
    v10 = 3 - ((*(_DWORD *)(v3 + 36) >> 27) & 3);
    if ( v10 == 3 )
      v10 = 3;
  }
  result = (unsigned __int8)(BugCheckParameter2 / MiPageSizes[v10] % (unsigned int)dword_140E2D980[v10]) | ((v9 & 1 | (2 * (v8 & 0x3F | (8 * ((16 * (v10 & 3)) | HIWORD(*(_DWORD *)(v3 + 32)) & 0xC0))))) << 8);
  if ( v10 != 3 && BugCheckParameter2 < 0x100000 )
    return result | 0x8000;
  return result;
}
