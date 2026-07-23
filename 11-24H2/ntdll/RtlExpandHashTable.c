/*
 * XREFs of RtlExpandHashTable @ 0x1800E17A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpGetChainHead @ 0x1800E19A0 (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x1800E1B4C (RtlpAllocateSecondLevelDir.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

BOOLEAN __cdecl RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // rcx
  void **v7; // rdi
  __int64 Pivot; // rdx
  _QWORD *ChainHead; // rax
  _QWORD *v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // r8
  _QWORD *v13; // rdx
  _QWORD *v14; // r10
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  unsigned int DivisorMask; // edx
  void *Directory; // r14
  _QWORD *Heap; // rax
  _QWORD *v23; // rdi
  __int64 SecondLevelDir; // rax

  TableSize = HashTable->TableSize;
  if ( TableSize == 8388480 || HashTable->NumEnumerators )
    return 0;
  _BitScanReverse(&v3, TableSize + 128);
  v4 = (TableSize + 128) ^ (1 << v3);
  v5 = v3 - 7;
  v6 = v5;
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
    v23 = Heap;
    if ( !Heap )
      return 0;
    memset_thunk_772440563353939046(Heap + 1, 0, 0x78uLL);
    v6 = (unsigned int)v5;
    *v23 = Directory;
    HashTable->Directory = v23;
  }
  v7 = (void **)HashTable->Directory;
  if ( !v7[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir(v6);
    if ( SecondLevelDir )
    {
      v7[v5] = (void *)SecondLevelDir;
      goto LABEL_5;
    }
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *v7;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
    return 0;
  }
LABEL_5:
  Pivot = HashTable->Pivot;
  ++HashTable->TableSize;
  ChainHead = (_QWORD *)RtlpGetChainHead(HashTable, Pivot);
  ++HashTable->Pivot;
  v10 = ChainHead;
  v12 = (_QWORD *)(v11 + 16LL * v4);
  v12[1] = v12;
  *v12 = v12;
  v13 = (_QWORD *)*ChainHead;
  if ( (_QWORD *)*ChainHead != ChainHead )
  {
    v14 = ChainHead;
    do
    {
      v15 = *((_DWORD *)v13 + 4) >> HashTable->Shift;
      if ( (((2 * HashTable->DivisorMask) | 1) & ((69069 * v15 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v15
                                                                                                 + 12345) >> 16))) == HashTable->TableSize - 1 )
      {
        v16 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13
          || (v17 = (_QWORD *)v13[1], (_QWORD *)*v17 != v13)
          || (*v17 = v16, *(_QWORD *)(v16 + 8) = v17, v18 = (_QWORD *)v12[1], (_QWORD *)*v18 != v12) )
        {
          __fastfail(3u);
        }
        *v13 = v12;
        v13[1] = v18;
        *v18 = v13;
        v12[1] = v13;
      }
      else
      {
        v14 = v13;
      }
      v13 = (_QWORD *)*v14;
    }
    while ( (_QWORD *)*v14 != v10 );
    if ( (_QWORD *)*v12 != v12 )
      ++HashTable->NonEmptyBuckets;
    if ( (_QWORD *)*v10 == v10 )
      --HashTable->NonEmptyBuckets;
  }
  DivisorMask = HashTable->DivisorMask;
  if ( HashTable->Pivot == DivisorMask + 1 )
  {
    HashTable->Pivot = 0;
    HashTable->DivisorMask = (2 * DivisorMask) | 1;
  }
  return 1;
}
