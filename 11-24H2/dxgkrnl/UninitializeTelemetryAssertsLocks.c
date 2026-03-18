/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x1400A141C
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1400A1280 (InitializeTelemetryAssertsKMWorkerInternal.c)
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
