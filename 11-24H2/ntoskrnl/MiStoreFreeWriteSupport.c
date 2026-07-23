/*
 * XREFs of MiStoreFreeWriteSupport @ 0x1402DD6E0
 * Callers:
 *     MiStoreModifiedWriteComplete @ 0x1402DD72C (MiStoreModifiedWriteComplete.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiStoreFreeWriteSupport(PSLIST_ENTRY ListEntry, _SLIST_HEADER *a2)
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
