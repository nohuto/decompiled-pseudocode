/*
 * XREFs of TppETWTimerCancelled @ 0x1801134B0
 * Callers:
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     TppCancelTimer @ 0x18003FCF0 (TppCancelTimer.c)
 *     TppWaitCompletion @ 0x180041270 (TppWaitCompletion.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
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
