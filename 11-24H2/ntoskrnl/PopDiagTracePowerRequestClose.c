/*
 * XREFs of PopDiagTracePowerRequestClose @ 0x1409A1200
 * Callers:
 *     PopPowerRequestDelete @ 0x1409A1090 (PopPowerRequestDelete.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerRequestClose(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  __int64 v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CLOSE_POWER_REQUEST) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 8;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CLOSE_POWER_REQUEST, 0LL, 1u, &UserData);
    }
  }
}
