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

__int64 __fastcall TppPoolpFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // r9

  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  TppDestroyTimerSubQueue(a1 + 120);
  TppDestroyTimerSubQueue(a1 + 240);
  NtClose(*(HANDLE *)(a1 + 64));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 16), v3);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 40), v4);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 48), v5);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpListLock);
  v6 = *(_QWORD *)(a1 + 384);
  v7 = *(_QWORD **)(a1 + 392);
  if ( *(_QWORD *)(v6 + 8) != a1 + 384 || *v7 != a1 + 384 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, a1, v8);
}
