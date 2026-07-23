/*
 * XREFs of EtwpEventWriteTemplateBackingFile @ 0x1407A77C4
 * Callers:
 *     EtwpRealtimeSaveBuffer @ 0x1409D4F68 (EtwpRealtimeSaveBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x140AA9B94 (EtwpRealtimeRestoreState.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateBackingFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        char a6)
{
  int v7; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  int *v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  int *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  char *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]

  UserData.Ptr = *((_QWORD *)a4 + 1);
  UserData.Size = *a4;
  v9 = &EtwpNull;
  v11 = &v7;
  UserData.Reserved = 0;
  v13 = &a6;
  v7 = -1073741432;
  v10 = 2LL;
  v12 = 4LL;
  v14 = 4LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_BACKING_FILE_FULL, 0LL, 4u, &UserData);
}
