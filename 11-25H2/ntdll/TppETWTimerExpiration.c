/*
 * XREFs of TppETWTimerExpiration @ 0x180113E90
 * Callers:
 *     TppSingleTimerExpiration @ 0x18003F720 (TppSingleTimerExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall TppETWTimerExpiration(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v7; // [rsp+26h] [rbp-52h]
  __int64 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  memset_thunk_772440563353939046(Fields, 0, 0x40uLL);
  v9 = a1;
  v7 = 7216;
  v8 = *(_QWORD *)(a2 + 328);
  v11 = *(_DWORD *)(a2 + 348);
  v12 = *(_DWORD *)(a2 + 344);
  v10 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v4, 0x402u, 0x20u, Fields);
}
