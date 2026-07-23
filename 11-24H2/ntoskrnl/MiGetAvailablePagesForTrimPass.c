/*
 * XREFs of MiGetAvailablePagesForTrimPass @ 0x1402F51C4
 * Callers:
 *     MiComputeAgingPercent @ 0x1402F3B30 (MiComputeAgingPercent.c)
 *     MiComputeSystemTrimCriteria @ 0x1402F3C60 (MiComputeSystemTrimCriteria.c)
 *     MiForcedTrim @ 0x1402F4A18 (MiForcedTrim.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1402F51E0 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MiGetAvailablePagesForTrimPass(__int64 a1)
{
  return MiGetAvailablePagesBelowPriority(a1, 6LL);
}
