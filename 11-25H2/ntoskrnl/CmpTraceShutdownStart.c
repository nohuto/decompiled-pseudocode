/*
 * XREFs of CmpTraceShutdownStart @ 0x1407C72E8
 * Callers:
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

BOOLEAN CmpTraceShutdownStart()
{
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-28h] BYREF

  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_START;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
    return EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 0, 0LL);
  return result;
}
