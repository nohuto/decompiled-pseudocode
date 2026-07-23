/*
 * XREFs of MiGetListOfPendingBadPages @ 0x140674CA0
 * Callers:
 *     MmEnumerateBadPages @ 0x1407ED768 (MmEnumerateBadPages.c)
 *     MmQueryBadAddresses @ 0x14096FEB8 (MmQueryBadAddresses.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 *     MiEnumerateBadHugeRangePages @ 0x140670E20 (MiEnumerateBadHugeRangePages.c)
 *     MiCheckLostBadPageNode @ 0x140674820 (MiCheckLostBadPageNode.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x14067594C (MiSortPageFramesRemoveDuplicates.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetListOfPendingBadPages(__int64 a1)
{
  unsigned __int64 v2; // r12
  ULONG_PTR v3; // rdx
  __int64 Pool; // rax
  _QWORD *v5; // rsi
  unsigned __int64 *v6; // r14
  KIRQL v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // bl
  unsigned int *v11; // r15
  KIRQL v12; // bl
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rax
  _QWORD *i; // r9
  _QWORD *v24; // rcx
  _QWORD **v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v29; // rax
  __int64 v30; // [rsp+58h] [rbp+10h]

  if ( !qword_140E30008 )
    return 0LL;
LABEL_2:
  while ( 2 )
  {
    if ( qword_140E30008 + qword_140E30068 < (unsigned __int64)qword_140E30008 )
      return 3221225626LL;
    v2 = qword_140E30068 + qword_140E30008;
    if ( !(qword_140E30068 + qword_140E30008) )
      return 0LL;
    if ( v2 > 0x1FFFFFFFFFFFFFFFLL
      || (v3 = 8 * v2 + 32, v3 <= 8 * v2)
      || (Pool = MiAllocatePool(0x40uLL, v3, 1631743309), (v5 = (_QWORD *)Pool) == 0LL) )
    {
      *(_DWORD *)(a1 + 16) = -1073741670;
      return 3221225626LL;
    }
    v6 = (unsigned __int64 *)(Pool + 32);
    *(_QWORD *)(Pool + 24) = Pool + 32;
    if ( !qword_140E30018 )
    {
      v7 = ExAcquireSpinLockShared(&dword_140E30010);
      v10 = v7;
      if ( qword_140E30018 || v2 < qword_140E30068 + qword_140E30008 )
      {
        MiReleaseSpinLockShared(&dword_140E30010, v7, v8, v9);
        ExFreePoolWithTag(v5, 0);
        continue;
      }
      v5[2] += MiEnumerateBadHugeRangePages(v6, v2, 2);
      v22 = (_QWORD *)qword_140E30000;
      i = 0LL;
      while ( v22 )
      {
        i = v22;
        v22 = (_QWORD *)*v22;
      }
      while ( i )
      {
        v21 = i[3];
        v6[v5[2]] = (0xAAAAAAAAAAAAAAABuLL * ((v21 + 0x220000000000LL) >> 4)) ^ (v6[v5[2]] ^ (0xAAAAAAAAAAAAAAABuLL
                                                                                            * ((v21 + 0x220000000000LL) >> 4))) & 0xFFF0000000000000uLL;
        v6[v5[2]] |= 0x4000000000000000uLL;
        if ( *(char *)(v21 + 35) < 0 )
          v6[v5[2]] |= 0x8000000000000000uLL;
        ++v5[2];
        v24 = i;
        v25 = (_QWORD **)i[1];
        if ( v25 )
        {
          v26 = *v25;
          for ( i = (_QWORD *)i[1]; v26; v26 = (_QWORD *)*v26 )
            i = v26;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v24 )
              break;
            v24 = i;
          }
        }
      }
      MiReleaseSpinLockShared(&dword_140E30010, v10, v21, (__int64)i);
LABEL_45:
      v27 = v5[2];
      if ( v27 )
      {
        *(_QWORD *)(a1 + 24) += v27;
        v29 = *(_QWORD **)(a1 + 8);
        if ( *v29 != a1 )
          __fastfail(3u);
        *v5 = a1;
        v5[1] = v29;
        *v29 = v5;
        *(_QWORD *)(a1 + 8) = v5;
      }
      else
      {
        ExFreePoolWithTag(v5, 0);
      }
      return 0LL;
    }
    break;
  }
  v11 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  if ( v11 )
  {
    v12 = ExAcquireSpinLockShared(&dword_140E30010);
    v13 = MiEnumerateBadHugeRangePages(v6, v2, 2);
    MiReleaseSpinLockShared(&dword_140E30010, v12, v14, v15);
    v16 = v13 + v5[2];
    v5[2] = v16;
    if ( v16 != v2 )
    {
      v17 = 0;
LABEL_14:
      if ( v17 < *v11 )
      {
        v18 = *(_QWORD *)&v11[4 * v17 + 4];
        v19 = 48 * v18 - 0x220000000000LL;
        v20 = *(_QWORD *)&v11[4 * v17 + 6];
        while ( 1 )
        {
          v30 = v20;
          if ( !v20 )
            goto LABEL_26;
          if ( (*(_DWORD *)(v19 + 32) & 0x40000000) != 0 )
          {
            if ( MiCheckLostBadPageNode(v19) )
            {
              ExFreePoolWithTag(v5, 0);
              MiDereferencePageRuns((__int64)v11);
              goto LABEL_2;
            }
            v6[v5[2]] = v18 ^ (v6[v5[2]] ^ v18) & 0xFFF0000000000000uLL;
            if ( !MiIsPageOnBadList(v19) )
              v6[v5[2]] |= 0x4000000000000000uLL;
            if ( *(char *)(v19 + 35) < 0 )
              v6[v5[2]] |= 0x8000000000000000uLL;
            if ( ++v5[2] == v2 )
            {
              v17 = *v11 - 1;
LABEL_26:
              ++v17;
              goto LABEL_14;
            }
          }
          ++v18;
          v20 = v30 - 1;
          v19 += 48LL;
        }
      }
      v5[2] = MiSortPageFramesRemoveDuplicates(v6, v5[2]);
    }
    MiDereferencePageRuns((__int64)v11);
    goto LABEL_45;
  }
  *(_DWORD *)(a1 + 16) = -1073741670;
  ExFreePoolWithTag(v5, 0);
  return *(unsigned int *)(a1 + 16);
}
