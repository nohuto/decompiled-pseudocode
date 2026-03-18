/*
 * XREFs of ?KiIsConcurrencyCountWithinIdealProcessorSetBreakpoints@@YAEPEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@@Z @ 0x14026B7BC
 * Callers:
 *     KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x14026B30C (KiAdjustProcessIdealProcessorSetsForThreadCreation.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsConcurrencyCountWithinIdealProcessorSetBreakpoints(
        struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS *a1,
        union _KI_PROCESS_CONCURRENCY_COUNT *a2)
{
  return a1->Low.AllFields <= a2->AllFields && a1->High.AllFields >= a2->AllFields;
}
