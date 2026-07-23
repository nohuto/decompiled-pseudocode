/*
 * XREFs of RtlpCreateHashTable @ 0x1800E55F4
 * Callers:
 *     RtlCreateHashTable @ 0x18010FB20 (RtlCreateHashTable.c)
 *     RtlCreateHashTableEx @ 0x180144FB0 (RtlCreateHashTableEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpAllocateSecondLevelDir @ 0x1800E575C (RtlpAllocateSecondLevelDir.c)
 *     RtlDeleteHashTable @ 0x1800E5790 (RtlDeleteHashTable.c)
 *     RtlpInitializeSecondLevelDir @ 0x1800E583C (RtlpInitializeSecondLevelDir.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpCreateHashTable(PVOID *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // esi
  char *Heap; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v14; // ecx
  int v15; // ebp
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rdi
  __int64 SecondLevelDir; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // [rsp+48h] [rbp+10h]

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  Heap = (char *)*a1;
  v10 = 0;
  if ( !*a1 )
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    if ( !Heap )
      return 0;
    v10 = 1;
  }
  *(_QWORD *)(Heap + 20) = 0LL;
  *(_QWORD *)(Heap + 28) = 0LL;
  *((_DWORD *)Heap + 9) = 0;
  *((_DWORD *)Heap + 3) = 0;
  *((_DWORD *)Heap + 1) = a3;
  *(_DWORD *)Heap = a4 | v10;
  *((_DWORD *)Heap + 2) = a2;
  *((_DWORD *)Heap + 4) = v4;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v14, a2 + 127);
    v22 = v14 - 7;
    v15 = (a2 + 127) ^ (1 << v14);
    v16 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
    v17 = v16;
    if ( v16 )
    {
      memset_thunk_772440563353939046(v16, 0, 0x80uLL);
      v18 = 0LL;
      *((_QWORD *)Heap + 4) = v17;
      while ( (unsigned int)v18 <= v22 )
      {
        SecondLevelDir = RtlpAllocateSecondLevelDir((unsigned int)v18);
        if ( !SecondLevelDir )
          goto LABEL_10;
        if ( (unsigned int)v18 >= v22 )
          v20 = (unsigned int)(v15 + 1);
        else
          v20 = (unsigned int)(1 << (v18 + 7));
        RtlpInitializeSecondLevelDir(SecondLevelDir, v20);
        v17[v18] = v21;
        v18 = (unsigned int)(v18 + 1);
      }
      goto LABEL_9;
    }
  }
  else
  {
    v11 = RtlpAllocateSecondLevelDir(0LL);
    if ( v11 )
    {
      RtlpInitializeSecondLevelDir(v11, *((unsigned int *)Heap + 2));
      *((_QWORD *)Heap + 4) = v12;
LABEL_9:
      *a1 = Heap;
      return 1;
    }
  }
LABEL_10:
  RtlDeleteHashTable((PRTL_DYNAMIC_HASH_TABLE)Heap);
  return 0;
}
