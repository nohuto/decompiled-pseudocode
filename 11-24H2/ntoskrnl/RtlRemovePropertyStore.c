/*
 * XREFs of RtlRemovePropertyStore @ 0x1405E7690
 * Callers:
 *     <none>
 * Callees:
 *     bsearch @ 0x1404FC020 (bsearch.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x1405E7774 (RtlpAcquirePropStoreLockExclusive.c)
 *     RtlpReleasePropStoreLockExclusive @ 0x1405E782C (RtlpReleasePropStoreLockExclusive.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

NTSTATUS __cdecl RtlRemovePropertyStore(ULONG_PTR Key, PULONG_PTR Context)
{
  char v4; // al
  __int64 v5; // r8
  void *v6; // rdx
  NTSTATUS v7; // edi
  char v8; // si
  unsigned __int64 *v9; // rax
  unsigned int v10; // ebx

  v4 = RtlpAcquirePropStoreLockExclusive(&RtlpPropStoreLock);
  v6 = RtlpPropStoreEntries;
  v7 = 0;
  v8 = v4;
  if ( RtlpPropStoreEntries
    && (v9 = (unsigned __int64 *)bsearch(
                                   (const void *)Key,
                                   RtlpPropStoreEntries,
                                   (unsigned int)RtlpPropStoreEntriesActiveCount,
                                   0x18uLL,
                                   RtlpComparePropertyEntry)) != 0LL )
  {
    v10 = RtlpPropStoreEntriesActiveCount;
    *Context = v9[2];
    memmove(v9, v9 + 3, 24 * (v10 - 0xAAAAAAAAAAAAAAABuLL * (((char *)v9 - (_BYTE *)RtlpPropStoreEntries) >> 3)) - 24);
    LODWORD(RtlpPropStoreEntriesActiveCount) = v10 - 1;
  }
  else
  {
    v7 = -1073741275;
  }
  LOBYTE(v6) = v8;
  RtlpReleasePropStoreLockExclusive(&RtlpPropStoreLock, v6, v5);
  return v7;
}
