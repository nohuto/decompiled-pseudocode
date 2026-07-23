/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x1407D6758
 * Callers:
 *     CmShutdownSystem2 @ 0x1406664E4 (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1406A00BC (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140A9BB40 (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140E09F58);
}
