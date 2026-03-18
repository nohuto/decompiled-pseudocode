/*
 * XREFs of ?Dx@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x140068DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x140068E20 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 *     ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x140069414 (-FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ.c)
 */

__int64 __fastcall FxWakeInterruptMachine::Dx(FxWakeInterruptMachine *This)
{
  KeFlushQueuedDpcs();
  FxInterrupt::FlushQueuedWorkitem(This->m_Interrupt);
  FxPkgPnp::AckPendingWakeInterruptOperation(This->m_PkgPnp, 0);
  return 10LL;
}
