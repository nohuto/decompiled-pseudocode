/*
 * XREFs of EtwTraceMessageVa @ 0x1800D24C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180049020 (RtlNtStatusToDosError.c)
 *     EtwpTraceUmMessage @ 0x1800D25AC (EtwpTraceUmMessage.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceMessageVa(HANDLE TraceHandle, int a2, _DWORD *a3, __int16 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  int v8; // ecx
  _QWORD *v9; // rax
  NTSTATUS v10; // eax
  int Fields; // [rsp+30h] [rbp-38h] BYREF
  __int16 v12; // [rsp+34h] [rbp-34h]
  _BYTE v13[18]; // [rsp+36h] [rbp-32h] BYREF
  int v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+4Ch] [rbp-1Ch]
  _QWORD *v16; // [rsp+50h] [rbp-18h]

  v5 = 0;
  Fields = 0;
  memset(v13, 0, sizeof(v13));
  if ( (BYTE3(TraceHandle) & 1) != 0 )
    return EtwpTraceUmMessage((_DWORD)TraceHandle, a2, (_DWORD)a3, a4, (__int64)a5);
  v8 = 0;
  if ( *a5 )
  {
    v9 = a5;
    do
    {
      ++v8;
      v9 += 2;
    }
    while ( *v9 );
  }
  v12 = a4;
  v14 = a2;
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)&v13[2] = *a3;
  }
  else if ( (a2 & 2) != 0 )
  {
    *(_OWORD *)&v13[2] = *(_OWORD *)a3;
  }
  v16 = a5;
  v15 = 16 * v8 + 8;
  v10 = NtTraceEvent(TraceHandle, 0x200u, 0x28u, &Fields);
  if ( v10 )
    return RtlNtStatusToDosError(v10);
  return v5;
}
