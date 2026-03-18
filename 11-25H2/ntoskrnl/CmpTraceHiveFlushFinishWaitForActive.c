/*
 * XREFs of CmpTraceHiveFlushFinishWaitForActive @ 0x140A83918
 * Callers:
 *     CmpWaitOnHiveWriteQueue @ 0x140A837E0 (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
