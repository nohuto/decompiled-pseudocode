/*
 * XREFs of CmpTraceHiveFlushWroteLogFile @ 0x1409699D4
 * Callers:
 *     HvWriteLogFile @ 0x140968C2C (HvWriteLogFile.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveFlushWroteLogFile(__int64 a1, int a2)
{
  BOOLEAN result; // al
  int v3; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-28h] BYREF
  int *v6; // [rsp+58h] [rbp-18h]
  int v7; // [rsp+60h] [rbp-10h]
  int v8; // [rsp+64h] [rbp-Ch]
  int v9; // [rsp+88h] [rbp+18h] BYREF

  v9 = a2;
  v3 = 1;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_WROTE_LOG_FILE;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Reserved = 0;
    v8 = 0;
    UserData.Ptr = (ULONGLONG)&v3;
    UserData.Size = 4;
    v6 = &v9;
    v7 = 4;
    return EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 2u, &UserData);
  }
  return result;
}
