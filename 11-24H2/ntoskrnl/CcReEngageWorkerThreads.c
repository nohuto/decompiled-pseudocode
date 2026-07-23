/*
 * XREFs of CcReEngageWorkerThreads @ 0x1404D4C20
 * Callers:
 *     CcAsyncLazywriteWorker @ 0x14027B0C8 (CcAsyncLazywriteWorker.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404D4DF0 (CcWorkerThread.c)
 *     CcAdjustWriteBehindThreadPool @ 0x140577824 (CcAdjustWriteBehindThreadPool.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402E62E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 */

_UNKNOWN **__fastcall CcReEngageWorkerThreads(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  __int64 v5; // r12
  unsigned int v6; // r15d
  _QWORD **v11; // rdi
  _QWORD *v12; // r10
  _QWORD *v13; // rax
  _QWORD *v14; // r10
  unsigned int v15; // esi
  _QWORD **v16; // rdi
  _QWORD *v17; // r10
  _QWORD *v18; // rax
  _QWORD *v19; // r10
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = 0;
  if ( a3 )
  {
    v11 = (_QWORD **)(a2 + 56);
    do
    {
      v12 = *v11;
      if ( *v11 == v11 )
        break;
      if ( (_QWORD **)v12[1] == v11 )
      {
        v13 = (_QWORD *)*v12;
        if ( *(_QWORD **)(*v12 + 8LL) == v12 )
          continue;
      }
LABEL_14:
      __fastfail(3u);
      *v11 = v13;
      v13[1] = v11;
      ++*(_DWORD *)(a2 + 48);
      CcReferencePartitionAndPrivateVolumeCacheMap(a1, v5);
      *v14 = 0LL;
      result = (_UNKNOWN **)ExQueueWorkItemToPartition((ULONG_PTR)v14, 0, *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 8));
      ++v6;
    }
    while ( v6 < a3 );
  }
  v15 = 0;
  if ( a4 )
  {
    v16 = (_QWORD **)(a2 + 136);
    do
    {
      v17 = *v16;
      if ( *v16 == v16 )
        break;
      if ( (_QWORD **)v17[1] != v16 )
        goto LABEL_14;
      v18 = (_QWORD *)*v17;
      if ( *(_QWORD **)(*v17 + 8LL) != v17 )
        goto LABEL_14;
      *v16 = v18;
      v18[1] = v16;
      ++*(_DWORD *)(a2 + 152);
      CcReferencePartitionAndPrivateVolumeCacheMap(a1, v5);
      *v19 = 0LL;
      result = (_UNKNOWN **)ExQueueWorkItemToPartition((ULONG_PTR)v19, 0, *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 8));
      ++v15;
    }
    while ( v15 < a4 );
  }
  return result;
}
