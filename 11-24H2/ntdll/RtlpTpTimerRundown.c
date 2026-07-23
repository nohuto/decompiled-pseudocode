/*
 * XREFs of RtlpTpTimerRundown @ 0x18008941C
 * Callers:
 *     RtlDeleteTimer @ 0x180087440 (RtlDeleteTimer.c)
 *     RtlpTpTimerFinalizationCallback @ 0x1800F1610 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimerQueueEx @ 0x1800F5CD0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x18008A1E0 (RtlpTpDeleteData.c)
 *     RtlpTpTimerQueueRundown @ 0x1800F5E58 (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x180160210 (ZwSetEvent.c)
 */

LOGICAL __fastcall RtlpTpTimerRundown(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 72);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData(a1 + 16);
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*(_QWORD *)(a1 + 56));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
