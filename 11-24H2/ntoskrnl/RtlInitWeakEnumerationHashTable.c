/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x1403E31D0
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x1403E2EE0 (SepCleanupMarkedForDeletionEntries.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x140794BB0 (SepFindMatchingLowBoxNumberEntries.c)
 *     SepRmDestroyCapTable @ 0x140796324 (SepRmDestroyCapTable.c)
 *     SepDeleteCachedHandlesTable @ 0x140A5D138 (SepDeleteCachedHandlesTable.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  _QWORD *Directory; // r10
  unsigned int v3; // r9d
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v6; // eax

  Directory = HashTable->Directory;
  if ( HashTable->TableSize > 0x80 )
  {
    _BitScanReverse(&v6, 0x80u);
    v3 = (1 << v6) ^ 0x80;
    Directory = (_QWORD *)Directory[v6 - 7];
  }
  else
  {
    v3 = 0;
  }
  ++HashTable->NumEnumerators;
  v4 = (struct _LIST_ENTRY *)&Directory[2 * v3];
  if ( v4->Flink == v4 )
    ++HashTable->NonEmptyBuckets;
  Flink = v4->Flink;
  if ( v4->Flink->Blink != v4 )
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Blink = v4;
  Enumerator->HashEntry.Linkage.Flink = Flink;
  Flink->Blink = &Enumerator->HashEntry.Linkage;
  v4->Flink = &Enumerator->HashEntry.Linkage;
  Enumerator->BucketIndex = 0;
  Enumerator->HashEntry.Signature = 0LL;
  Enumerator->ChainHead = v4;
  return 1;
}
