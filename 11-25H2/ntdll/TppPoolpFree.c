/*
 * XREFs of TppPoolpFree @ 0x1800A09A4
 * Callers:
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18003DA30 (RtlpTpWorkUnposted.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180048150 (TppCleanupGroupMemberInitialize.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     TpReleasePool @ 0x1800A06E0 (TpReleasePool.c)
 *     TpUnreserveTaskPost @ 0x1800EEE3C (TpUnreserveTaskPost.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     TppDestroyTimerSubQueue @ 0x1800A0AC0 (TppDestroyTimerSubQueue.c)
 *     NtClose @ 0x180163400 (NtClose.c)
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
