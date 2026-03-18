/*
 * XREFs of KfRaiseIrql_0 @ 0x1400852BA
 * Callers:
 *     SleepstudyHelper_AcquireComponentLock @ 0x1400AB288 (SleepstudyHelper_AcquireComponentLock.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
KIRQL __stdcall KfRaiseIrql_0(KIRQL NewIrql)
{
  return KfRaiseIrql(NewIrql);
}
