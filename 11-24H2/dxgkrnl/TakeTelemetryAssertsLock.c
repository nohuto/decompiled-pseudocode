/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1400A13E0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14005C988 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 TakeTelemetryAssertsLock()
{
  if ( KeGetCurrentIrql() > 1u )
    return 0xFFFFFFFFLL;
  ExAcquireFastMutex(g_AssertFastMutex);
  return 0LL;
}
