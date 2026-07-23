/*
 * XREFs of EtwpEventWriteTemplateSessionMaxLoggers @ 0x1407A7C24
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateSessionMaxLoggers(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        unsigned __int16 *a3,
        int a4)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  int *v6; // [rsp+40h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-28h]
  int *v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+98h] [rbp+28h] BYREF

  v10 = a4;
  UserData.Ptr = *((_QWORD *)a3 + 1);
  UserData.Size = *a3;
  v6 = &EtwpNull;
  UserData.Reserved = 0;
  v8 = &v10;
  v7 = 2LL;
  v9 = 4LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, a2, 0LL, 3u, &UserData);
}
