/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x1407C6A84
 * Callers:
 *     CmShutdownSystem2 @ 0x14065C2F0 (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x140693C6C (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140A4456C (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140E09E08);
}
