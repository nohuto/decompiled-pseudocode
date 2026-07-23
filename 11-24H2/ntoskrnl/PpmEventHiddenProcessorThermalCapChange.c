/*
 * XREFs of PpmEventHiddenProcessorThermalCapChange @ 0x1405D6A4C
 * Callers:
 *     PpmRegisterPerfCap @ 0x1404188A0 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventHiddenProcessorThermalCapChange(__int64 a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  __int16 v5; // ax
  __int16 v7; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int64 v9; // [rsp+68h] [rbp+17h]
  int v10; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+74h] [rbp+23h]
  int *v12; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+33h]
  int *v15; // [rsp+88h] [rbp+37h]
  int v16; // [rsp+90h] [rbp+3Fh]
  int v17; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v19; // [rsp+C0h] [rbp+6Fh] BYREF
  int v20; // [rsp+C8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v20 = a3;
  v19 = a2;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HIDDEN_PROCESSOR_THERMAL_CAP_CHANGE);
    if ( (_BYTE)v3 )
    {
      v5 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v7 = v5;
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = a1 + 209;
      v12 = &v19;
      v15 = &v20;
      v13 = 4;
      v16 = 4;
      UserData.Size = 2;
      v10 = 1;
      LOBYTE(v3) = EtwWriteEx(
                     PpmEtwHandle,
                     &PPM_ETW_HIDDEN_PROCESSOR_THERMAL_CAP_CHANGE,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     4u,
                     &UserData);
    }
  }
  return (char)v3;
}
