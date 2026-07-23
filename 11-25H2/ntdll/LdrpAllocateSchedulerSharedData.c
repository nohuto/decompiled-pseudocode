/*
 * XREFs of LdrpAllocateSchedulerSharedData @ 0x1800FB7F0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x180160A90 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtSetInformationProcess @ 0x1801635A0 (NtSetInformationProcess.c)
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
