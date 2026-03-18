/*
 * XREFs of TakeTelemetryAssertsLock @ 0x14009F080
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14005CF28 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
