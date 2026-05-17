/*
 * XREFs of RtlQueryPropertyStore @ 0x180143310
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     bsearch @ 0x180123D40 (bsearch.c)
 */

__int64 __fastcall RtlQueryPropertyStore(void *Key, _QWORD *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax

  RtlAcquireSRWLockShared(&RtlpPropStoreLock);
  v4 = 0;
  if ( RtlpPropStoreEntries
    && (v5 = bsearch(
               Key,
               RtlpPropStoreEntries,
               (unsigned int)RtlpPropStoreEntriesActiveCount,
               0x18uLL,
               (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry)) != 0LL )
  {
    *a2 = v5[2];
  }
  else
  {
    v4 = -1073741275;
  }
  RtlReleaseSRWLockShared(&RtlpPropStoreLock);
  return v4;
}
