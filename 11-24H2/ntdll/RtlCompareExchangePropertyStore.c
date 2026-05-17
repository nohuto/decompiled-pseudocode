/*
 * XREFs of RtlCompareExchangePropertyStore @ 0x180143020
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     bsearch @ 0x180123D40 (bsearch.c)
 *     qsort @ 0x180125BE0 (qsort.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlCompareExchangePropertyStore(_OWORD *Key, volatile signed __int32 **a2, __int64 *a3, _QWORD *a4)
{
  int v4; // r12d
  unsigned __int64 v6; // r15
  _OWORD *i; // rbp
  char *Heap; // rbx
  char *v10; // rax
  int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // ebp
  volatile signed __int32 **v14; // rdx
  unsigned __int64 v15; // r8
  unsigned int v16; // edi
  void *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // ebx

  v4 = 0;
  v6 = 0LL;
  for ( i = Key; ; i = Key )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpPropStoreLock, a2, (unsigned __int64)a3);
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
        v16 = RtlpPropStoreEntriesActiveCount;
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
    Heap = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 24LL * v13);
    if ( !Heap )
    {
LABEL_28:
      v21 = -1073741801;
      goto LABEL_29;
    }
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpPropStoreLock, v14, v15);
    if ( v11 == RtlpPropStoreEntriesTotalCount )
    {
      v17 = RtlpPropStoreEntries;
      v12 = RtlpPropStoreEntriesActiveCount;
      if ( RtlpPropStoreEntries )
      {
        memmove(Heap, RtlpPropStoreEntries, 24LL * (unsigned int)RtlpPropStoreEntriesActiveCount);
        v6 = (unsigned __int64)v17;
      }
      RtlpPropStoreEntriesTotalCount = v13;
      i = Key;
      RtlpPropStoreEntries = Heap;
      break;
    }
    RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  }
  v18 = v12;
  v4 = 1;
  v16 = v12 + 1;
  LODWORD(RtlpPropStoreEntriesActiveCount) = v16;
  v10 = &Heap[24 * v18];
  if ( a3 )
    v19 = *a3;
  else
    v19 = 0LL;
  *((_QWORD *)v10 + 2) = v19;
  *(_OWORD *)v10 = *i;
LABEL_20:
  v20 = *((_QWORD *)v10 + 2);
  if ( !a3 || v20 == *a3 )
    *((_QWORD *)v10 + 2) = a2;
  if ( a4 )
    *a4 = v20;
  if ( v4 )
  {
    qsort(Heap, v16, 0x18uLL, (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v21 = 0;
  }
  else
  {
    v21 = 0x40000000;
  }
LABEL_29:
  RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
  if ( v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  return v21;
}
