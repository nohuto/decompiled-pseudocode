/*
 * XREFs of RtlQueryPropertyStore @ 0x1801416C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     bsearch @ 0x180121F70 (bsearch.c)
 */

NTSTATUS __cdecl RtlQueryPropertyStore(ULONG_PTR Key, PULONG_PTR Context)
{
  NTSTATUS v4; // ebx
  _QWORD *v5; // rax

  RtlAcquireSRWLockShared(&RtlpPropStoreLock);
  v4 = 0;
  if ( RtlpPropStoreEntries
    && (v5 = bsearch(
               (const void *)Key,
               RtlpPropStoreEntries,
               (unsigned int)RtlpPropStoreEntriesActiveCount,
               0x18uLL,
               (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry)) != 0LL )
  {
    *Context = v5[2];
  }
  else
  {
    v4 = -1073741275;
  }
  RtlReleaseSRWLockShared(&RtlpPropStoreLock);
  return v4;
}
