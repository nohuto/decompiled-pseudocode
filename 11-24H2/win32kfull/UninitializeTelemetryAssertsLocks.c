/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x14034007C
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x14033FE28 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     UninitializeTelemetryAssertsKM @ 0x14033FF58 (UninitializeTelemetryAssertsKM.c)
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
