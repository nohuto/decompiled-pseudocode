/*
 * XREFs of EtwWriteUMSecurityEvent @ 0x1800F44A0
 * Callers:
 *     EvtIntReportEventWorker @ 0x1800F4050 (EvtIntReportEventWorker.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwWriteUMSecurityEvent(__int128 *a1, __int16 a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  _GUID ActivityId; // xmm0
  NTSTATUS v11; // eax
  _BYTE v13[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int16 v14; // [rsp+24h] [rbp-A4h]
  __int16 v15; // [rsp+26h] [rbp-A2h]
  __int128 v16; // [rsp+48h] [rbp-80h]
  _GUID v17; // [rsp+60h] [rbp-68h]
  char v18; // [rsp+70h] [rbp-58h]
  __int16 v19; // [rsp+72h] [rbp-56h]
  int v20; // [rsp+74h] [rbp-54h]
  __int64 v21; // [rsp+78h] [rbp-50h]
  int v22; // [rsp+90h] [rbp-38h]

  memset_thunk_772440563353939046(v13, 0, 0x78uLL);
  v8 = 0;
  if ( !a1 )
    return 87LL;
  v9 = *a1;
  v14 = 0;
  v15 = a2;
  v16 = v9;
  v20 = a3;
  v21 = a4;
  ActivityId = NtCurrentTeb()->ActivityId;
  v18 = 0;
  v19 = 0;
  v17 = ActivityId;
  v22 = 0;
  v11 = NtTraceEvent(0LL, 1280LL, 120LL, v13);
  if ( v11 )
    return RtlNtStatusToDosError(v11);
  return v8;
}
