/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x1407D61E4
 * Callers:
 *     CmShutdownSystem2 @ 0x140667BF4 (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x14069F00C (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140AA07B0 (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140E09EE8);
}
