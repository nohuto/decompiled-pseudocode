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

__int64 __fastcall RtlpTpIoAlloc(__int64 *a1, __int64 a2, _PEB_LDR_DATA *a3)
{
  __int64 v6; // rdx
  __int64 Heap; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  _DWORD *v11; // rsi
  _BYTE *v12; // r14
  volatile signed __int32 *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  volatile signed __int32 *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
  if ( !Heap )
  {
    v10 = -1073741801;
    goto LABEL_7;
  }
  v10 = TppPoolpReferenceGlobalPool(
          (volatile signed __int32 **)&TppPoolpGlobalPool,
          (volatile signed __int32 *)&TppPoolpGlobalPoolLock,
          &v16);
  v15 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *(_QWORD *)(Heap + 64) = RtlpTpIoCallback;
    v11 = (_DWORD *)(Heap + 72);
    v12 = (_BYTE *)(Heap + 76);
    if ( v16 )
    {
      TppGetCurrentThreadNumaNode((__int64)v16, (int *)(Heap + 72), (_BYTE *)(Heap + 76), 0LL);
    }
    else
    {
      *v11 = 0;
      *v12 = 0;
    }
    *(_QWORD *)(Heap + 40) = 0LL;
    *(_QWORD *)(Heap + 56) = Heap + 48;
    *(_QWORD *)(Heap + 48) = Heap + 48;
    *(_QWORD *)(Heap + 8) = TppDirectTaskVFuncs;
    *(_DWORD *)(Heap + 16) = *v11;
    *(_BYTE *)(Heap + 20) = *v12;
    v13 = v16;
    *(_QWORD *)(Heap + 80) = v16;
    v10 = TpBindFileToDirect(a3, Heap + 8, (__int64)v13);
    v15 = v10;
    if ( v10 >= 0 )
    {
      ++*(_DWORD *)(Heap + 88);
      *(_QWORD *)(Heap + 96) = Heap + 96;
      *(_QWORD *)(Heap + 104) = 0LL;
      *(_QWORD *)(Heap + 112) = 0LL;
      *a1 = Heap;
      v10 = 0;
LABEL_7:
      v15 = v10;
    }
  }
  if ( v10 < 0 )
  {
    if ( v16 )
      TpDereferenceGlobalPool((__int64)v16, v6, v8);
    if ( Heap )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v9);
      return v15;
    }
  }
  return (unsigned int)v10;
}
