/*
 * XREFs of TppExecuteWaitTimerCallback @ 0x1800F5B20
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     TppETWCallbackDequeue @ 0x180084FE4 (TppETWCallbackDequeue.c)
 */

int __fastcall TppExecuteWaitTimerCallback(PTP_CALLBACK_INSTANCE a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // r8

  v3 = a2 - 200;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478LL;
  if ( *(_BYTE *)v5 )
    TppETWCallbackDequeue(*(_QWORD *)(v3 + 144), a2, *(_QWORD *)(v3 + 80), *(_QWORD *)(v3 + 88), *(_QWORD *)(v3 + 104));
  return TppExecuteWaitCallback(a1, (PTP_WAIT)v3, 0x102u);
}
