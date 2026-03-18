/*
 * XREFs of KeLowerIrql_0 @ 0x1400852B8
 * Callers:
 *     SleepstudyHelper_ReleaseComponentLock @ 0x1400AB41C (SleepstudyHelper_ReleaseComponentLock.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeLowerIrql_0(KIRQL NewIrql)
{
  KeLowerIrql(NewIrql);
}
