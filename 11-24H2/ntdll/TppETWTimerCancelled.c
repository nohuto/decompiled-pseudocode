/*
 * XREFs of TppETWTimerCancelled @ 0x180087180
 * Callers:
 *     TppWaitCompletion @ 0x18004C800 (TppWaitCompletion.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     TppCancelTimer @ 0x180088C90 (TppCancelTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall TppETWTimerCancelled(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _OWORD Fields[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+48h] [rbp-20h]

  v5 = a1;
  memset(Fields, 0, sizeof(Fields));
  WORD3(Fields[0]) = 7211;
  v6 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v2 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 0x10u, Fields);
}
