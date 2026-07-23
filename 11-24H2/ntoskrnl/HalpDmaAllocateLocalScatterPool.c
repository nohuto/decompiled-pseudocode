/*
 * XREFs of HalpDmaAllocateLocalScatterPool @ 0x1406FD694
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FA900 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1406FE6C0 (HalpDmaAllocateChildAdapterV2.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x140386D38 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpDmaPrependTranslations @ 0x140386F7C (HalpDmaPrependTranslations.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x140386FA0 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x140489858 (HalpDmaCommitScatterMapBuffers.c)
 *     MmFreePagesFromMdl @ 0x14048E2C0 (MmFreePagesFromMdl.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpDmaAllocateScatterMemory @ 0x140A86E40 (HalpDmaAllocateScatterMemory.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDmaAllocateLocalScatterPool(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  struct _MDL *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  PVOID v11; // r15
  __int64 v12; // r12
  void *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rsi
  __int64 ScatterPagesFromScatterPool; // rax
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r9d
  __int64 ScatterPagesFromContiguousPool; // rax
  int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // r9d
  __int64 result; // rax
  PVOID BaseAddress; // [rsp+70h] [rbp+8h] BYREF
  int v29; // [rsp+78h] [rbp+10h] BYREF

  BaseAddress = 0LL;
  v29 = 0;
  v2 = a2;
  v4 = 0LL;
  v5 = HalpDmaAllocateScatterMemory(a1, a2, &BaseAddress);
  v7 = (struct _MDL *)v5;
  if ( v5 )
  {
    v8 = *(_DWORD *)(v5 + 40) >> 12;
    v9 = HalpMmAllocCtxAlloc(v6, 24LL);
    v11 = BaseAddress;
    v12 = v9;
    if ( v9 )
    {
      v13 = (void *)HalpMmAllocCtxAlloc(v10, 72LL * (unsigned int)v8);
      v4 = (__int64)v13;
      if ( v13 )
      {
        *(_QWORD *)v12 = 0LL;
        *(_DWORD *)(v12 + 12) = 0;
        memset_0(v13, 0, 72 * v8);
        *(_DWORD *)(v12 + 8) = v8;
        *(_QWORD *)(v12 + 16) = v4;
        *(_DWORD *)(a1 + 88) = 0;
        *(_QWORD *)(a1 + 56) = v12;
        *(_QWORD *)(a1 + 80) = v12;
        v4 = HalpDmaCommitScatterMapBuffers(a1, (__int64)v11, 0LL, 0, v7);
        if ( v4 )
        {
          *(_QWORD *)(a1 + 328) = v7;
          *(_QWORD *)(a1 + 336) = v11;
          goto LABEL_11;
        }
        HalpMmAllocCtxFree(v6, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
      }
      HalpMmAllocCtxFree(v14, v12);
    }
    if ( v11 )
      MmUnmapLockedPages(v11, v7);
    MmFreePagesFromMdl(v7);
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  LODWORD(v8) = 0;
LABEL_11:
  if ( (_DWORD)v8 != v2 )
  {
    v15 = (__int64 *)(a1 + 160);
    ScatterPagesFromScatterPool = HalpDmaAllocateScatterPagesFromScatterPool(
                                    v6,
                                    *(_QWORD *)(a1 + 160),
                                    v2 - (int)v8,
                                    0,
                                    1,
                                    (unsigned int *)&v29);
    if ( ScatterPagesFromScatterPool )
    {
      v18 = v29;
      v19 = ScatterPagesFromScatterPool;
      if ( v29 )
      {
        v20 = (unsigned int)v29;
        do
        {
          *(_QWORD *)(v19 + 48) = *(_QWORD *)(v19 + 48) & 0xFFFFFFFFFFFFFFF3uLL | 8;
          v19 = *(_QWORD *)(v19 + 8);
          --v20;
        }
        while ( v20 );
        v15 = (__int64 *)(a1 + 160);
      }
      v4 = HalpDmaPrependTranslations(ScatterPagesFromScatterPool, v18, v4);
      LODWORD(v8) = v21 + v8;
    }
    if ( (_DWORD)v8 != v2 )
    {
      ScatterPagesFromContiguousPool = HalpDmaAllocateScatterPagesFromContiguousPool(
                                         v17,
                                         *v15,
                                         (unsigned int)(v2 - v8),
                                         0LL,
                                         1,
                                         (ULONG *)&v29);
      if ( ScatterPagesFromContiguousPool )
      {
        v23 = v29;
        v24 = ScatterPagesFromContiguousPool;
        if ( v29 )
        {
          v25 = (unsigned int)v29;
          do
          {
            *(_QWORD *)(v24 + 48) = *(_QWORD *)(v24 + 48) & 0xFFFFFFFFFFFFFFF3uLL | 8;
            v24 = *(_QWORD *)(v24 + 8);
            --v25;
          }
          while ( v25 );
        }
        v4 = HalpDmaPrependTranslations(ScatterPagesFromContiguousPool, v23, v4);
        LODWORD(v8) = v26 + v8;
      }
      if ( !(_DWORD)v8 )
        return 3221225626LL;
    }
  }
  *(_DWORD *)(a1 + 232) = v2;
  result = 0LL;
  *(_QWORD *)(a1 + 32) = v4;
  *(_DWORD *)(a1 + 40) = v8;
  return result;
}
