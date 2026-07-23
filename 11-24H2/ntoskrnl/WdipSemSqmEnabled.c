/*
 * XREFs of WdipSemSqmEnabled @ 0x140A3DDD4
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407A2478 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemLogTimeoutInformation @ 0x140A3DD3C (WdipSemLogTimeoutInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 */

bool WdipSemSqmEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SQM_INCREMENT_DWORD) )
    return EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SQM_ADD_TO_STREAM) != 0;
  return v0;
}
