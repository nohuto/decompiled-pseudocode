/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x1800E51F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x1800E55B0 (RtlpGetChainHead.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlStronglyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // r10d
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v3; // r9
  PRTL_DYNAMIC_HASH_TABLE v4; // r11
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *ChainHead; // rcx

  BucketIndex = Enumerator->BucketIndex;
  v3 = Enumerator;
  v4 = HashTable;
  while ( BucketIndex < v4->TableSize )
  {
    if ( BucketIndex == v3->BucketIndex )
    {
      result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v3->HashEntry.Linkage.Flink;
      ChainHead = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v3->ChainHead;
    }
    else
    {
      result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)RtlpGetChainHead(v4, BucketIndex);
      ChainHead = result;
    }
    while ( 1 )
    {
      result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink;
      if ( result == ChainHead )
        break;
      if ( result->Signature )
      {
        v3->BucketIndex = BucketIndex;
        v3->ChainHead = &ChainHead->Linkage;
        v3->HashEntry.Linkage.Flink = &result->Linkage;
        return result;
      }
    }
    ++BucketIndex;
  }
  return 0LL;
}
