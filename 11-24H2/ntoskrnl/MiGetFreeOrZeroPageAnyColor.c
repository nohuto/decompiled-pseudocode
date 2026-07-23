/*
 * XREFs of MiGetFreeOrZeroPageAnyColor @ 0x14033FA14
 * Callers:
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 * Callees:
 *     MiObtainedPageIsGood @ 0x1402F0004 (MiObtainedPageIsGood.c)
 *     MiDemoteLocalLargePage @ 0x14033E130 (MiDemoteLocalLargePage.c)
 *     MiRemovePageAnyColor @ 0x14033E6B4 (MiRemovePageAnyColor.c)
 *     MiGetPageSlist @ 0x14033F3D8 (MiGetPageSlist.c)
 */

__int64 __fastcall MiGetFreeOrZeroPageAnyColor(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v5; // r12
  int v7; // r15d
  unsigned int v9; // ebx
  int v11; // r14d
  __int64 v12; // rax
  PSLIST_ENTRY PageSlist; // rbp
  int v14; // ebx
  __int64 v15; // rax
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rdx

  v5 = *(_QWORD *)(a1 + 14984);
  v7 = a2 & 0x30000;
  v9 = a3;
  if ( (a2 & 0x30000) == 0x30000 && (v11 = a2 & 0xC0000, (a2 & 0xC0000) == 0x40000) )
  {
    PageSlist = MiGetPageSlist(a1, a2, a3);
    if ( PageSlist )
      return (__int64)PageSlist;
  }
  else
  {
    v11 = a2 & 0xC0000;
  }
  v12 = MiRemovePageAnyColor(v5, a2, v9, 1);
  PageSlist = (PSLIST_ENTRY)v12;
  if ( v12 == 2 )
    return 2LL;
  if ( v12 )
    return (__int64)PageSlist;
  if ( (v9 & 0x40) != 0 )
  {
    v9 &= ~0x40u;
    if ( v11 == 0x40000 && v7 == 196608 )
    {
      PageSlist = MiGetPageSlist(a1, a2, v9);
      if ( PageSlist )
        return (__int64)PageSlist;
    }
  }
  if ( (v9 & 0x400) == 0 )
  {
    v14 = v9 | 0x400;
    v15 = MiRemovePageAnyColor(v5, a2, v14, 1);
    PageSlist = (PSLIST_ENTRY)v15;
    if ( v15 != 2 )
    {
      if ( !v15 )
      {
        v9 = v14 & 0xFFFFFBFF;
        goto LABEL_11;
      }
      return (__int64)PageSlist;
    }
    return 2LL;
  }
LABEL_11:
  if ( a5 )
  {
    v17 = a2 ^ (a2 ^ (a4 << 18)) & 0xC0000;
    while ( 1 )
    {
      v18 = MiDemoteLocalLargePage(v5, v17, v9);
      PageSlist = (PSLIST_ENTRY)v18;
      if ( !v18 )
        break;
      if ( (unsigned int)MiObtainedPageIsGood(v18, v19) )
        return (__int64)PageSlist;
    }
  }
  return 0LL;
}
