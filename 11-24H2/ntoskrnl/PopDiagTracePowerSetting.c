/*
 * XREFs of PopDiagTracePowerSetting @ 0x140A2D640
 * Callers:
 *     PopTracePowerSettingChange @ 0x140A2D5A0 (PopTracePowerSettingChange.c)
 *     PopRundownPowerSettings @ 0x140A2D5C0 (PopRundownPowerSettings.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerSetting(char a1, ULONGLONG a2, int a3, __int64 a4)
{
  const EVENT_DESCRIPTOR *v4; // rax
  const EVENT_DESCRIPTOR *v5; // rbx
  int v9; // [rsp+38h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *v11; // [rsp+58h] [rbp+17h]
  int v12; // [rsp+60h] [rbp+1Fh]
  int v13; // [rsp+64h] [rbp+23h]
  __int64 v14; // [rsp+68h] [rbp+27h]
  int v15; // [rsp+70h] [rbp+2Fh]
  int v16; // [rsp+74h] [rbp+33h]
  int *v17; // [rsp+78h] [rbp+37h]
  int v18; // [rsp+80h] [rbp+3Fh]
  int v19; // [rsp+84h] [rbp+43h]
  int v20; // [rsp+B8h] [rbp+77h] BYREF

  v20 = a3;
  v4 = &POP_ETW_EVENT_POWER_SETTING_CHANGE;
  v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_SETTING_RUNDOWN;
  if ( !a1 )
    v5 = &POP_ETW_EVENT_POWER_SETTING_CHANGE;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, v5);
    if ( (_BYTE)v4 )
    {
      v9 = 0;
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v11 = &v20;
      v15 = v20;
      v17 = &v9;
      UserData.Ptr = a2;
      UserData.Size = 16;
      v12 = 4;
      v14 = a4;
      v18 = 4;
      LOBYTE(v4) = EtwWrite(PopDiagHandle, v5, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
