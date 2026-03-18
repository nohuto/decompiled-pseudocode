/*
 * XREFs of WdipSemFastAllocate @ 0x140A48E64
 * Callers:
 *     WdipSemAddContextEventToScenario @ 0x1407A0B68 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x1407A0C2C (WdipSemAddEndEventToScenario.c)
 *     WdipSemLoadNextScenario @ 0x1407A1610 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x1407A1B08 (WdipSemLoadScenarioTable.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x1407A2228 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1407A25AC (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x1407A26E4 (WdipSemUpdateInflightScenarioTable.c)
 *     WdipSemBuildScenarioInstance @ 0x140A48DF0 (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140AA4368 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x140A88C20 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&SListHead + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
