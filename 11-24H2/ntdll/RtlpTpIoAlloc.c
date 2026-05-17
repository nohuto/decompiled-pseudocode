/*
 * XREFs of RtlpTpIoAlloc @ 0x1800BEC44
 * Callers:
 *     RtlpTpIoLookup @ 0x1800BEF1C (RtlpTpIoLookup.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     TppPoolpReferenceGlobalPool @ 0x18001B460 (TppPoolpReferenceGlobalPool.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     TppGetCurrentThreadNumaNode @ 0x18006EE30 (TppGetCurrentThreadNumaNode.c)
 *     TpDereferenceGlobalPool @ 0x18006F5F8 (TpDereferenceGlobalPool.c)
 *     TpBindFileToDirect @ 0x1800BF8D0 (TpBindFileToDirect.c)
 */

__int64 __fastcall RtlpTpIoAlloc(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 Heap; // rdi
  int v7; // ebx
  _DWORD *v8; // rsi
  _BYTE *v9; // r14
  volatile signed __int32 *v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  volatile signed __int32 *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
  if ( !Heap )
  {
    v7 = -1073741801;
    goto LABEL_7;
  }
  v7 = TppPoolpReferenceGlobalPool((volatile signed __int32 **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock, &v13);
  v12 = v7;
  if ( v7 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *(_QWORD *)(Heap + 64) = RtlpTpIoCallback;
    v8 = (_DWORD *)(Heap + 72);
    v9 = (_BYTE *)(Heap + 76);
    if ( v13 )
    {
      TppGetCurrentThreadNumaNode((__int64)v13, (volatile signed __int32 **)(Heap + 72), (_BYTE *)(Heap + 76), 0LL);
    }
    else
    {
      *v8 = 0;
      *v9 = 0;
    }
    *(_QWORD *)(Heap + 40) = 0LL;
    *(_QWORD *)(Heap + 56) = Heap + 48;
    *(_QWORD *)(Heap + 48) = Heap + 48;
    *(_QWORD *)(Heap + 8) = TppDirectTaskVFuncs;
    *(_DWORD *)(Heap + 16) = *v8;
    *(_BYTE *)(Heap + 20) = *v9;
    v10 = v13;
    *(_QWORD *)(Heap + 80) = v13;
    v7 = TpBindFileToDirect(a3, Heap + 8, v10);
    v12 = v7;
    if ( v7 >= 0 )
    {
      ++*(_DWORD *)(Heap + 88);
      *(_QWORD *)(Heap + 96) = Heap + 96;
      *(_QWORD *)(Heap + 104) = 0LL;
      *(_QWORD *)(Heap + 112) = 0LL;
      *a1 = Heap;
      v7 = 0;
LABEL_7:
      v12 = v7;
    }
  }
  if ( v7 < 0 )
  {
    if ( v13 )
      TpDereferenceGlobalPool((__int64)v13);
    if ( Heap )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v12;
    }
  }
  return (unsigned int)v7;
}
