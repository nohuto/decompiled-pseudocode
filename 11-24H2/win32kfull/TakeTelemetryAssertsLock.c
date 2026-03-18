/*
 * XREFs of TakeTelemetryAssertsLock @ 0x140213960
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1401FDA0C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     UninitializeTelemetryAssertsKM @ 0x14033FF58 (UninitializeTelemetryAssertsKM.c)
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
