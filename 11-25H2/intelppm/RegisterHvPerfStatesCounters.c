/*
 * XREFs of RegisterHvPerfStatesCounters @ 0x140030E50
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1400372A8 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterHvPerfStatesCounters(__int64 a1)
{
  return InitPerfStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}
