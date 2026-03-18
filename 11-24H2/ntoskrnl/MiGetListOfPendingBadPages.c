/*
 * XREFs of MiGetListOfPendingBadPages @ 0x140673AD0
 * Callers:
 *     MmEnumerateBadPages @ 0x1407ED198 (MmEnumerateBadPages.c)
 *     MmQueryBadAddresses @ 0x1409876D4 (MmQueryBadAddresses.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     MiReferencePageRuns @ 0x1404401F0 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1404473D0 (MiDereferencePageRuns.c)
 *     MiEnumerateBadHugeRangePages @ 0x14066FC50 (MiEnumerateBadHugeRangePages.c)
 *     MiCheckLostBadPageNode @ 0x140673650 (MiCheckLostBadPageNode.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x14067477C (MiSortPageFramesRemoveDuplicates.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetListOfPendingBadPages(__int64 a1)
{
  unsigned __int64 v2; // r12
  ULONG_PTR v3; // rdx
  __int64 Pool; // rax
  _QWORD *v5; // rsi
  unsigned __int64 *v6; // r14
  KIRQL v7; // al
  unsigned __int8 v8; // bl
  unsigned int *v9; // r15
  KIRQL v10; // bl
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *i; // r9
  __int64 v19; // r8
  _QWORD *v20; // rcx
  _QWORD **v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+58h] [rbp+10h]

  if ( !qword_140E2FEC8 )
    return 0LL;
LABEL_2:
  while ( 2 )
  {
    if ( qword_140E2FEC8 + qword_140E2FF28 < (unsigned __int64)qword_140E2FEC8 )
      return 3221225626LL;
    v2 = qword_140E2FF28 + qword_140E2FEC8;
    if ( !(qword_140E2FF28 + qword_140E2FEC8) )
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
    if ( !qword_140E2FED8 )
    {
      v7 = ExAcquireSpinLockShared(&dword_140E2FED0);
      v8 = v7;
      if ( qword_140E2FED8 || v2 < qword_140E2FF28 + qword_140E2FEC8 )
      {
        MiReleaseSpinLockShared(&dword_140E2FED0, v7);
        ExFreePoolWithTag(v5, 0);
        continue;
      }
      v5[2] += MiEnumerateBadHugeRangePages(v6, v2, 2);
      v17 = (_QWORD *)qword_140E2FEC0;
      i = 0LL;
      while ( v17 )
      {
        i = v17;
        v17 = (_QWORD *)*v17;
      }
      while ( i )
      {
        v19 = i[3];
        v6[v5[2]] = (0xAAAAAAAAAAAAAAABuLL * ((v19 + 0x220000000000LL) >> 4)) ^ (v6[v5[2]] ^ (0xAAAAAAAAAAAAAAABuLL
                                                                                            * ((v19 + 0x220000000000LL) >> 4))) & 0xFFF0000000000000uLL;
        v6[v5[2]] |= 0x4000000000000000uLL;
        if ( *(char *)(v19 + 35) < 0 )
          v6[v5[2]] |= 0x8000000000000000uLL;
        ++v5[2];
        v20 = i;
        v21 = (_QWORD **)i[1];
        if ( v21 )
        {
          v22 = *v21;
          for ( i = (_QWORD *)i[1]; v22; v22 = (_QWORD *)*v22 )
            i = v22;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v20 )
              break;
            v20 = i;
          }
        }
      }
      MiReleaseSpinLockShared(&dword_140E2FED0, v8);
LABEL_45:
      v23 = v5[2];
      if ( v23 )
      {
        *(_QWORD *)(a1 + 24) += v23;
        v25 = *(_QWORD **)(a1 + 8);
        if ( *v25 != a1 )
          __fastfail(3u);
        *v5 = a1;
        v5[1] = v25;
        *v25 = v5;
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
  v9 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  if ( v9 )
  {
    v10 = ExAcquireSpinLockShared(&dword_140E2FED0);
    v11 = MiEnumerateBadHugeRangePages(v6, v2, 2);
    MiReleaseSpinLockShared(&dword_140E2FED0, v10);
    v12 = v11 + v5[2];
    v5[2] = v12;
    if ( v12 != v2 )
    {
      v13 = 0;
LABEL_14:
      if ( v13 < *v9 )
      {
        v14 = *(_QWORD *)&v9[4 * v13 + 4];
        v15 = 48 * v14 - 0x220000000000LL;
        v16 = *(_QWORD *)&v9[4 * v13 + 6];
        while ( 1 )
        {
          v26 = v16;
          if ( !v16 )
            goto LABEL_26;
          if ( (*(_DWORD *)(v15 + 32) & 0x40000000) != 0 )
          {
            if ( MiCheckLostBadPageNode(v15) )
            {
              ExFreePoolWithTag(v5, 0);
              MiDereferencePageRuns((__int64)v9);
              goto LABEL_2;
            }
            v6[v5[2]] = v14 ^ (v6[v5[2]] ^ v14) & 0xFFF0000000000000uLL;
            if ( !MiIsPageOnBadList(v15) )
              v6[v5[2]] |= 0x4000000000000000uLL;
            if ( *(char *)(v15 + 35) < 0 )
              v6[v5[2]] |= 0x8000000000000000uLL;
            if ( ++v5[2] == v2 )
            {
              v13 = *v9 - 1;
LABEL_26:
              ++v13;
              goto LABEL_14;
            }
          }
          ++v14;
          v16 = v26 - 1;
          v15 += 48LL;
        }
      }
      v5[2] = MiSortPageFramesRemoveDuplicates(v6, v5[2]);
    }
    MiDereferencePageRuns((__int64)v9);
    goto LABEL_45;
  }
  *(_DWORD *)(a1 + 16) = -1073741670;
  ExFreePoolWithTag(v5, 0);
  return *(unsigned int *)(a1 + 16);
}
