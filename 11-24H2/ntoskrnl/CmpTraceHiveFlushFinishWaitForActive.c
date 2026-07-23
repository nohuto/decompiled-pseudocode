/*
 * XREFs of CmpTraceHiveFlushFinishWaitForActive @ 0x140A84904
 * Callers:
 *     CmpWaitOnHiveWriteQueue @ 0x140A847CC (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN CmpTraceHiveFlushFinishWaitForActive()
{
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-28h] BYREF

  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_FINISH_WAIT_FOR_ACTIVE;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
    return EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 0, 0LL);
  return result;
}
