/*
 * XREFs of AcpiDiagTraceFanRundown @ 0x14002CFB4
 * Callers:
 *     AcpiDiagTraceControlCallback @ 0x140056B30 (AcpiDiagTraceControlCallback.c)
 * Callees:
 *     AcpiDiagTraceFanEvent @ 0x14002D078 (AcpiDiagTraceFanEvent.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

__int64 __fastcall AcpiDiagTraceFanRundown(__int64 a1)
{
  bool v1; // zf
  BOOL v2; // eax
  __int64 v4; // [rsp+20h] [rbp-29h] BYREF
  int v5; // [rsp+28h] [rbp-21h] BYREF
  int v6; // [rsp+2Ch] [rbp-1Dh] BYREF
  _BYTE v7[32]; // [rsp+30h] [rbp-19h] BYREF
  char *v8; // [rsp+50h] [rbp+7h]
  __int64 v9; // [rsp+58h] [rbp+Fh]
  __int64 *v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  int *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  int *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]

  v5 = *(_DWORD *)(a1 + 296);
  v1 = *(_QWORD *)(a1 + 248) == 0LL;
  v6 = *(_DWORD *)(a1 + 304);
  v2 = !v1;
  v9 = 4LL;
  v1 = *(_DWORD *)(a1 + 384) == 1;
  HIDWORD(v4) = v2;
  LOBYTE(v2) = v1;
  v11 = 2LL;
  LOWORD(v4) = v2;
  v13 = 4LL;
  v8 = (char *)&v4 + 4;
  v10 = &v4;
  v12 = &v5;
  v14 = &v6;
  v15 = 4LL;
  return AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_RUNDOWN, 6LL, v7, v4);
}
