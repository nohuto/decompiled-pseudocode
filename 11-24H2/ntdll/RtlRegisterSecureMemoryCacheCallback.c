/*
 * XREFs of RtlRegisterSecureMemoryCacheCallback @ 0x180144970
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     NtQuerySystemInformation @ 0x180162350 (NtQuerySystemInformation.c)
 */

NTSTATUS __fastcall RtlRegisterSecureMemoryCacheCallback(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Heap; // rax
  volatile signed __int32 **v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // rbx
  __int64 *v7; // rax

  result = NtQuerySystemInformation(SystemRangeStartInformation, &RtlSecureMemorySystemRangeStart, 8u, 0LL);
  if ( result >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
    v6 = Heap;
    if ( Heap )
    {
      *(_DWORD *)(Heap + 16) = 1;
      *(_QWORD *)(Heap + 24) = a1;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpSecMemLock, v4, v5);
      v7 = (__int64 *)off_1801CC540[0];
      if ( *(_UNKNOWN ***)off_1801CC540[0] != &RtlpSecMemListHead )
        __fastfail(3u);
      *(_QWORD *)v6 = &RtlpSecMemListHead;
      *(_QWORD *)(v6 + 8) = v7;
      *v7 = v6;
      off_1801CC540[0] = (_UNKNOWN **)v6;
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
