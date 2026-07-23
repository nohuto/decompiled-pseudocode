/*
 * XREFs of WdipSemWriteEvent @ 0x140A7DEF4
 * Callers:
 *     WdipSemUpdateProviderTableWithEvent @ 0x1407A2338 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1407A2D74 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x1407A2E5C (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1407A2EEC (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1407A2F74 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemSqmAddToStream @ 0x1407A35D4 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1407A3738 (WdipSemSqmIncrementDword.c)
 *     WdipSemSqmInit @ 0x1407A37D8 (WdipSemSqmInit.c)
 *     WdipSemWriteSemActionsEvent @ 0x140A9F6F8 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
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
