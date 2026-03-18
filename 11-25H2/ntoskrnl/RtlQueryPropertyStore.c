/*
 * XREFs of RtlQueryPropertyStore @ 0x1405DDE70
 * Callers:
 *     <none>
 * Callees:
 *     bsearch @ 0x1404FBFE0 (bsearch.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405DE11C (RtlpAcquirePropStoreLockShared.c)
 *     RtlpReleasePropStoreLockShared @ 0x1405DE1C0 (RtlpReleasePropStoreLockShared.c)
 */

__int64 __fastcall RtlQueryPropertyStore(void *Key, _QWORD *a2)
{
  char v4; // al
  void *v5; // rdx
  unsigned int v6; // ebx
  char v7; // di
  _QWORD *v8; // rax

  v4 = RtlpAcquirePropStoreLockShared(&RtlpPropStoreLock);
  v5 = RtlpPropStoreEntries;
  v6 = 0;
  v7 = v4;
  if ( RtlpPropStoreEntries
    && (v8 = bsearch(
               Key,
               RtlpPropStoreEntries,
               (unsigned int)RtlpPropStoreEntriesActiveCount,
               0x18uLL,
               RtlpComparePropertyEntry)) != 0LL )
  {
    *a2 = v8[2];
  }
  else
  {
    v6 = -1073741275;
  }
  LOBYTE(v5) = v7;
  RtlpReleasePropStoreLockShared(&RtlpPropStoreLock, v5);
  return v6;
}
