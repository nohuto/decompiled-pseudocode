/*
 * XREFs of RegisterHvPerfStatesCounters @ 0x140027B70
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x140034D84 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterHvPerfStatesCounters(__int64 a1)
{
  return InitPerfStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}
