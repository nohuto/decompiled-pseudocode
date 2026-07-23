/*
 * XREFs of PfSnAllocateEnablePrefetcherTimer @ 0x140B6FBB8
 * Callers:
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407454B0 (PfSnQueueEnablePrefetcherTimer.c)
 *     PfSnBeginBootPhase @ 0x140B5D6F4 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

struct _KDPC *__fastcall PfSnAllocateEnablePrefetcherTimer(ULONG a1)
{
  struct _KTIMER *Pool2; // rax
  struct _KDPC *v3; // rbx

  Pool2 = (struct _KTIMER *)ExAllocatePool2(0x40uLL, 0x88uLL, 0x77506343u);
  v3 = (struct _KDPC *)Pool2;
  if ( Pool2 )
  {
    KeInitializeTimer(Pool2);
    KeInitializeDpc(v3 + 1, (PKDEFERRED_ROUTINE)PfSnEnablePrefetcherTimerRoutine, v3);
    v3[2].TargetInfoAsUlong = a1;
  }
  return v3;
}
