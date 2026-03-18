/*
 * XREFs of ?CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x14023C580
 * Callers:
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140159890 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x14023CB28 (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1400B5DB8 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1400B5DE8 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 */

void __fastcall CitpProgDataCleanup(struct _CIT_PROG_DATA *a1)
{
  CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)a1 + 11);
  CitpProgramIdCleanup((char **)a1 + 5);
}
