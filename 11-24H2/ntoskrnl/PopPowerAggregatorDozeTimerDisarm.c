/*
 * XREFs of PopPowerAggregatorDozeTimerDisarm @ 0x1406F34C4
 * Callers:
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x1406F33DC (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopPowerAggregatorDozeTimerArm @ 0x1407575AC (PopPowerAggregatorDozeTimerArm.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     PopPowerAggregatorDiagTraceDozeTimerDisarmed @ 0x1406F355C (PopPowerAggregatorDiagTraceDozeTimerDisarmed.c)
 */

__int64 __fastcall PopPowerAggregatorDozeTimerDisarm(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int32 v6; // eax
  __int64 v7; // rbx
  char v8; // al
  struct _KEVENT *v9; // rcx

  v5 = 200LL * (int)a2;
  v6 = _InterlockedExchange((volatile __int32 *)(v5 + a1 + 480), (*(_DWORD *)(v5 + a1 + 480) & 0xFFFFFFFC) + 4) & 3;
  if ( v6 != 1 )
  {
    if ( v6 != 2 )
      return PopPowerAggregatorDiagTraceDozeTimerDisarmed(a2);
    v9 = (struct _KEVENT *)(v5 + a1 + 488);
LABEL_6:
    KeSetEvent(v9, 0, 0);
    return PopPowerAggregatorDiagTraceDozeTimerDisarmed(a2);
  }
  v7 = v5 + a1;
  v8 = KeCancelTimer2(v5 + a1 + 344, 0LL, v5, a4);
  v9 = (struct _KEVENT *)(v7 + 488);
  if ( v8 )
    goto LABEL_6;
  KeWaitForSingleObject(v9, Executive, 0, 0, 0LL);
  return PopPowerAggregatorDiagTraceDozeTimerDisarmed(a2);
}
