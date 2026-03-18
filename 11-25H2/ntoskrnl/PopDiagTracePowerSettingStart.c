/*
 * XREFs of PopDiagTracePowerSettingStart @ 0x140966184
 * Callers:
 *     PopCallPowerSettingCallback @ 0x140965F8C (PopCallPowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerSettingStart(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h]
  int v10; // [rsp+48h] [rbp-38h]
  int v11; // [rsp+4Ch] [rbp-34h]
  int *v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+5Ch] [rbp-24h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF
  __int64 v19; // [rsp+90h] [rbp+10h] BYREF
  int v20; // [rsp+A0h] [rbp+20h] BYREF

  v4 = &retaddr;
  v20 = a3;
  v19 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_START);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = (ULONGLONG)&v19;
      v12 = &v20;
      v16 = v20;
      UserData.Size = 8;
      v9 = a2;
      v10 = 16;
      v13 = 4;
      v15 = a4;
      LOBYTE(v4) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_START, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
