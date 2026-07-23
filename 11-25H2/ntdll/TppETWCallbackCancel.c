/*
 * XREFs of TppETWCallbackCancel @ 0x1801144BC
 * Callers:
 *     TpWaitForTimer @ 0x18003FF90 (TpWaitForTimer.c)
 *     TppWorkWait @ 0x180041190 (TppWorkWait.c)
 *     TppWorkCancelPendingCallbacks @ 0x180043B40 (TppWorkCancelPendingCallbacks.c)
 *     TpWaitForIoCompletion @ 0x1800FB080 (TpWaitForIoCompletion.c)
 *     TppIopCancelPendingCallbacks @ 0x18015D9C0 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall TppETWCallbackCancel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v10; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v13; // [rsp+26h] [rbp-82h]
  __int64 v14; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-60h]
  __int64 v16; // [rsp+50h] [rbp-58h]
  __int64 v17; // [rsp+58h] [rbp-50h]
  __int64 v18; // [rsp+60h] [rbp-48h]
  int v19; // [rsp+68h] [rbp-40h]

  memset_thunk_772440563353939046(Fields, 0, 0x50uLL);
  v14 = a1;
  v13 = 7204;
  v19 = a6;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v18 = a5;
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v10 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v10, 0x403u, 0x2Cu, Fields);
}
