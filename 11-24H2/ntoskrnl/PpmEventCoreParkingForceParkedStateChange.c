/*
 * XREFs of PpmEventCoreParkingForceParkedStateChange @ 0x1405D647C
 * Callers:
 *     PpmParkReportForceParkChange @ 0x1405D7BEC (PpmParkReportForceParkChange.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventCoreParkingForceParkedStateChange(__int64 a1, char a2)
{
  __int16 v4; // [rsp+40h] [rbp-9h] BYREF
  BOOL v5; // [rsp+44h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  __int16 *v7; // [rsp+60h] [rbp+17h]
  int v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+6Ch] [rbp+23h]
  __int64 v10; // [rsp+70h] [rbp+27h]
  int v11; // [rsp+78h] [rbp+2Fh]
  int v12; // [rsp+7Ch] [rbp+33h]
  BOOL *v13; // [rsp+80h] [rbp+37h]
  int v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+8Ch] [rbp+43h]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_FORCE_PARK_STATE_CHANGE) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v4 = *(unsigned __int8 *)(a1 + 208);
      v7 = &v4;
      v10 = a1 + 209;
      v14 = 4;
      UserData.Size = 8;
      v8 = 2;
      v15 = 0;
      v5 = a2 != 0;
      v11 = 1;
      v13 = &v5;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_FORCE_PARK_STATE_CHANGE, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
}
