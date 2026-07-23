/*
 * XREFs of KiCancelClockTimer @ 0x1403E9910
 * Callers:
 *     KiResetClockIntervalOneShot @ 0x140274F28 (KiResetClockIntervalOneShot.c)
 *     KeUpdatePendingQosRequest @ 0x1403E9444 (KeUpdatePendingQosRequest.c)
 *     PpmIdleExecuteTransition @ 0x1404E92D8 (PpmIdleExecuteTransition.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405B6394 (KiCancelClockTimerKTimerDeadlines.c)
 * Callees:
 *     KiShouldRearmClockTimer @ 0x140276050 (KiShouldRearmClockTimer.c)
 *     KiSetNextClockTickDueTime @ 0x140277974 (KiSetNextClockTickDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall KiCancelClockTimer(__int64 a1, signed int a2, char a3)
{
  char result; // al
  LARGE_INTEGER InterruptTimePrecise; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // [rsp+30h] [rbp-9h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp-1h] BYREF
  _BYTE v11[32]; // [rsp+40h] [rbp+7h] BYREF
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  char *v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  result = 2 * a2;
  *(_BYTE *)(a1 + 16LL * a2 + 38308) &= ~1u;
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v14 = 0;
    v17 = 0;
    p_PerformanceCounter = &PerformanceCounter;
    PerformanceCounter.LowPart = a2;
    v15 = &v9;
    v13 = 4;
    v9 = a3;
    v16 = 1;
    result = tlgWriteTransfer_EtwWriteTransfer(&dword_140E07080, word_1400477B2, 0LL, 0LL, 4, v11);
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
      LOBYTE(v7) = 1;
      *(_DWORD *)(a1 + 38288) = 2;
      return KiSetNextClockTickDueTime(InterruptTimePrecise, v7, v8);
    }
  }
  return result;
}
