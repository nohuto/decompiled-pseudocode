/*
 * XREFs of TakeTelemetryAssertsLock @ 0x140055FA0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140055AA0 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
