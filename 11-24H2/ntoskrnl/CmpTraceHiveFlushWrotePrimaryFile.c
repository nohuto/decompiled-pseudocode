/*
 * XREFs of CmpTraceHiveFlushWrotePrimaryFile @ 0x14096BFC8
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x14096B444 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveFlushWrotePrimaryFile(int a1, int a2)
{
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-30h] BYREF
  int *v5; // [rsp+50h] [rbp-20h]
  int v6; // [rsp+58h] [rbp-18h]
  int v7; // [rsp+5Ch] [rbp-14h]
  int v8; // [rsp+80h] [rbp+10h] BYREF
  int v9; // [rsp+88h] [rbp+18h] BYREF

  v9 = a2;
  v8 = a1;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_WROTE_PRIMARY_FILE;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Reserved = 0;
    v7 = 0;
    UserData.Ptr = (ULONGLONG)&v8;
    UserData.Size = 4;
    v5 = &v9;
    v6 = 4;
    return EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 2u, &UserData);
  }
  return result;
}
