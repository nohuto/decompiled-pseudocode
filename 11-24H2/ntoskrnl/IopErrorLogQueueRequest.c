/*
 * XREFs of IopErrorLogQueueRequest @ 0x140A40394
 * Callers:
 *     IopErrorLogThread @ 0x140A3FC00 (IopErrorLogThread.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char IopErrorLogQueueRequest()
{
  struct _KDPC *Pool2; // rax
  struct _KDPC *Dpc; // rdi

  Pool2 = (struct _KDPC *)ExAllocatePool2(0x40uLL, 0x80uLL, 0x4C456F49u);
  Dpc = Pool2;
  if ( Pool2 )
  {
    KeInitializeDpc(Pool2, (PKDEFERRED_ROUTINE)IopErrorLogDpc, 0LL);
    KeInitializeTimer((PKTIMER)&Dpc[1]);
    LOBYTE(Pool2) = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)-300000000LL, 0, 0x7D0u, Dpc);
  }
  else
  {
    IopErrorLogSessionPending = 0;
  }
  return (char)Pool2;
}
