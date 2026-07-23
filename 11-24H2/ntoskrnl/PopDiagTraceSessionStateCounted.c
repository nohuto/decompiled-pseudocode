/*
 * XREFs of PopDiagTraceSessionStateCounted @ 0x140A86CFC
 * Callers:
 *     PopEvaluateGlobalUserStatus @ 0x1409A35E8 (PopEvaluateGlobalUserStatus.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceSessionStateCounted(__int64 a1, __int64 a2, int a3)
{
  BOOLEAN result; // al
  int v4; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v7; // [rsp+50h] [rbp-30h]
  int v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+5Ch] [rbp-24h]
  int *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]
  int v13; // [rsp+A0h] [rbp+20h] BYREF

  v13 = a3;
  v4 = -1;
  result = PopGlobalUserPresenceStateTransitions;
  v5 = PopGlobalUserPresenceStateTransitions;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_ADPM_GLOBAL_INPUT_STATE);
    if ( result )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 4;
      v7 = &v13;
      v10 = &v5;
      v8 = 4;
      v11 = 4;
      return EtwWrite(PopDiagHandle, &POP_ETW_ADPM_GLOBAL_INPUT_STATE, 0LL, 3u, &UserData);
    }
  }
  return result;
}
