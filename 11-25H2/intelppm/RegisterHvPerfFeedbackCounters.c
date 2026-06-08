/*
 * XREFs of RegisterHvPerfFeedbackCounters @ 0x140030E30
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x140036F80 (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterHvPerfFeedbackCounters(__int64 a1)
{
  return InitPerfFeedbackInternal(a1, RegisterHvFeedbackCountersCallback);
}
