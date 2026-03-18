/*
 * XREFs of RtlRemoveEntryHashTable @ 0x1403EA340
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x1403EA0B8 (SepCleanupMarkedForDeletionEntries.c)
 *     SepDeReferenceSharedSidEntries @ 0x140785648 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1407859A8 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x140786E44 (SepRmDestroyCapTable.c)
 *     SepTokenDeleteMethod @ 0x1409A7370 (SepTokenDeleteMethod.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A06268 (SepDereferenceCachedHandlesEntryInternal.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A0E024 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlpPopulateContext @ 0x1403F57B0 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlRemoveEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  unsigned __int64 Signature; // r8
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY *Blink; // rax

  Signature = Entry->Signature;
  --HashTable->NumEntries;
  if ( Entry->Linkage.Flink == Entry->Linkage.Blink )
    --HashTable->NonEmptyBuckets;
  Flink = Entry->Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Entry->Linkage.Flink->Blink != Entry
    || (Blink = Entry->Linkage.Blink, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Blink->Flink != Entry) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( Context && !Context->ChainHead )
    RtlpPopulateContext(HashTable, Context, Signature);
  return 1;
}
