/*
 * XREFs of PpmEventTraceDripsAccountingSnapshot @ 0x140AA29E8
 * Callers:
 *     PpmSnapDripsAccountingSnapshot @ 0x1402B6090 (PpmSnapDripsAccountingSnapshot.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceDripsAccountingSnapshot(__int64 a1, __int64 a2)
{
  char v3; // [rsp+30h] [rbp-9h] BYREF
  int v4; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  int *v6; // [rsp+50h] [rbp+17h]
  int v7; // [rsp+58h] [rbp+1Fh]
  int v8; // [rsp+5Ch] [rbp+23h]
  __int64 v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  __int64 *v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v4 = 26;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DRIPS_ACCOUNTING_SNAPSHOT) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v3 = PopWnfCsEnterScenarioId;
      UserData.Ptr = (ULONGLONG)&v3;
      v6 = &v4;
      v10 = 8 * v4;
      v12 = &PopWnfCsEnterScenarioId;
      UserData.Size = 1;
      v7 = 4;
      v9 = a2;
      v13 = 8;
      EtwWrite(PpmEtwHandle, &PPM_ETW_DRIPS_ACCOUNTING_SNAPSHOT, 0LL, 4u, &UserData);
    }
  }
}
