/*
 * XREFs of MiGetFreeOrZeroPageAnyColor @ 0x1402F75B8
 * Callers:
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 * Callees:
 *     MiDemoteLocalLargePage @ 0x1402F6020 (MiDemoteLocalLargePage.c)
 *     MiRemovePageAnyColor @ 0x1402F65A4 (MiRemovePageAnyColor.c)
 *     MiObtainedPageIsGood @ 0x14042F73C (MiObtainedPageIsGood.c)
 *     MiGetPageSlist @ 0x1404541D0 (MiGetPageSlist.c)
 */

__int64 __fastcall MiGetFreeOrZeroPageAnyColor(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // r12
  int v7; // r15d
  unsigned int v9; // ebx
  unsigned int v10; // esi
  int v11; // r14d
  __int64 v12; // rax
  __int64 PageSlist; // rbp
  int v14; // ebx
  __int64 v15; // rax
  unsigned int v17; // edi
  unsigned __int64 v18; // rax

  v5 = *(_QWORD *)(a1 + 14984);
  v7 = a2 & 0x30000;
  v9 = a3;
  v10 = a2;
  if ( (a2 & 0x30000) == 0x30000 && (v11 = a2 & 0xC0000, (a2 & 0xC0000) == 0x40000) )
  {
    PageSlist = MiGetPageSlist(a1, a2, a3);
    if ( PageSlist )
      return PageSlist;
  }
  else
  {
    v11 = a2 & 0xC0000;
  }
  v12 = MiRemovePageAnyColor(v5, v10, v9, 1);
  PageSlist = v12;
  if ( v12 == 2 )
    return 2LL;
  if ( v12 )
    return PageSlist;
  if ( (v9 & 0x40) != 0 )
  {
    v9 &= ~0x40u;
    if ( v11 == 0x40000 && v7 == 196608 )
    {
      PageSlist = MiGetPageSlist(a1, v10, v9);
      if ( PageSlist )
        return PageSlist;
    }
  }
  if ( (v9 & 0x400) == 0 )
  {
    v14 = v9 | 0x400;
    v15 = MiRemovePageAnyColor(v5, v10, v14, 1);
    PageSlist = v15;
    if ( v15 != 2 )
    {
      if ( !v15 )
      {
        v9 = v14 & 0xFFFFFBFF;
        goto LABEL_11;
      }
      return PageSlist;
    }
    return 2LL;
  }
LABEL_11:
  if ( a5 )
  {
    v17 = v10 ^ (v10 ^ (a4 << 18)) & 0xC0000;
    while ( 1 )
    {
      v18 = MiDemoteLocalLargePage(v5, v17, v9);
      PageSlist = v18;
      if ( !v18 )
        break;
      if ( (unsigned int)MiObtainedPageIsGood(v18) )
        return PageSlist;
    }
  }
  return 0LL;
}
