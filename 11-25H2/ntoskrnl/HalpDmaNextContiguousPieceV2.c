/*
 * XREFs of HalpDmaNextContiguousPieceV2 @ 0x140335AE0
 * Callers:
 *     IoMapTransferInternal @ 0x140333E20 (IoMapTransferInternal.c)
 *     IopMapTransfer @ 0x140334310 (IopMapTransfer.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403353E0 (HalpAllocateAdapterCallbackV2.c)
 *     HalpDmaNextContiguousPiece @ 0x140335A94 (HalpDmaNextContiguousPiece.c)
 *     HalPutScatterGatherListV2 @ 0x140335DA0 (HalPutScatterGatherListV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaNextContiguousPieceV2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6)
{
  int v9; // r13d
  char v10; // r12
  unsigned __int64 v11; // rdx
  bool v12; // bl
  unsigned int v13; // r8d
  __int64 v14; // rdi
  __int64 *v15; // r14
  unsigned __int64 *v16; // rdi
  __int64 result; // rax
  bool v18; // cc
  _QWORD *v19; // rcx
  _QWORD *v20; // r9
  __int64 i; // rdx
  int v22; // eax
  bool v23; // cc
  __int64 v24; // r10
  unsigned __int64 v25; // rcx
  __int64 v26; // rbp

  v9 = 1;
  if ( *(_DWORD *)(a1 + 156) != 2 )
  {
    v22 = HalpCoreDmaAlignment;
    if ( *(_BYTE *)(a1 + 445) )
      v22 = 1;
    v9 = v22;
  }
  v10 = *(_BYTE *)(a1 + 153);
  v11 = *(_QWORD *)(a1 + 144) >> 12;
  v12 = !a5 && !*(_BYTE *)(a1 + 445);
  v13 = 4096 - (a4 & 0xFFF);
  v14 = a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
  v15 = (__int64 *)(v14 + 48);
  if ( *(_QWORD *)(v14 + 48) > v11 || v12 && ((v9 - 1) & (unsigned int)a4) != 0 )
  {
    v13 = 0;
  }
  else
  {
    v23 = v13 <= a6;
    if ( v13 < a6 )
    {
      while ( 1 )
      {
        v25 = v15[1];
        if ( v25 > v11 )
          break;
        v26 = *v15;
        if ( *v15 + 1 == v25
          && ((v26 ^ v25) & 0xFFFFFFFFFFF00000uLL) == 0
          && (v10 == 1 || ((v26 ^ v25) & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
        {
          v13 += 4096;
          ++v15;
          if ( v13 < a6 )
            continue;
        }
        v23 = v13 <= a6;
        goto LABEL_23;
      }
    }
    else
    {
LABEL_23:
      if ( !v23 )
      {
        v13 = a6;
        if ( v12 && ((v9 - 1) & a6) != 0 )
          v13 = a6 & 0xFFFFF000;
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 442) || !a6 || v13 )
    return v13;
  v16 = (unsigned __int64 *)(v14 + 56);
  result = 4096 - (unsigned int)(a4 & 0xFFF);
  v18 = (unsigned int)result <= a6;
  if ( (unsigned int)result < a6 )
  {
    while ( *v16 > v11 )
    {
      result = (unsigned int)(result + 4096);
      ++v16;
      v18 = (unsigned int)result <= a6;
      if ( (unsigned int)result >= a6 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( !v18 )
      result = a6;
  }
  v19 = *(_QWORD **)(a3 + 56);
  v13 = 4096 - (a4 & 0xFFF);
  v20 = (_QWORD *)v19[1];
  for ( i = *v19 >> 12; v13 < (unsigned int)result; i = v24 )
  {
    v24 = *v20 >> 12;
    if ( v24 != i + 1
      || ((i ^ v24) & 0xFFFFFFFFFFF00000uLL) != 0
      || v10 != 1 && ((i ^ v24) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      break;
    }
    v20 = (_QWORD *)v20[1];
    v13 += 4096;
  }
  if ( !v12 || v13 >= 0x1000 || (unsigned int)result >= v13 << 12 || (((_DWORD)result - v13) & (v9 - 1)) == 0 )
  {
    if ( v13 > (unsigned int)result )
      return (unsigned int)result;
    return v13;
  }
  return result;
}
