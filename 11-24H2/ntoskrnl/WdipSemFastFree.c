/*
 * XREFs of WdipSemFastFree @ 0x1406F99A0
 * Callers:
 *     WdipSemLoadNextScenario @ 0x1407A1610 (WdipSemLoadNextScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1407A2118 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407A2368 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemFreeScenario @ 0x1407A2890 (WdipSemFreeScenario.c)
 *     WdipSemFreeFrequentScenarioTable @ 0x140A47A90 (WdipSemFreeFrequentScenarioTable.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140A47D18 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140AA4368 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&SListHead + a1, a2);
  return result;
}
