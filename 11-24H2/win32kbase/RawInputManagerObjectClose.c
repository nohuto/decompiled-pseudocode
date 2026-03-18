/*
 * XREFs of RawInputManagerObjectClose @ 0x1401E34EC
 * Callers:
 *     RIMObjectManagerCallout @ 0x140116F54 (RIMObjectManagerCallout.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectClose(__int64 a1)
{
  if ( ObGetObjectType(*(_QWORD *)(a1 + 24)) != ExRawInputManagerObjectType )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 189);
  return 0LL;
}
