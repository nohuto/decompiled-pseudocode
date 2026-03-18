/*
 * XREFs of ?Dx@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x140067400
 * Callers:
 *     <none>
 * Callees:
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x140067460 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 *     ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x140067A54 (-FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ.c)
 */

__int64 __fastcall FxWakeInterruptMachine::Dx(FxWakeInterruptMachine *This)
{
  KeFlushQueuedDpcs();
  FxInterrupt::FlushQueuedWorkitem(This->m_Interrupt);
  FxPkgPnp::AckPendingWakeInterruptOperation(This->m_PkgPnp, 0);
  return 10LL;
}
