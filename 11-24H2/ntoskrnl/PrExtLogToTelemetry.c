/*
 * XREFs of PrExtLogToTelemetry @ 0x140662B34
 * Callers:
 *     HalpProcInitSystem @ 0x140B4F200 (HalpProcInitSystem.c)
 * Callees:
 *     PrpWriteTraceLoggingEvent @ 0x1406634D4 (PrpWriteTraceLoggingEvent.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 PrExtLogToTelemetry()
{
  unsigned int v0; // ebx
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp-18h]
  int v4; // [rsp+48h] [rbp-10h]

  v0 = -1073741637;
  if ( IsTraceloggingEnabled
    || (IsTraceloggingEnabled = (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E09860, 0LL, 0LL) >= 0) != 0 )
  {
    v4 = dword_140EF7B08;
    v2[0] = MCUpdateRegistryData;
    v3 = qword_140EF7B00;
    v2[1] = xmmword_140EF7AF0;
    PrpWriteTraceLoggingEvent(v2);
    return 0;
  }
  return v0;
}
