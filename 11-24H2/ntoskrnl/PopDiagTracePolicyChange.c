/*
 * XREFs of PopDiagTracePolicyChange @ 0x1406F9A94
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x14075E310 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN PopDiagTracePolicyChange()
{
  BOOLEAN result; // al
  int v1; // [rsp+30h] [rbp-59h] BYREF
  int v2; // [rsp+38h] [rbp-51h] BYREF
  int v3; // [rsp+40h] [rbp-49h] BYREF
  int v4; // [rsp+48h] [rbp-41h] BYREF
  int v5; // [rsp+50h] [rbp-39h] BYREF
  int v6; // [rsp+58h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  int *v8; // [rsp+70h] [rbp-19h]
  int v9; // [rsp+78h] [rbp-11h]
  int v10; // [rsp+7Ch] [rbp-Dh]
  int *v11; // [rsp+80h] [rbp-9h]
  int v12; // [rsp+88h] [rbp-1h]
  int v13; // [rsp+8Ch] [rbp+3h]
  int *v14; // [rsp+90h] [rbp+7h]
  int v15; // [rsp+98h] [rbp+Fh]
  int v16; // [rsp+9Ch] [rbp+13h]
  int *v17; // [rsp+A0h] [rbp+17h]
  int v18; // [rsp+A8h] [rbp+1Fh]
  int v19; // [rsp+ACh] [rbp+23h]
  int *v20; // [rsp+B0h] [rbp+27h]
  int v21; // [rsp+B8h] [rbp+2Fh]
  int v22; // [rsp+BCh] [rbp+33h]

  v6 = 0;
  v5 = PopAdaptiveLockConsoleTimeout;
  v4 = PopInputTimeout;
  v3 = PopInputTimeout;
  result = PopDisplayTimeout;
  v2 = PopDisplayTimeout;
  v1 = PopDisplayTimeout;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_ADPM_POLICY_CHANGE);
    if ( result )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      UserData.Ptr = (ULONGLONG)&v1;
      UserData.Size = 4;
      v8 = &v2;
      v11 = &v3;
      v14 = &v4;
      v17 = &v5;
      v20 = &v6;
      v9 = 4;
      v12 = 4;
      v15 = 4;
      v18 = 4;
      v21 = 4;
      return EtwWrite(PopDiagHandle, &POP_ETW_ADPM_POLICY_CHANGE, 0LL, 6u, &UserData);
    }
  }
  return result;
}
