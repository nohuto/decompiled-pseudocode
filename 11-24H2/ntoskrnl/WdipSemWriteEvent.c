/*
 * XREFs of WdipSemWriteEvent @ 0x140A833D4
 * Callers:
 *     WdipSemUpdateProviderTableWithEvent @ 0x1407A2228 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1407A2C64 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x1407A2D4C (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1407A2DDC (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1407A2E64 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemSqmAddToStream @ 0x1407A34C4 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1407A3628 (WdipSemSqmIncrementDword.c)
 *     WdipSemSqmInit @ 0x1407A36C8 (WdipSemSqmInit.c)
 *     WdipSemWriteSemActionsEvent @ 0x140AA4368 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 */

NTSTATUS __fastcall WdipSemWriteEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  REGHANDLE v5; // rdi

  v5 = WdipSemRegHandle;
  if ( !a2 )
    return -1073741811;
  if ( EtwEventEnabled(WdipSemRegHandle, a2) )
    return EtwWrite(v5, a2, a3, a4, UserData);
  return -1073741816;
}
