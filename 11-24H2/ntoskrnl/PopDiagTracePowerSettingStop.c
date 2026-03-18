/*
 * XREFs of PopDiagTracePowerSettingStop @ 0x1409BDDCC
 * Callers:
 *     PopCallPowerSettingCallback @ 0x1409BDC9C (PopCallPowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerSettingStop(__int64 a1, __int64 a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF

  v7 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_STOP) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 8;
      v4 = a2;
      v5 = 16;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_STOP, 0LL, 2u, &UserData);
    }
  }
}
