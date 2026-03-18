/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x1C0099924
 * Callers:
 *     UninitializeTelemetryAssertsKM @ 0x1C0099698 (UninitializeTelemetryAssertsKM.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C00997E4 (InitializeTelemetryAssertsKMWorkerInternal.c)
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
