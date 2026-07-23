/*
 * XREFs of RtlpTpIoAlloc @ 0x1800B6A04
 * Callers:
 *     RtlpTpIoLookup @ 0x1800B6CDC (RtlpTpIoLookup.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     TppPoolpReferenceGlobalPool @ 0x180047E60 (TppPoolpReferenceGlobalPool.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     TppGetCurrentThreadNumaNode @ 0x18008B710 (TppGetCurrentThreadNumaNode.c)
 *     TpDereferenceGlobalPool @ 0x18008BED8 (TpDereferenceGlobalPool.c)
 *     TpBindFileToDirect @ 0x1800B7690 (TpBindFileToDirect.c)
 */

__int64 __fastcall RtlpTpIoAlloc(_QWORD *a1, __int64 a2, void *a3)
{
  char *Heap; // rdi
  int v7; // ebx
  _DWORD *v8; // rsi
  char *v9; // r14
  unsigned int v11; // [rsp+20h] [rbp-28h]
  volatile signed __int32 *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
  if ( !Heap )
  {
    v7 = -1073741801;
    goto LABEL_7;
  }
  v7 = TppPoolpReferenceGlobalPool((volatile signed __int32 **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock, &v12);
  v11 = v7;
  if ( v7 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *((_QWORD *)Heap + 8) = RtlpTpIoCallback;
    v8 = Heap + 72;
    v9 = Heap + 76;
    if ( v12 )
    {
      TppGetCurrentThreadNumaNode((__int64)v12, (int *)Heap + 18, Heap + 76, 0LL);
    }
    else
    {
      *v8 = 0;
      *v9 = 0;
    }
    *((_QWORD *)Heap + 5) = 0LL;
    *((_QWORD *)Heap + 7) = Heap + 48;
    *((_QWORD *)Heap + 6) = Heap + 48;
    *((_QWORD *)Heap + 1) = &TppDirectTaskVFuncs;
    *((_DWORD *)Heap + 4) = *v8;
    Heap[20] = *v9;
    *((_QWORD *)Heap + 10) = v12;
    v7 = TpBindFileToDirect(a3);
    v11 = v7;
    if ( v7 >= 0 )
    {
      ++*((_DWORD *)Heap + 22);
      *((_QWORD *)Heap + 12) = Heap + 96;
      *((_QWORD *)Heap + 13) = 0LL;
      *((_QWORD *)Heap + 14) = 0LL;
      *a1 = Heap;
      v7 = 0;
LABEL_7:
      v11 = v7;
    }
  }
  if ( v7 < 0 )
  {
    if ( v12 )
      TpDereferenceGlobalPool((__int64)v12);
    if ( Heap )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v11;
    }
  }
  return (unsigned int)v7;
}
