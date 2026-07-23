/*
 * XREFs of HalpDmaAllocateNewTranslationBuffer @ 0x140489B60
 * Callers:
 *     HalpDmaGetTranslationEntries @ 0x1404899C4 (HalpDmaGetTranslationEntries.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x140386D38 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x140386FA0 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaReturnPageToOwner @ 0x14038A7B4 (HalpDmaReturnPageToOwner.c)
 */

__int64 __fastcall HalpDmaAllocateNewTranslationBuffer(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdi
  char v6; // r12
  unsigned __int64 v7; // rsi
  unsigned int v8; // r15d
  _QWORD *v9; // r13
  unsigned int v11; // esi
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  unsigned int v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v24; // [rsp+80h] [rbp+18h]

  v23 = 0;
  v3 = a1;
  if ( !*(_BYTE *)(a1 + 152) )
    v3 = *(_QWORD *)(a1 + 160);
  v5 = HalpMmAllocCtxAlloc(a1, 24LL);
  if ( v5 )
  {
    v6 = 1;
    v11 = 72 * a2;
    if ( 72 * a2 >= 0x1000 )
      v12 = (v11 + 4095) & 0xFFFFF000;
    else
      v12 = 4096;
    v13 = HalpMmAllocCtxAlloc(v4, v12);
    if ( v13 || (v12 = 72 * a2, v11 < 0x1000) && (v13 = HalpMmAllocCtxAlloc(v4, v11)) != 0 )
    {
      *(_QWORD *)(v5 + 16) = v13;
      *(_QWORD *)v5 = 0LL;
      *(_DWORD *)(v5 + 8) = v12 / 0x48;
      return v5;
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = 0LL;
  v24 = 0LL;
  v8 = 0;
  v9 = 0LL;
  while ( a2 )
  {
    v14 = (__int64 *)HalpDmaAllocateScatterPagesFromScatterPool(v4, v3, 1u, 1, 0, &v23);
    if ( !v14 )
    {
      LOBYTE(v15) = 1;
      v14 = (__int64 *)HalpDmaAllocateScatterPagesFromContiguousPool(v4, v3, 1LL, v15, 0, &v23);
      if ( !v14 )
      {
LABEL_34:
        if ( v8 )
        {
          v20 = v8;
          do
          {
            v21 = *(_QWORD *)(v7 + 48);
            if ( (v21 & 0x10) != 0 )
            {
              MiUnmapContiguousMemory(v21 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL, 1);
              *(_QWORD *)(v7 + 48) = *(_DWORD *)(v7 + 48) & 0xFEF;
            }
            v22 = *(_QWORD *)(v7 + 8);
            HalpDmaReturnPageToOwner(0LL, v3, v7);
            v7 = v22;
            --v20;
          }
          while ( v20 );
        }
        if ( v6 )
          HalpMmAllocCtxFree(v4, v5);
        return 0LL;
      }
    }
    if ( v7 )
      v24[1] = (__int64)v14;
    else
      v7 = (unsigned __int64)v14;
    v16 = v14[6];
    ++v8;
    v24 = v14;
    v17 = v16 & 0xFFFFFFFFFFFFF000uLL;
    if ( !v17 )
    {
      v18 = MmMapIoSpaceEx(*v14, 4096LL, 4LL);
      v17 = v18;
      if ( !v18 )
        goto LABEL_34;
      v14[6] |= 0x10uLL;
      v4 = v18 | v14[6] & 0xFFF;
      v14[6] = v4;
    }
    if ( v8 == 1 && v6 )
    {
      *(_QWORD *)v5 = 0LL;
      v9 = (_QWORD *)v5;
      *(_QWORD *)(v5 + 16) = v17;
      *(_DWORD *)(v5 + 8) = 56;
    }
    else
    {
      if ( v5 )
        *v9 = v17;
      else
        v5 = v17;
      *(_QWORD *)v17 = 0LL;
      *(_QWORD *)(v17 + 16) = v17 + 24;
      v9 = (_QWORD *)v17;
      *(_DWORD *)(v17 + 8) = 56;
    }
    v19 = a2;
    a2 -= 56;
    if ( v19 <= 0x38 )
      a2 = 0;
  }
  return v5;
}
