/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x1800FD158
 * Callers:
 *     RtlpTpTimerRundown @ 0x18003B610 (RtlpTpTimerRundown.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FCFD0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     ZwSetEvent @ 0x1801633E0 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180164030 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpTpTimerQueueRundown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    ZwAlertThreadByThreadId(v5);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 )
      ZwSetEvent(v6, 0LL);
  }
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1, a4);
}
