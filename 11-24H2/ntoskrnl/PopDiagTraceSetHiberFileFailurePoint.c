/*
 * XREFs of PopDiagTraceSetHiberFileFailurePoint @ 0x140757914
 * Callers:
 *     PopSetHiberFileType @ 0x1406F9BCC (PopSetHiberFileType.c)
 *     PopSetHiberFileSize @ 0x1406FA3E4 (PopSetHiberFileSize.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSetHiberFileFailurePoint(int a1, int a2)
{
  int v3; // [rsp+30h] [rbp-49h] BYREF
  int v4; // [rsp+34h] [rbp-45h] BYREF
  int v5; // [rsp+38h] [rbp-41h] BYREF
  __int64 v6; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-31h] BYREF
  int *v8; // [rsp+58h] [rbp-21h]
  int v9; // [rsp+60h] [rbp-19h]
  int v10; // [rsp+64h] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+70h] [rbp-9h] BYREF
  int *v12; // [rsp+90h] [rbp+17h]
  int v13; // [rsp+98h] [rbp+1Fh]
  int v14; // [rsp+9Ch] [rbp+23h]
  int *v15; // [rsp+A0h] [rbp+27h]
  int v16; // [rsp+A8h] [rbp+2Fh]
  int v17; // [rsp+ACh] [rbp+33h]
  __int64 *v18; // [rsp+B0h] [rbp+37h]
  int v19; // [rsp+B8h] [rbp+3Fh]
  int v20; // [rsp+BCh] [rbp+43h]
  int v21; // [rsp+E0h] [rbp+67h] BYREF

  v21 = a1;
  v3 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SET_HIBER_FILE_FAILURE) )
  {
    UserData.Reserved = 0;
    v10 = 0;
    UserData.Ptr = (ULONGLONG)&v21;
    v3 = a2;
    v8 = &v3;
    UserData.Size = 4;
    v9 = 4;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SET_HIBER_FILE_FAILURE, 0LL, 2u, &UserData);
  }
  if ( (unsigned int)dword_140E076F0 > 5 && tlgKeywordOn((__int64)&dword_140E076F0, 0x400000000000LL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v4 = v21;
    v12 = &v4;
    v15 = &v5;
    v18 = &v6;
    v13 = 4;
    v5 = a2;
    v16 = 4;
    v6 = 0x1000000LL;
    v19 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E076F0, (unsigned __int8 *)&word_1400497EE, 0LL, 0LL, 5u, &v11);
  }
}
