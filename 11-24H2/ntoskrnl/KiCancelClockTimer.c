/*
 * XREFs of KiCancelClockTimer @ 0x140462E90
 * Callers:
 *     KiResetClockIntervalOneShot @ 0x1402AD63C (KiResetClockIntervalOneShot.c)
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405B77E8 (KiCancelClockTimerKTimerDeadlines.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiShouldRearmClockTimer @ 0x14043516C (KiShouldRearmClockTimer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KiCancelClockTimer(__int64 a1, signed int a2, char a3)
{
  char result; // al
  LARGE_INTEGER InterruptTimePrecise; // rbx
  char v7; // [rsp+30h] [rbp-9h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp+7h] BYREF
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  char *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  result = 2 * a2;
  *(_BYTE *)(a1 + 16LL * a2 + 38308) &= ~1u;
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v12 = 0;
    v15 = 0;
    p_PerformanceCounter = &PerformanceCounter;
    PerformanceCounter.LowPart = a2;
    v13 = &v7;
    v11 = 4;
    v7 = a3;
    v14 = 1;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07080,
               (unsigned __int8 *)word_14004808A,
               0LL,
               0LL,
               4u,
               &v9);
  }
  if ( a3 )
  {
    if ( KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    else
      InterruptTimePrecise.QuadPart = 0LL;
    result = KiShouldRearmClockTimer(a1, InterruptTimePrecise, 1);
    if ( result )
    {
      *(_DWORD *)(a1 + 38288) = 2;
      return KiSetNextClockTickDueTime(InterruptTimePrecise, 1u);
    }
  }
  return result;
}
