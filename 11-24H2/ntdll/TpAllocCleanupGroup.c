/*
 * XREFs of TpAllocCleanupGroup @ 0x180069DA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocCleanupGroup(__int64 *a1)
{
  __int64 Heap; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 result; // rax
  unsigned int v6; // [rsp+20h] [rbp-18h]
  unsigned __int64 v7; // [rsp+40h] [rbp+8h]

  if ( !a1 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter(a1);
    return 3221225485LL;
  }
  else
  {
    *a1 = 0LL;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag | 8u, 0x50uLL);
    v3 = Heap;
    v7 = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *(_DWORD *)(Heap + 4) = 0;
      *(_QWORD *)(Heap + 8) = 0LL;
      *(_QWORD *)(Heap + 56) = 0LL;
      v4 = (_QWORD *)(Heap + 16);
      v4[1] = v4;
      *v4 = v4;
      *(_QWORD *)(v3 + 72) = v3 + 64;
      *(_QWORD *)(v3 + 64) = v3 + 64;
      result = 0LL;
      *(_OWORD *)(v3 + 32) = 0LL;
      *(_QWORD *)(v3 + 48) = 0LL;
      v6 = 0;
      *a1 = v3;
    }
    else
    {
      result = 3221225495LL;
      v6 = -1073741801;
    }
    if ( (int)result < 0 )
    {
      if ( v3 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag, v7);
        return v6;
      }
    }
  }
  return result;
}
