/*
 * XREFs of TppExecuteWaitTimerCallback @ 0x1800FADC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     TppETWCallbackDequeue @ 0x180069454 (TppETWCallbackDequeue.c)
 */

struct _TEB *__fastcall TppExecuteWaitTimerCallback(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // r8

  v3 = (__int64 *)(a2 - 200);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478LL;
  if ( *(_BYTE *)v5 )
    TppETWCallbackDequeue(v3[18], a2, v3[10], v3[11], v3[13]);
  return TppExecuteWaitCallback(a1, (__int64)v3, 0x102u);
}
