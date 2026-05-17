/*
 * XREFs of RtlRegisterSecureMemoryCacheCallback @ 0x180145EE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 */

NTSTATUS __fastcall RtlRegisterSecureMemoryCacheCallback(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Heap; // rax
  __int64 v4; // rbx
  __int64 *v5; // rax

  result = NtQuerySystemInformation(SystemRangeStartInformation, &RtlSecureMemorySystemRangeStart, 8u, 0LL);
  if ( result >= 0 )
  {
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
    v4 = Heap;
    if ( Heap )
    {
      *(_DWORD *)(Heap + 16) = 1;
      *(_QWORD *)(Heap + 24) = a1;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpSecMemLock);
      v5 = (__int64 *)off_1801CE540[0];
      if ( *(_UNKNOWN ***)off_1801CE540[0] != &RtlpSecMemListHead )
        __fastfail(3u);
      *(_QWORD *)v4 = &RtlpSecMemListHead;
      *(_QWORD *)(v4 + 8) = v5;
      *v5 = v4;
      off_1801CE540[0] = (_UNKNOWN **)v4;
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
