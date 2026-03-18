/*
 * XREFs of MiGetAvailablePagesForTrimPass @ 0x1403C2270
 * Callers:
 *     MiForcedTrim @ 0x1403C13A0 (MiForcedTrim.c)
 *     MiComputeSystemTrimCriteria @ 0x1403C15C4 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x1403C1EA4 (MiComputeAgingPercent.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1403C2290 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MiGetAvailablePagesForTrimPass(__int64 a1)
{
  return MiGetAvailablePagesBelowPriority(a1, 6LL);
}
