/*
 * XREFs of RtlQueryPropertyStore @ 0x1405E7510
 * Callers:
 *     <none>
 * Callees:
 *     bsearch @ 0x1404FC020 (bsearch.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405E77BC (RtlpAcquirePropStoreLockShared.c)
 *     RtlpReleasePropStoreLockShared @ 0x1405E7860 (RtlpReleasePropStoreLockShared.c)
 */

NTSTATUS __cdecl RtlQueryPropertyStore(ULONG_PTR Key, PULONG_PTR Context)
{
  char v4; // al
  void *v5; // rdx
  NTSTATUS v6; // ebx
  char v7; // di
  _QWORD *v8; // rax

  v4 = RtlpAcquirePropStoreLockShared(&RtlpPropStoreLock);
  v5 = RtlpPropStoreEntries;
  v6 = 0;
  v7 = v4;
  if ( RtlpPropStoreEntries
    && (v8 = bsearch(
               (const void *)Key,
               RtlpPropStoreEntries,
               (unsigned int)RtlpPropStoreEntriesActiveCount,
               0x18uLL,
               RtlpComparePropertyEntry)) != 0LL )
  {
    *Context = v8[2];
  }
  else
  {
    v6 = -1073741275;
  }
  LOBYTE(v5) = v7;
  RtlpReleasePropStoreLockShared(&RtlpPropStoreLock, v5);
  return v6;
}
