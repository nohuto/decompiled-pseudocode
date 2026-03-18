/*
 * XREFs of MI_PAGE_TO_FULL_COLOR @ 0x1402236D0
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiFreeListPageContentsChanged @ 0x140269BA8 (MiFreeListPageContentsChanged.c)
 *     MiPageFreeToZero @ 0x14026ABD0 (MiPageFreeToZero.c)
 *     MiDeleteUltraMapContext @ 0x1402D1B78 (MiDeleteUltraMapContext.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiCompleteSecureProcessFault @ 0x140435C20 (MiCompleteSecureProcessFault.c)
 *     MiReuseUltraPageTable @ 0x140469758 (MiReuseUltraPageTable.c)
 *     MiFinalizeImageHeaderPage @ 0x14049EAB8 (MiFinalizeImageHeaderPage.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MiInsertPossiblyBadPage @ 0x140683470 (MiInsertPossiblyBadPage.c)
 * Callees:
 *     MiSearchChannelTable @ 0x14026F0D4 (MiSearchChannelTable.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
  v4 = dword_140E2DAC4;
  if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
    || (v5 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, BugCheckParameter2 < *(_QWORD *)v5)
    || dword_140E2DAC0 != dword_140E2DAC4 && BugCheckParameter2 >= *((_QWORD *)v5 + 2) )
  {
    for ( i = 0; ; i = v7 + 1 )
    {
      while ( 1 )
      {
        if ( v4 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v7 = (i + v4) >> 1;
        v5 = (char *)qword_140E2DB20 + 16 * v7;
        if ( BugCheckParameter2 >= *(_QWORD *)v5 )
          break;
        if ( !v7 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)v5, 0LL);
        v4 = v7 - 1;
      }
      if ( v7 == dword_140E2DAC4 || BugCheckParameter2 < *((_QWORD *)v5 + 2) )
        break;
    }
    dword_140E2DAC0 = (i + v4) >> 1;
  }
  v8 = *((_DWORD *)v5 + 2);
  if ( qword_140E2DB28 )
    v9 = *(_BYTE *)(MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * (v2 >> 4)) + 12);
  else
    v9 = 0;
  v10 = 3;
  if ( (*(_QWORD *)(v3 + 40) & 0x10000000000LL) != 0 )
  {
    v10 = 3 - ((*(_DWORD *)(v3 + 36) >> 27) & 3);
    if ( v10 == 3 )
      v10 = 3;
  }
  result = (unsigned __int8)(BugCheckParameter2 / MiPageSizes[v10] % (unsigned int)dword_140E2DBC0[v10]) | ((v9 & 1 | (2 * (v8 & 0x3F | (8 * ((16 * (v10 & 3)) | HIWORD(*(_DWORD *)(v3 + 32)) & 0xC0))))) << 8);
  if ( v10 != 3 && BugCheckParameter2 < 0x100000 )
    return result | 0x8000;
  return result;
}
