/*
 * XREFs of CmpTraceHiveRestoreStop @ 0x1407D67E4
 * Callers:
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveRestoreStop(int a1)
{
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+70h] [rbp+8h] BYREF

  v4 = a1;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_RESTORE_STOP;
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
