/*
 * XREFs of TppPoolpFree @ 0x1800D9FB4
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x180047230 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18008BF40 (RtlpTpWorkUnposted.c)
 *     TpReleasePool @ 0x1800D9CF0 (TpReleasePool.c)
 *     TpUnreserveTaskPost @ 0x1800E953C (TpUnreserveTaskPost.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppDestroyTimerSubQueue @ 0x1800DA0D0 (TppDestroyTimerSubQueue.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

LOGICAL __fastcall TppPoolpFree(char *BaseAddress)
{
  void *v2; // rcx
  char **v3; // r8
  PVOID *v4; // rdx

  v2 = (void *)*((_QWORD *)BaseAddress + 7);
  if ( v2 )
  {
    NtClose(v2);
    *((_QWORD *)BaseAddress + 7) = 0LL;
  }
  TppDestroyTimerSubQueue(BaseAddress + 120);
  TppDestroyTimerSubQueue(BaseAddress + 240);
  NtClose(*((HANDLE *)BaseAddress + 8));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *((PVOID *)BaseAddress + 2));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *((PVOID *)BaseAddress + 5));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *((PVOID *)BaseAddress + 6));
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v3 = (char **)*((_QWORD *)BaseAddress + 48);
  v4 = (PVOID *)*((_QWORD *)BaseAddress + 49);
  if ( v3[1] != BaseAddress + 384 || *v4 != BaseAddress + 384 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (char *)v4;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
}
