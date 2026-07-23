/*
 * XREFs of RtlContractHashTable @ 0x1800E1640
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpGetChainHead @ 0x1800E19A0 (RtlpGetChainHead.c)
 */

BOOLEAN __cdecl RtlContractHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int Pivot; // eax
  unsigned int DivisorMask; // eax
  _QWORD *v6; // r9
  _QWORD *ChainHead; // r10
  _QWORD *i; // rdx
  _QWORD *v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD *j; // r8
  _QWORD *v15; // rax
  void **Directory; // rdi

  TableSize = HashTable->TableSize;
  if ( TableSize == 128 || HashTable->NumEnumerators )
    return 0;
  Pivot = HashTable->Pivot;
  if ( Pivot )
  {
    DivisorMask = Pivot - 1;
  }
  else
  {
    HashTable->DivisorMask >>= 1;
    DivisorMask = HashTable->DivisorMask;
  }
  HashTable->Pivot = DivisorMask;
  RtlpGetChainHead(HashTable, TableSize - 1);
  ChainHead = (_QWORD *)RtlpGetChainHead(HashTable, HashTable->Pivot);
  --HashTable->TableSize;
  if ( (_QWORD *)*v6 != v6 && (_QWORD *)*ChainHead != ChainHead )
    --HashTable->NonEmptyBuckets;
  for ( i = ChainHead; ; *i = v9 )
  {
    v9 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    if ( (_QWORD *)v9[1] != v6 )
      goto LABEL_17;
    v13 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_17;
    *v6 = v13;
    *(_QWORD *)(v13 + 8) = v6;
    for ( j = (_QWORD *)*i; j != ChainHead; j = (_QWORD *)*j )
    {
      if ( j[2] >= v9[2] )
        break;
      i = j;
    }
    v15 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i )
LABEL_17:
      __fastfail(3u);
    *v9 = v15;
    v9[1] = i;
    v15[1] = v9;
  }
  v10 = HashTable->TableSize + 128;
  _BitScanReverse(&v11, v10);
  v12 = v11 - 7;
  if ( 1 << v11 == v10 )
  {
    Directory = (void **)HashTable->Directory;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory[v12]);
    Directory[v12] = 0LL;
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *Directory;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory);
    }
  }
  return 1;
}
