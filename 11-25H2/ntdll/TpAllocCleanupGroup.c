/*
 * XREFs of TpAllocCleanupGroup @ 0x1800FB3A0
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl TpAllocCleanupGroup(PTP_CLEANUP_GROUP *CleanupGroupReturn)
{
  _QWORD *Heap; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  NTSTATUS result; // eax
  NTSTATUS v6; // [rsp+20h] [rbp-18h]
  PVOID BaseAddress; // [rsp+40h] [rbp+8h]

  if ( !CleanupGroupReturn || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    *CleanupGroupReturn = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag | 8, 0x50uLL);
    v3 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *((_DWORD *)Heap + 1) = 0;
      Heap[1] = 0LL;
      Heap[7] = 0LL;
      v4 = Heap + 2;
      v4[1] = v4;
      *v4 = v4;
      v3[9] = v3 + 8;
      v3[8] = v3 + 8;
      result = 0;
      *((_OWORD *)v3 + 2) = 0LL;
      v3[6] = 0LL;
      v6 = 0;
      *CleanupGroupReturn = (PTP_CLEANUP_GROUP)v3;
    }
    else
    {
      result = -1073741801;
      v6 = -1073741801;
    }
    if ( result < 0 )
    {
      if ( v3 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, BaseAddress);
        return v6;
      }
    }
  }
  return result;
}
