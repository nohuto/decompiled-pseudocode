/*
 * XREFs of KeLowerIrql_0 @ 0x1400852A8
 * Callers:
 *     SleepstudyHelper_ReleaseComponentLock @ 0x1400AB4EC (SleepstudyHelper_ReleaseComponentLock.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeLowerIrql_0(KIRQL NewIrql)
{
  KeLowerIrql(NewIrql);
}
