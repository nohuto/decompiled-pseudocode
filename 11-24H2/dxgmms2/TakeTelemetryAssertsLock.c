/*
 * XREFs of TakeTelemetryAssertsLock @ 0x140055B68
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140055668 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
