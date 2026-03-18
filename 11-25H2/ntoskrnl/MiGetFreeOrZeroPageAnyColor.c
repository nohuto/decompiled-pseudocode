/*
 * XREFs of MiGetFreeOrZeroPageAnyColor @ 0x14022A544
 * Callers:
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 * Callees:
 *     MiDemoteLocalLargePage @ 0x140229CD0 (MiDemoteLocalLargePage.c)
 *     MiGetPageSlist @ 0x14022AC58 (MiGetPageSlist.c)
 *     MiColorHasSlists @ 0x14022B2E0 (MiColorHasSlists.c)
 *     MiRemovePageAnyColor @ 0x14022B30C (MiRemovePageAnyColor.c)
 *     MiObtainedPageIsGood @ 0x14048BC58 (MiObtainedPageIsGood.c)
 */

__int64 __fastcall MiGetFreeOrZeroPageAnyColor(__int64 a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // r15
  __int64 PageSlist; // rbp
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rax

  v5 = *(_QWORD *)(a1 + 14984);
  if ( (a2 & 0x30000) == 0x30000 && (a2 & 0xC0000) == 0x40000 )
  {
    PageSlist = MiGetPageSlist(a1);
    if ( PageSlist )
      return PageSlist;
  }
  v12 = MiRemovePageAnyColor(v5, a2, a3, 1LL);
  PageSlist = v12;
  if ( v12 == 2 )
    return 2LL;
  if ( v12 )
    return PageSlist;
  if ( (a3 & 0x40) != 0 )
  {
    a3 &= ~0x40u;
    if ( (unsigned int)MiColorHasSlists(a2) )
    {
      PageSlist = MiGetPageSlist(a1);
      if ( PageSlist )
        return PageSlist;
    }
  }
  if ( (a3 & 0x400) == 0 )
  {
    v14 = a3 | 0x400;
    v15 = MiRemovePageAnyColor(v5, a2, v14, 1LL);
    PageSlist = v15;
    if ( v15 != 2 )
    {
      if ( !v15 )
      {
        a3 = v14 & 0xFFFFFBFF;
        goto LABEL_12;
      }
      return PageSlist;
    }
    return 2LL;
  }
LABEL_12:
  if ( a5 )
  {
    v16 = a2 ^ (a2 ^ (a4 << 18)) & 0xC0000;
    while ( 1 )
    {
      v17 = MiDemoteLocalLargePage(v5, v16, a3, v13);
      PageSlist = v17;
      if ( !v17 )
        break;
      if ( (unsigned int)MiObtainedPageIsGood(v17) )
        return PageSlist;
    }
  }
  return 0LL;
}
