/*
 * XREFs of LdrpAllocateSchedulerSharedData @ 0x1800F4700
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x18015D630 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015D940 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtSetInformationProcess @ 0x1801603D0 (NtSetInformationProcess.c)
 */

__int64 LdrpAllocateSchedulerSharedData()
{
  NTSTATUS v0; // ebx
  _QWORD *Heap; // rbx
  __int64 v2; // rax
  HANDLE ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  ProcessInformation = 0LL;
  if ( LdrpIsSecureProcess )
    return (unsigned int)-1073741637;
  v0 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessSchedulerSharedData, &ProcessInformation, 8u);
  if ( v0 >= 0 )
  {
    Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 0x18uLL);
    if ( Heap )
    {
      Heap[2] = ProcessInformation;
      RtlAcquireSRWLockExclusive(&LdrpSchedulerSharedDataListHeadLock);
      v2 = LdrpSchedulerSharedDataListHead;
      if ( *(__int64 **)(LdrpSchedulerSharedDataListHead + 8) != &LdrpSchedulerSharedDataListHead )
        __fastfail(3u);
      Heap[1] = &LdrpSchedulerSharedDataListHead;
      *Heap = v2;
      *(_QWORD *)(v2 + 8) = Heap;
      LdrpSchedulerSharedDataListHead = (__int64)Heap;
      RtlReleaseSRWLockExclusive(&LdrpSchedulerSharedDataListHeadLock);
      return 0;
    }
    v0 = -1073741670;
  }
  if ( ProcessInformation )
    NtClose(ProcessInformation);
  return (unsigned int)v0;
}
