/*
 * XREFs of RtlpInitializeWnf @ 0x1800F1B08
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18002DFFC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     TpReleaseTimer @ 0x180088160 (TpReleaseTimer.c)
 *     TpAllocTimer @ 0x1800896F0 (TpAllocTimer.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F1BEC (RtlpWnfRegisterTpNotification.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpInitializeWnf()
{
  char *Heap; // rax
  char *v1; // rbx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  v1 = Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046(Heap + 4, 0, 0x54uLL);
    *(_DWORD *)v1 = 5769489;
    if ( TpAllocTimer((PTP_TIMER *)v1 + 9, RtlpWnfRetryTimerCallback, 0LL, 0LL) >= 0 )
    {
      *((_QWORD *)v1 + 2) = 0LL;
      *((_QWORD *)v1 + 3) = 0LL;
      *((_QWORD *)v1 + 1) = 0LL;
      *((_QWORD *)v1 + 5) = v1 + 32;
      *((_QWORD *)v1 + 4) = v1 + 32;
      *((_QWORD *)v1 + 6) = 0LL;
      *((_DWORD *)v1 + 14) = 500;
      *((_DWORD *)v1 + 15) = 1000;
      *((_DWORD *)v1 + 16) = 3600000;
      *((_DWORD *)v1 + 17) = 10;
      if ( (int)RtlpWnfRegisterTpNotification() >= 0 )
      {
        qword_1801CD200 = (__int64)v1;
        return 1LL;
      }
      TpReleaseTimer(*((PTP_TIMER *)v1 + 9));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  }
  return 0LL;
}
