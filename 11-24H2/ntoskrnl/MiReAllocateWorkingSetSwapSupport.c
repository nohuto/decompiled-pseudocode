/*
 * XREFs of MiReAllocateWorkingSetSwapSupport @ 0x1403C4138
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403C64C8 (MmOutSwapVirtualAddresses.c)
 *     MmInSwapWorkingSet @ 0x1403C6A50 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiAllocateWorkingSetSwapSupport @ 0x1403C4190 (MiAllocateWorkingSetSwapSupport.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
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
