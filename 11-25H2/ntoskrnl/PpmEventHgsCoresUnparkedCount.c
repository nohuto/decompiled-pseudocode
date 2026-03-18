/*
 * XREFs of PpmEventHgsCoresUnparkedCount @ 0x140409FC8
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x140409510 (PpmParkCalculateUnparkCount.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PpmEventHgsCoresUnparkedCount(__int64 a1)
{
  unsigned int v2; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 v4; // [rsp+60h] [rbp-9h]
  int v5; // [rsp+68h] [rbp-1h]
  int v6; // [rsp+6Ch] [rbp+3h]
  __int64 v7; // [rsp+70h] [rbp+7h]
  int v8; // [rsp+78h] [rbp+Fh]
  int v9; // [rsp+7Ch] [rbp+13h]
  __int64 v10; // [rsp+80h] [rbp+17h]
  int v11; // [rsp+88h] [rbp+1Fh]
  int v12; // [rsp+8Ch] [rbp+23h]
  __int64 v13; // [rsp+90h] [rbp+27h]
  int v14; // [rsp+98h] [rbp+2Fh]
  int v15; // [rsp+9Ch] [rbp+33h]
  unsigned int *v16; // [rsp+A0h] [rbp+37h]
  int v17; // [rsp+A8h] [rbp+3Fh]
  int v18; // [rsp+ACh] [rbp+43h]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_PARKING_SELECTION_COUNT) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v8 = 1;
      v2 = ((unsigned int)PpmHeteroHgsContainmentState >> 3) & 1;
      UserData.Ptr = a1 + 4;
      v4 = a1 + 16;
      v7 = a1 + 186;
      v10 = a1 + 184;
      v13 = a1 + 185;
      v16 = &v2;
      v11 = 1;
      v14 = 1;
      UserData.Size = 2;
      v5 = 8;
      v17 = 4;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_HETERO_PARKING_SELECTION_COUNT, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
}
