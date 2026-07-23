/*
 * XREFs of RtlpPushPageDescriptor @ 0x180092F14
 * Callers:
 *     RtlpLeakCallbackRoutine @ 0x1800F7800 (RtlpLeakCallbackRoutine.c)
 *     RtlpReadProcessHeaps @ 0x1800FE4CC (RtlpReadProcessHeaps.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpGetBlockInfo @ 0x180094070 (RtlpGetBlockInfo.c)
 *     RtlpSetBlockInfo @ 0x180094F5C (RtlpSetBlockInfo.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

char __fastcall RtlpPushPageDescriptor(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  const void *BlockInfo; // rax
  _DWORD *Heap; // rax
  _DWORD *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  const void *v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 *v13; // rcx

  v3 = a1 << 12;
  BlockInfo = (const void *)RtlpGetBlockInfo(RtlpProcessMemoryMap, a1 << 12);
  if ( BlockInfo )
  {
    DbgPrint("Conflicting descriptors %p\n", BlockInfo);
    return 0;
  }
  Heap = RtlAllocateHeap(RtlpLeakHeap, 0, 40LL * (RtlpLDNumBlocks - 1) + 64);
  v6 = Heap;
  if ( !Heap )
  {
    DbgPrint("Unable to allocate page descriptor\n");
    return 0;
  }
  v7 = RtlpLDNumBlocks;
  v8 = (__int64)(Heap + 6);
  v9 = RtlpCrtHeapAddress;
  v10 = RtlpTempBlocks;
  *Heap = 2;
  Heap[4] = v7;
  *((_QWORD *)Heap + 1) = v9;
  memmove(Heap + 6, v10, 40 * v7);
  if ( v9 != RtlpLeakHeapAddress )
  {
    v11 = 0;
    if ( (int)v7 > 0 )
    {
      v12 = RtlpPreviousStartAddress;
      do
      {
        *(_QWORD *)(v8 + 8) = v8;
        *(_QWORD *)v8 = v8;
        if ( *(_QWORD *)(v8 + 16) != v12 )
        {
          v13 = (__int64 *)qword_1801D5EF8;
          if ( *(__int64 **)qword_1801D5EF8 != &RtlpLeakList )
            __fastfail(3u);
          *(_QWORD *)v8 = &RtlpLeakList;
          *(_QWORD *)(v8 + 8) = v13;
          *v13 = v8;
          qword_1801D5EF8 = v8;
          v12 = *(_QWORD *)(v8 + 16);
          *(_DWORD *)(v8 + 32) = 0;
          RtlpPreviousStartAddress = v12;
        }
        ++v11;
        v8 += 40LL;
      }
      while ( v11 < (int)v7 );
    }
  }
  RtlpSetBlockInfo(RtlpProcessMemoryMap, v3, a2 << 12, v6);
  return 1;
}
