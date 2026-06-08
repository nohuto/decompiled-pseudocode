/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x1400264B0
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x14000A0F0 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterHvLegacyPccCounters(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, RegisterHvFeedbackCountersCallback);
}
