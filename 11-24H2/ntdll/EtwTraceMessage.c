/*
 * XREFs of EtwTraceMessage @ 0x1800D23D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180049020 (RtlNtStatusToDosError.c)
 *     EtwpTraceUmMessage @ 0x1800D25AC (EtwpTraceUmMessage.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

ULONG __fastcall EtwTraceMessage(HANDLE TraceHandle, int a2, _DWORD *a3, __int16 a4, __int64 a5)
{
  int v7; // ecx
  __int64 *v8; // rax
  NTSTATUS v9; // eax
  int Fields; // [rsp+38h] [rbp-40h] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-3Ch]
  _BYTE v12[18]; // [rsp+3Eh] [rbp-3Ah] BYREF
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+54h] [rbp-24h]
  __int64 *v15; // [rsp+58h] [rbp-20h]

  Fields = 0;
  memset(v12, 0, sizeof(v12));
  if ( (BYTE3(TraceHandle) & 1) != 0 )
    return EtwpTraceUmMessage((_DWORD)TraceHandle, a2, (_DWORD)a3, a4, (__int64)&a5);
  v7 = 0;
  v8 = &a5;
  if ( a5 )
  {
    do
    {
      ++v7;
      v8 += 2;
    }
    while ( *v8 );
  }
  v11 = a4;
  v13 = a2;
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)&v12[2] = *a3;
  }
  else if ( (a2 & 2) != 0 )
  {
    *(_OWORD *)&v12[2] = *(_OWORD *)a3;
  }
  v15 = &a5;
  v14 = 16 * v7 + 8;
  v9 = NtTraceEvent(TraceHandle, 0x200u, 0x28u, &Fields);
  if ( v9 )
    return RtlNtStatusToDosError(v9);
  else
    return 0;
}
