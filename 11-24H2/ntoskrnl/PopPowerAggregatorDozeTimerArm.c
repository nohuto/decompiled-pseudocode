/*
 * XREFs of PopPowerAggregatorDozeTimerArm @ 0x1407575AC
 * Callers:
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x1406F33DC (PopPowerAggregatorEvaluateDozeTimers.c)
 * Callees:
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x1406F34C4 (PopPowerAggregatorDozeTimerDisarm.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1409A0774 (PopPowerAggregatorDiagTraceEvent.c)
 */

__int64 __fastcall PopPowerAggregatorDozeTimerArm(__int64 a1, signed int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  signed int v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-38h]
  int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+4Ch] [rbp-2Ch]

  v7 = 200LL * a2;
  PopPowerAggregatorDozeTimerDisarm(a1, a2, a3, a4);
  _InterlockedExchange((volatile __int32 *)(v7 + a1 + 480), ((*(_DWORD *)(v7 + a1 + 480) & 0xFFFFFFFC) + 4) | 1);
  UserData.Reserved = 0;
  v14 = 0;
  UserData.Ptr = (ULONGLONG)&v9;
  v12 = &v10;
  v10 = a3;
  v9 = a2;
  UserData.Size = 4;
  v13 = 8;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_ARMED, 2u, &UserData);
  return KeSetTimer2(v7 + a1 + 344, (LARGE_INTEGER)a3, 0LL, 0LL);
}
