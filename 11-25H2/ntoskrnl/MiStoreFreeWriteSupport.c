/*
 * XREFs of MiStoreFreeWriteSupport @ 0x1404638C0
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiStoreModifiedWriteComplete @ 0x140463814 (MiStoreModifiedWriteComplete.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
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
