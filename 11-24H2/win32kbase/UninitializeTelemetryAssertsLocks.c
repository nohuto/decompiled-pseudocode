/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x14019F348
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x140146428 (InitializeTelemetryAssertsKMWorkerInternal.c)
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
