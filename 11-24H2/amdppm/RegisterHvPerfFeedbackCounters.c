/*
 * XREFs of RegisterHvPerfFeedbackCounters @ 0x140027B50
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x140034A5C (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterHvPerfFeedbackCounters(__int64 a1)
{
  return InitPerfFeedbackInternal(a1, RegisterHvFeedbackCountersCallback);
}
