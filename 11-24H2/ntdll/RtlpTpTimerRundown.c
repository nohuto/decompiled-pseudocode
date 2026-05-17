/*
 * XREFs of RtlpTpTimerRundown @ 0x18006CB3C
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x180068CA0 (RtlDeleteTimerQueueEx.c)
 *     RtlpTpTimerFinalizationCallback @ 0x18006AB30 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimer @ 0x18006AB60 (RtlDeleteTimer.c)
 * Callees:
 *     RtlpTpTimerQueueRundown @ 0x180068E28 (RtlpTpTimerQueueRundown.c)
 *     RtlpTpDeleteData @ 0x18006D900 (RtlpTpDeleteData.c)
 *     ZwSetEvent @ 0x180161E50 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpTpTimerRundown(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData(a1 + 16);
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*(_QWORD *)(a1 + 56), v3, v4, v5);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
