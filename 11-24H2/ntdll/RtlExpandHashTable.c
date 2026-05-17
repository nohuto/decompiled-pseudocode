/*
 * XREFs of RtlExpandHashTable @ 0x1800E62F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpGetChainHead @ 0x1800E64F0 (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x1800E669C (RtlpAllocateSecondLevelDir.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlExpandHashTable(__int64 a1)
{
  int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rdx
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
  int v19; // edx
  __int64 v21; // r14
  __int64 Heap; // rax
  _QWORD *v23; // rdi
  __int64 SecondLevelDir; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == 8388480 || *(_DWORD *)(a1 + 28) )
    return 0;
  _BitScanReverse(&v3, v2 + 128);
  v4 = (v2 + 128) ^ (1 << v3);
  v5 = v3 - 7;
  v6 = v5;
  if ( v2 == 128 )
  {
    v21 = *(_QWORD *)(a1 + 32);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
    v23 = (_QWORD *)Heap;
    if ( !Heap )
      return 0;
    memset_thunk_772440563353939046((void *)(Heap + 8), 0, 0x78uLL);
    v6 = (unsigned int)v5;
    *v23 = v21;
    *(_QWORD *)(a1 + 32) = v23;
  }
  v7 = *(_QWORD **)(a1 + 32);
  if ( !v7[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir(v6);
    if ( SecondLevelDir )
    {
      v7[v5] = SecondLevelDir;
      goto LABEL_5;
    }
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v7;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v7);
    }
    return 0;
  }
LABEL_5:
  v8 = *(unsigned int *)(a1 + 12);
  ++*(_DWORD *)(a1 + 8);
  ChainHead = (_QWORD *)RtlpGetChainHead(a1, v8);
  ++*(_DWORD *)(a1 + 12);
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
      v15 = *((_DWORD *)v13 + 4) >> *(_DWORD *)(a1 + 4);
      if ( (((2 * *(_DWORD *)(a1 + 16)) | 1) & ((69069 * v15 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v15 + 12345) >> 16))) == *(_DWORD *)(a1 + 8) - 1 )
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
      ++*(_DWORD *)(a1 + 24);
    if ( (_QWORD *)*v10 == v10 )
      --*(_DWORD *)(a1 + 24);
  }
  v19 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 12) == v19 + 1 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = (2 * v19) | 1;
  }
  return 1;
}
