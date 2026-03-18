/*
 * XREFs of IopErrorLogQueueRequest @ 0x140A44D9C
 * Callers:
 *     IopErrorLogThread @ 0x140A44600 (IopErrorLogThread.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     KeInitializeTimer @ 0x140454D20 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

char IopErrorLogQueueRequest()
{
  struct _KDPC *Pool2; // rax
  struct _KDPC *Dpc; // rdi

  Pool2 = (struct _KDPC *)ExAllocatePool2(0x40uLL);
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
