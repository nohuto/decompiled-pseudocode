/*
 * XREFs of CcInitializeAsyncLazywriteForNodeHelper @ 0x14057AD00
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagFromNode @ 0x140277180 (ExAllocatePoolWithTagFromNode.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall CcInitializeAsyncLazywriteForNodeHelper(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  char v4; // bl
  __int64 v5; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  ULONG_PTR v12; // r9
  void *PoolWithTagFromNode; // rax
  __int64 *v14; // rcx
  unsigned int i; // esi
  ULONG_PTR v16; // r9
  __int64 v17; // rax
  unsigned int v18; // esi
  ULONG_PTR v19; // r9
  __int64 v20; // rax
  char result; // al

  v4 = 0;
  v5 = a3 + 288;
  *(_QWORD *)(a3 + 296) = a3 + 288;
  v7 = a3 + 360;
  *(_QWORD *)(a3 + 288) = a3 + 288;
  v9 = (unsigned int)CcMaxAsyncLazywriteWorkers;
  *(_QWORD *)(a3 + 368) = a3 + 360;
  *(_QWORD *)(a3 + 360) = a3 + 360;
  *(_QWORD *)(a3 + 320) = a3 + 312;
  *(_QWORD *)(a3 + 312) = a3 + 312;
  *(_QWORD *)(a3 + 392) = a3 + 384;
  *(_QWORD *)(a3 + 384) = a3 + 384;
  *(_WORD *)(a3 + 328) = 1;
  *(_BYTE *)(a3 + 330) = 6;
  *(_DWORD *)(a3 + 332) = 0;
  *(_QWORD *)(a3 + 344) = a3 + 336;
  *(_QWORD *)(a3 + 336) = a3 + 336;
  v12 = *(unsigned int *)(a3 + 24);
  *(_DWORD *)(a3 + 304) = 0;
  LODWORD(v12) = v12 | 0x80000000;
  *(_DWORD *)(a3 + 376) = 0;
  PoolWithTagFromNode = (void *)ExAllocatePoolWithTagFromNode(a1, 4 * v9, 0x71576343uLL, v12);
  *(_QWORD *)(a3 + 352) = PoolWithTagFromNode;
  if ( PoolWithTagFromNode )
  {
    memset_0(PoolWithTagFromNode, 255, 4LL * (unsigned int)CcMaxAsyncLazywriteWorkers);
    for ( i = 0; i < CcMaxAsyncLazywriteWorkers; ++i )
    {
      v16 = *(unsigned int *)(a3 + 24);
      LODWORD(v16) = v16 | 0x80000000;
      v17 = ExAllocatePoolWithTagFromNode((__int64)v14, 0x50uLL, 0x71576343uLL, v16);
      if ( !v17 )
        goto LABEL_15;
      *(_QWORD *)(v17 + 32) = 7LL;
      *(_QWORD *)(v17 + 56) = a1;
      *(_QWORD *)(v17 + 64) = a2;
      *(_QWORD *)(v17 + 72) = a3;
      *(_DWORD *)(v17 + 40) = i;
      *(_QWORD *)(v17 + 16) = CcAsyncLazywriteWorkerThread;
      *(_QWORD *)(v17 + 24) = v17;
      *(_QWORD *)v17 = 0LL;
      v14 = *(__int64 **)(v5 + 8);
      if ( *v14 != v5 )
LABEL_13:
        __fastfail(3u);
      *(_QWORD *)v17 = v5;
      *(_QWORD *)(v17 + 8) = v14;
      *v14 = v17;
      *(_QWORD *)(v5 + 8) = v17;
      if ( (*(_DWORD *)(a2 + 1616) & 2) != 0 )
        break;
    }
    v18 = 0;
    while ( v18 < *(_DWORD *)(a2 + 1612) )
    {
      v19 = *(unsigned int *)(a3 + 24);
      LODWORD(v19) = v19 | 0x80000000;
      v20 = ExAllocatePoolWithTagFromNode((__int64)v14, 0x50uLL, 0x71576343uLL, v19);
      if ( !v20 )
        goto LABEL_15;
      *(_QWORD *)(v20 + 32) = 8LL;
      *(_QWORD *)(v20 + 56) = a1;
      *(_QWORD *)(v20 + 64) = a2;
      *(_QWORD *)(v20 + 72) = a3;
      *(_DWORD *)(v20 + 40) = v18;
      *(_QWORD *)(v20 + 16) = CcCompleteAsyncLazywriteWorkerThread;
      *(_QWORD *)(v20 + 24) = v20;
      *(_QWORD *)v20 = 0LL;
      v14 = *(__int64 **)(v7 + 8);
      if ( *v14 != v7 )
        goto LABEL_13;
      *(_QWORD *)v20 = v7;
      ++v18;
      *(_QWORD *)(v20 + 8) = v14;
      *v14 = v20;
      *(_QWORD *)(v7 + 8) = v20;
    }
    v4 = 1;
  }
LABEL_15:
  result = v4;
  *a4 = v4;
  return result;
}
