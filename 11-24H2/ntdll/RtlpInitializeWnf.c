/*
 * XREFs of RtlpInitializeWnf @ 0x1800F73B8
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     TpReleaseTimer @ 0x18006B880 (TpReleaseTimer.c)
 *     TpAllocTimer @ 0x18006CE10 (TpAllocTimer.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F749C (RtlpWnfRegisterTpNotification.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpInitializeWnf()
{
  __int64 Heap; // rax
  unsigned __int64 v1; // rbx

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  v1 = Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046((void *)(Heap + 4), 0, 0x54uLL);
    *(_DWORD *)v1 = 5769489;
    if ( (int)TpAllocTimer((__int64 *)(v1 + 72), (__int64)RtlpWnfRetryTimerCallback, 0, 0LL) >= 0 )
    {
      *(_QWORD *)(v1 + 16) = 0LL;
      *(_QWORD *)(v1 + 24) = 0LL;
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)(v1 + 40) = v1 + 32;
      *(_QWORD *)(v1 + 32) = v1 + 32;
      *(_QWORD *)(v1 + 48) = 0LL;
      *(_DWORD *)(v1 + 56) = 500;
      *(_DWORD *)(v1 + 60) = 1000;
      *(_DWORD *)(v1 + 64) = 3600000;
      *(_DWORD *)(v1 + 68) = 10;
      if ( (int)RtlpWnfRegisterTpNotification() >= 0 )
      {
        qword_1801CE200 = v1;
        return 1LL;
      }
      TpReleaseTimer(*(_QWORD *)(v1 + 72));
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  }
  return 0LL;
}
