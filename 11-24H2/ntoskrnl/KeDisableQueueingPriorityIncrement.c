/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x14048E83C
 * Callers:
 *     NtCreateWorkerFactory @ 0x1409A6CF0 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
