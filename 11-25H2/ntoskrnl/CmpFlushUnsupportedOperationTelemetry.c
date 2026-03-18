/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x140A4456C
 * Callers:
 *     CmpFlushTraceLoggingProvider @ 0x1407C6A84 (CmpFlushTraceLoggingProvider.c)
 *     CmpDoReconcileNextHive @ 0x140A44330 (CmpDoReconcileNextHive.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x1407D1BBC (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

void CmpFlushUnsupportedOperationTelemetry()
{
  int v0; // ebx
  volatile __int32 *v1; // rdi

  v0 = 0;
  v1 = CmpUnsupportedOperationHits;
  do
  {
    if ( _InterlockedExchange(v1, 0) )
      CmpSendUnsupportedOperationTelemetryEvent();
    ++v0;
    ++v1;
  }
  while ( v0 < 27 );
}
