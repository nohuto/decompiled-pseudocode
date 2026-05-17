/*
 * XREFs of EtwEventWriteNoRegistration @ 0x180066310
 * Callers:
 *     SignalStartWerSvc @ 0x18000182C (SignalStartWerSvc.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x180066090 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180066194 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpSearchPath @ 0x1800754F0 (LdrpSearchPath.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x180111934 (LdrpCheckComponentOnDemandEtwEvent.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwEventWriteNoRegistration(__int64 a1, __int128 *a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  _GUID ActivityId; // xmm0
  NTSTATUS v11; // eax
  _BYTE v13[4]; // [rsp+20h] [rbp-A8h] BYREF
  int v14; // [rsp+24h] [rbp-A4h]
  __int128 v15; // [rsp+48h] [rbp-80h]
  _GUID v16; // [rsp+60h] [rbp-68h]
  char v17; // [rsp+70h] [rbp-58h]
  __int16 v18; // [rsp+72h] [rbp-56h]
  int v19; // [rsp+74h] [rbp-54h]
  __int64 v20; // [rsp+78h] [rbp-50h]
  int v21; // [rsp+90h] [rbp-38h]

  memset_thunk_772440563353939046(v13, 0, 0x78uLL);
  v8 = 0;
  if ( a2 && a1 )
  {
    v9 = *a2;
    v14 = 0;
    v19 = a3;
    v15 = v9;
    v20 = a4;
    ActivityId = NtCurrentTeb()->ActivityId;
    v17 = 0;
    v18 = 0;
    v16 = ActivityId;
    v21 = 0;
    v11 = NtTraceEvent(a1, 1792LL, 120LL, v13);
    if ( v11 )
      return RtlNtStatusToDosError(v11);
  }
  else
  {
    return 87;
  }
  return v8;
}
