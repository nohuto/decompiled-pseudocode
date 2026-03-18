/*
 * XREFs of MiGetPageTablePages @ 0x14022A2B8
 * Callers:
 *     MiCreateSystemPageTable @ 0x1402D0110 (MiCreateSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x1407E68BC (MmCreateShadowMapping.c)
 * Callees:
 *     MiObtainSystemCharges @ 0x14022A218 (MiObtainSystemCharges.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1402C7C70 (MiSetPfnTbFlushStamp.c)
 *     MiReturnSystemCharges @ 0x140377DD8 (MiReturnSystemCharges.c)
 *     MiSufficientAvailablePages @ 0x14037A4B0 (MiSufficientAvailablePages.c)
 *     MiFreePageChain @ 0x14045B26C (MiFreePageChain.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int16 v5; // r9
  __int64 v8; // rbp
  int v9; // r14d
  unsigned int v10; // ebx
  unsigned __int64 i; // r13
  unsigned int v12; // ecx
  unsigned int v13; // edi
  __int64 SlabPage; // rax
  _QWORD *v15; // rdi
  bool v16; // zf
  unsigned int v18; // ebx
  int v19; // [rsp+70h] [rbp+8h]
  __int16 v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v5 = a3;
  *(_OWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  v8 = *(_QWORD *)(a1 + 96);
  if ( (*(_DWORD *)(a1 + 128) & 8) != 0 || !*(_QWORD *)(v8 + 19608) )
  {
    v19 = 0;
  }
  else
  {
    if ( !(unsigned int)MiObtainSystemCharges(*(_QWORD *)(a1 + 96), a2, *(_DWORD *)(a1 + 120), a3) )
      return 3221225773LL;
    *(_QWORD *)(a1 + 104) += a2;
    v5 = v20;
    v19 = 1;
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
                                       % (unsigned int)dword_140E2D980[HIWORD(v12) & 3]));
    if ( (v5 & 0x2000) != 0 )
      break;
    if ( (v5 & 1) != 0 && !i )
    {
      if ( *(_DWORD *)(a1 + 120) == 3 )
      {
        SlabPage = MiGetSlabPage(v8, 7, v13, v9, 0LL, 0);
        if ( SlabPage != -1 )
          goto LABEL_12;
      }
      break;
    }
    SlabPage = MiGetSlabPage(v8, 7, v13, v9, 0LL, 0);
    if ( SlabPage == -1 )
    {
      if ( _bittest64(&MiFlags, 0x22u) )
        _InterlockedIncrement64((volatile signed __int64 *)(v8 + 16768));
      break;
    }
LABEL_12:
    v15 = (_QWORD *)(48 * SlabPage - 0x220000000000LL);
    MiSetPfnTbFlushStamp(v15, 0LL, 0LL);
    *v15 = *(_QWORD *)a4;
    v16 = *(_QWORD *)(a4 + 8) == 0LL;
    *(_QWORD *)a4 = v15;
    if ( v16 )
      *(_QWORD *)(a4 + 8) = v15;
    ++*(_QWORD *)(a4 + 16);
    v5 = v20;
  }
  SlabPage = MiGetPage(v8, v13, v10);
  if ( SlabPage != -1 )
    goto LABEL_12;
  if ( (*(_DWORD *)(a1 + 128) & 0x10) != 0 )
  {
    if ( (unsigned int)MiSufficientAvailablePages(v8, 96LL) )
    {
      v18 = v10 | 0x200;
      SlabPage = MiGetPage(v8, v13, v18);
      v10 = v18 & 0xFFFFFDFF;
      if ( SlabPage != -1 )
        goto LABEL_12;
    }
  }
  if ( v19 )
  {
    MiReturnSystemCharges(v8, a2, a2, *(unsigned int *)(a1 + 120));
    *(_QWORD *)(a1 + 104) -= a2;
  }
  MiFreePageChain(a4);
  return 3221225495LL;
}
