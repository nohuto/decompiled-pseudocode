/*
 * XREFs of CcInitializeAsyncReadForNodeHelper @ 0x140487DA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagFromNode @ 0x140277180 (ExAllocatePoolWithTagFromNode.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402E62E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsCreateSystemThread @ 0x1408F8C00 (PsCreateSystemThread.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall CcInitializeAsyncReadForNodeHelper(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  int v4; // r9d
  char v6; // di
  __int64 PoolWithTagFromNode; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  ULONG_PTR v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  ULONG_PTR v17; // r9
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  ULONG_PTR v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // edx
  ULONG_PTR v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  unsigned int i; // r14d
  __int64 v33; // rbx
  __int64 v34; // r12
  _QWORD *v35; // rcx
  size_t v36; // r8
  _QWORD *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rax
  unsigned int v41; // ebx
  ULONG_PTR v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned int j; // r14d
  ULONG_PTR v49; // r9
  __int64 v50; // rax
  void *StartContext; // rbx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+50h] BYREF
  char *v54; // [rsp+C8h] [rbp+58h]

  v54 = a4;
  v4 = *(_DWORD *)(a3 + 24);
  v6 = 0;
  ThreadHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  PoolWithTagFromNode = ExAllocatePoolWithTagFromNode(
                          a1,
                          16LL * (unsigned int)(CcMaxNestingLevel + 1),
                          0x71576343uLL,
                          v4 | 0x80000000);
  *(_QWORD *)(a3 + 232) = PoolWithTagFromNode;
  if ( PoolWithTagFromNode )
  {
    v46 = 0LL;
    v47 = (unsigned int)(CcMaxNestingLevel + 1);
    do
    {
      v10 = (_QWORD *)(v46 + *(_QWORD *)(a3 + 232));
      v46 += 16LL;
      v10[1] = v10;
      *v10 = v10;
      --v47;
    }
    while ( v47 );
  }
  v11 = ExAllocatePoolWithTagFromNode(
          (__int64)v10,
          16LL * (unsigned int)(CcMaxNestingLevel + 1),
          0x71576343uLL,
          *(_DWORD *)(a3 + 24) | 0x80000000);
  v12 = CcMaxNestingLevel;
  v13 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 256) = v11;
  v15 = ExAllocatePoolWithTagFromNode(v14, 16LL * (unsigned int)(v12 + 1), 0x71576343uLL, v13);
  v16 = CcMaxNestingLevel;
  v17 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 264) = v15;
  v18 = ExAllocatePoolWithTagFromNode((unsigned int)(v16 + 1), 404LL * (unsigned int)(v16 + 1), 0x71576343uLL, v17);
  v19 = *(_DWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 280) = v18;
  v21 = ExAllocatePoolWithTagFromNode(
          v20,
          24LL * (unsigned int)(CcMaxNestingLevel + 1),
          0x71576343uLL,
          v19 | 0x80000000);
  v22 = CcMaxNestingLevel;
  v23 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 272) = v21;
  v25 = ExAllocatePoolWithTagFromNode(v24, 4LL * (unsigned int)(v22 + 1), 0x71576343uLL, v23);
  v26 = CcMaxNestingLevel;
  v27 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 240) = v25;
  v29 = ExAllocatePoolWithTagFromNode(v28, 4LL * (unsigned int)(v26 + 1), 0x71576343uLL, v27);
  *(_QWORD *)(a3 + 248) = v29;
  if ( *(_QWORD *)(a3 + 232)
    && *(_QWORD *)(a3 + 256)
    && *(_QWORD *)(a3 + 264)
    && *(_QWORD *)(a3 + 280)
    && *(_QWORD *)(a3 + 272)
    && *(_QWORD *)(a3 + 240)
    && v29 )
  {
    for ( i = 0; i <= CcMaxNestingLevel; ++i )
    {
      v33 = 404LL * i;
      v34 = 16LL * i;
      v35 = (_QWORD *)(v34 + *(_QWORD *)(a3 + 256));
      v36 = 4LL * (unsigned int)CcMaxAsyncReadWorkerThreads;
      v35[1] = v35;
      *v35 = v35;
      v37 = (_QWORD *)(v34 + *(_QWORD *)(a3 + 264));
      v37[1] = v37;
      *v37 = v37;
      v38 = 3LL * i;
      v39 = *(_QWORD *)(a3 + 272);
      *(_WORD *)(v39 + 8 * v38) = 1;
      *(_BYTE *)(v39 + 8 * v38 + 2) = 6;
      *(_DWORD *)(v39 + 8 * v38 + 4) = 0;
      v40 = (_QWORD *)(v39 + 24LL * i + 8);
      v40[1] = v40;
      *v40 = v40;
      *(_DWORD *)(*(_QWORD *)(a3 + 240) + 4LL * i) = 0;
      *(_DWORD *)(*(_QWORD *)(a3 + 248) + 4LL * i) = 0;
      memset_0((void *)(v33 + *(_QWORD *)(a3 + 280)), 255, v36);
      *(_DWORD *)(v33 + *(_QWORD *)(a3 + 280)) = 0;
      v41 = 1;
      while ( v41 < CcMaxAsyncReadWorkerThreads )
      {
        v42 = *(unsigned int *)(a3 + 24);
        LODWORD(v42) = v42 | 0x80000000;
        v43 = ExAllocatePoolWithTagFromNode((__int64)v30, 0x50uLL, 0x71576343uLL, v42);
        v30 = (_QWORD *)v43;
        if ( !v43 )
          goto LABEL_3;
        *(_DWORD *)(v43 + 32) = 3;
        *(_QWORD *)(v43 + 56) = a1;
        *(_QWORD *)(v43 + 64) = a2;
        *(_QWORD *)(v43 + 72) = a3;
        *(_DWORD *)(v43 + 40) = v41;
        *(_DWORD *)(v43 + 36) = i;
        *(_QWORD *)(v43 + 16) = CcAsyncReadWorkerThread;
        *(_QWORD *)(v43 + 24) = v43;
        *(_QWORD *)v43 = 0LL;
        v44 = v34 + *(_QWORD *)(a3 + 232);
        v45 = *(_QWORD **)(v44 + 8);
        if ( *v45 != v44 )
          __fastfail(3u);
        *v30 = v44;
        ++v41;
        v30[1] = v45;
        *v45 = v30;
        *(_QWORD *)(v44 + 8) = v30;
      }
    }
    for ( j = 0; ; ++j )
    {
      if ( j > CcMaxNestingLevel )
      {
        v6 = 1;
        goto LABEL_3;
      }
      v49 = *(unsigned int *)(a3 + 24);
      LODWORD(v49) = v49 | 0x80000000;
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v50 = ExAllocatePoolWithTagFromNode((__int64)v30, 0x50uLL, 0x71576343uLL, v49);
      StartContext = (void *)v50;
      if ( !v50 )
        goto LABEL_3;
      *(_DWORD *)(v50 + 32) = 3;
      *(_QWORD *)(v50 + 56) = a1;
      *(_QWORD *)(v50 + 64) = a2;
      *(_QWORD *)(v50 + 72) = a3;
      *(_DWORD *)(v50 + 40) = 0;
      *(_DWORD *)(v50 + 36) = j;
      *(_QWORD *)(v50 + 16) = CcAsyncReadWorkerThread;
      *(_QWORD *)(v50 + 24) = v50;
      *(_QWORD *)v50 = 0LL;
      ++*(_DWORD *)(*(_QWORD *)(a3 + 240) + 4LL * j);
      CcReferencePartitionAndPrivateVolumeCacheMap(a1, a2);
      if ( PsCreateSystemThread(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             *(HANDLE *)(*(_QWORD *)(a1 + 8) + 128LL),
             0LL,
             CcAsyncReadWorker,
             StartContext) < 0 )
        break;
      ZwClose(ThreadHandle);
    }
    ExFreePoolWithTag(StartContext, 0x71576343u);
    CcDereferencePartitionAndPrivateVolumeCacheMap(a1, a2);
  }
LABEL_3:
  *v54 = v6;
  return v6;
}
