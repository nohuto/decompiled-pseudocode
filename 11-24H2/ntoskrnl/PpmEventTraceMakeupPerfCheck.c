/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x14048F5F8
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1402ADF00 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 */

void PpmEventTraceMakeupPerfCheck()
{
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_MAKEUP) )
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PERF_CHECK_MAKEUP, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
