/*
 * XREFs of MiGetPageTablePages @ 0x14039E9BC
 * Callers:
 *     MiCreateSystemPageTable @ 0x140395350 (MiCreateSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x1407F674C (MmCreateShadowMapping.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x1402AA420 (MiSufficientAvailablePages.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiObtainSystemCharges @ 0x1402F779C (MiObtainSystemCharges.c)
 *     MiSetPfnTbFlushStamp @ 0x1402FBDB0 (MiSetPfnTbFlushStamp.c)
 *     MiInsertPageChainHead @ 0x14039EC34 (MiInsertPageChainHead.c)
 *     MiReturnSystemCharges @ 0x14045A7E8 (MiReturnSystemCharges.c)
 *     MiFreePageChain @ 0x14045AD80 (MiFreePageChain.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, unsigned __int64 a2, __int16 a3, __int64 a4)
{
  __int16 v5; // r9
  __int64 v8; // rbp
  unsigned int v9; // r14d
  int v10; // ebx
  unsigned __int64 i; // r12
  unsigned int v12; // ecx
  unsigned int v13; // edi
  __int64 SlabPage; // rax
  __int64 v15; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  int v21; // [rsp+70h] [rbp+8h]

  v5 = a3;
  *(_OWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  v8 = *(_QWORD *)(a1 + 96);
  if ( (*(_DWORD *)(a1 + 128) & 8) != 0 || !*(_QWORD *)(v8 + 19608) )
  {
    v21 = 0;
  }
  else
  {
    if ( !(unsigned int)MiObtainSystemCharges(*(ULONG **)(a1 + 96), a2, *(_DWORD *)(a1 + 120)) )
      return 3221225773LL;
    *(_QWORD *)(a1 + 104) += a2;
    v5 = a3;
    v21 = 1;
  }
  v9 = ((*(_DWORD *)(a1 + 128) & 0x400) != 0) + 12;
  v10 = (*(_DWORD *)(a1 + 128) & 0x400) != 0 ? 4272 : 176;
  if ( (v5 & 2) != 0 )
  {
    v10 |= 1u;
    v9 |= 0x10u;
  }
  for ( i = 0LL; ; ++i )
  {
    if ( i >= a2 )
      return 0LL;
    v12 = *(_DWORD *)(a1 + 160);
    v13 = v12 ^ (unsigned __int8)(v12 ^ (_InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 152), 1u)
                                       % (unsigned int)dword_140E2DBC0[HIWORD(v12) & 3]));
    if ( (v5 & 0x2000) != 0 )
      break;
    if ( (v5 & 1) == 0 || i )
    {
      SlabPage = MiGetSlabPage(v8, 7, v13, v9, 0LL, 0);
      if ( SlabPage != -1 )
        goto LABEL_12;
      if ( _bittest64(&MiFlags, 0x22u) )
        _InterlockedIncrement64((volatile signed __int64 *)(v8 + 16768));
      break;
    }
    if ( *(_DWORD *)(a1 + 120) != 3 )
      break;
    SlabPage = MiGetSlabPage(v8, 7, v13, v9, 0LL, 0);
    if ( SlabPage == -1 )
      break;
LABEL_12:
    v15 = 48 * SlabPage - 0x220000000000LL;
    MiSetPfnTbFlushStamp(v15, 0LL, 0);
    MiInsertPageChainHead(a4, v15);
    v5 = a3;
  }
  SlabPage = MiGetPage(v8, v13, v10);
  if ( SlabPage != -1 )
    goto LABEL_12;
  if ( (*(_DWORD *)(a1 + 128) & 0x10) != 0 )
  {
    if ( (unsigned int)MiSufficientAvailablePages(v8, 0x60uLL) )
    {
      v20 = v10 | 0x200;
      SlabPage = MiGetPage(v8, v13, v20);
      v10 = v20 & 0xFFFFFDFF;
      if ( SlabPage != -1 )
        goto LABEL_12;
    }
  }
  if ( v21 )
  {
    MiReturnSystemCharges(v8, a2, a2, *(unsigned int *)(a1 + 120));
    *(_QWORD *)(a1 + 104) -= a2;
  }
  MiFreePageChain(a4, v17, v18, v19);
  return 3221225495LL;
}
