/*
 * XREFs of RtlCompareExchangePropertyStore @ 0x180144710
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     bsearch @ 0x180125820 (bsearch.c)
 *     qsort @ 0x1801276C0 (qsort.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlCompareExchangePropertyStore(_OWORD *Key, __int64 a2, __int64 *a3, _QWORD *a4)
{
  int v4; // r12d
  __int64 v6; // r15
  _OWORD *i; // rbp
  char *Heap; // rbx
  char *v10; // rax
  int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // ebp
  __int64 v14; // r9
  unsigned int v15; // edi
  void *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // r9

  v4 = 0;
  v6 = 0LL;
  for ( i = Key; ; i = Key )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpPropStoreLock);
    Heap = (char *)RtlpPropStoreEntries;
    if ( RtlpPropStoreEntries )
    {
      v10 = (char *)bsearch(
                      i,
                      RtlpPropStoreEntries,
                      (unsigned int)RtlpPropStoreEntriesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      Heap = (char *)RtlpPropStoreEntries;
      if ( v10 )
      {
        v15 = RtlpPropStoreEntriesActiveCount;
        goto LABEL_20;
      }
    }
    v11 = RtlpPropStoreEntriesTotalCount;
    if ( Heap )
    {
      v12 = RtlpPropStoreEntriesActiveCount;
      if ( (_DWORD)RtlpPropStoreEntriesActiveCount + 1 != RtlpPropStoreEntriesTotalCount )
        break;
    }
    if ( RtlpPropStoreEntriesTotalCount )
    {
      v13 = 2 * RtlpPropStoreEntriesTotalCount;
      if ( 2 * RtlpPropStoreEntriesTotalCount < (unsigned int)RtlpPropStoreEntriesTotalCount )
        goto LABEL_28;
    }
    else
    {
      v13 = 16;
    }
    RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
    Heap = (char *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 24LL * v13);
    if ( !Heap )
    {
LABEL_28:
      v20 = -1073741801;
      goto LABEL_29;
    }
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpPropStoreLock);
    if ( v11 == RtlpPropStoreEntriesTotalCount )
    {
      v16 = RtlpPropStoreEntries;
      v12 = RtlpPropStoreEntriesActiveCount;
      if ( RtlpPropStoreEntries )
      {
        memmove(Heap, RtlpPropStoreEntries, 24LL * (unsigned int)RtlpPropStoreEntriesActiveCount);
        v6 = (__int64)v16;
      }
      RtlpPropStoreEntriesTotalCount = v13;
      i = Key;
      RtlpPropStoreEntries = Heap;
      break;
    }
    RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v14);
  }
  v17 = v12;
  v4 = 1;
  v15 = v12 + 1;
  LODWORD(RtlpPropStoreEntriesActiveCount) = v15;
  v10 = &Heap[24 * v17];
  if ( a3 )
    v18 = *a3;
  else
    v18 = 0LL;
  *((_QWORD *)v10 + 2) = v18;
  *(_OWORD *)v10 = *i;
LABEL_20:
  v19 = *((_QWORD *)v10 + 2);
  if ( !a3 || v19 == *a3 )
    *((_QWORD *)v10 + 2) = a2;
  if ( a4 )
    *a4 = v19;
  if ( v4 )
  {
    qsort(Heap, v15, 0x18uLL, (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v20 = 0;
  }
  else
  {
    v20 = 0x40000000;
  }
LABEL_29:
  RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
  if ( v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6, v21);
  return v20;
}
