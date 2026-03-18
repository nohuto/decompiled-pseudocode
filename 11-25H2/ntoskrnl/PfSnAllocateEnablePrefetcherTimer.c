/*
 * XREFs of PfSnAllocateEnablePrefetcherTimer @ 0x140B5F06C
 * Callers:
 *     PfSnQueueEnablePrefetcherTimer @ 0x14073B1A0 (PfSnQueueEnablePrefetcherTimer.c)
 *     PfSnBeginBootPhase @ 0x140B4B714 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeInitializeTimer @ 0x140454D20 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

struct _KDPC *__fastcall PfSnAllocateEnablePrefetcherTimer(ULONG a1)
{
  struct _KTIMER *Pool2; // rax
  struct _KDPC *v3; // rbx

  Pool2 = (struct _KTIMER *)ExAllocatePool2(0x40uLL);
  v3 = (struct _KDPC *)Pool2;
  if ( Pool2 )
  {
    KeInitializeTimer(Pool2);
    KeInitializeDpc(v3 + 1, (PKDEFERRED_ROUTINE)PfSnEnablePrefetcherTimerRoutine, v3);
    v3[2].TargetInfoAsUlong = a1;
  }
  return v3;
}
