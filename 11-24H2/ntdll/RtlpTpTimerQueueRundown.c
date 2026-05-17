/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x180068E28
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x180068CA0 (RtlDeleteTimerQueueEx.c)
 *     RtlpTpTimerRundown @ 0x18006CB3C (RtlpTpTimerRundown.c)
 * Callees:
 *     ZwSetEvent @ 0x180161E50 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180162AA0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpTpTimerQueueRundown(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    ZwAlertThreadByThreadId(v5, a2, a3, a4);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 )
      ZwSetEvent(v6, 0LL);
  }
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
