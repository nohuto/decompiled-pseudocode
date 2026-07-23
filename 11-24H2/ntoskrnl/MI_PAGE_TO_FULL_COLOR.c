/*
 * XREFs of MI_PAGE_TO_FULL_COLOR @ 0x140250420
 * Callers:
 *     MiFreeListPageContentsChanged @ 0x14021F138 (MiFreeListPageContentsChanged.c)
 *     MiPageFreeToZero @ 0x140220160 (MiPageFreeToZero.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiDeleteUltraMapContext @ 0x140352DF0 (MiDeleteUltraMapContext.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiCompleteSecureProcessFault @ 0x1404286A0 (MiCompleteSecureProcessFault.c)
 *     MiReuseUltraPageTable @ 0x1404622AC (MiReuseUltraPageTable.c)
 *     MiFinalizeImageHeaderPage @ 0x1404998B8 (MiFinalizeImageHeaderPage.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MiInsertPossiblyBadPage @ 0x14068461C (MiInsertPossiblyBadPage.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  v4 = dword_140E2DC04;
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v5 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, BugCheckParameter2 < *(_QWORD *)v5)
    || dword_140E2DC00 != dword_140E2DC04 && BugCheckParameter2 >= *((_QWORD *)v5 + 2) )
  {
    for ( i = 0; ; i = v7 + 1 )
    {
      while ( 1 )
      {
        if ( v4 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v7 = (i + v4) >> 1;
        v5 = (char *)qword_140E2DC60 + 16 * v7;
        if ( BugCheckParameter2 >= *(_QWORD *)v5 )
          break;
        if ( !v7 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)v5, 0LL);
        v4 = v7 - 1;
      }
      if ( v7 == dword_140E2DC04 || BugCheckParameter2 < *((_QWORD *)v5 + 2) )
        break;
    }
    dword_140E2DC00 = (i + v4) >> 1;
  }
  v8 = *((_DWORD *)v5 + 2);
  if ( qword_140E2DC68 )
    v9 = *((_BYTE *)MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * (v2 >> 4)) + 12);
  else
    v9 = 0;
  v10 = 3;
  if ( (*(_QWORD *)(v3 + 40) & 0x10000000000LL) != 0 )
  {
    v10 = 3 - ((*(_DWORD *)(v3 + 36) >> 27) & 3);
    if ( v10 == 3 )
      v10 = 3;
  }
  result = (unsigned __int8)(BugCheckParameter2 / MiPageSizes[v10] % (unsigned int)dword_140E2DD00[v10]) | ((v9 & 1 | (2 * (v8 & 0x3F | (8 * ((16 * (v10 & 3)) | HIWORD(*(_DWORD *)(v3 + 32)) & 0xC0))))) << 8);
  if ( v10 != 3 && BugCheckParameter2 < 0x100000 )
    return result | 0x8000;
  return result;
}
