/*
 * XREFs of MiStoreFreeWriteSupport @ 0x14045C4C4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiStoreModifiedWriteComplete @ 0x14045C418 (MiStoreModifiedWriteComplete.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiStoreFreeWriteSupport(PSLIST_ENTRY ListEntry, union _SLIST_HEADER *a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)&ListEntry[1].Next + 1);
  if ( v4 )
  {
    ObDereferenceObjectDeferDeleteWithTag(v4, 0x66506D4Du);
    *((_QWORD *)&ListEntry[1].Next + 1) = 0LL;
  }
  return RtlpInterlockedPushEntrySList(a2 + 86, ListEntry);
}
