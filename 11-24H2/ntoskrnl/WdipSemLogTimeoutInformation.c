/*
 * XREFs of WdipSemLogTimeoutInformation @ 0x140A47F1C
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140A47800 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     WdipSemSqmLogTimeoutDataPoints @ 0x1407A374C (WdipSemSqmLogTimeoutDataPoints.c)
 *     WdipSemSqmEnabled @ 0x140A47FB4 (WdipSemSqmEnabled.c)
 *     WdipSemWriteTimeoutEvent @ 0x140A47FFC (WdipSemWriteTimeoutEvent.c)
 */

__int64 __fastcall WdipSemLogTimeoutInformation(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  int v3; // edi
  int v6; // ebx

  v3 = a2;
  v6 = 0;
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_TIMEOUT) )
  {
    v6 = WdipSemWriteTimeoutEvent(a1, (unsigned __int16)v3, a3);
    if ( v6 < 0 )
      v6 = 0;
  }
  if ( (unsigned __int8)WdipSemSqmEnabled() )
  {
    v6 = WdipSemSqmLogTimeoutDataPoints(a1, v3);
    if ( v6 < 0 )
      return 0;
  }
  return (unsigned int)v6;
}
