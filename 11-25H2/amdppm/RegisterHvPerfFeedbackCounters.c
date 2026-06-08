/*
 * XREFs of RegisterHvPerfFeedbackCounters @ 0x140026950
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x14003385C (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterHvPerfFeedbackCounters(__int64 a1)
{
  return InitPerfFeedbackInternal(a1, RegisterHvFeedbackCountersCallback);
}
