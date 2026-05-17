/*
 * XREFs of RtlRemovePropertyStore @ 0x180143480
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     bsearch @ 0x180123D40 (bsearch.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlRemovePropertyStore(void *Key, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned int v5; // edi
  char *v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpPropStoreLock, a2, a3);
  v5 = 0;
  if ( RtlpPropStoreEntries
    && (v6 = (char *)bsearch(
                       Key,
                       RtlpPropStoreEntries,
                       (unsigned int)RtlpPropStoreEntriesActiveCount,
                       0x18uLL,
                       (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry)) != 0LL )
  {
    v7 = RtlpPropStoreEntriesActiveCount;
    v8 = v6 - (_BYTE *)RtlpPropStoreEntries;
    *a2 = (volatile signed __int32 *)*((_QWORD *)v6 + 2);
    memmove(v6, v6 + 24, 24 * (v7 - 0xAAAAAAAAAAAAAAABuLL * (v8 >> 3)) - 24);
    LODWORD(RtlpPropStoreEntriesActiveCount) = v7 - 1;
  }
  else
  {
    v5 = -1073741275;
  }
  RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
  return v5;
}
