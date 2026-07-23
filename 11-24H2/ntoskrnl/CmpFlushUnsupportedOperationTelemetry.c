/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x140A9BB40
 * Callers:
 *     CmpFlushTraceLoggingProvider @ 0x1407D6758 (CmpFlushTraceLoggingProvider.c)
 *     CmpDoReconcileNextHive @ 0x140963B00 (CmpDoReconcileNextHive.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x1407E19EC (CmpSendUnsupportedOperationTelemetryEvent.c)
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
