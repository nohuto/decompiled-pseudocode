/*
 * XREFs of RtlpTpTimerRundown @ 0x18003B610
 * Callers:
 *     RtlpTpTimerFinalizationCallback @ 0x18003B5E0 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimer @ 0x18003B680 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FCFD0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x18003DF64 (RtlpTpDeleteData.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FD158 (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x1801633E0 (ZwSetEvent.c)
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
