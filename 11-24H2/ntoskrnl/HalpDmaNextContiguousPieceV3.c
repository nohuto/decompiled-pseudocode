/*
 * XREFs of HalpDmaNextContiguousPieceV3 @ 0x14038958C
 * Callers:
 *     IopMapTransfer @ 0x140387610 (IopMapTransfer.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403886C0 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x140389070 (HalPutScatterGatherListV2.c)
 *     HalpDmaNextContiguousPiece @ 0x140389540 (HalpDmaNextContiguousPiece.c)
 *     IoMapTransferInternal @ 0x140389CC4 (IoMapTransferInternal.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x140386AA0 (HalpDmaGetAdapterCacheAlignment.c)
 */

__int64 __fastcall HalpDmaNextContiguousPieceV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6)
{
  _BYTE *v6; // r11
  char v7; // r15
  unsigned __int64 v8; // r14
  __int64 v10; // r13
  bool v12; // bp
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  unsigned int v15; // r8d
  unsigned __int64 *v16; // rsi
  __int64 *v17; // r12
  unsigned __int64 *v18; // rax
  unsigned int v19; // ecx
  _QWORD *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v24; // rdi
  __int64 v25; // r13
  unsigned int v26; // esi
  __int64 v27; // r15
  int AdapterCacheAlignment; // eax
  int v29; // ecx
  char v30; // [rsp+70h] [rbp+8h]
  unsigned __int64 *v31; // [rsp+78h] [rbp+10h]
  unsigned __int64 v33; // [rsp+88h] [rbp+20h]

  v6 = (_BYTE *)(a1 + 445);
  v7 = *(_BYTE *)(a1 + 153);
  v8 = *(_QWORD *)(a1 + 144) >> 12;
  v10 = a3;
  v33 = *(_QWORD *)(a1 + 144);
  v30 = v7;
  v12 = !a5 && !*v6;
  v13 = a6;
  v14 = 4096 - (a4 & 0xFFF);
  v15 = v14;
  v16 = (unsigned __int64 *)(a2 + 8 * ((unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 6LL));
  v17 = (__int64 *)v16;
  v31 = v16;
  if ( *v16 > v8 || v12 && (((unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1) & (unsigned int)a4) != 0 )
  {
    v15 = 0;
  }
  else if ( v14 >= v13 )
  {
LABEL_40:
    if ( v15 > v13 )
    {
      v15 = v13;
      if ( v12 )
      {
        AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1);
        if ( ((AdapterCacheAlignment - 1) & v13) != 0 )
          v15 &= 0xFFFFF000;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v24 = v17[1];
      if ( v24 > v8 )
        break;
      v25 = *v17;
      if ( *v17 + 1 != v24 )
        goto LABEL_39;
      v26 = v13 - v15;
      if ( v13 - v15 > 0x1000 )
        v26 = 4096;
      v27 = v24 << 12;
      if ( (HalpDmaCvmConfiguration || v33 < v27 + (unsigned __int64)v26 - 1) && *(_DWORD *)(a1 + 520) != 3
        || !*v6
        && !a5
        && ((v29 = HalpDmaGetAdapterCacheAlignment(a1) - 1, (v29 & (unsigned int)v27) != 0) || (v29 & v26) != 0) )
      {
        v7 = v30;
LABEL_39:
        v16 = v31;
        v10 = a3;
        goto LABEL_40;
      }
      v7 = v30;
      if ( ((v25 ^ v24) & 0xFFFFFFFFFFF00000uLL) == 0 && (v30 == 1 || ((v25 ^ v24) & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        ++v17;
        v15 += 4096;
        if ( v15 < v13 )
          continue;
      }
      goto LABEL_39;
    }
    v16 = v31;
    v10 = a3;
  }
  if ( !*(_BYTE *)(a1 + 442) || !v13 || v15 )
    return v15;
  v18 = v16 + 1;
  v19 = v14;
  if ( v14 >= v13 )
  {
LABEL_11:
    if ( v19 > v13 )
      v19 = v13;
  }
  else
  {
    while ( *v18 > v8 )
    {
      v19 += 4096;
      ++v18;
      if ( v19 >= v13 )
        goto LABEL_11;
    }
  }
  v20 = *(_QWORD **)(v10 + 56);
  if ( v20 )
  {
    v21 = *v20 >> 12;
    while ( 1 )
    {
      v20 = (_QWORD *)v20[1];
      if ( v14 >= v19 )
        break;
      if ( !v20 )
        break;
      v22 = *v20 >> 12;
      if ( v22 != v21 + 1
        || ((v21 ^ v22) & 0xFFFFFFFFFFF00000uLL) != 0
        || v7 != 1 && ((v21 ^ v22) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        break;
      }
      v21 = *v20 >> 12;
      v14 += 4096;
    }
  }
  else
  {
    v14 = 0;
  }
  if ( v14 <= v19 )
    return v14;
  return v19;
}
