/*
 * XREFs of RtlpTpIoAlloc @ 0x1800C4B54
 * Callers:
 *     RtlpTpIoLookup @ 0x1800C3DFC (RtlpTpIoLookup.c)
 * Callees:
 *     TpBindFileToDirect @ 0x18003B4F0 (TpBindFileToDirect.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003D250 (TppGetCurrentThreadNumaNode.c)
 *     TpDereferenceGlobalPool @ 0x18003DB58 (TpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x180048D80 (TppPoolpReferenceGlobalPool.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpTpIoAlloc(_QWORD *a1, __int64 a2, _PEB_LDR_DATA *a3)
{
  char *Heap; // rdi
  int v7; // ebx
  _DWORD *v8; // rsi
  char *v9; // r14
  volatile signed __int32 *v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  volatile signed __int32 *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
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
    *((_QWORD *)Heap + 8) = RtlpTpIoCallback;
    v8 = Heap + 72;
    v9 = Heap + 76;
    if ( v13 )
    {
      TppGetCurrentThreadNumaNode((__int64)v13, (int *)Heap + 18, Heap + 76, 0LL);
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
    v10 = v13;
    *((_QWORD *)Heap + 10) = v13;
    v7 = TpBindFileToDirect(a3, (__int64)(Heap + 8), (__int64)v10);
    v12 = v7;
    if ( v7 >= 0 )
    {
      ++*((_DWORD *)Heap + 22);
      *((_QWORD *)Heap + 12) = Heap + 96;
      *((_QWORD *)Heap + 13) = 0LL;
      *((_QWORD *)Heap + 14) = 0LL;
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
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v12;
    }
  }
  return (unsigned int)v7;
}
