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

NTSTATUS __cdecl RtlCompareExchangePropertyStore(
        ULONG_PTR Key,
        PULONG_PTR Comperand,
        PULONG_PTR Exchange,
        PULONG_PTR Context)
{
  int v4; // r12d
  void *v6; // r15
  _OWORD *i; // rbp
  char *Heap; // rbx
  char *v10; // rax
  int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // ebp
  unsigned int v14; // edi
  void *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  NTSTATUS v19; // ebx

  v4 = 0;
  v6 = 0LL;
  for ( i = (_OWORD *)Key; ; i = (_OWORD *)Key )
  {
    RtlAcquireSRWLockExclusive(&RtlpPropStoreLock);
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
        v14 = RtlpPropStoreEntriesActiveCount;
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
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 24LL * v13);
    if ( !Heap )
    {
LABEL_28:
      v19 = -1073741801;
      goto LABEL_29;
    }
    RtlAcquireSRWLockExclusive(&RtlpPropStoreLock);
    if ( v11 == RtlpPropStoreEntriesTotalCount )
    {
      v15 = RtlpPropStoreEntries;
      v12 = RtlpPropStoreEntriesActiveCount;
      if ( RtlpPropStoreEntries )
      {
        memmove(Heap, RtlpPropStoreEntries, 24LL * (unsigned int)RtlpPropStoreEntriesActiveCount);
        v6 = v15;
      }
      RtlpPropStoreEntriesTotalCount = v13;
      i = (_OWORD *)Key;
      RtlpPropStoreEntries = Heap;
      break;
    }
    RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  v16 = v12;
  v4 = 1;
  v14 = v12 + 1;
  LODWORD(RtlpPropStoreEntriesActiveCount) = v14;
  v10 = &Heap[24 * v16];
  if ( Exchange )
    v17 = *Exchange;
  else
    v17 = 0LL;
  *((_QWORD *)v10 + 2) = v17;
  *(_OWORD *)v10 = *i;
LABEL_20:
  v18 = *((_QWORD *)v10 + 2);
  if ( !Exchange || v18 == *Exchange )
    *((_QWORD *)v10 + 2) = Comperand;
  if ( Context )
    *Context = v18;
  if ( v4 )
  {
    qsort(Heap, v14, 0x18uLL, (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v19 = 0;
  }
  else
  {
    v19 = 0x40000000;
  }
LABEL_29:
  RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  return v19;
}
