/*
 * XREFs of MiReAllocateWorkingSetSwapSupport @ 0x140367B34
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140404108 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x140404E48 (MmInSwapWorkingSet.c)
 * Callees:
 *     MiAllocateWorkingSetSwapSupport @ 0x140367B8C (MiAllocateWorkingSetSwapSupport.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall MiReAllocateWorkingSetSwapSupport(__int64 a1, __int64 a2)
{
  __int64 WorkingSetSwapSupport; // rax
  __int64 v4; // rbx
  void *v5; // rcx

  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(*(_QWORD *)(a1 + 16), a2);
  v4 = WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    v5 = *(void **)WorkingSetSwapSupport;
    *(_QWORD *)(WorkingSetSwapSupport + 16) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(WorkingSetSwapSupport + 24) = *(_QWORD *)(a1 + 24);
    memmove(v5, *(const void **)a1, 16LL * *(_QWORD *)(a1 + 16));
  }
  return v4;
}
