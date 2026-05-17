/*
 * XREFs of TpAllocCleanupGroup @ 0x1800FB3A0
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall TpAllocCleanupGroup(__int64 *a1)
{
  __int64 Heap; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 result; // rax
  unsigned int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp+8h]

  if ( !a1 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    *a1 = 0LL;
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, TppHeapTag | 8u, 0x50uLL);
    v4 = Heap;
    v8 = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *(_DWORD *)(Heap + 4) = 0;
      *(_QWORD *)(Heap + 8) = 0LL;
      *(_QWORD *)(Heap + 56) = 0LL;
      v5 = (_QWORD *)(Heap + 16);
      v5[1] = v5;
      *v5 = v5;
      *(_QWORD *)(v4 + 72) = v4 + 64;
      *(_QWORD *)(v4 + 64) = v4 + 64;
      result = 0LL;
      *(_OWORD *)(v4 + 32) = 0LL;
      *(_QWORD *)(v4 + 48) = 0LL;
      v7 = 0;
      *a1 = v4;
    }
    else
    {
      result = 3221225495LL;
      v7 = -1073741801;
    }
    if ( (int)result < 0 )
    {
      if ( v4 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag, v8, v3);
        return v7;
      }
    }
  }
  return result;
}
