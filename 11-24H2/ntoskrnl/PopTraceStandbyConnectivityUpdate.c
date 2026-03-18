/*
 * XREFs of PopTraceStandbyConnectivityUpdate @ 0x140ABF96C
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1404B4490 (PopNetEvaluationWorkerCallback.c)
 *     PopNetInitialize @ 0x140C31EF4 (PopNetInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PopTraceStandbyConnectivityUpdate(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+34h] [rbp-35h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  int *v8; // [rsp+50h] [rbp-19h]
  int v9; // [rsp+58h] [rbp-11h]
  int v10; // [rsp+5Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-9h] BYREF
  int *v12; // [rsp+80h] [rbp+17h]
  int v13; // [rsp+88h] [rbp+1Fh]
  int v14; // [rsp+8Ch] [rbp+23h]
  int *v15; // [rsp+90h] [rbp+27h]
  int v16; // [rsp+98h] [rbp+2Fh]
  int v17; // [rsp+9Ch] [rbp+33h]
  __int64 *v18; // [rsp+A0h] [rbp+37h]
  int v19; // [rsp+A8h] [rbp+3Fh]
  int v20; // [rsp+ACh] [rbp+43h]
  int v21; // [rsp+D0h] [rbp+67h] BYREF
  int v22; // [rsp+D8h] [rbp+6Fh] BYREF

  v22 = a2;
  v21 = a1;
  if ( (unsigned int)dword_140E076F0 > 5 && tlgKeywordOn((__int64)&dword_140E076F0, 0x400000000000LL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v12 = &v4;
    v15 = &v5;
    v18 = &v6;
    v4 = v3;
    v5 = v2;
    v13 = 4;
    v16 = 4;
    v6 = 0x1000000LL;
    v19 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E076F0, (unsigned __int8 *)byte_140049839, 0LL, 0LL, 5u, &v11);
  }
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_UPDATE) )
    {
      UserData.Reserved = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v21;
      UserData.Size = 4;
      v8 = &v22;
      v9 = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_UPDATE, 0LL, 2u, &UserData);
    }
  }
}
