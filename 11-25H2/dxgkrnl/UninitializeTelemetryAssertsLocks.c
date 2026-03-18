/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x14009F0BC
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x14009EF20 (InitializeTelemetryAssertsKMWorkerInternal.c)
 * Callees:
 *     <none>
 */

void UninitializeTelemetryAssertsLocks()
{
  if ( g_AssertFastMutex )
  {
    ExFreePoolWithTag(g_AssertFastMutex, 0x74727341u);
    g_AssertFastMutex = 0LL;
  }
}
