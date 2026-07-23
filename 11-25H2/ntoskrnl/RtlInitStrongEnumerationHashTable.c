/*
 * XREFs of RtlInitStrongEnumerationHashTable @ 0x1403F5760
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x1403F57B0 (RtlpPopulateContext.c)
 */

BOOLEAN __cdecl RtlInitStrongEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  struct _LIST_ENTRY *v3; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  RtlpPopulateContext(HashTable, &v5, 0LL);
  Enumerator->HashEntry.Linkage.Blink = 0LL;
  Enumerator->HashEntry.Signature = 0LL;
  *(_QWORD *)&Enumerator->BucketIndex = 0LL;
  v3 = (struct _LIST_ENTRY *)v5;
  Enumerator->ChainHead = (_LIST_ENTRY *)v5;
  Enumerator->HashEntry.Linkage.Flink = v3;
  return 1;
}
