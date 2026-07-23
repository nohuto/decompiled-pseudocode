/*
 * XREFs of EtwpEventWriteTemplateSessionFromCapturedData @ 0x1407A7B58
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateSessionFromCapturedData(
        __int64 a1,
        __int64 a2,
        ULONGLONG a3,
        int a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  int *v8; // [rsp+40h] [rbp-19h]
  __int64 v9; // [rsp+48h] [rbp-11h]
  __int64 v10; // [rsp+50h] [rbp-9h]
  int v11; // [rsp+58h] [rbp-1h]
  int v12; // [rsp+5Ch] [rbp+3h]
  int *v13; // [rsp+60h] [rbp+7h]
  __int64 v14; // [rsp+68h] [rbp+Fh]
  __int64 v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  int *v18; // [rsp+80h] [rbp+27h]
  __int64 v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+C8h] [rbp+6Fh] BYREF

  v20 = a4;
  v8 = &v20;
  UserData.Ptr = a3;
  v12 = 0;
  v10 = *((_QWORD *)a5 + 1);
  v11 = *a5;
  v13 = &EtwpNull;
  v17 = 0;
  v15 = *((_QWORD *)a6 + 1);
  v16 = *a6;
  v18 = &EtwpNull;
  *(_QWORD *)&UserData.Size = 16LL;
  v9 = 4LL;
  v14 = 2LL;
  v19 = 2LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_LARGE_MDL_NOT_SUPPORTED, 0LL, 6u, &UserData);
}
