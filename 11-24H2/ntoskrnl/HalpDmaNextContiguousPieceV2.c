/*
 * XREFs of HalpDmaNextContiguousPieceV2 @ 0x140388DD0
 * Callers:
 *     IopMapTransfer @ 0x140387610 (IopMapTransfer.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403886C0 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x140389070 (HalPutScatterGatherListV2.c)
 *     HalpDmaNextContiguousPiece @ 0x140389540 (HalpDmaNextContiguousPiece.c)
 *     IoMapTransferInternal @ 0x140389CC4 (IoMapTransferInternal.c)
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
  int v9; // edi
  int v10; // eax
  char v11; // r12
  unsigned __int64 v12; // rdx
  bool v13; // bl
  unsigned int v14; // r8d
  __int64 v15; // rsi
  __int64 *v16; // r14
  unsigned __int64 *v17; // rsi
  __int64 result; // rax
  bool v19; // cc
  _QWORD *v20; // rcx
  _QWORD *v21; // r9
  __int64 i; // rdx
  bool v23; // cc
  __int64 v24; // r10
  unsigned __int64 v25; // rcx
  __int64 *v26; // r15
  __int64 v27; // r14

  v9 = 1;
  if ( *(_DWORD *)(a1 + 156) != 2 )
  {
    v10 = HalpCoreDmaAlignment;
    if ( *(_BYTE *)(a1 + 445) )
      v10 = 1;
    v9 = v10;
  }
  v11 = *(_BYTE *)(a1 + 153);
  v12 = *(_QWORD *)(a1 + 144) >> 12;
  v13 = !a5 && !*(_BYTE *)(a1 + 445);
  v14 = 4096 - (a4 & 0xFFF);
  v15 = a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
  v16 = (__int64 *)(v15 + 48);
  if ( *(_QWORD *)(v15 + 48) > v12 || v13 && ((v9 - 1) & (unsigned int)a4) != 0 )
  {
    v14 = 0;
  }
  else
  {
    v23 = v14 <= a6;
    if ( v14 < a6 )
    {
      while ( 1 )
      {
        v25 = v16[1];
        v26 = v16 + 1;
        if ( v25 > v12 )
          break;
        v27 = *v16;
        if ( v27 + 1 == v25
          && ((v27 ^ v25) & 0xFFFFFFFFFFF00000uLL) == 0
          && (v11 == 1 || ((v27 ^ v25) & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
        {
          v14 += 4096;
          v16 = v26;
          if ( v14 < a6 )
            continue;
        }
        v23 = v14 <= a6;
        goto LABEL_23;
      }
    }
    else
    {
LABEL_23:
      if ( !v23 )
      {
        v14 = a6;
        if ( v13 && ((v9 - 1) & a6) != 0 )
          v14 = a6 & 0xFFFFF000;
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 442) || !a6 || v14 )
    return v14;
  v17 = (unsigned __int64 *)(v15 + 56);
  result = 4096 - (unsigned int)(a4 & 0xFFF);
  v19 = (unsigned int)result <= a6;
  if ( (unsigned int)result < a6 )
  {
    while ( *v17 > v12 )
    {
      result = (unsigned int)(result + 4096);
      ++v17;
      v19 = (unsigned int)result <= a6;
      if ( (unsigned int)result >= a6 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    if ( !v19 )
      result = a6;
  }
  v20 = *(_QWORD **)(a3 + 56);
  v14 = 4096 - (a4 & 0xFFF);
  v21 = (_QWORD *)v20[1];
  for ( i = *v20 >> 12; v14 < (unsigned int)result; i = v24 )
  {
    v24 = *v21 >> 12;
    if ( v24 != i + 1
      || ((i ^ v24) & 0xFFFFFFFFFFF00000uLL) != 0
      || v11 != 1 && ((i ^ v24) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      break;
    }
    v21 = (_QWORD *)v21[1];
    v14 += 4096;
  }
  if ( !v13 || v14 >= 0x1000 || (unsigned int)result >= v14 << 12 || (((_DWORD)result - v14) & (v9 - 1)) == 0 )
  {
    if ( v14 > (unsigned int)result )
      return (unsigned int)result;
    return v14;
  }
  return result;
}
