/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x1800DF280
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x180145030 (RtlWeaklyEnumerateEntryHashTable.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // ebx
  unsigned int TableSize; // r11d
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  _QWORD *Directory; // rdx
  unsigned int v9; // r9d
  _LIST_ENTRY *ChainHead; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Flink; // rdx
  unsigned int v12; // ecx
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *Blink; // r9
  _LIST_ENTRY *v15; // rcx
  _LIST_ENTRY *v16; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax

  BucketIndex = Enumerator->BucketIndex;
  TableSize = HashTable->TableSize;
  v6 = BucketIndex;
  v7 = BucketIndex + 128;
LABEL_2:
  if ( v6 >= TableSize )
    return 0LL;
  if ( v6 == BucketIndex )
  {
    ChainHead = Enumerator->ChainHead;
    Flink = Enumerator;
  }
  else
  {
    Directory = HashTable->Directory;
    if ( TableSize > 0x80 )
    {
      _BitScanReverse(&v12, v7);
      v9 = v7 ^ (1 << v12);
      Directory = (_QWORD *)Directory[v12 - 7];
    }
    else
    {
      v9 = v6;
    }
    ChainHead = (_LIST_ENTRY *)&Directory[2 * v9];
    Flink = (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)ChainHead;
  }
  do
  {
    Flink = (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Flink->HashEntry.Linkage.Flink;
    if ( Flink == (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)ChainHead )
    {
      ++v6;
      ++v7;
      goto LABEL_2;
    }
  }
  while ( !Flink->HashEntry.Signature );
  v13 = Enumerator->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Enumerator->HashEntry.Linkage.Flink->Blink != Enumerator )
    goto LABEL_20;
  Blink = Enumerator->HashEntry.Linkage.Blink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator )
    goto LABEL_20;
  Blink->Flink = v13;
  v13->Blink = Blink;
  v15 = Enumerator->ChainHead;
  if ( v15 != ChainHead )
  {
    if ( v15->Flink == v15 )
      --HashTable->NonEmptyBuckets;
    if ( ChainHead->Flink == ChainHead )
      ++HashTable->NonEmptyBuckets;
  }
  Enumerator->BucketIndex = v6;
  Enumerator->ChainHead = ChainHead;
  v16 = Flink->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Flink->HashEntry.Linkage.Flink->Blink != Flink )
LABEL_20:
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Flink = v16;
  Enumerator->HashEntry.Linkage.Blink = &Flink->HashEntry.Linkage;
  v16->Blink = &Enumerator->HashEntry.Linkage;
  result = &Flink->HashEntry;
  Flink->HashEntry.Linkage.Flink = &Enumerator->HashEntry.Linkage;
  return result;
}
