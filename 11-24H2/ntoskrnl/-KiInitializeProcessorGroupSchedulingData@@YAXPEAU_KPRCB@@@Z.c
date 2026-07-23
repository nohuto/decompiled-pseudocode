/*
 * XREFs of ?KiInitializeProcessorGroupSchedulingData@@YAXPEAU_KPRCB@@@Z @ 0x1405C4D30
 * Callers:
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140B5CE04 (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeProcessorGroupSchedulingData(struct _KPRCB *a1)
{
  a1->ScbList.Blink = &a1->ScbList;
  a1->ScbList.Flink = &a1->ScbList;
  a1->ScbOffset = 440 * a1->Number + 128;
  a1->GenerationTarget = KiGenerationEndTick;
}
