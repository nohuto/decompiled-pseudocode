/*
 * XREFs of LdrpAllocateSchedulerSharedData @ 0x1800F9A50
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015F580 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtSetInformationProcess @ 0x180162010 (NtSetInformationProcess.c)
 */

__int64 LdrpAllocateSchedulerSharedData()
{
  int v0; // ebx
  volatile signed __int32 **v1; // rdx
  _QWORD *Heap; // rbx
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( LdrpIsSecureProcess )
    return (unsigned int)-1073741637;
  v0 = NtSetInformationProcess(-1LL, 112LL, &Handle);
  if ( v0 >= 0 )
  {
    Heap = (_QWORD *)RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 0x18uLL);
    if ( Heap )
    {
      Heap[2] = Handle;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpSchedulerSharedDataListHeadLock, v1, v3);
      v4 = LdrpSchedulerSharedDataListHead;
      if ( *(__int64 **)(LdrpSchedulerSharedDataListHead + 8) != &LdrpSchedulerSharedDataListHead )
        __fastfail(3u);
      Heap[1] = &LdrpSchedulerSharedDataListHead;
      *Heap = v4;
      *(_QWORD *)(v4 + 8) = Heap;
      LdrpSchedulerSharedDataListHead = (__int64)Heap;
      RtlReleaseSRWLockExclusive(&LdrpSchedulerSharedDataListHeadLock);
      return 0;
    }
    v0 = -1073741670;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v0;
}
