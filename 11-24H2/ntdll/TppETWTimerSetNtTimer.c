/*
 * XREFs of TppETWTimerSetNtTimer @ 0x18006C8D8
 * Callers:
 *     TppTimerQueueExpiration @ 0x18006B9F0 (TppTimerQueueExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x18006C700 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall TppETWTimerSetNtTimer(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rcx
  _OWORD v5[3]; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+50h] [rbp-18h]

  v6 = a3;
  memset(v5, 0, 32);
  WORD3(v5[0]) = 7212;
  v5[2] = __PAIR128__(a1, a2);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v3 = 2147353478LL;
  return NtTraceEvent(*(unsigned __int8 *)v3, 1026LL, 20LL, v5);
}
