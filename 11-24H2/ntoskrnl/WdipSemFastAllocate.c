/*
 * XREFs of WdipSemFastAllocate @ 0x140A3FB7C
 * Callers:
 *     WdipSemAddContextEventToScenario @ 0x1407A0C78 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x1407A0D3C (WdipSemAddEndEventToScenario.c)
 *     WdipSemLoadNextScenario @ 0x1407A1720 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x1407A1C18 (WdipSemLoadScenarioTable.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x1407A2338 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1407A26BC (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x1407A27F4 (WdipSemUpdateInflightScenarioTable.c)
 *     WdipSemBuildScenarioInstance @ 0x140A3FB08 (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140A9F6F8 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x140A85020 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&SListHead + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
