/*
 * XREFs of PpmEventThermalCapChange @ 0x140418EB4
 * Callers:
 *     PpmRegisterPerfCap @ 0x1404188A0 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmFireWmiEvent @ 0x1405D5478 (PpmFireWmiEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventThermalCapChange(__int64 a1, int a2)
{
  __int64 v3; // rax
  const EVENT_DESCRIPTOR *v4; // rbx
  char v5; // al
  int *v6; // rax
  int v8; // [rsp+40h] [rbp-9h] BYREF
  int v9; // [rsp+48h] [rbp-1h] BYREF
  __int64 v10; // [rsp+50h] [rbp+7h] BYREF
  __int64 v11; // [rsp+58h] [rbp+Fh]
  __int64 *v12; // [rsp+60h] [rbp+17h] BYREF
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+27h] BYREF
  int *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  v8 = 0;
  LODWORD(v11) = 0;
  v10 = 0LL;
  v9 = a2;
  if ( *(_BYTE *)(a1 + 68) )
  {
    v11 = *(_QWORD *)(a1 - 35048);
    LODWORD(v10) = a2;
    if ( (xmmword_140FC6B50 & 0x8000) != 0 )
    {
      v14 = 0;
      v12 = &v10;
      v13 = 16;
      EtwTraceKernelEvent((int)&v12, 1, 0x80008000, 4662, 5249026);
    }
    if ( WmiThermalEventEnabled )
      PpmFireWmiEvent(a1 - 136, &PPM_THERMALCONSTRAINT_GUID, 16LL, &v10);
  }
  if ( *(_BYTE *)(a1 + 68) )
  {
    LOWORD(v8) = *(unsigned __int8 *)(a1 - 35040);
    v5 = *(_BYTE *)(a1 - 35039);
    v4 = (const EVENT_DESCRIPTOR *)PPM_ETW_THERMAL_CAP_CHANGE;
    BYTE2(v8) = v5;
    UserData.Size = 3;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = &PPM_ETW_THERMAL_CAP_CHANGE_HV;
    v8 = *(_DWORD *)(v3 + 20);
    UserData.Size = 4;
  }
  UserData.Reserved = 0;
  v6 = &v8;
  UserData.Ptr = (ULONGLONG)&v8;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v6) = EtwEventEnabled(PpmEtwHandle, v4);
    if ( (_BYTE)v6 )
    {
      v18 = 0;
      v16 = &v9;
      v17 = 4;
      LOBYTE(v6) = EtwWriteEx(PpmEtwHandle, v4, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v6;
}
