/*
 * XREFs of KiStartIdealProcessorAssignmentBlock @ 0x14020274C
 * Callers:
 *     KeInitializeProcess @ 0x140A4EB18 (KeInitializeProcess.c)
 * Callees:
 *     ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x140202778 (-KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU.c)
 */

void __fastcall KiStartIdealProcessorAssignmentBlock(union _KI_PROCESS_CONCURRENCY_COUNT *a1, struct _KPROCESS *a2)
{
  KiSelectIdealProcessorSetsForProcess(
    a2,
    a1,
    (struct _KAFFINITY_EX *)&a1[52],
    (struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS *)&a1[1]);
}
