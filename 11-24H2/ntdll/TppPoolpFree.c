/*
 * XREFs of TppPoolpFree @ 0x1800DEE44
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18001A830 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18006F660 (RtlpTpWorkUnposted.c)
 *     TpReleasePool @ 0x1800DEB80 (TpReleasePool.c)
 *     TpUnreserveTaskPost @ 0x1800EE35C (TpUnreserveTaskPost.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppDestroyTimerSubQueue @ 0x1800DEF60 (TppDestroyTimerSubQueue.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

__int64 __fastcall TppPoolpFree(unsigned __int64 a1)
{
  void *v2; // rcx
  volatile signed __int32 **v3; // rdx
  unsigned __int64 v4; // r8
  __int64 v5; // r8
  _QWORD *v6; // rdx

  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  TppDestroyTimerSubQueue(a1 + 120);
  TppDestroyTimerSubQueue(a1 + 240);
  NtClose(*(HANDLE *)(a1 + 64));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 16));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 40));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 48));
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpListLock, v3, v4);
  v5 = *(_QWORD *)(a1 + 384);
  v6 = *(_QWORD **)(a1 + 392);
  if ( *(_QWORD *)(v5 + 8) != a1 + 384 || *v6 != a1 + 384 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, a1);
}
