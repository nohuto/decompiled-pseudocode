/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x140203834
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x140204A70 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 */

void PpmEventTraceMakeupPerfCheck()
{
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_MAKEUP) )
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PERF_CHECK_MAKEUP, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
