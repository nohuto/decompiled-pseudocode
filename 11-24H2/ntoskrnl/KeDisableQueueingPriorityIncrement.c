/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x140488C6C
 * Callers:
 *     NtCreateWorkerFactory @ 0x1409901C0 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
