/*
 * XREFs of MiGetAvailablePagesForTrimPass @ 0x1402D15A8
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402D04F0 (MiComputeSystemTrimCriteria.c)
 *     MiForcedTrim @ 0x1402D0EB8 (MiForcedTrim.c)
 *     MiComputeAgingPercent @ 0x1402D1414 (MiComputeAgingPercent.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1402D15D0 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MiGetAvailablePagesForTrimPass(__int64 a1)
{
  return MiGetAvailablePagesBelowPriority(a1, 6LL);
}
