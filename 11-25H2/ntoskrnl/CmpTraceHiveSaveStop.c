/*
 * XREFs of CmpTraceHiveSaveStop @ 0x1407C7114
 * Callers:
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveSaveStop(int a1)
{
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+70h] [rbp+8h] BYREF

  v4 = a1;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_SAVE_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v4;
    UserData.Size = 4;
    return EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 1u, &UserData);
  }
  return result;
}
