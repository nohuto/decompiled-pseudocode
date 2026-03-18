/*
 * XREFs of PopDiagTraceAcDcStateChange @ 0x140AC7224
 * Callers:
 *     PopUpdateAcDcState @ 0x1404AEC74 (PopUpdateAcDcState.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SshSessionManagerTraceAcDcStateChange @ 0x140ACB560 (SshSessionManagerTraceAcDcStateChange.c)
 */

__int64 __fastcall PopDiagTraceAcDcStateChange(int a1, int a2, int a3)
{
  int v4; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+38h] [rbp-48h] BYREF
  BOOL v6; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  int *v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]

  v5 = a2;
  v4 = a3;
  v6 = a1 == 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_CHANGE) )
  {
    UserData.Reserved = 0;
    v10 = 0;
    v13 = 0;
    UserData.Ptr = (ULONGLONG)&v6;
    UserData.Size = 4;
    v8 = &v5;
    v11 = &v4;
    v9 = 4;
    v12 = 4;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_CHANGE, 0LL, 3u, &UserData);
  }
  return SshSessionManagerTraceAcDcStateChange(v6, v5, v4, PopLidOpened != 0, PopConsoleExternalDisplayConnected != 0);
}
