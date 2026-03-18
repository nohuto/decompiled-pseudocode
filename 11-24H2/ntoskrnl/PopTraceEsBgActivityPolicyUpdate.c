/*
 * XREFs of PopTraceEsBgActivityPolicyUpdate @ 0x1407585B8
 * Callers:
 *     PopEsInStandbyEvaluate @ 0x140A3B940 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PopTraceEsBgActivityPolicyUpdate(int a1)
{
  int v1; // r8d
  int v2; // r9d
  int v3; // [rsp+30h] [rbp-29h] BYREF
  int v4; // [rsp+34h] [rbp-25h] BYREF
  int v5; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  int *v7; // [rsp+50h] [rbp-9h]
  int v8; // [rsp+58h] [rbp-1h]
  int v9; // [rsp+5Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp+7h] BYREF
  int *v11; // [rsp+80h] [rbp+27h]
  int v12; // [rsp+88h] [rbp+2Fh]
  int v13; // [rsp+8Ch] [rbp+33h]
  int *v14; // [rsp+90h] [rbp+37h]
  int v15; // [rsp+98h] [rbp+3Fh]
  int v16; // [rsp+9Ch] [rbp+43h]
  int v17; // [rsp+C0h] [rbp+67h] BYREF

  v17 = a1;
  v5 = PopEsBgActivityPolicy;
  if ( (unsigned int)dword_140E076F0 > 5 && tlgKeywordOn((__int64)&dword_140E076F0, 0x400000000000LL) )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v3;
    v3 = v1;
    v14 = &v4;
    v4 = v2;
    v12 = 4;
    v15 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E076F0,
      (unsigned __int8 *)&dword_140049884,
      0LL,
      0LL,
      4u,
      &v10);
  }
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_BACKGROUND_ACTIVITY_POLICY_UPDATE) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&v17;
      UserData.Size = 4;
      v7 = &v5;
      v8 = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_BACKGROUND_ACTIVITY_POLICY_UPDATE, 0LL, 2u, &UserData);
    }
  }
}
