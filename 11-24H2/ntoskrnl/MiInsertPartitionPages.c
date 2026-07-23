/*
 * XREFs of MiInsertPartitionPages @ 0x14068BA00
 * Callers:
 *     MmRemovePhysicalMemory @ 0x1407EABA0 (MmRemovePhysicalMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1407FC9F4 (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 *     MiIncreaseExposedCommit @ 0x14044DBA8 (MiIncreaseExposedCommit.c)
 *     MiComputeCommitThresholds @ 0x14046B098 (MiComputeCommitThresholds.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x14066FA58 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiInitializeHugePfnDatabase @ 0x140671D60 (MiInitializeHugePfnDatabase.c)
 *     MiReduceCommitLimits @ 0x140687600 (MiReduceCommitLimits.c)
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     MiClearPartitionPageBitMap @ 0x14068AE74 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionPageNodes @ 0x14068B150 (MiDeletePartitionPageNodes.c)
 *     MiDuplicatePartitionNodeTree @ 0x14068B3B4 (MiDuplicatePartitionNodeTree.c)
 *     MiFreePartitionTree @ 0x14068B6B0 (MiFreePartitionTree.c)
 *     MiInsertHugeRangeInPartition @ 0x14068B788 (MiInsertHugeRangeInPartition.c)
 *     MiInsertPartitionPageNodes @ 0x14068B7F4 (MiInsertPartitionPageNodes.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407FCF90 (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiInsertPartitionPages(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 *v7; // r12
  int v8; // eax
  int updated; // esi
  unsigned int *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *i; // rbx
  _QWORD **v13; // rax
  __int64 v14; // r10
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  int v17; // ecx
  unsigned int *v18; // rbx
  unsigned __int16 *v19; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // eax
  __int64 v22; // rdi
  unsigned __int16 *v23; // rcx
  unsigned int v24; // eax
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  _QWORD *j; // rbx
  __m128i v28; // xmm0
  __int64 v29; // xmm1_8
  _QWORD *v30; // rax
  _QWORD **v31; // rax
  __int64 v32; // rdi
  _QWORD *v33; // rcx
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  _QWORD *k; // rbx
  _QWORD **v37; // rax
  __int64 v38; // r15
  _QWORD *v39; // rcx
  _QWORD *v40; // rcx
  unsigned __int64 v41; // r14
  int inserted; // eax
  __m128i v44[4]; // [rsp+28h] [rbp-79h] BYREF
  __int64 v45; // [rsp+68h] [rbp-39h]
  unsigned __int16 *v46[2]; // [rsp+78h] [rbp-29h] BYREF
  __m128i v47; // [rsp+88h] [rbp-19h]
  __m128i v48; // [rsp+98h] [rbp-9h]
  __m128i v49; // [rsp+A8h] [rbp+7h]
  __int64 v50; // [rsp+B8h] [rbp+17h]
  unsigned __int64 v51; // [rsp+108h] [rbp+67h] BYREF
  unsigned __int16 *v52; // [rsp+110h] [rbp+6Fh]
  unsigned __int64 v53; // [rsp+120h] [rbp+7Fh]

  v53 = a4;
  v52 = a2;
  memset_0(v44, 0, 0x48uLL);
  memset_0(v46, 0, 0x48uLL);
  v7 = *(unsigned __int64 **)a3;
  v8 = *(_DWORD *)(a3 + 24);
  updated = 0;
  v51 = 0LL;
  v44[0].m128i_i64[1] = (__int64)a1;
  v10 = (unsigned int *)(a3 + 24);
  v44[0].m128i_i64[0] = (__int64)a2;
  if ( (v8 & 0x14) == 4 )
  {
    if ( !(unsigned int)MiDuplicatePartitionNodeTree(&v51, (_QWORD **)v7) )
    {
LABEL_3:
      updated = -1073741670;
      goto LABEL_79;
    }
    v10 = (unsigned int *)(a3 + 24);
  }
  if ( (*(_DWORD *)(a3 + 24) & 2) != 0 )
  {
    v11 = (_QWORD *)*v7;
    i = 0LL;
    v10 = (unsigned int *)(a3 + 24);
    if ( *v7 )
    {
      do
      {
        i = v11;
        v11 = (_QWORD *)*v11;
      }
      while ( v11 );
      v10 = (unsigned int *)(a3 + 24);
    }
    if ( i )
    {
      do
      {
        v13 = (_QWORD **)i[1];
        v14 = (__int64)i;
        v15 = i;
        if ( v13 )
        {
          v16 = *v13;
          for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
            i = v16;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v15 )
              break;
            v15 = i;
          }
        }
        MiActOnPartitionNodePages(v14, 0xAu, 0, (unsigned __int16 **)v44);
      }
      while ( i );
      v10 = (unsigned int *)(a3 + 24);
    }
  }
  v17 = *(_DWORD *)(a3 + 24) & 0x20;
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
  {
    if ( v17 )
    {
      updated = MiUpdatePartitionLargePfnBitMap(a1, v7);
      if ( updated < 0 )
        goto LABEL_79;
    }
  }
  else
  {
    v18 = v10;
    if ( v17 )
    {
      if ( !(unsigned int)MiInitializeHugePfnDatabase() )
        goto LABEL_3;
      v19 = v52;
      v20 = *(_DWORD *)(a3 + 24) | 4;
      *v10 = v20;
      updated = MiFreePartitionTree(v19, v7, v20, 1);
      if ( updated < 0 )
      {
        MiFreePartitionTree(a1, v7, 0x801u, 1);
        goto LABEL_79;
      }
      v52 = 0LL;
      v18 = (unsigned int *)(a3 + 24);
      v7 = 0LL;
    }
    v21 = *v10;
    if ( a1 == (unsigned __int16 *)&MiSystemPartition )
    {
      if ( (v21 & 0x104) == 0 )
        MiIncreaseExposedCommit((__int64)a1, v53);
    }
    else
    {
      if ( (v21 & 0x20) == 0 )
        MiClearPartitionPageBitMap((__int64)a1, (_QWORD **)v7);
      v22 = v53;
      MiReduceCommitLimits((__int64)a1, v53, v53);
      MiReturnCommit((__int64)a1, v22, 16);
    }
    v10 = v18;
  }
  v23 = v52;
  if ( v52 != (unsigned __int16 *)&MiSystemPartition )
    goto LABEL_59;
  updated = MiFreePartitionTree(v52, v7, *v10, 1);
  if ( (*v10 & 4) != 0 )
    MiRemovePhysicalMemoryBatchComplete();
  if ( updated < 0 )
  {
    v24 = *v10;
    if ( (*v10 & 0x20) != 0 )
    {
      v25 = (_QWORD *)*v7;
      v26 = 0LL;
      while ( v25 )
      {
        v26 = v25;
        v25 = (_QWORD *)*v25;
      }
      MiInsertHugeRangeInPartition(v26[3] & 0x3FFFFFFFFFFFFFFFLL, 0);
      goto LABEL_79;
    }
    v23 = a1;
    j = 0LL;
    v46[1] = (unsigned __int16 *)v44[0].m128i_i64[0];
    v47 = v44[1];
    v28 = v44[3];
    v48 = v44[2];
    v29 = v45;
    v46[0] = (unsigned __int16 *)_mm_srli_si128(v44[0], 8).m128i_u64[0];
    *v10 = v24 & 0xFFFFFFFB;
    v49 = v28;
    v50 = v29;
    v30 = (_QWORD *)*v7;
    v52 = a1;
    while ( v30 )
    {
      j = v30;
      v30 = (_QWORD *)*v30;
    }
    if ( j )
    {
      do
      {
        v31 = (_QWORD **)j[1];
        v32 = (__int64)j;
        v33 = j;
        if ( v31 )
        {
          v34 = *v31;
          for ( j = (_QWORD *)j[1]; v34; v34 = (_QWORD *)*v34 )
            j = v34;
        }
        else
        {
          while ( 1 )
          {
            j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !j || (_QWORD *)*j == v33 )
              break;
            v33 = j;
          }
        }
        RtlNumberOfSetBitsEx((__int64 *)(v32 + 32));
        if ( (*(_DWORD *)(a3 + 24) & 2) != 0 )
          MiActOnPartitionNodePages(v32, 0xAu, 0, v46);
      }
      while ( j );
      v23 = v52;
    }
LABEL_59:
    if ( v23 )
    {
      v35 = (_QWORD *)*v7;
      k = 0LL;
      while ( v35 )
      {
        k = v35;
        v35 = (_QWORD *)*v35;
      }
      if ( k )
      {
        do
        {
          v37 = (_QWORD **)k[1];
          v38 = (__int64)k;
          v39 = k;
          if ( v37 )
          {
            v40 = *v37;
            for ( k = (_QWORD *)k[1]; v40; v40 = (_QWORD *)*v40 )
              k = v40;
          }
          else
          {
            while ( 1 )
            {
              k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !k || (_QWORD *)*k == v39 )
                break;
              v39 = k;
            }
          }
          RtlAvlRemoveNode(v7, v38);
          v41 = *(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          inserted = MiInsertPartitionPageNodes((__int64)v52, a3, v38, (__int64)&v51);
          if ( inserted < 0 && updated >= 0 )
          {
            updated = inserted;
            if ( (*(_DWORD *)(a3 + 24) & 0x20) != 0 )
              MiInsertHugeRangeInPartition(v41, 0);
          }
        }
        while ( k );
        v23 = v52;
      }
      if ( (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
        MiComputeCommitThresholds((__int64)v23, 0);
    }
  }
LABEL_79:
  MiDeletePartitionPageNodes(&v51);
  return (unsigned int)updated;
}
