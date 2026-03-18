/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x140494B68
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x14029FB90 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 */

void PpmEventTraceMakeupPerfCheck()
{
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_MAKEUP) )
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PERF_CHECK_MAKEUP, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
