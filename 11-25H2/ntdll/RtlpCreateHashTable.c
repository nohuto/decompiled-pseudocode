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

char __fastcall RtlpCreateHashTable(__int64 *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // esi
  __int64 Heap; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v16; // ecx
  int v17; // ebp
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 SecondLevelDir; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // [rsp+48h] [rbp+10h]

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  Heap = *a1;
  v10 = 0;
  if ( !*a1 )
  {
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    if ( !Heap )
      return 0;
    v10 = 1;
  }
  *(_QWORD *)(Heap + 20) = 0LL;
  *(_QWORD *)(Heap + 28) = 0LL;
  *(_DWORD *)(Heap + 36) = 0;
  *(_DWORD *)(Heap + 12) = 0;
  *(_DWORD *)(Heap + 4) = a3;
  *(_DWORD *)Heap = a4 | v10;
  *(_DWORD *)(Heap + 8) = a2;
  *(_DWORD *)(Heap + 16) = v4;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v16, a2 + 127);
    v24 = v16 - 7;
    v17 = (a2 + 127) ^ (1 << v16);
    v18 = (_QWORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
    v19 = v18;
    if ( v18 )
    {
      memset_thunk_772440563353939046(v18, 0, 0x80uLL);
      v20 = 0LL;
      *(_QWORD *)(Heap + 32) = v19;
      while ( (unsigned int)v20 <= v24 )
      {
        SecondLevelDir = RtlpAllocateSecondLevelDir((unsigned int)v20);
        v13 = SecondLevelDir;
        if ( !SecondLevelDir )
          goto LABEL_10;
        if ( (unsigned int)v20 >= v24 )
          v22 = (unsigned int)(v17 + 1);
        else
          v22 = (unsigned int)(1 << (v20 + 7));
        RtlpInitializeSecondLevelDir(SecondLevelDir, v22);
        v19[v20] = v23;
        v20 = (unsigned int)(v20 + 1);
      }
      goto LABEL_9;
    }
  }
  else
  {
    v11 = RtlpAllocateSecondLevelDir(0LL);
    v13 = v11;
    if ( v11 )
    {
      RtlpInitializeSecondLevelDir(v11, *(unsigned int *)(Heap + 8));
      *(_QWORD *)(Heap + 32) = v14;
LABEL_9:
      *a1 = Heap;
      return 1;
    }
  }
LABEL_10:
  RtlDeleteHashTable(Heap, v12, v13);
  return 0;
}
