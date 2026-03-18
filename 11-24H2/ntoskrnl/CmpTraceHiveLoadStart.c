/*
 * XREFs of CmpTraceHiveLoadStart @ 0x14092DAD8
 * Callers:
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveLoadStart(unsigned __int16 *a1, int a2)
{
  BOOLEAN result; // al
  __int16 v4; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v7; // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-20h]
  int *v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+98h] [rbp+18h] BYREF

  v11 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_LOAD_START;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Ptr = *((_QWORD *)a1 + 1);
    UserData.Size = *a1;
    v7 = &v4;
    v9 = &v11;
    v4 = 0;
    UserData.Reserved = 0;
    v8 = 2LL;
    v10 = 4LL;
    return EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 3u, &UserData);
  }
  return result;
}
