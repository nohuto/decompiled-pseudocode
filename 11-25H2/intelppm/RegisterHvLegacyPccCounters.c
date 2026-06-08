/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x140030B70
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x14000D764 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterHvLegacyPccCounters(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, RegisterHvFeedbackCountersCallback);
}
