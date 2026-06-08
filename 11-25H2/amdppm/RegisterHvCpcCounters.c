/*
 * XREFs of RegisterHvCpcCounters @ 0x140025F50
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1)
{
  return InitCpcStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}
