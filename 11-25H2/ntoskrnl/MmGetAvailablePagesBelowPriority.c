/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x1404A34E4
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1408EBF40 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1403C2290 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *((_QWORD **)qword_140E2FD48 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)),
           a1);
}
