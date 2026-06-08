/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x1400276B0
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x14000AD90 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterHvLegacyPccCounters(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, RegisterHvFeedbackCountersCallback);
}
