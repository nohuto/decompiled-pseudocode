/*
 * XREFs of WdipSemFastFree @ 0x1406F75E0
 * Callers:
 *     WdipSemLoadNextScenario @ 0x1407A1720 (WdipSemLoadNextScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1407A2228 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407A2478 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemFreeScenario @ 0x1407A29A0 (WdipSemFreeScenario.c)
 *     WdipSemFreeFrequentScenarioTable @ 0x140A3D8B0 (WdipSemFreeFrequentScenarioTable.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140A3DB38 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140A9F6F8 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&SListHead + a1, a2);
  return result;
}
