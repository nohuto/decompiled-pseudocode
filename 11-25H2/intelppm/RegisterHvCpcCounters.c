/*
 * XREFs of RegisterHvCpcCounters @ 0x140030610
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1)
{
  return InitCpcStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}
